#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_StrategoDump_2;
Symbol sym_Dump_1;
Symbol sym_Load_1;
Symbol sym_Eval_1;
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
Symbol sym_F__OK_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Anno_2;
Symbol sym_Undefined_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_WaitStatus_3;
Symbol sym_Signal_3;
Symbol sym_UnknownSignal_1;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Cong_2;
Symbol sym_Imports_1;
Symbol sym_Rules_1;
Symbol sym_Strategies_1;
Symbol sym_Signature_1;
Symbol sym_Specification_1;
Symbol sym_Dump_1;
Symbol sym_Load_1;
Symbol sym_Eval_1;
Symbol sym_Var_1;
Symbol sym_ListVar_1;
Symbol sym_Var_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Str_1;
Symbol sym_Wld_0;
Symbol sym_Op_2;
Symbol sym_Explode_2;
Symbol sym_Anno_2;
Symbol sym_App_2;
Symbol sym_RootApp_1;
Symbol sym_As_2;
Symbol sym_Con_3;
Symbol sym_StratRule_3;
Symbol sym_Rule_3;
Symbol sym_RDef_3;
Symbol sym_RDefT_4;
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
Symbol sym_ScopeDefault_1;
Symbol sym_Scope_2;
Symbol sym_BA_2;
Symbol sym_Seq_2;
Symbol sym_LChoice_2;
Symbol sym_Rec_2;
Symbol sym_Not_1;
Symbol sym_Where_1;
Symbol sym_Test_1;
Symbol sym_Prim_2;
Symbol sym_PrimT_3;
Symbol sym_Path_2;
Symbol sym_One_1;
Symbol sym_All_1;
Symbol sym_ExplodeCong_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_VarDec_2;
Symbol sym_SDef_3;
Symbol sym_SDefT_4;
Symbol sym_InfixApp_3;
Symbol sym_MA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
Symbol sym_NULL_0;
static void init_module_constructors (void)
{
  sym_StrategoDump_2 = ATmakeSymbol("StrategoDump", 2, ATfalse);
  ATprotectSymbol(sym_StrategoDump_2);
  sym_Dump_1 = ATmakeSymbol("Dump", 1, ATfalse);
  ATprotectSymbol(sym_Dump_1);
  sym_Load_1 = ATmakeSymbol("Load", 1, ATfalse);
  ATprotectSymbol(sym_Load_1);
  sym_Eval_1 = ATmakeSymbol("Eval", 1, ATfalse);
  ATprotectSymbol(sym_Eval_1);
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
  sym_F__OK_0 = ATmakeSymbol("F_OK", 0, ATfalse);
  ATprotectSymbol(sym_F__OK_0);
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
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Signal_3 = ATmakeSymbol("Signal", 3, ATfalse);
  ATprotectSymbol(sym_Signal_3);
  sym_UnknownSignal_1 = ATmakeSymbol("UnknownSignal", 1, ATfalse);
  ATprotectSymbol(sym_UnknownSignal_1);
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
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_Imports_1 = ATmakeSymbol("Imports", 1, ATfalse);
  ATprotectSymbol(sym_Imports_1);
  sym_Rules_1 = ATmakeSymbol("Rules", 1, ATfalse);
  ATprotectSymbol(sym_Rules_1);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Signature_1 = ATmakeSymbol("Signature", 1, ATfalse);
  ATprotectSymbol(sym_Signature_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Dump_1 = ATmakeSymbol("Dump", 1, ATfalse);
  ATprotectSymbol(sym_Dump_1);
  sym_Load_1 = ATmakeSymbol("Load", 1, ATfalse);
  ATprotectSymbol(sym_Load_1);
  sym_Eval_1 = ATmakeSymbol("Eval", 1, ATfalse);
  ATprotectSymbol(sym_Eval_1);
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
  sym_Explode_2 = ATmakeSymbol("Explode", 2, ATfalse);
  ATprotectSymbol(sym_Explode_2);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
  ATprotectSymbol(sym_RootApp_1);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
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
  sym_ScopeDefault_1 = ATmakeSymbol("ScopeDefault", 1, ATfalse);
  ATprotectSymbol(sym_ScopeDefault_1);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
  ATprotectSymbol(sym_Not_1);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Test_1 = ATmakeSymbol("Test", 1, ATfalse);
  ATprotectSymbol(sym_Test_1);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_One_1 = ATmakeSymbol("One", 1, ATfalse);
  ATprotectSymbol(sym_One_1);
  sym_All_1 = ATmakeSymbol("All", 1, ATfalse);
  ATprotectSymbol(sym_All_1);
  sym_ExplodeCong_2 = ATmakeSymbol("ExplodeCong", 2, ATfalse);
  ATprotectSymbol(sym_ExplodeCong_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
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
  sym_NULL_0 = ATmakeSymbol("NULL", 0, ATfalse);
  ATprotectSymbol(sym_NULL_0);
}
ATerm term_x_64;
ATerm term_j_64;
ATerm term_i_64;
ATerm term_h_64;
ATerm term_g_64;
ATerm term_f_64;
ATerm term_h_63;
ATerm term_r_62;
ATerm term_q_62;
ATerm term_p_62;
ATerm term_j_62;
ATerm term_d_62;
ATerm term_x_61;
ATerm term_w_61;
ATerm term_v_61;
ATerm term_u_61;
ATerm term_r_61;
ATerm term_q_61;
ATerm term_n_61;
ATerm term_z_60;
ATerm term_r_60;
ATerm term_k_60;
ATerm term_j_60;
ATerm term_i_60;
ATerm term_d_60;
ATerm term_c_60;
ATerm term_w_59;
ATerm term_v_59;
ATerm term_u_59;
ATerm term_t_59;
ATerm term_m_59;
ATerm term_l_59;
ATerm term_k_59;
ATerm term_j_59;
ATerm term_i_59;
ATerm term_g_59;
ATerm term_f_59;
ATerm term_x_58;
ATerm term_w_58;
ATerm term_v_58;
ATerm term_u_58;
ATerm term_b_58;
ATerm term_a_58;
ATerm term_z_57;
ATerm term_y_57;
ATerm term_x_57;
ATerm term_w_57;
ATerm term_u_57;
ATerm term_t_57;
ATerm term_s_57;
ATerm term_l_57;
ATerm term_c_57;
ATerm term_b_57;
ATerm term_a_57;
ATerm term_z_56;
ATerm term_y_56;
ATerm term_x_56;
ATerm term_w_56;
ATerm term_v_56;
ATerm term_s_56;
ATerm term_r_55;
ATerm term_p_55;
ATerm term_e_55;
ATerm term_a_55;
ATerm term_z_54;
ATerm term_x_54;
ATerm term_r_54;
ATerm term_q_54;
ATerm term_l_54;
ATerm term_g_54;
ATerm term_d_54;
ATerm term_e_53;
ATerm term_c_53;
ATerm term_b_53;
ATerm term_a_53;
ATerm term_z_52;
ATerm term_w_52;
ATerm term_o_52;
ATerm term_f_52;
ATerm term_d_52;
ATerm term_c_52;
ATerm term_b_52;
ATerm term_a_52;
ATerm term_z_51;
ATerm term_y_51;
ATerm term_v_51;
ATerm term_u_51;
ATerm term_t_51;
ATerm term_s_51;
ATerm term_q_51;
ATerm term_n_51;
ATerm term_m_51;
ATerm term_l_51;
ATerm term_k_51;
ATerm term_j_51;
ATerm term_i_51;
ATerm term_h_51;
ATerm term_f_51;
ATerm term_d_51;
ATerm term_c_51;
ATerm term_z_50;
ATerm term_y_50;
ATerm term_w_50;
ATerm term_v_50;
ATerm term_u_50;
ATerm term_p_50;
ATerm term_m_50;
ATerm term_l_50;
ATerm term_k_50;
ATerm term_j_50;
ATerm term_h_50;
ATerm term_g_50;
ATerm term_f_50;
ATerm term_e_50;
ATerm term_d_50;
ATerm term_c_50;
ATerm term_b_50;
ATerm term_a_50;
ATerm term_z_49;
ATerm term_y_49;
ATerm term_x_49;
ATerm term_s_49;
ATerm term_q_49;
ATerm term_p_49;
ATerm term_n_49;
ATerm term_m_49;
ATerm term_h_49;
ATerm term_g_49;
ATerm term_f_49;
ATerm term_e_49;
ATerm term_d_49;
ATerm term_t_48;
ATerm term_s_48;
ATerm term_r_48;
ATerm term_m_48;
ATerm term_l_48;
ATerm term_k_48;
ATerm term_f_48;
ATerm term_y_47;
ATerm term_v_47;
ATerm term_t_47;
ATerm term_s_47;
ATerm term_m_47;
ATerm term_k_47;
ATerm term_j_47;
ATerm term_i_47;
ATerm term_h_47;
ATerm term_f_47;
ATerm term_e_47;
ATerm term_d_47;
ATerm term_c_47;
ATerm term_x_46;
ATerm term_w_46;
ATerm term_v_46;
ATerm term_t_46;
ATerm term_s_46;
ATerm term_r_46;
ATerm term_q_46;
ATerm term_p_46;
ATerm term_o_46;
ATerm term_n_46;
ATerm term_m_46;
ATerm term_l_46;
ATerm term_k_46;
ATerm term_j_46;
ATerm term_i_46;
ATerm term_f_46;
ATerm term_e_46;
ATerm term_d_46;
ATerm term_c_46;
ATerm term_b_46;
ATerm term_w_45;
ATerm term_v_45;
ATerm term_u_45;
ATerm term_s_45;
ATerm term_r_45;
ATerm term_q_45;
ATerm term_p_45;
ATerm term_m_45;
ATerm term_j_45;
ATerm term_e_45;
ATerm term_d_45;
ATerm term_c_45;
ATerm term_b_45;
ATerm term_a_45;
ATerm term_w_44;
ATerm term_v_44;
ATerm term_u_44;
ATerm term_t_44;
ATerm term_l_44;
ATerm term_k_44;
ATerm term_i_44;
ATerm term_h_44;
ATerm term_f_37;
ATerm term_b_37;
ATerm term_y_36;
ATerm term_p_36;
ATerm term_l_36;
ATerm term_k_36;
ATerm term_j_36;
ATerm term_t_31;
ATerm term_l_30;
ATerm term_c_29;
ATerm term_y_28;
ATerm term_n_28;
ATerm term_h_28;
ATerm term_k_23;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_w_20;
ATerm term_t_20;
ATerm term_y_19;
ATerm term_s_19;
ATerm term_b_19;
ATerm term_y_18;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_y_16;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("senv", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("tenv", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("BindVar: ", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-d", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("match1: ", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("match2: ", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("bindings: ", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym_NULL_0);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("operator ", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" not defined", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("eval: ", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Evaluate strategy: ", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("> ", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("eval-rules: ", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("rules normalized: ", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_44));
  term_l_44 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_44, term_o_21, term_u_44);
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_44, term_a_45, term_b_45);
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_45, term_e_45, term_j_45);
  ATprotect(&(term_p_45));
  term_p_45 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_q_45));
  term_q_45 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_r_45));
  term_r_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_s_45));
  term_s_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_45, term_q_45, term_r_45);
  ATprotect(&(term_u_45));
  term_u_45 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_v_45));
  term_v_45 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_w_45));
  term_w_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_45, term_v_45, term_w_45);
  ATprotect(&(term_c_46));
  term_c_46 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_d_46));
  term_d_46 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_46, term_d_46, term_e_46);
  ATprotect(&(term_i_46));
  term_i_46 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_k_46));
  term_k_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_46, term_j_46, term_k_46);
  ATprotect(&(term_m_46));
  term_m_46 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_o_46));
  term_o_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_p_46));
  term_p_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_46, term_n_46, term_o_46);
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_r_46));
  term_r_46 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_s_46));
  term_s_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_t_46));
  term_t_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_46, term_r_46, term_s_46);
  ATprotect(&(term_v_46));
  term_v_46 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_w_46));
  term_w_46 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_x_46));
  term_x_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_c_47));
  term_c_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_46, term_w_46, term_x_46);
  ATprotect(&(term_d_47));
  term_d_47 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_e_47));
  term_e_47 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_f_47));
  term_f_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_47, term_e_47, term_f_47);
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_m_47));
  term_m_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_47, term_j_47, term_k_47);
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_t_47));
  term_t_47 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_47, term_t_47, term_v_47);
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_l_48));
  term_l_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_m_48));
  term_m_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_48, term_k_48, term_l_48);
  ATprotect(&(term_r_48));
  term_r_48 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_s_48));
  term_s_48 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_t_48));
  term_t_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_d_49));
  term_d_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_48, term_s_48, term_t_48);
  ATprotect(&(term_e_49));
  term_e_49 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_f_49));
  term_f_49 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_g_49));
  term_g_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_h_49));
  term_h_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_49, term_f_49, term_g_49);
  ATprotect(&(term_m_49));
  term_m_49 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_n_49));
  term_n_49 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_p_49));
  term_p_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_q_49));
  term_q_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_49, term_n_49, term_p_49);
  ATprotect(&(term_s_49));
  term_s_49 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_x_49));
  term_x_49 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_y_49));
  term_y_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_z_49));
  term_z_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_49, term_x_49, term_y_49);
  ATprotect(&(term_a_50));
  term_a_50 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_b_50));
  term_b_50 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_c_50));
  term_c_50 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_d_50));
  term_d_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_50, term_b_50, term_c_50);
  ATprotect(&(term_e_50));
  term_e_50 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_f_50));
  term_f_50 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_g_50));
  term_g_50 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_h_50));
  term_h_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_50, term_f_50, term_g_50);
  ATprotect(&(term_j_50));
  term_j_50 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_k_50));
  term_k_50 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_l_50));
  term_l_50 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_m_50));
  term_m_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_50, term_k_50, term_l_50);
  ATprotect(&(term_p_50));
  term_p_50 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_u_50));
  term_u_50 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_v_50));
  term_v_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_w_50));
  term_w_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_50, term_u_50, term_v_50);
  ATprotect(&(term_y_50));
  term_y_50 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_z_50));
  term_z_50 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_c_51));
  term_c_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_d_51));
  term_d_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_50, term_z_50, term_c_51);
  ATprotect(&(term_f_51));
  term_f_51 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_h_51));
  term_h_51 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_i_51));
  term_i_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_j_51));
  term_j_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_51, term_h_51, term_i_51);
  ATprotect(&(term_k_51));
  term_k_51 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_l_51));
  term_l_51 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_m_51));
  term_m_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_n_51));
  term_n_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_51, term_l_51, term_m_51);
  ATprotect(&(term_q_51));
  term_q_51 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_s_51));
  term_s_51 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_t_51));
  term_t_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_u_51));
  term_u_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_51, term_s_51, term_t_51);
  ATprotect(&(term_v_51));
  term_v_51 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_y_51));
  term_y_51 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_z_51));
  term_z_51 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_a_52));
  term_a_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_51, term_y_51, term_z_51);
  ATprotect(&(term_b_52));
  term_b_52 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_c_52));
  term_c_52 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_d_52));
  term_d_52 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_f_52));
  term_f_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_52, term_c_52, term_d_52);
  ATprotect(&(term_o_52));
  term_o_52 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_w_52));
  term_w_52 = (ATerm) ATmakeAppl(ATmakeSymbol("importing module: ", 0, ATtrue));
  ATprotect(&(term_z_52));
  term_z_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(ATmakeSymbol("sc", 0, ATtrue));
  ATprotect(&(term_b_53));
  term_b_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_c_53));
  term_c_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_e_53));
  term_e_53 = (ATerm) ATmakeAppl(ATmakeSymbol(".sdefs", 0, ATtrue));
  ATprotect(&(term_d_54));
  term_d_54 = (ATerm) ATmakeAppl(ATmakeSymbol("error: import of multiple modules not supported yet", 0, ATtrue));
  ATprotect(&(term_g_54));
  term_g_54 = (ATerm) ATmakeAppl(ATmakeSymbol("loading image from file: ", 0, ATtrue));
  ATprotect(&(term_l_54));
  term_l_54 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_q_54));
  term_q_54 = (ATerm) ATmakeAppl(ATmakeSymbol("image: ", 0, ATtrue));
  ATprotect(&(term_r_54));
  term_r_54 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_x_54));
  term_x_54 = (ATerm) ATmakeAppl(ATmakeSymbol("image ", 0, ATtrue));
  ATprotect(&(term_z_54));
  term_z_54 = (ATerm) ATmakeAppl(ATmakeSymbol(" loaded", 0, ATtrue));
  ATprotect(&(term_a_55));
  term_a_55 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_e_55));
  term_e_55 = (ATerm) ATmakeAppl(ATmakeSymbol("image written to file: ", 0, ATtrue));
  ATprotect(&(term_p_55));
  term_p_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Evaluating command: ", 0, ATtrue));
  ATprotect(&(term_r_55));
  term_r_55 = (ATerm) ATmakeAppl(ATmakeSymbol("unknown command: ", 0, ATtrue));
  ATprotect(&(term_s_56));
  term_s_56 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_v_56));
  term_v_56 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_w_56));
  term_w_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--------------------------------------------------------------------", 0, ATtrue));
  ATprotect(&(term_x_56));
  term_x_56 = (ATerm) ATmakeAppl(ATmakeSymbol("This is SI, the Stratego Interpreter ", 0, ATtrue));
  ATprotect(&(term_y_56));
  term_y_56 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (c) 2001, Eelco Visser <visser@acm.org>", 0, ATtrue));
  ATprotect(&(term_z_56));
  term_z_56 = (ATerm) ATmakeAppl(ATmakeSymbol("This program is free software; you can redistribute it and/or modify", 0, ATtrue));
  ATprotect(&(term_a_57));
  term_a_57 = (ATerm) ATmakeAppl(ATmakeSymbol("it under the terms of the GNU General Public License as published by", 0, ATtrue));
  ATprotect(&(term_b_57));
  term_b_57 = (ATerm) ATmakeAppl(ATmakeSymbol("the Free Software Foundation; either version 2, or (at your option)", 0, ATtrue));
  ATprotect(&(term_c_57));
  term_c_57 = (ATerm) ATmakeAppl(ATmakeSymbol("any later version.", 0, ATtrue));
  ATprotect(&(term_l_57));
  term_l_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_57));
  term_s_57 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_57));
  term_t_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-I dir           include modules from directory dir", 0, ATtrue));
  ATprotect(&(term_u_57));
  term_u_57 = (ATerm) ATmakeAppl(ATmakeSymbol("@version", 0, ATtrue));
  ATprotect(&(term_w_57));
  term_w_57 = (ATerm) ATmakeAppl(ATmakeSymbol("@version v       declare version", 0, ATtrue));
  ATprotect(&(term_x_57));
  term_x_57 = (ATerm) ATmakeAppl(sym__2, term_b_19, term_o_21);
  ATprotect(&(term_y_57));
  term_y_57 = (ATerm) ATmakeAppl(sym__2, term_l_57, term_a_45);
  ATprotect(&(term_z_57));
  term_z_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-d               debug mode", 0, ATtrue));
  ATprotect(&(term_a_58));
  term_a_58 = (ATerm) ATmakeAppl(sym__2, term_y_28, term_o_21);
  ATprotect(&(term_b_58));
  term_b_58 = (ATerm) ATmakeAppl(ATmakeSymbol("-t               trace mode", 0, ATtrue));
  ATprotect(&(term_u_58));
  term_u_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_v_58));
  term_v_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_w_58));
  term_w_58 = (ATerm) ATmakeAppl(sym__2, term_l_57, term_n_21);
  ATprotect(&(term_x_58));
  term_x_58 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_21);
  ATprotect(&(term_f_59));
  term_f_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_59));
  term_g_59 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_i_59));
  term_i_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_j_59));
  term_j_59 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_59));
  term_k_59 = (ATerm) ATmakeAppl(sym__2, term_i_59, term_j_59);
  ATprotect(&(term_l_59));
  term_l_59 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_59));
  term_m_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_t_59));
  term_t_59 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_u_59));
  term_u_59 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_v_59));
  term_v_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_w_59));
  term_w_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_60));
  term_c_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_60));
  term_d_60 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_60));
  term_i_60 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_j_60));
  term_j_60 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_k_60));
  term_k_60 = (ATerm) ATmakeAppl(sym__2, term_t_59, term_u_59);
  ATprotect(&(term_r_60));
  term_r_60 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_60));
  term_z_60 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_n_61));
  term_n_61 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_q_61));
  term_q_61 = (ATerm) ATmakeAppl(sym__2, term_n_61, term_j_59);
  ATprotect(&(term_r_61));
  term_r_61 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_u_61));
  term_u_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_v_61));
  term_v_61 = (ATerm) ATmakeAppl(sym__2, term_u_61, term_j_59);
  ATprotect(&(term_w_61));
  term_w_61 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_61));
  term_x_61 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_d_62));
  term_d_62 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_62));
  term_j_62 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_62));
  term_p_62 = (ATerm) ATmakeAppl(sym__2, term_j_62, term_j_59);
  ATprotect(&(term_q_62));
  term_q_62 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_62));
  term_r_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_63));
  term_h_63 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_f_64));
  term_f_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_g_64));
  term_g_64 = (ATerm) ATmakeAppl(sym__2, term_f_64, term_j_59);
  ATprotect(&(term_h_64));
  term_h_64 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_64));
  term_i_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_j_64));
  term_j_64 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_x_64));
  term_x_64 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm destroy_runtime_environment_0_0 (ATerm t);
ATerm EvalPrim_0_0 (ATerm t);
static ATerm f_26 (ATerm h_78, ATerm i_78, ATerm t);
ATerm EvalTerm_0_0 (ATerm t);
static ATerm k_26 (ATerm c_59, ATerm d_59, ATerm e_59, ATerm t);
static ATerm a_0 (ATerm t);
static ATerm l_26 (ATerm b_79, ATerm c_79, ATerm t);
static ATerm n_26 (ATerm z_141 (ATerm), ATerm n_62, ATerm o_62, ATerm l_62, ATerm m_62, ATerm t);
static ATerm p_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm s_0 (ATerm t);
ATerm PatDecompose_0_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm f_163 (ATerm f_161, ATerm g_161, ATerm h_161, ATerm t);
static ATerm g_163 (ATerm o_161, ATerm p_161, ATerm q_161, ATerm t);
static ATerm i_163 (ATerm x_161, ATerm y_161, ATerm z_161, ATerm t);
static ATerm k_1 (ATerm t);
ATerm stratego_match_1_0 (ATerm s_145 (ATerm), ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm p_26 (ATerm z_78, ATerm a_79, ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm q_26 (ATerm t_145 (ATerm), ATerm i_79, ATerm f_79, ATerm g_79, ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm s_26 (ATerm q_145 (ATerm), ATerm n_77, ATerm o_77, ATerm y_753, ATerm t);
static ATerm u_26 (ATerm p_145 (ATerm), ATerm i_77, ATerm a_751, ATerm t);
ATerm EvalAll_1_0 (ATerm j_0 (ATerm), ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm x_26 (ATerm z_145 (ATerm), ATerm y_80, ATerm v_80, ATerm w_80, ATerm t);
static ATerm r_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm y_26 (ATerm t_80, ATerm u_80, ATerm s_80, ATerm t);
static ATerm a_27 (ATerm r_58, ATerm s_58, ATerm t);
static ATerm f_27 (ATerm a_59, ATerm b_59, ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm h_27 (ATerm y_145 (ATerm), ATerm i_80, ATerm k_80, ATerm m_80, ATerm t);
static ATerm i_27 (ATerm x_145 (ATerm), ATerm e_80, ATerm f_80, ATerm g_80, ATerm t);
static ATerm j_27 (ATerm w_145 (ATerm), ATerm a_80, ATerm b_80, ATerm c_80, ATerm t);
static ATerm f_3 (ATerm t);
ATerm eval_0_0 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm j_28 (ATerm p_27, ATerm q_27, ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
ATerm RDtoSD_0_0 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm w_24 (ATerm k_150, ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
ATerm spaste_1_0 (ATerm z_144 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm a_145 (ATerm), ATerm b_145 (ATerm), ATerm c_145 (ATerm), ATerm t);
static ATerm n_5 (ATerm t);
static ATerm b_25 (ATerm b_70, ATerm a_70, ATerm t);
ATerm SVar_1_0 (ATerm w_108 (ATerm), ATerm t);
static ATerm c_25 (ATerm l_141 (ATerm), ATerm m_141 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm i_61, ATerm h_61, ATerm g_61, ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm d_25 (ATerm f_141 (ATerm), ATerm g_141 (ATerm (ATerm), ATerm), ATerm a_61, ATerm d_61, ATerm t);
ATerm lookup_0_0 (ATerm t);
ATerm env_alltd_1_0 (ATerm b_119 (ATerm), ATerm t);
ATerm rename_4_0 (ATerm a_141 (ATerm (ATerm), ATerm), ATerm b_141 (ATerm), ATerm c_141 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm d_141 (ATerm (ATerm), ATerm), ATerm t);
static ATerm y_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm m_6 (ATerm t);
ATerm tpaste_1_0 (ATerm v_144 (ATerm), ATerm t);
ATerm Var_1_0 (ATerm j_103 (ATerm), ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm u_6 (ATerm t);
ATerm strename_0_0 (ATerm t);
ATerm Expl_0_0 (ATerm t);
ATerm Mapp2_0_0 (ATerm t);
ATerm pat_td_1_0 (ATerm b_144 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm e_28 (ATerm y_67, ATerm z_67, ATerm a_68, ATerm t);
static ATerm d_182 (ATerm u_181, ATerm t);
ATerm LiftPrimArg_0_0 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
static ATerm b_9 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm d_9 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm p_115 (ATerm), ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm i_28 (ATerm l_63, ATerm m_63, ATerm n_63, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm l_114 (ATerm), ATerm t);
static ATerm l_9 (ATerm t);
static ATerm s_9 (ATerm t);
ATerm desugar_0_0 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm a_10 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm j_10 (ATerm t);
ATerm DeclareVariables_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm w_144 (ATerm), ATerm x_144 (ATerm), ATerm y_144 (ATerm), ATerm t);
static ATerm k_10 (ATerm t);
static ATerm l_10 (ATerm t);
static ATerm n_10 (ATerm t);
static ATerm q_10 (ATerm t);
ATerm tvars_0_0 (ATerm t);
static ATerm r_10 (ATerm t);
static ATerm t_10 (ATerm t);
static ATerm y_10 (ATerm t);
static ATerm z_10 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm n_25 (ATerm b_125 (ATerm), ATerm g_35, ATerm f_35, ATerm t);
static ATerm o_25 (ATerm e_125 (ATerm), ATerm f_125 (ATerm), ATerm k_35, ATerm j_35, ATerm t);
static ATerm p_25 (ATerm w_124 (ATerm), ATerm e_35, ATerm d_35, ATerm t);
ATerm genzip_4_0 (ATerm a_123 (ATerm), ATerm b_123 (ATerm), ATerm c_123 (ATerm), ATerm d_123 (ATerm), ATerm t);
static ATerm f_11 (ATerm t);
static ATerm h_11 (ATerm t);
static ATerm k_11 (ATerm t);
static ATerm r_25 (ATerm r_622, ATerm w_622, ATerm b_63, ATerm t);
ATerm while_not_2_0 (ATerm c_114 (ATerm), ATerm d_114 (ATerm), ATerm t);
ATerm for_3_0 (ATerm f_114 (ATerm), ATerm g_114 (ATerm), ATerm h_114 (ATerm), ATerm t);
static ATerm l_11 (ATerm t);
static ATerm n_11 (ATerm t);
static ATerm q_11 (ATerm t);
static ATerm g_51 (ATerm i_49, ATerm j_49, ATerm k_49, ATerm t);
static ATerm r_11 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm v_11 (ATerm t);
static ATerm y_11 (ATerm t);
static ATerm z_11 (ATerm t);
static ATerm b_12 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm h_12 (ATerm t);
ATerm free_vars_3_0 (ATerm q_142 (ATerm), ATerm r_142 (ATerm), ATerm s_142 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm m_114 (ATerm), ATerm t);
static ATerm r_12 (ATerm t);
static ATerm s_12 (ATerm t);
static ATerm w_12 (ATerm t);
static ATerm x_12 (ATerm t);
static ATerm y_12 (ATerm t);
static ATerm z_12 (ATerm t);
static ATerm a_13 (ATerm t);
static ATerm b_13 (ATerm t);
static ATerm c_13 (ATerm t);
static ATerm d_13 (ATerm t);
static ATerm t_25 (ATerm s_148, ATerm t);
static ATerm g_27 (ATerm q_47, ATerm r_47, ATerm t);
ATerm foldr_3_0 (ATerm c_127 (ATerm), ATerm d_127 (ATerm), ATerm e_127 (ATerm), ATerm t);
static ATerm e_13 (ATerm t);
static ATerm f_13 (ATerm t);
static ATerm g_13 (ATerm t);
static ATerm h_13 (ATerm t);
ATerm define_strategies_0_0 (ATerm t);
static ATerm u_25 (ATerm t_54, ATerm u_54, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm j_121 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm z_136 (ATerm), ATerm t);
ATerm call_sc_0_0 (ATerm t);
ATerm eval_import_0_0 (ATerm t);
static ATerm w_25 (ATerm s_59, ATerm r_59, ATerm t);
static ATerm x_25 (ATerm p_44, ATerm q_44, ATerm t);
static ATerm y_25 (ATerm z_27, ATerm t);
static ATerm z_25 (ATerm j_29, ATerm k_29, ATerm t);
static ATerm a_26 (ATerm o_120 (ATerm), ATerm p_185, ATerm r_29, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
static ATerm n_13 (ATerm t);
static ATerm b_26 (ATerm w_27, ATerm t);
static ATerm c_191 (ATerm f_190, ATerm g_190, ATerm h_190, ATerm t);
static ATerm o_13 (ATerm t);
static ATerm p_13 (ATerm t);
ATerm eval_command_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm l_113 (ATerm), ATerm m_113 (ATerm), ATerm t);
static ATerm q_13 (ATerm t);
ATerm evaluate_commands_0_0 (ATerm t);
static ATerm x_191 (ATerm r_191, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm k_28 (ATerm p_29, ATerm t);
static ATerm l_28 (ATerm x_44, ATerm y_44, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm i_193 (ATerm h_192, ATerm t);
static ATerm j_193 (ATerm l_192, ATerm m_192, ATerm n_192, ATerm t);
static ATerm k_193 (ATerm v_192, ATerm w_192, ATerm x_192, ATerm t);
static ATerm m_28 (ATerm t);
static ATerm r_13 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm copyright_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm m_135 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm n_121 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm i_196 (ATerm a_196, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm o_28 (ATerm x_53, ATerm w_53, ATerm t);
static ATerm u_13 (ATerm t);
static ATerm v_13 (ATerm t);
static ATerm w_13 (ATerm t);
static ATerm x_13 (ATerm t);
static ATerm y_13 (ATerm t);
static ATerm z_13 (ATerm t);
static ATerm a_14 (ATerm t);
static ATerm b_14 (ATerm t);
static ATerm c_14 (ATerm t);
static ATerm d_14 (ATerm t);
static ATerm e_14 (ATerm t);
static ATerm f_14 (ATerm t);
ATerm si_options_0_0 (ATerm t);
static ATerm g_14 (ATerm t);
static ATerm h_14 (ATerm t);
static ATerm i_14 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm j_14 (ATerm t);
static ATerm k_14 (ATerm t);
static ATerm l_14 (ATerm t);
static ATerm m_14 (ATerm t);
static ATerm n_14 (ATerm t);
static ATerm o_14 (ATerm t);
static ATerm p_14 (ATerm t);
static ATerm q_14 (ATerm t);
static ATerm r_14 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm x_28 (ATerm r_53, ATerm s_53, ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t);
static ATerm x_14 (ATerm t);
static ATerm y_14 (ATerm t);
static ATerm z_14 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm v_28 (ATerm p_58, ATerm q_58, ATerm o_58, ATerm t);
ATerm ArgOption_3_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm a_15 (ATerm t);
static ATerm b_15 (ATerm t);
static ATerm c_15 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t);
static ATerm f_15 (ATerm t);
static ATerm g_15 (ATerm t);
static ATerm h_15 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm h_121 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm t_28 (ATerm p_43, ATerm q_43, ATerm t);
ATerm debug_1_0 (ATerm m_120 (ATerm), ATerm t);
ATerm map_1_0 (ATerm x_120 (ATerm), ATerm t);
static ATerm i_15 (ATerm t);
static ATerm n_15 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm u_28 (ATerm g_60, ATerm h_60, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm q_15 (ATerm t);
static ATerm r_15 (ATerm t);
static ATerm w_15 (ATerm t);
static ATerm e_16 (ATerm t);
static ATerm f_16 (ATerm t);
static ATerm g_16 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm e_92 (ATerm), ATerm f_92 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm f_140 (ATerm), ATerm t);
static ATerm p_16 (ATerm t);
static ATerm q_16 (ATerm t);
static ATerm r_16 (ATerm t);
static ATerm s_16 (ATerm t);
ATerm parse_options_1_0 (ATerm e_140 (ATerm), ATerm t);
static ATerm u_16 (ATerm t);
static ATerm v_16 (ATerm t);
static ATerm w_16 (ATerm t);
static ATerm x_16 (ATerm t);
ATerm make_option_table_0_0 (ATerm t);
ATerm at_suffix_1_0 (ATerm r_121 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm k_121 (ATerm), ATerm t);
static ATerm a_17 (ATerm t);
ATerm process_options_0_0 (ATerm t);
ATerm create_runtime_environment_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm destroy_runtime_environment_0_0 (ATerm t)
{
  ATerm k_0 = NULL,l_0 = NULL,m_0 = NULL,n_0 = NULL;
  k_0 = t;
  t = term_y_16;
  n_0 = t;
  t = SSL_table_destroy(n_0);
  t = term_b_17;
  m_0 = t;
  t = SSL_table_destroy(m_0);
  t = term_c_17;
  l_0 = t;
  t = SSL_table_destroy(l_0);
  t = k_0;
  return(t);
}
ATerm EvalPrim_0_0 (ATerm t)
{
  ATerm l_147 = NULL,m_147 = NULL,n_147 = NULL,o_147 = NULL,p_147 = NULL,q_147 = NULL,s_147 = NULL,t_147 = NULL,u_147 = NULL,v_147 = NULL,w_147 = NULL;
  p_147 = t;
  if(match_cons(t, sym_App_2))
    {
      q_147 = ATgetArgument(t, 0);
      w_147 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_147;
  if(match_cons(t, sym_Prim_2))
    {
      s_147 = ATgetArgument(t, 0);
      t_147 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_147;
  if(match_string(t, "\"_cpl_loaded\""))
    {
      ATerm r_49 = NULL;
      t = t_147;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_147 = ATgetFirst((ATermList) t);
          v_147 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_147;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = u_147;
      t = EvalTerm_0_0(t);
      r_49 = t;
      t = _cpl_loaded(r_49);
    }
  else
    {
      if(match_string(t, "\"SSL_printnl\""))
        {
          ATerm n_50 = NULL,o_50 = NULL;
          t = t_147;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              u_147 = ATgetFirst((ATermList) t);
              v_147 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = v_147;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              l_147 = ATgetFirst((ATermList) t);
              m_147 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = m_147;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = u_147;
          t = EvalTerm_0_0(t);
          o_50 = t;
          t = l_147;
          t = EvalTerm_0_0(t);
          n_50 = t;
          t = SSL_printnl(o_50, n_50);
        }
      else
        {
          if(match_string(t, "\"SSL_print\""))
            {
              ATerm w_51 = NULL,x_51 = NULL;
              t = t_147;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  u_147 = ATgetFirst((ATermList) t);
                  v_147 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = v_147;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  l_147 = ATgetFirst((ATermList) t);
                  m_147 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = m_147;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = u_147;
              t = EvalTerm_0_0(t);
              x_51 = t;
              t = l_147;
              t = EvalTerm_0_0(t);
              w_51 = t;
              t = SSL_print(x_51, w_51);
            }
          else
            {
              if(match_string(t, "\"SSL_read_term_from_stream\""))
                {
                  ATerm m_52 = NULL;
                  t = t_147;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      u_147 = ATgetFirst((ATermList) t);
                      v_147 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = v_147;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = u_147;
                  t = EvalTerm_0_0(t);
                  m_52 = t;
                  t = SSL_read_term_from_stream(m_52);
                }
              else
                {
                  if(match_string(t, "\"SSL_write_term_to_stream_text\""))
                    {
                      ATerm x_52 = NULL,y_52 = NULL;
                      t = t_147;
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          u_147 = ATgetFirst((ATermList) t);
                          v_147 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = v_147;
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          l_147 = ATgetFirst((ATermList) t);
                          m_147 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = m_147;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = u_147;
                      t = EvalTerm_0_0(t);
                      y_52 = t;
                      t = l_147;
                      t = EvalTerm_0_0(t);
                      x_52 = t;
                      t = SSL_write_term_to_stream_text(y_52, x_52);
                    }
                  else
                    {
                      if(match_string(t, "\"SSL_write_term_to_stream_taf\""))
                        {
                          ATerm o_53 = NULL,q_53 = NULL;
                          t = t_147;
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              u_147 = ATgetFirst((ATermList) t);
                              v_147 = (ATerm) ATgetNext((ATermList) t);
                            }
                          else
                            _fail(t);
                          t = v_147;
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              l_147 = ATgetFirst((ATermList) t);
                              m_147 = (ATerm) ATgetNext((ATermList) t);
                            }
                          else
                            _fail(t);
                          t = m_147;
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = u_147;
                          t = EvalTerm_0_0(t);
                          q_53 = t;
                          t = l_147;
                          t = EvalTerm_0_0(t);
                          o_53 = t;
                          t = SSL_write_term_to_stream_taf(q_53, o_53);
                        }
                      else
                        {
                          if(match_string(t, "\"SSL_write_term_to_stream_baf\""))
                            {
                              ATerm v_54 = NULL,y_54 = NULL;
                              t = t_147;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  u_147 = ATgetFirst((ATermList) t);
                                  v_147 = (ATerm) ATgetNext((ATermList) t);
                                }
                              else
                                _fail(t);
                              t = v_147;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  l_147 = ATgetFirst((ATermList) t);
                                  m_147 = (ATerm) ATgetNext((ATermList) t);
                                }
                              else
                                _fail(t);
                              t = m_147;
                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                _fail(t);
                              t = u_147;
                              t = EvalTerm_0_0(t);
                              y_54 = t;
                              t = l_147;
                              t = EvalTerm_0_0(t);
                              v_54 = t;
                              t = SSL_write_term_to_stream_baf(y_54, v_54);
                            }
                          else
                            {
                              if(match_string(t, "\"SSL_strlen\""))
                                {
                                  ATerm c_56 = NULL;
                                  t = t_147;
                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                    {
                                      u_147 = ATgetFirst((ATermList) t);
                                      v_147 = (ATerm) ATgetNext((ATermList) t);
                                    }
                                  else
                                    _fail(t);
                                  t = v_147;
                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                    _fail(t);
                                  t = u_147;
                                  t = EvalTerm_0_0(t);
                                  c_56 = t;
                                  t = SSL_strlen(c_56);
                                }
                              else
                                {
                                  if(match_string(t, "\"SSL_concat_strings\""))
                                    {
                                      ATerm n_56 = NULL;
                                      t = t_147;
                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                        {
                                          u_147 = ATgetFirst((ATermList) t);
                                          v_147 = (ATerm) ATgetNext((ATermList) t);
                                        }
                                      else
                                        _fail(t);
                                      t = v_147;
                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                        _fail(t);
                                      t = u_147;
                                      t = EvalTerm_0_0(t);
                                      n_56 = t;
                                      t = SSL_concat_strings(n_56);
                                    }
                                  else
                                    {
                                      if(match_string(t, "\"SSL_strcat\""))
                                        {
                                          ATerm k_57 = NULL,q_57 = NULL;
                                          t = t_147;
                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                            {
                                              u_147 = ATgetFirst((ATermList) t);
                                              v_147 = (ATerm) ATgetNext((ATermList) t);
                                            }
                                          else
                                            _fail(t);
                                          t = v_147;
                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                            {
                                              l_147 = ATgetFirst((ATermList) t);
                                              m_147 = (ATerm) ATgetNext((ATermList) t);
                                            }
                                          else
                                            _fail(t);
                                          t = m_147;
                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                            _fail(t);
                                          t = u_147;
                                          t = EvalTerm_0_0(t);
                                          q_57 = t;
                                          t = l_147;
                                          t = EvalTerm_0_0(t);
                                          k_57 = t;
                                          t = SSL_strcat(q_57, k_57);
                                        }
                                      else
                                        {
                                          if(match_string(t, "\"SSL_explode_string\""))
                                            {
                                              ATerm l_58 = NULL;
                                              t = t_147;
                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                {
                                                  u_147 = ATgetFirst((ATermList) t);
                                                  v_147 = (ATerm) ATgetNext((ATermList) t);
                                                }
                                              else
                                                _fail(t);
                                              t = v_147;
                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                _fail(t);
                                              t = u_147;
                                              t = EvalTerm_0_0(t);
                                              l_58 = t;
                                              t = SSL_explode_string(l_58);
                                            }
                                          else
                                            {
                                              if(match_string(t, "\"SSL_implode_string\""))
                                                {
                                                  ATerm h_59 = NULL;
                                                  t = t_147;
                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                    {
                                                      u_147 = ATgetFirst((ATermList) t);
                                                      v_147 = (ATerm) ATgetNext((ATermList) t);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = v_147;
                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                    _fail(t);
                                                  t = u_147;
                                                  t = EvalTerm_0_0(t);
                                                  h_59 = t;
                                                  t = SSL_implode_string(h_59);
                                                }
                                              else
                                                {
                                                  if(match_string(t, "\"SSL_is_string\""))
                                                    {
                                                      ATerm x_59 = NULL;
                                                      t = t_147;
                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                        {
                                                          u_147 = ATgetFirst((ATermList) t);
                                                          v_147 = (ATerm) ATgetNext((ATermList) t);
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = v_147;
                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                        _fail(t);
                                                      t = u_147;
                                                      t = EvalTerm_0_0(t);
                                                      x_59 = t;
                                                      t = SSL_is_string(x_59);
                                                    }
                                                  else
                                                    {
                                                      if(match_string(t, "SSL_new"))
                                                        {
                                                          t = t_147;
                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                            _fail(t);
                                                          t = SSL_new();
                                                        }
                                                      else
                                                        {
                                                          if(match_string(t, "\"SSL_address\""))
                                                            {
                                                              ATerm u_60 = NULL;
                                                              t = t_147;
                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                {
                                                                  u_147 = ATgetFirst((ATermList) t);
                                                                  v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                }
                                                              else
                                                                _fail(t);
                                                              t = v_147;
                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                _fail(t);
                                                              t = u_147;
                                                              t = EvalTerm_0_0(t);
                                                              u_60 = t;
                                                              t = SSL_address(u_60);
                                                            }
                                                          else
                                                            {
                                                              if(match_string(t, "\"SSL_address_lt\""))
                                                                {
                                                                  ATerm o_61 = NULL,p_61 = NULL;
                                                                  t = t_147;
                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                    {
                                                                      u_147 = ATgetFirst((ATermList) t);
                                                                      v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  t = v_147;
                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                    {
                                                                      l_147 = ATgetFirst((ATermList) t);
                                                                      m_147 = (ATerm) ATgetNext((ATermList) t);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  t = m_147;
                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                    _fail(t);
                                                                  t = u_147;
                                                                  t = EvalTerm_0_0(t);
                                                                  p_61 = t;
                                                                  t = l_147;
                                                                  t = EvalTerm_0_0(t);
                                                                  o_61 = t;
                                                                  t = SSL_address_lt(p_61, o_61);
                                                                }
                                                              else
                                                                {
                                                                  if(match_string(t, "\"SSL_explode_term\""))
                                                                    {
                                                                      ATerm g_62 = NULL;
                                                                      t = t_147;
                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                        {
                                                                          u_147 = ATgetFirst((ATermList) t);
                                                                          v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                        }
                                                                      else
                                                                        _fail(t);
                                                                      t = v_147;
                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                        _fail(t);
                                                                      t = u_147;
                                                                      t = EvalTerm_0_0(t);
                                                                      g_62 = t;
                                                                      t = SSL_explode_term(g_62);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_string(t, "\"SSL_mkterm\""))
                                                                        {
                                                                          ATerm i_63 = NULL,j_63 = NULL;
                                                                          t = t_147;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              u_147 = ATgetFirst((ATermList) t);
                                                                              v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          t = v_147;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              l_147 = ATgetFirst((ATermList) t);
                                                                              m_147 = (ATerm) ATgetNext((ATermList) t);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          t = m_147;
                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                            _fail(t);
                                                                          t = u_147;
                                                                          t = EvalTerm_0_0(t);
                                                                          j_63 = t;
                                                                          t = l_147;
                                                                          t = EvalTerm_0_0(t);
                                                                          i_63 = t;
                                                                          t = SSL_mkterm(j_63, i_63);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_string(t, "\"ATremoveAnnotations\""))
                                                                            {
                                                                              ATerm z_63 = NULL;
                                                                              t = t_147;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  u_147 = ATgetFirst((ATermList) t);
                                                                                  v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              t = v_147;
                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                _fail(t);
                                                                              t = u_147;
                                                                              t = EvalTerm_0_0(t);
                                                                              z_63 = t;
                                                                              t = ATremoveAnnotations(z_63);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_string(t, "\"SSLsetAnnotations\""))
                                                                                {
                                                                                  ATerm s_64 = NULL,t_64 = NULL;
                                                                                  t = t_147;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      u_147 = ATgetFirst((ATermList) t);
                                                                                      v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  t = v_147;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      l_147 = ATgetFirst((ATermList) t);
                                                                                      m_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  t = m_147;
                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                    _fail(t);
                                                                                  t = u_147;
                                                                                  t = EvalTerm_0_0(t);
                                                                                  t_64 = t;
                                                                                  t = l_147;
                                                                                  t = EvalTerm_0_0(t);
                                                                                  s_64 = t;
                                                                                  t = SSLsetAnnotations(t_64, s_64);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_string(t, "\"SSLgetAnnotations\""))
                                                                                    {
                                                                                      ATerm d_65 = NULL;
                                                                                      t = t_147;
                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                        {
                                                                                          u_147 = ATgetFirst((ATermList) t);
                                                                                          v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      t = v_147;
                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                        _fail(t);
                                                                                      t = u_147;
                                                                                      t = EvalTerm_0_0(t);
                                                                                      d_65 = t;
                                                                                      t = SSLgetAnnotations(d_65);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_string(t, "SSL_rand"))
                                                                                        {
                                                                                          t = t_147;
                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                            _fail(t);
                                                                                          t = SSL_rand();
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_string(t, "SSL_RAND_MAX"))
                                                                                            {
                                                                                              t = t_147;
                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                _fail(t);
                                                                                              t = SSL_RAND_MAX();
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_string(t, "\"SSL_srand\""))
                                                                                                {
                                                                                                  ATerm y_65 = NULL;
                                                                                                  t = t_147;
                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                    {
                                                                                                      u_147 = ATgetFirst((ATermList) t);
                                                                                                      v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  t = v_147;
                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                    _fail(t);
                                                                                                  t = u_147;
                                                                                                  t = EvalTerm_0_0(t);
                                                                                                  y_65 = t;
                                                                                                  t = SSL_srand(y_65);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(t, "\"SSL_string_to_int\""))
                                                                                                    {
                                                                                                      ATerm i_66 = NULL;
                                                                                                      t = t_147;
                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                        {
                                                                                                          u_147 = ATgetFirst((ATermList) t);
                                                                                                          v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      t = v_147;
                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                        _fail(t);
                                                                                                      t = u_147;
                                                                                                      t = EvalTerm_0_0(t);
                                                                                                      i_66 = t;
                                                                                                      t = SSL_string_to_int(i_66);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(t, "\"SSL_int_to_string\""))
                                                                                                        {
                                                                                                          ATerm s_66 = NULL;
                                                                                                          t = t_147;
                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                            {
                                                                                                              u_147 = ATgetFirst((ATermList) t);
                                                                                                              v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          t = v_147;
                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                            _fail(t);
                                                                                                          t = u_147;
                                                                                                          t = EvalTerm_0_0(t);
                                                                                                          s_66 = t;
                                                                                                          t = SSL_int_to_string(s_66);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(t, "\"SSL_int\""))
                                                                                                            {
                                                                                                              ATerm d_67 = NULL;
                                                                                                              t = t_147;
                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                {
                                                                                                                  u_147 = ATgetFirst((ATermList) t);
                                                                                                                  v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              t = v_147;
                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                _fail(t);
                                                                                                              t = u_147;
                                                                                                              t = EvalTerm_0_0(t);
                                                                                                              d_67 = t;
                                                                                                              t = SSL_int(d_67);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(t, "\"SSL_gtr\""))
                                                                                                                {
                                                                                                                  t = t_147;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                    {
                                                                                                                      u_147 = ATgetFirst((ATermList) t);
                                                                                                                      v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  t = v_147;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                    {
                                                                                                                      l_147 = ATgetFirst((ATermList) t);
                                                                                                                      m_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  t = m_147;
                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                    _fail(t);
                                                                                                                  {
                                                                                                                    ATerm d_17 = t;
                                                                                                                    int e_17 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        ATerm o_67 = NULL,p_67 = NULL;
                                                                                                                        t = u_147;
                                                                                                                        t = EvalTerm_0_0(t);
                                                                                                                        p_67 = t;
                                                                                                                        t = l_147;
                                                                                                                        t = EvalTerm_0_0(t);
                                                                                                                        o_67 = t;
                                                                                                                        t = SSL_gtr(p_67, o_67);
                                                                                                                        LocalPopChoice(e_17);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = d_17;
                                                                                                                        {
                                                                                                                          ATerm e_68 = NULL,f_68 = NULL;
                                                                                                                          t = u_147;
                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                          f_68 = t;
                                                                                                                          t = l_147;
                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                          e_68 = t;
                                                                                                                          t = SSL_gtr(f_68, e_68);
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(t, "\"SSL_gti\""))
                                                                                                                    {
                                                                                                                      t = t_147;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                        {
                                                                                                                          u_147 = ATgetFirst((ATermList) t);
                                                                                                                          v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        _fail(t);
                                                                                                                      t = v_147;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                        {
                                                                                                                          l_147 = ATgetFirst((ATermList) t);
                                                                                                                          m_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        _fail(t);
                                                                                                                      t = m_147;
                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                        _fail(t);
                                                                                                                      {
                                                                                                                        ATerm f_17 = t;
                                                                                                                        int g_17 = stack_ptr;
                                                                                                                        if((PushChoice() == 0))
                                                                                                                          {
                                                                                                                            ATerm r_68 = NULL,s_68 = NULL;
                                                                                                                            t = u_147;
                                                                                                                            t = EvalTerm_0_0(t);
                                                                                                                            s_68 = t;
                                                                                                                            t = l_147;
                                                                                                                            t = EvalTerm_0_0(t);
                                                                                                                            r_68 = t;
                                                                                                                            t = SSL_gti(s_68, r_68);
                                                                                                                            LocalPopChoice(g_17);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            t = f_17;
                                                                                                                            {
                                                                                                                              ATerm k_69 = NULL,l_69 = NULL;
                                                                                                                              t = u_147;
                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                              l_69 = t;
                                                                                                                              t = l_147;
                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                              k_69 = t;
                                                                                                                              t = SSL_gti(l_69, k_69);
                                                                                                                            }
                                                                                                                          }
                                                                                                                      }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(t, "\"SSL_mod\""))
                                                                                                                        {
                                                                                                                          ATerm w_70 = NULL,x_70 = NULL;
                                                                                                                          t = t_147;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                            {
                                                                                                                              u_147 = ATgetFirst((ATermList) t);
                                                                                                                              v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            _fail(t);
                                                                                                                          t = v_147;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                            {
                                                                                                                              l_147 = ATgetFirst((ATermList) t);
                                                                                                                              m_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            _fail(t);
                                                                                                                          t = m_147;
                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                            _fail(t);
                                                                                                                          t = u_147;
                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                          x_70 = t;
                                                                                                                          t = l_147;
                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                          w_70 = t;
                                                                                                                          t = SSL_mod(x_70, w_70);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(t, "\"SSL_divr\""))
                                                                                                                            {
                                                                                                                              t = t_147;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                {
                                                                                                                                  u_147 = ATgetFirst((ATermList) t);
                                                                                                                                  v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                _fail(t);
                                                                                                                              t = v_147;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                {
                                                                                                                                  l_147 = ATgetFirst((ATermList) t);
                                                                                                                                  m_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                _fail(t);
                                                                                                                              t = m_147;
                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                _fail(t);
                                                                                                                              {
                                                                                                                                ATerm l_17 = t;
                                                                                                                                int m_17 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    ATerm t_71 = NULL,u_71 = NULL;
                                                                                                                                    t = u_147;
                                                                                                                                    t = EvalTerm_0_0(t);
                                                                                                                                    u_71 = t;
                                                                                                                                    t = l_147;
                                                                                                                                    t = EvalTerm_0_0(t);
                                                                                                                                    t_71 = t;
                                                                                                                                    t = SSL_divr(u_71, t_71);
                                                                                                                                    LocalPopChoice(m_17);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = l_17;
                                                                                                                                    {
                                                                                                                                      ATerm g_72 = NULL,h_72 = NULL;
                                                                                                                                      t = u_147;
                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                      h_72 = t;
                                                                                                                                      t = l_147;
                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                      g_72 = t;
                                                                                                                                      t = SSL_divr(h_72, g_72);
                                                                                                                                    }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(t, "\"SSL_divi\""))
                                                                                                                                {
                                                                                                                                  t = t_147;
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                    {
                                                                                                                                      u_147 = ATgetFirst((ATermList) t);
                                                                                                                                      v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    _fail(t);
                                                                                                                                  t = v_147;
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                    {
                                                                                                                                      l_147 = ATgetFirst((ATermList) t);
                                                                                                                                      m_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    _fail(t);
                                                                                                                                  t = m_147;
                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                    _fail(t);
                                                                                                                                  {
                                                                                                                                    ATerm p_17 = t;
                                                                                                                                    int q_17 = stack_ptr;
                                                                                                                                    if((PushChoice() == 0))
                                                                                                                                      {
                                                                                                                                        ATerm x_72 = NULL,y_72 = NULL;
                                                                                                                                        t = u_147;
                                                                                                                                        t = EvalTerm_0_0(t);
                                                                                                                                        y_72 = t;
                                                                                                                                        t = l_147;
                                                                                                                                        t = EvalTerm_0_0(t);
                                                                                                                                        x_72 = t;
                                                                                                                                        t = SSL_divi(y_72, x_72);
                                                                                                                                        LocalPopChoice(q_17);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        t = p_17;
                                                                                                                                        {
                                                                                                                                          ATerm k_73 = NULL,l_73 = NULL;
                                                                                                                                          t = u_147;
                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                          l_73 = t;
                                                                                                                                          t = l_147;
                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                          k_73 = t;
                                                                                                                                          t = SSL_divi(l_73, k_73);
                                                                                                                                        }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(t, "\"SSL_mulr\""))
                                                                                                                                    {
                                                                                                                                      t = t_147;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                        {
                                                                                                                                          u_147 = ATgetFirst((ATermList) t);
                                                                                                                                          v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        _fail(t);
                                                                                                                                      t = v_147;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                        {
                                                                                                                                          l_147 = ATgetFirst((ATermList) t);
                                                                                                                                          m_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        _fail(t);
                                                                                                                                      t = m_147;
                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                        _fail(t);
                                                                                                                                      {
                                                                                                                                        ATerm r_17 = t;
                                                                                                                                        int s_17 = stack_ptr;
                                                                                                                                        if((PushChoice() == 0))
                                                                                                                                          {
                                                                                                                                            ATerm x_73 = NULL,y_73 = NULL;
                                                                                                                                            t = u_147;
                                                                                                                                            t = EvalTerm_0_0(t);
                                                                                                                                            y_73 = t;
                                                                                                                                            t = l_147;
                                                                                                                                            t = EvalTerm_0_0(t);
                                                                                                                                            x_73 = t;
                                                                                                                                            t = SSL_mulr(y_73, x_73);
                                                                                                                                            LocalPopChoice(s_17);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            t = r_17;
                                                                                                                                            {
                                                                                                                                              ATerm k_74 = NULL,l_74 = NULL;
                                                                                                                                              t = u_147;
                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                              l_74 = t;
                                                                                                                                              t = l_147;
                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                              k_74 = t;
                                                                                                                                              t = SSL_mulr(l_74, k_74);
                                                                                                                                            }
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(t, "\"SSL_muli\""))
                                                                                                                                        {
                                                                                                                                          t = t_147;
                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                            {
                                                                                                                                              u_147 = ATgetFirst((ATermList) t);
                                                                                                                                              v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            _fail(t);
                                                                                                                                          t = v_147;
                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                            {
                                                                                                                                              l_147 = ATgetFirst((ATermList) t);
                                                                                                                                              m_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            _fail(t);
                                                                                                                                          t = m_147;
                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                            _fail(t);
                                                                                                                                          {
                                                                                                                                            ATerm t_17 = t;
                                                                                                                                            int u_17 = stack_ptr;
                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                              {
                                                                                                                                                ATerm x_74 = NULL,y_74 = NULL;
                                                                                                                                                t = u_147;
                                                                                                                                                t = EvalTerm_0_0(t);
                                                                                                                                                y_74 = t;
                                                                                                                                                t = l_147;
                                                                                                                                                t = EvalTerm_0_0(t);
                                                                                                                                                x_74 = t;
                                                                                                                                                t = SSL_muli(y_74, x_74);
                                                                                                                                                LocalPopChoice(u_17);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = t_17;
                                                                                                                                                {
                                                                                                                                                  ATerm k_75 = NULL,l_75 = NULL;
                                                                                                                                                  t = u_147;
                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                  l_75 = t;
                                                                                                                                                  t = l_147;
                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                  k_75 = t;
                                                                                                                                                  t = SSL_muli(l_75, k_75);
                                                                                                                                                }
                                                                                                                                              }
                                                                                                                                          }
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(t, "\"SSL_subtr\""))
                                                                                                                                            {
                                                                                                                                              t = t_147;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                {
                                                                                                                                                  u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                  v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                _fail(t);
                                                                                                                                              t = v_147;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                {
                                                                                                                                                  l_147 = ATgetFirst((ATermList) t);
                                                                                                                                                  m_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                _fail(t);
                                                                                                                                              t = m_147;
                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                _fail(t);
                                                                                                                                              {
                                                                                                                                                ATerm v_17 = t;
                                                                                                                                                int w_17 = stack_ptr;
                                                                                                                                                if((PushChoice() == 0))
                                                                                                                                                  {
                                                                                                                                                    ATerm x_75 = NULL,y_75 = NULL;
                                                                                                                                                    t = u_147;
                                                                                                                                                    t = EvalTerm_0_0(t);
                                                                                                                                                    y_75 = t;
                                                                                                                                                    t = l_147;
                                                                                                                                                    t = EvalTerm_0_0(t);
                                                                                                                                                    x_75 = t;
                                                                                                                                                    t = SSL_subtr(y_75, x_75);
                                                                                                                                                    LocalPopChoice(w_17);
                                                                                                                                                  }
                                                                                                                                                else
                                                                                                                                                  {
                                                                                                                                                    t = v_17;
                                                                                                                                                    {
                                                                                                                                                      ATerm k_76 = NULL,l_76 = NULL;
                                                                                                                                                      t = u_147;
                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                      l_76 = t;
                                                                                                                                                      t = l_147;
                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                      k_76 = t;
                                                                                                                                                      t = SSL_subtr(l_76, k_76);
                                                                                                                                                    }
                                                                                                                                                  }
                                                                                                                                              }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_string(t, "\"SSL_subti\""))
                                                                                                                                                {
                                                                                                                                                  t = t_147;
                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                    {
                                                                                                                                                      u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                      v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    _fail(t);
                                                                                                                                                  t = v_147;
                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                    {
                                                                                                                                                      l_147 = ATgetFirst((ATermList) t);
                                                                                                                                                      m_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    _fail(t);
                                                                                                                                                  t = m_147;
                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                    _fail(t);
                                                                                                                                                  {
                                                                                                                                                    ATerm a_18 = t;
                                                                                                                                                    int b_18 = stack_ptr;
                                                                                                                                                    if((PushChoice() == 0))
                                                                                                                                                      {
                                                                                                                                                        ATerm x_76 = NULL,y_76 = NULL;
                                                                                                                                                        t = u_147;
                                                                                                                                                        t = EvalTerm_0_0(t);
                                                                                                                                                        y_76 = t;
                                                                                                                                                        t = l_147;
                                                                                                                                                        t = EvalTerm_0_0(t);
                                                                                                                                                        x_76 = t;
                                                                                                                                                        t = SSL_subti(y_76, x_76);
                                                                                                                                                        LocalPopChoice(b_18);
                                                                                                                                                      }
                                                                                                                                                    else
                                                                                                                                                      {
                                                                                                                                                        t = a_18;
                                                                                                                                                        {
                                                                                                                                                          ATerm l_77 = NULL,m_77 = NULL;
                                                                                                                                                          t = u_147;
                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                          m_77 = t;
                                                                                                                                                          t = l_147;
                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                          l_77 = t;
                                                                                                                                                          t = SSL_subti(m_77, l_77);
                                                                                                                                                        }
                                                                                                                                                      }
                                                                                                                                                  }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  if(match_string(t, "\"SSL_addr\""))
                                                                                                                                                    {
                                                                                                                                                      t = t_147;
                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                        {
                                                                                                                                                          u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                          v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        _fail(t);
                                                                                                                                                      t = v_147;
                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                        {
                                                                                                                                                          l_147 = ATgetFirst((ATermList) t);
                                                                                                                                                          m_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        _fail(t);
                                                                                                                                                      t = m_147;
                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                        _fail(t);
                                                                                                                                                      {
                                                                                                                                                        ATerm e_18 = t;
                                                                                                                                                        int f_18 = stack_ptr;
                                                                                                                                                        if((PushChoice() == 0))
                                                                                                                                                          {
                                                                                                                                                            ATerm a_78 = NULL,b_78 = NULL;
                                                                                                                                                            t = u_147;
                                                                                                                                                            t = EvalTerm_0_0(t);
                                                                                                                                                            b_78 = t;
                                                                                                                                                            t = l_147;
                                                                                                                                                            t = EvalTerm_0_0(t);
                                                                                                                                                            a_78 = t;
                                                                                                                                                            t = SSL_addr(b_78, a_78);
                                                                                                                                                            LocalPopChoice(f_18);
                                                                                                                                                          }
                                                                                                                                                        else
                                                                                                                                                          {
                                                                                                                                                            t = e_18;
                                                                                                                                                            {
                                                                                                                                                              ATerm p_78 = NULL,q_78 = NULL;
                                                                                                                                                              t = u_147;
                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                              q_78 = t;
                                                                                                                                                              t = l_147;
                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                              p_78 = t;
                                                                                                                                                              t = SSL_addr(q_78, p_78);
                                                                                                                                                            }
                                                                                                                                                          }
                                                                                                                                                      }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      if(match_string(t, "\"SSL_addi\""))
                                                                                                                                                        {
                                                                                                                                                          t = t_147;
                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                            {
                                                                                                                                                              u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                              v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            _fail(t);
                                                                                                                                                          t = v_147;
                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                            {
                                                                                                                                                              l_147 = ATgetFirst((ATermList) t);
                                                                                                                                                              m_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            _fail(t);
                                                                                                                                                          t = m_147;
                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                            _fail(t);
                                                                                                                                                          {
                                                                                                                                                            ATerm g_18 = t;
                                                                                                                                                            int h_18 = stack_ptr;
                                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                                              {
                                                                                                                                                                ATerm j_79 = NULL,k_79 = NULL;
                                                                                                                                                                t = u_147;
                                                                                                                                                                t = EvalTerm_0_0(t);
                                                                                                                                                                k_79 = t;
                                                                                                                                                                t = l_147;
                                                                                                                                                                t = EvalTerm_0_0(t);
                                                                                                                                                                j_79 = t;
                                                                                                                                                                t = SSL_addi(k_79, j_79);
                                                                                                                                                                LocalPopChoice(h_18);
                                                                                                                                                              }
                                                                                                                                                            else
                                                                                                                                                              {
                                                                                                                                                                t = g_18;
                                                                                                                                                                {
                                                                                                                                                                  ATerm w_79 = NULL,x_79 = NULL;
                                                                                                                                                                  t = u_147;
                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                  x_79 = t;
                                                                                                                                                                  t = l_147;
                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                  w_79 = t;
                                                                                                                                                                  t = SSL_addi(x_79, w_79);
                                                                                                                                                                }
                                                                                                                                                              }
                                                                                                                                                          }
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          if(match_string(t, "\"SSL_is_int\""))
                                                                                                                                                            {
                                                                                                                                                              ATerm q_80 = NULL;
                                                                                                                                                              t = t_147;
                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                {
                                                                                                                                                                  u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                  v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                _fail(t);
                                                                                                                                                              t = v_147;
                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                _fail(t);
                                                                                                                                                              t = u_147;
                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                              q_80 = t;
                                                                                                                                                              t = SSL_is_int(q_80);
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            {
                                                                                                                                                              if(match_string(t, "\"SSL_real\""))
                                                                                                                                                                {
                                                                                                                                                                  ATerm f_81 = NULL;
                                                                                                                                                                  t = t_147;
                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                    {
                                                                                                                                                                      u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                      v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                    }
                                                                                                                                                                  else
                                                                                                                                                                    _fail(t);
                                                                                                                                                                  t = v_147;
                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                    _fail(t);
                                                                                                                                                                  t = u_147;
                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                  f_81 = t;
                                                                                                                                                                  t = SSL_real(f_81);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                {
                                                                                                                                                                  if(match_string(t, "\"SSL_string_to_real\""))
                                                                                                                                                                    {
                                                                                                                                                                      ATerm o_81 = NULL;
                                                                                                                                                                      t = t_147;
                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                        {
                                                                                                                                                                          u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                          v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                        }
                                                                                                                                                                      else
                                                                                                                                                                        _fail(t);
                                                                                                                                                                      t = v_147;
                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                        _fail(t);
                                                                                                                                                                      t = u_147;
                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                      o_81 = t;
                                                                                                                                                                      t = SSL_string_to_real(o_81);
                                                                                                                                                                    }
                                                                                                                                                                  else
                                                                                                                                                                    {
                                                                                                                                                                      if(match_string(t, "\"SSL_real_to_string\""))
                                                                                                                                                                        {
                                                                                                                                                                          ATerm x_81 = NULL;
                                                                                                                                                                          t = t_147;
                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                            {
                                                                                                                                                                              u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                              v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                            }
                                                                                                                                                                          else
                                                                                                                                                                            _fail(t);
                                                                                                                                                                          t = v_147;
                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                            _fail(t);
                                                                                                                                                                          t = u_147;
                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                          x_81 = t;
                                                                                                                                                                          t = SSL_real_to_string(x_81);
                                                                                                                                                                        }
                                                                                                                                                                      else
                                                                                                                                                                        {
                                                                                                                                                                          if(match_string(t, "\"SSL_atan2\""))
                                                                                                                                                                            {
                                                                                                                                                                              ATerm i_82 = NULL,j_82 = NULL;
                                                                                                                                                                              t = t_147;
                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                {
                                                                                                                                                                                  u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                  v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                }
                                                                                                                                                                              else
                                                                                                                                                                                _fail(t);
                                                                                                                                                                              t = v_147;
                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                {
                                                                                                                                                                                  l_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                  m_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                }
                                                                                                                                                                              else
                                                                                                                                                                                _fail(t);
                                                                                                                                                                              t = m_147;
                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                _fail(t);
                                                                                                                                                                              t = u_147;
                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                              j_82 = t;
                                                                                                                                                                              t = l_147;
                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                              i_82 = t;
                                                                                                                                                                              t = SSL_atan2(j_82, i_82);
                                                                                                                                                                            }
                                                                                                                                                                          else
                                                                                                                                                                            {
                                                                                                                                                                              if(match_string(t, "\"SSL_sqrt\""))
                                                                                                                                                                                {
                                                                                                                                                                                  ATerm t_82 = NULL;
                                                                                                                                                                                  t = t_147;
                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                    {
                                                                                                                                                                                      u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                      v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                    }
                                                                                                                                                                                  else
                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                  t = v_147;
                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                  t = u_147;
                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                  t_82 = t;
                                                                                                                                                                                  t = SSL_sqrt(t_82);
                                                                                                                                                                                }
                                                                                                                                                                              else
                                                                                                                                                                                {
                                                                                                                                                                                  if(match_string(t, "\"SSL_sin\""))
                                                                                                                                                                                    {
                                                                                                                                                                                      ATerm c_83 = NULL;
                                                                                                                                                                                      t = t_147;
                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                        {
                                                                                                                                                                                          u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                          v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                        }
                                                                                                                                                                                      else
                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                      t = v_147;
                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                      t = u_147;
                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                      c_83 = t;
                                                                                                                                                                                      t = SSL_sin(c_83);
                                                                                                                                                                                    }
                                                                                                                                                                                  else
                                                                                                                                                                                    {
                                                                                                                                                                                      if(match_string(t, "\"SSL_cos\""))
                                                                                                                                                                                        {
                                                                                                                                                                                          ATerm l_83 = NULL;
                                                                                                                                                                                          t = t_147;
                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                            {
                                                                                                                                                                                              u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                              v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                            }
                                                                                                                                                                                          else
                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                          t = v_147;
                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                          t = u_147;
                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                          l_83 = t;
                                                                                                                                                                                          t = SSL_cos(l_83);
                                                                                                                                                                                        }
                                                                                                                                                                                      else
                                                                                                                                                                                        {
                                                                                                                                                                                          if(match_string(t, "\"SSL_is_real\""))
                                                                                                                                                                                            {
                                                                                                                                                                                              ATerm u_83 = NULL;
                                                                                                                                                                                              t = t_147;
                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                {
                                                                                                                                                                                                  u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                  v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                }
                                                                                                                                                                                              else
                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                              t = v_147;
                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                              t = u_147;
                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                              u_83 = t;
                                                                                                                                                                                              t = SSL_is_real(u_83);
                                                                                                                                                                                            }
                                                                                                                                                                                          else
                                                                                                                                                                                            {
                                                                                                                                                                                              if(match_string(t, "\"SSL_open_file\""))
                                                                                                                                                                                                {
                                                                                                                                                                                                  ATerm f_84 = NULL,g_84 = NULL;
                                                                                                                                                                                                  t = t_147;
                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                    {
                                                                                                                                                                                                      u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                      v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                    }
                                                                                                                                                                                                  else
                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                  t = v_147;
                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                    {
                                                                                                                                                                                                      l_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                      m_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                    }
                                                                                                                                                                                                  else
                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                  t = m_147;
                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                  t = u_147;
                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                  g_84 = t;
                                                                                                                                                                                                  t = l_147;
                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                  f_84 = t;
                                                                                                                                                                                                  t = SSL_open_file(g_84, f_84);
                                                                                                                                                                                                }
                                                                                                                                                                                              else
                                                                                                                                                                                                {
                                                                                                                                                                                                  if(match_string(t, "\"SSL_close_file\""))
                                                                                                                                                                                                    {
                                                                                                                                                                                                      ATerm q_84 = NULL;
                                                                                                                                                                                                      t = t_147;
                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                        {
                                                                                                                                                                                                          u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                          v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                        }
                                                                                                                                                                                                      else
                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                      t = v_147;
                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                      t = u_147;
                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                      q_84 = t;
                                                                                                                                                                                                      t = SSL_close_file(q_84);
                                                                                                                                                                                                    }
                                                                                                                                                                                                  else
                                                                                                                                                                                                    {
                                                                                                                                                                                                      if(match_string(t, "SSL_pipe"))
                                                                                                                                                                                                        {
                                                                                                                                                                                                          t = t_147;
                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                          t = SSL_pipe();
                                                                                                                                                                                                        }
                                                                                                                                                                                                      else
                                                                                                                                                                                                        {
                                                                                                                                                                                                          if(match_string(t, "\"SSL_fileno\""))
                                                                                                                                                                                                            {
                                                                                                                                                                                                              ATerm b_85 = NULL;
                                                                                                                                                                                                              t = t_147;
                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                {
                                                                                                                                                                                                                  u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                  v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                }
                                                                                                                                                                                                              else
                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                              t = v_147;
                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                              t = u_147;
                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                              b_85 = t;
                                                                                                                                                                                                              t = SSL_fileno(b_85);
                                                                                                                                                                                                            }
                                                                                                                                                                                                          else
                                                                                                                                                                                                            {
                                                                                                                                                                                                              if(match_string(t, "\"SSL_fdopen\""))
                                                                                                                                                                                                                {
                                                                                                                                                                                                                  ATerm m_85 = NULL,n_85 = NULL;
                                                                                                                                                                                                                  t = t_147;
                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                    {
                                                                                                                                                                                                                      u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                      v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                    }
                                                                                                                                                                                                                  else
                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                  t = v_147;
                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                    {
                                                                                                                                                                                                                      l_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                      m_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                    }
                                                                                                                                                                                                                  else
                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                  t = m_147;
                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                  t = u_147;
                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                  n_85 = t;
                                                                                                                                                                                                                  t = l_147;
                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                  m_85 = t;
                                                                                                                                                                                                                  t = SSL_fdopen(n_85, m_85);
                                                                                                                                                                                                                }
                                                                                                                                                                                                              else
                                                                                                                                                                                                                {
                                                                                                                                                                                                                  if(match_string(t, "\"SSL_access\""))
                                                                                                                                                                                                                    {
                                                                                                                                                                                                                      ATerm z_85 = NULL,a_86 = NULL;
                                                                                                                                                                                                                      t = t_147;
                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                        {
                                                                                                                                                                                                                          u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                          v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                        }
                                                                                                                                                                                                                      else
                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                      t = v_147;
                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                        {
                                                                                                                                                                                                                          l_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                          m_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                        }
                                                                                                                                                                                                                      else
                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                      t = m_147;
                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                      t = u_147;
                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                      a_86 = t;
                                                                                                                                                                                                                      t = l_147;
                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                      z_85 = t;
                                                                                                                                                                                                                      t = SSL_access(a_86, z_85);
                                                                                                                                                                                                                    }
                                                                                                                                                                                                                  else
                                                                                                                                                                                                                    {
                                                                                                                                                                                                                      if(match_string(t, "\"SSL_dup2\""))
                                                                                                                                                                                                                        {
                                                                                                                                                                                                                          ATerm m_86 = NULL,n_86 = NULL;
                                                                                                                                                                                                                          t = t_147;
                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                            {
                                                                                                                                                                                                                              u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                              v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                            }
                                                                                                                                                                                                                          else
                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                          t = v_147;
                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                            {
                                                                                                                                                                                                                              l_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                              m_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                            }
                                                                                                                                                                                                                          else
                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                          t = m_147;
                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                          t = u_147;
                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                          n_86 = t;
                                                                                                                                                                                                                          t = l_147;
                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                          m_86 = t;
                                                                                                                                                                                                                          t = SSL_dup2(n_86, m_86);
                                                                                                                                                                                                                        }
                                                                                                                                                                                                                      else
                                                                                                                                                                                                                        {
                                                                                                                                                                                                                          if(match_string(t, "\"SSL_dup\""))
                                                                                                                                                                                                                            {
                                                                                                                                                                                                                              ATerm x_86 = NULL;
                                                                                                                                                                                                                              t = t_147;
                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                  u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                  v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                }
                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                              t = v_147;
                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                              t = u_147;
                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                              x_86 = t;
                                                                                                                                                                                                                              t = SSL_dup(x_86);
                                                                                                                                                                                                                            }
                                                                                                                                                                                                                          else
                                                                                                                                                                                                                            {
                                                                                                                                                                                                                              if(match_string(t, "\"SSL_close\""))
                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                  ATerm g_87 = NULL;
                                                                                                                                                                                                                                  t = t_147;
                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                      u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                      v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                  t = v_147;
                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                  t = u_147;
                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                  g_87 = t;
                                                                                                                                                                                                                                  t = SSL_close(g_87);
                                                                                                                                                                                                                                }
                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_mkstemp\""))
                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                      ATerm p_87 = NULL;
                                                                                                                                                                                                                                      t = t_147;
                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                          u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                          v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                      t = v_147;
                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                      t = u_147;
                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                      p_87 = t;
                                                                                                                                                                                                                                      t = SSL_mkstemp(p_87);
                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_open\""))
                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                          ATerm y_87 = NULL;
                                                                                                                                                                                                                                          t = t_147;
                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                              u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                              v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                          t = v_147;
                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                          t = u_147;
                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                          y_87 = t;
                                                                                                                                                                                                                                          t = SSL_open(y_87);
                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_creat\""))
                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                              ATerm h_88 = NULL;
                                                                                                                                                                                                                                              t = t_147;
                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                  u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                  v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                              t = v_147;
                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                              t = u_147;
                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                              h_88 = t;
                                                                                                                                                                                                                                              t = SSL_creat(h_88);
                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                              if(match_string(t, "SSL_P_tmpdir"))
                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                  t = t_147;
                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                  t = SSL_P_tmpdir();
                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                  if(match_string(t, "SSL_STDERR_FILENO"))
                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                      t = t_147;
                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                      t = SSL_STDERR_FILENO();
                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                      if(match_string(t, "SSL_STDOUT_FILENO"))
                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                          t = t_147;
                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                          t = SSL_STDOUT_FILENO();
                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                          if(match_string(t, "SSL_STDIN_FILENO"))
                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                              t = t_147;
                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                              t = SSL_STDIN_FILENO();
                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                              if(match_string(t, "\"SSL_fgetc\""))
                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                  ATerm y_88 = NULL;
                                                                                                                                                                                                                                                                  t = t_147;
                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                      u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                      v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                  t = v_147;
                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                  t = u_147;
                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                  y_88 = t;
                                                                                                                                                                                                                                                                  t = SSL_fgetc(y_88);
                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_fputc\""))
                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                      ATerm j_89 = NULL,k_89 = NULL;
                                                                                                                                                                                                                                                                      t = t_147;
                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                          u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                          v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                      t = v_147;
                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                          l_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                          m_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                      t = m_147;
                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                      t = u_147;
                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                      k_89 = t;
                                                                                                                                                                                                                                                                      t = l_147;
                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                      j_89 = t;
                                                                                                                                                                                                                                                                      t = SSL_fputc(k_89, j_89);
                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_puts\""))
                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                          ATerm u_89 = NULL;
                                                                                                                                                                                                                                                                          t = t_147;
                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                              u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                              v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                          t = v_147;
                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                          t = u_147;
                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                          u_89 = t;
                                                                                                                                                                                                                                                                          t = SSL_puts(u_89);
                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_fputs\""))
                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                              ATerm f_90 = NULL,g_90 = NULL;
                                                                                                                                                                                                                                                                              t = t_147;
                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                  u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                  v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                              t = v_147;
                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                  l_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                  m_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                              t = m_147;
                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                              t = u_147;
                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                              g_90 = t;
                                                                                                                                                                                                                                                                              t = l_147;
                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                              f_90 = t;
                                                                                                                                                                                                                                                                              t = SSL_fputs(g_90, f_90);
                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                              if(match_string(t, "\"SSL_fflush\""))
                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                  t = t_147;
                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                      u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                      v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                  t = v_147;
                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                                                                    ATerm i_18 = t;
                                                                                                                                                                                                                                                                                    int l_18 = stack_ptr;
                                                                                                                                                                                                                                                                                    if((PushChoice() == 0))
                                                                                                                                                                                                                                                                                      {
                                                                                                                                                                                                                                                                                        ATerm q_90 = NULL;
                                                                                                                                                                                                                                                                                        t = u_147;
                                                                                                                                                                                                                                                                                        t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                        q_90 = t;
                                                                                                                                                                                                                                                                                        t = SSL_fflush(q_90);
                                                                                                                                                                                                                                                                                        LocalPopChoice(l_18);
                                                                                                                                                                                                                                                                                      }
                                                                                                                                                                                                                                                                                    else
                                                                                                                                                                                                                                                                                      {
                                                                                                                                                                                                                                                                                        t = i_18;
                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                          ATerm z_90 = NULL;
                                                                                                                                                                                                                                                                                          t = u_147;
                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                          z_90 = t;
                                                                                                                                                                                                                                                                                          t = SSL_fflush(z_90);
                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                      }
                                                                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_fclose\""))
                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                      t = t_147;
                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                          u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                          v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                      t = v_147;
                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                      {
                                                                                                                                                                                                                                                                                        ATerm n_18 = t;
                                                                                                                                                                                                                                                                                        int o_18 = stack_ptr;
                                                                                                                                                                                                                                                                                        if((PushChoice() == 0))
                                                                                                                                                                                                                                                                                          {
                                                                                                                                                                                                                                                                                            ATerm i_91 = NULL;
                                                                                                                                                                                                                                                                                            t = u_147;
                                                                                                                                                                                                                                                                                            t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                            i_91 = t;
                                                                                                                                                                                                                                                                                            t = SSL_fclose(i_91);
                                                                                                                                                                                                                                                                                            LocalPopChoice(o_18);
                                                                                                                                                                                                                                                                                          }
                                                                                                                                                                                                                                                                                        else
                                                                                                                                                                                                                                                                                          {
                                                                                                                                                                                                                                                                                            t = n_18;
                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                              ATerm r_91 = NULL;
                                                                                                                                                                                                                                                                                              t = u_147;
                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                              r_91 = t;
                                                                                                                                                                                                                                                                                              t = SSL_fclose(r_91);
                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                          }
                                                                                                                                                                                                                                                                                      }
                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_fopen\""))
                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                          ATerm c_92 = NULL,d_92 = NULL;
                                                                                                                                                                                                                                                                                          t = t_147;
                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                              u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                              v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                          t = v_147;
                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                              l_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                              m_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                          t = m_147;
                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                          t = u_147;
                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                          d_92 = t;
                                                                                                                                                                                                                                                                                          t = l_147;
                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                          c_92 = t;
                                                                                                                                                                                                                                                                                          t = SSL_fopen(d_92, c_92);
                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                          if(match_string(t, "SSL_stderr_stream"))
                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                              t = t_147;
                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                              t = SSL_stderr_stream();
                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                              if(match_string(t, "SSL_stdout_stream"))
                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                  t = t_147;
                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                  t = SSL_stdout_stream();
                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                  if(match_string(t, "SSL_stdin_stream"))
                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                      t = t_147;
                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                      t = SSL_stdin_stream();
                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_setenv\""))
                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                          ATerm z_92 = NULL,a_93 = NULL,b_93 = NULL;
                                                                                                                                                                                                                                                                                                          t = t_147;
                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                              u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                              v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                          t = v_147;
                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                              l_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                              m_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                          t = m_147;
                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                              n_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                              o_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                          t = o_147;
                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                          t = u_147;
                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                          b_93 = t;
                                                                                                                                                                                                                                                                                                          t = l_147;
                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                          a_93 = t;
                                                                                                                                                                                                                                                                                                          t = n_147;
                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                          z_92 = t;
                                                                                                                                                                                                                                                                                                          t = SSL_setenv(b_93, a_93, z_92);
                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_getenv\""))
                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                              ATerm m_93 = NULL;
                                                                                                                                                                                                                                                                                                              t = t_147;
                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                  u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                  v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                              t = v_147;
                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                              t = u_147;
                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                              m_93 = t;
                                                                                                                                                                                                                                                                                                              t = SSL_getenv(m_93);
                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                              if(match_string(t, "\"SSL_remove\""))
                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                  ATerm v_93 = NULL;
                                                                                                                                                                                                                                                                                                                  t = t_147;
                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                      u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                      v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                  t = v_147;
                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                  t = u_147;
                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                  v_93 = t;
                                                                                                                                                                                                                                                                                                                  t = SSL_remove(v_93);
                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_link\""))
                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                      ATerm g_94 = NULL,h_94 = NULL;
                                                                                                                                                                                                                                                                                                                      t = t_147;
                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                          u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                          v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                      t = v_147;
                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                          l_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                          m_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                      t = m_147;
                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                      t = u_147;
                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                      h_94 = t;
                                                                                                                                                                                                                                                                                                                      t = l_147;
                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                      g_94 = t;
                                                                                                                                                                                                                                                                                                                      t = SSL_link(h_94, g_94);
                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_fdcopy\""))
                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                          ATerm t_94 = NULL,u_94 = NULL;
                                                                                                                                                                                                                                                                                                                          t = t_147;
                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                              u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                              v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                          t = v_147;
                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                              l_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                              m_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                          t = m_147;
                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                          t = u_147;
                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                          u_94 = t;
                                                                                                                                                                                                                                                                                                                          t = l_147;
                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                          t_94 = t;
                                                                                                                                                                                                                                                                                                                          t = SSL_fdcopy(u_94, t_94);
                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_copy\""))
                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                              ATerm g_95 = NULL,h_95 = NULL;
                                                                                                                                                                                                                                                                                                                              t = t_147;
                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                  u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                  v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                              t = v_147;
                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                  l_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                  m_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                              t = m_147;
                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                              t = u_147;
                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                              h_95 = t;
                                                                                                                                                                                                                                                                                                                              t = l_147;
                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                              g_95 = t;
                                                                                                                                                                                                                                                                                                                              t = SSL_copy(h_95, g_95);
                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                              if(match_string(t, "\"SSL_rename\""))
                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                  ATerm t_95 = NULL,u_95 = NULL;
                                                                                                                                                                                                                                                                                                                                  t = t_147;
                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                      u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                      v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                  t = v_147;
                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                      l_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                      m_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                  t = m_147;
                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                  t = u_147;
                                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                  u_95 = t;
                                                                                                                                                                                                                                                                                                                                  t = l_147;
                                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                  t_95 = t;
                                                                                                                                                                                                                                                                                                                                  t = SSL_rename(u_95, t_95);
                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_modification_time\""))
                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                      ATerm e_96 = NULL;
                                                                                                                                                                                                                                                                                                                                      t = t_147;
                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                          u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                          v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                      t = v_147;
                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                      t = u_147;
                                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                      e_96 = t;
                                                                                                                                                                                                                                                                                                                                      t = SSL_modification_time(e_96);
                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_readdir\""))
                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                          ATerm n_96 = NULL;
                                                                                                                                                                                                                                                                                                                                          t = t_147;
                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                              u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                              v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                          t = v_147;
                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                          t = u_147;
                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                          n_96 = t;
                                                                                                                                                                                                                                                                                                                                          t = SSL_readdir(n_96);
                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                          if(match_string(t, "SSL_EXDEV"))
                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                              t = t_147;
                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                              t = SSL_EXDEV();
                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                              if(match_string(t, "SSL_get_errno"))
                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                  t = t_147;
                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                  t = SSL_get_errno();
                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_getchar\""))
                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                      ATerm a_97 = NULL;
                                                                                                                                                                                                                                                                                                                                                      t = t_147;
                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                          u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                          v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                      t = v_147;
                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                      t = u_147;
                                                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                      a_97 = t;
                                                                                                                                                                                                                                                                                                                                                      t = SSL_getchar(a_97);
                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_printascii\""))
                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                          ATerm l_97 = NULL,m_97 = NULL;
                                                                                                                                                                                                                                                                                                                                                          t = t_147;
                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                              u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                              v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                          t = v_147;
                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                              l_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                              m_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                          t = m_147;
                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                          t = u_147;
                                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                          m_97 = t;
                                                                                                                                                                                                                                                                                                                                                          t = l_147;
                                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                          l_97 = t;
                                                                                                                                                                                                                                                                                                                                                          t = SSL_printascii(m_97, l_97);
                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_pipe_term_to_child\""))
                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                              ATerm a_98 = NULL,b_98 = NULL,c_98 = NULL;
                                                                                                                                                                                                                                                                                                                                                              t = t_147;
                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                  u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                  v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                              t = v_147;
                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                  l_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                  m_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                              t = m_147;
                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                  n_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                  o_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                              t = o_147;
                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                              t = u_147;
                                                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                              c_98 = t;
                                                                                                                                                                                                                                                                                                                                                              t = l_147;
                                                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                              b_98 = t;
                                                                                                                                                                                                                                                                                                                                                              t = n_147;
                                                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                              a_98 = t;
                                                                                                                                                                                                                                                                                                                                                              t = SSL_pipe_term_to_child(c_98, b_98, a_98);
                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                              if(match_string(t, "\"SSL_kill\""))
                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                  ATerm p_98 = NULL,q_98 = NULL;
                                                                                                                                                                                                                                                                                                                                                                  t = t_147;
                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                      u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                      v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                  t = v_147;
                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                      l_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                      m_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                  t = m_147;
                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                  t = u_147;
                                                                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                  q_98 = t;
                                                                                                                                                                                                                                                                                                                                                                  t = l_147;
                                                                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                  p_98 = t;
                                                                                                                                                                                                                                                                                                                                                                  t = SSL_kill(q_98, p_98);
                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_exit\""))
                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                      ATerm a_99 = NULL;
                                                                                                                                                                                                                                                                                                                                                                      t = t_147;
                                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                          u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                          v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                                      t = v_147;
                                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                                      t = u_147;
                                                                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                      a_99 = t;
                                                                                                                                                                                                                                                                                                                                                                      t = SSL_exit(a_99);
                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_waitpid\""))
                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                          ATerm j_99 = NULL;
                                                                                                                                                                                                                                                                                                                                                                          t = t_147;
                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                              u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                              v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                          t = v_147;
                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                          t = u_147;
                                                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                          j_99 = t;
                                                                                                                                                                                                                                                                                                                                                                          t = SSL_waitpid(j_99);
                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_execvp\""))
                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                              ATerm u_99 = NULL,v_99 = NULL;
                                                                                                                                                                                                                                                                                                                                                                              t = t_147;
                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                  u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                  v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                              t = v_147;
                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                  l_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                  m_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                              t = m_147;
                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                              t = u_147;
                                                                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                              v_99 = t;
                                                                                                                                                                                                                                                                                                                                                                              t = l_147;
                                                                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                              u_99 = t;
                                                                                                                                                                                                                                                                                                                                                                              t = SSL_execvp(v_99, u_99);
                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                              if(match_string(t, "SSL_fork"))
                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                  t = t_147;
                                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                  t = SSL_fork();
                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                  if(match_string(t, "SSL_get_pid"))
                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                      t = t_147;
                                                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                      t = SSL_get_pid();
                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_TicksToSeconds\""))
                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                          ATerm j_100 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                          t = t_147;
                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                              u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                              v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                          t = v_147;
                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                          t = u_147;
                                                                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                          j_100 = t;
                                                                                                                                                                                                                                                                                                                                                                                          t = SSL_TicksToSeconds(j_100);
                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                          if(match_string(t, "SSL_times"))
                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                              t = t_147;
                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                              t = SSL_times();
                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                              if(match_string(t, "SSL_clock"))
                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                  t = t_147;
                                                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                  t = SSL_clock();
                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_ClockToSeconds\""))
                                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                                      ATerm w_100 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                      t = t_147;
                                                                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                                          u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                          v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                      t = v_147;
                                                                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                      t = u_147;
                                                                                                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                      w_100 = t;
                                                                                                                                                                                                                                                                                                                                                                                                      t = SSL_ClockToSeconds(w_100);
                                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                                      if(match_string(t, "SSL_dtime"))
                                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                                          t = t_147;
                                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                          t = SSL_dtime();
                                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_epoch2UTC\""))
                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                              t = t_147;
                                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                                  u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                  v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                              t = v_147;
                                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                                                                                                                                                                                                ATerm p_18 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                int q_18 = stack_ptr;
                                                                                                                                                                                                                                                                                                                                                                                                                if((PushChoice() == 0))
                                                                                                                                                                                                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                                                                                                                                                                                                    ATerm h_101 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                                    t = u_147;
                                                                                                                                                                                                                                                                                                                                                                                                                    t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                    h_101 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                    t = SSL_epoch2UTC(h_101);
                                                                                                                                                                                                                                                                                                                                                                                                                    LocalPopChoice(q_18);
                                                                                                                                                                                                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                                                                                                                                                                                                else
                                                                                                                                                                                                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                                                                                                                                                                                                    t = p_18;
                                                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                                                      ATerm q_101 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                                      t = u_147;
                                                                                                                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                      q_101 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                      t = SSL_epoch2UTC(q_101);
                                                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                                                                                                                                                                                              }
                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                              if(match_string(t, "\"SSL_epoch2localtime\""))
                                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                                  ATerm z_101 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                                  t = t_147;
                                                                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                                                      u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                      v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                  t = v_147;
                                                                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                  t = u_147;
                                                                                                                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                  z_101 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                  t = SSL_epoch2localtime(z_101);
                                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                                  if(match_string(t, "SSL_now_epoch_time"))
                                                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                                                      t = t_147;
                                                                                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                      t = SSL_now_epoch_time();
                                                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                                                      if(match_string(t, "SSL_time"))
                                                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                                                          t = t_147;
                                                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                          t = SSL_time();
                                                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_table_rename\""))
                                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                                              ATerm o_102 = NULL,p_102 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                                              t = t_147;
                                                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                                                  u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                                  v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                              t = v_147;
                                                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                                                  l_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                                  m_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                              t = m_147;
                                                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                              t = u_147;
                                                                                                                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                              p_102 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                              t = l_147;
                                                                                                                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                              o_102 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                              t = SSL_table_rename(p_102, o_102);
                                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                                              if(match_string(t, "\"SSL_table_keys\""))
                                                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                                                  ATerm z_102 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                                                  t = t_147;
                                                                                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                                                                      u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                                      v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                                  t = v_147;
                                                                                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                                  t = u_147;
                                                                                                                                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                                  z_102 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                                  t = SSL_table_keys(z_102);
                                                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_table_remove\""))
                                                                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                                                                      ATerm l_103 = NULL,m_103 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                                                      t = t_147;
                                                                                                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                                                                          u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                                          v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                                      t = v_147;
                                                                                                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                                                                          l_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                                          m_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                                      t = m_147;
                                                                                                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                                      t = u_147;
                                                                                                                                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                                      m_103 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                                      t = l_147;
                                                                                                                                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                                      l_103 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                                      t = SSL_table_remove(m_103, l_103);
                                                                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_table_get\""))
                                                                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                                                                          ATerm y_103 = NULL,z_103 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                                                          t = t_147;
                                                                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                                                              u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                                              v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                                          t = v_147;
                                                                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                                                              l_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                                              m_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                                          t = m_147;
                                                                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                                          t = u_147;
                                                                                                                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                                          z_103 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                                          t = l_147;
                                                                                                                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                                          y_103 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                                          t = SSL_table_get(z_103, y_103);
                                                                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_table_put\""))
                                                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                                                              ATerm n_104 = NULL,o_104 = NULL,p_104 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                                                              t = t_147;
                                                                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                                                                  u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                                                  v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                                              t = v_147;
                                                                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                                                                  l_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                                                  m_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                                              t = m_147;
                                                                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                                                                  n_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                                                  o_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                                              t = o_147;
                                                                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                                              t = u_147;
                                                                                                                                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                                              p_104 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                                              t = l_147;
                                                                                                                                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                                              o_104 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                                              t = n_147;
                                                                                                                                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                                              n_104 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                                              t = SSL_table_put(p_104, o_104, n_104);
                                                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                                                              if(match_string(t, "\"SSL_table_destroy\""))
                                                                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                                                                  ATerm d_111 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                                                                  t = t_147;
                                                                                                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                                                                                      u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                                                      v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                                                  t = v_147;
                                                                                                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                                                  t = u_147;
                                                                                                                                                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                                                  d_111 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                                                  t = SSL_table_destroy(d_111);
                                                                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                                                                  ATerm h_112 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                                                                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("\"SSL_table_create\"", 0, ATtrue)))
                                                                                                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                                                  t = t_147;
                                                                                                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                                                                                      u_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                                                      v_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                                                  t = v_147;
                                                                                                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                                                  t = u_147;
                                                                                                                                                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                                                  h_112 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                                                  t = SSL_table_create(h_112);
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
static ATerm f_26 (ATerm h_78, ATerm i_78, ATerm t)
{
  t = SSL_mkterm(h_78, i_78);
  return(t);
}
ATerm EvalTerm_0_0 (ATerm t)
{
  ATerm a_157 = NULL,b_157 = NULL,c_157 = NULL;
  b_157 = t;
  {
    ATerm r_18 = t;
    int s_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm t_18 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(s_18);
        {
          ATerm d_113 = NULL,g_113 = NULL;
          t = term_c_17;
          g_113 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_c_17, b_157);
          t = f_27(g_113, b_157, t);
          d_113 = t;
          {
            ATerm u_18 = t;
            if((PushChoice() == 0))
              {
                if(!(match_cons(t, sym_NULL_0)))
                  _fail(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = u_18;
              }
          }
          t = d_113;
        }
      }
    else
      {
        t = r_18;
        if(match_cons(t, sym_Op_2))
          {
            c_157 = ATgetArgument(t, 0);
            a_157 = ATgetArgument(t, 1);
            {
              ATerm s_113 = NULL,e_114 = NULL,n_114 = NULL,p_114 = NULL,q_114 = NULL,x_114 = NULL,y_114 = NULL,e_115 = NULL,f_115 = NULL,y_7 = NULL;
              t = SSLgetAnnotations(b_157);
              s_113 = t;
              t = a_157;
              t = map_1_0(EvalTerm_0_0, t);
              e_114 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, c_157, e_114);
              y_7 = t;
              t = SSLsetAnnotations(y_7, s_113);
              n_114 = t;
              if(match_cons(t, sym_Op_2))
                {
                  e_115 = ATgetArgument(t, 0);
                  f_115 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = f_115;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  p_114 = ATgetFirst((ATermList) t);
                  q_114 = (ATerm) ATgetNext((ATermList) t);
                  t = q_114;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      x_114 = ATgetFirst((ATermList) t);
                      y_114 = (ATerm) ATgetNext((ATermList) t);
                      t = y_114;
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = e_115;
                          if(match_string(t, "Cons"))
                            {
                              ATerm v_18 = t;
                              int w_18 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATinsert(CheckATermList(x_114), p_114);
                                  LocalPopChoice(w_18);
                                }
                              else
                                {
                                  t = v_18;
                                  t = n_114;
                                  t = f_26(e_115, f_115, t);
                                }
                            }
                          else
                            {
                              t = n_114;
                              t = f_26(e_115, f_115, t);
                            }
                        }
                      else
                        {
                          t = n_114;
                          t = f_26(e_115, f_115, t);
                        }
                    }
                  else
                    {
                      t = n_114;
                      t = f_26(e_115, f_115, t);
                    }
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = e_115;
                      if(match_string(t, "Nil"))
                        {
                          t = (ATerm) ATempty;
                        }
                      else
                        {
                          t = n_114;
                          t = f_26(e_115, f_115, t);
                        }
                    }
                  else
                    {
                      t = n_114;
                      t = f_26(e_115, f_115, t);
                    }
                }
            }
          }
        else
          {
            if(match_cons(t, sym_Real_1))
              {
                c_157 = ATgetArgument(t, 0);
                t = c_157;
              }
            else
              {
                if(match_cons(t, sym_Str_1))
                  {
                    c_157 = ATgetArgument(t, 0);
                    t = c_157;
                  }
                else
                  {
                    if(match_cons(t, sym_Int_1))
                      {
                        c_157 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = c_157;
                  }
              }
          }
      }
  }
  return(t);
}
static ATerm k_26 (ATerm c_59, ATerm d_59, ATerm e_59, ATerm t)
{
  ATerm l_157 = NULL,m_157 = NULL,n_157 = NULL;
  m_157 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_59, d_59);
  t = u_28(c_59, d_59, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm x_18 = ATgetFirst((ATermList) t);
      l_157 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_157), e_59);
  n_157 = t;
  t = SSL_table_put(c_59, d_59, n_157);
  t = m_157;
  return(t);
}
static ATerm a_0 (ATerm t)
{
  t = term_y_18;
  return(t);
}
static ATerm l_26 (ATerm b_79, ATerm c_79, ATerm t)
{
  ATerm s_157 = NULL;
  s_157 = t;
  {
    ATerm z_18 = t;
    int a_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_19;
        t = get_config_0_0(t);
        t = s_157;
        t = debug_1_0(a_0, t);
        LocalPopChoice(a_19);
      }
    else
      {
        t = z_18;
      }
  }
  {
    ATerm c_19 = t;
    int d_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_157 = NULL,w_157 = NULL;
        t = term_c_17;
        v_157 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_c_17, b_79);
        t = f_27(v_157, b_79, t);
        w_157 = t;
        if(match_cons(t, sym_NULL_0))
          {
            ATerm e_19 = t;
            int f_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = w_157;
                if((c_79 != t))
                  {
                    _fail(t);
                  }
                t = w_157;
                LocalPopChoice(f_19);
              }
            else
              {
                t = e_19;
                {
                  ATerm x_157 = NULL;
                  t = term_c_17;
                  x_157 = t;
                  t = (ATerm) ATmakeAppl(sym__3, term_c_17, b_79, c_79);
                  t = k_26(x_157, b_79, c_79, t);
                }
              }
          }
        else
          {
            t = w_157;
            if((c_79 != t))
              {
                _fail(t);
              }
            t = w_157;
          }
        LocalPopChoice(d_19);
      }
    else
      {
        t = c_19;
        {
          ATerm y_157 = NULL;
          t = term_c_17;
          y_157 = t;
          t = (ATerm) ATmakeAppl(sym__3, term_c_17, b_79, c_79);
          t = v_28(y_157, b_79, c_79, t);
        }
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, b_79, c_79);
  return(t);
}
static ATerm n_26 (ATerm z_141 (ATerm), ATerm n_62, ATerm o_62, ATerm l_62, ATerm m_62, ATerm t)
{
  t = n_62;
  t = z_141(t);
  t = m_62;
  {
    ATerm g_19 = t;
    if((PushChoice() == 0))
      {
        static ATerm o_0 (ATerm t)
        {
          ATerm g_160 = NULL;
          if(match_cons(t, sym__2))
            {
              if((n_62 != ATgetArgument(t, 0)))
                {
                  _fail(ATgetArgument(t, 0));
                }
              g_160 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, o_62, g_160);
          {
            ATerm h_19 = t;
            if((PushChoice() == 0))
              {
                ATerm k_160 = NULL;
                if(match_cons(t, sym__2))
                  {
                    k_160 = ATgetArgument(t, 0);
                    if((k_160 != ATgetArgument(t, 1)))
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
                t = h_19;
              }
          }
          return(t);
        }
        t = fetch_1_0(o_0, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_19;
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, l_62, (ATerm) ATinsert(CheckATermList(m_62), (ATerm) ATmakeAppl(sym__2, n_62, o_62)));
  return(t);
}
static ATerm p_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_19 = ATgetArgument(t, 0);
      if(((ATgetType(n_19) != AT_LIST) || !(ATisEmpty(n_19))))
        _fail(t);
      {
        ATerm o_19 = ATgetArgument(t, 1);
        if(((ATgetType(o_19) != AT_LIST) || !(ATisEmpty(o_19))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm k_120 = NULL,t_120 = NULL,u_120 = NULL,v_120 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_19 = ATgetArgument(t, 0);
      if(((ATgetType(p_19) == AT_LIST) && !(ATisEmpty(p_19))))
        {
          k_120 = ATgetFirst((ATermList) p_19);
          t_120 = (ATerm) ATgetNext((ATermList) p_19);
        }
      else
        _fail(t);
      {
        ATerm q_19 = ATgetArgument(t, 1);
        if(((ATgetType(q_19) == AT_LIST) && !(ATisEmpty(q_19))))
          {
            u_120 = ATgetFirst((ATermList) q_19);
            v_120 = (ATerm) ATgetNext((ATermList) q_19);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_120, u_120), (ATerm) ATmakeAppl(sym__2, t_120, v_120));
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm y_120 = NULL,b_121 = NULL;
  if(match_cons(t, sym__2))
    {
      y_120 = ATgetArgument(t, 0);
      b_121 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_121), y_120);
  return(t);
}
ATerm PatDecompose_0_0 (ATerm t)
{
  ATerm c_159 = NULL,d_159 = NULL,e_159 = NULL,f_159 = NULL,i_159 = NULL,j_159 = NULL,k_159 = NULL;
  c_159 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_159 = ATgetFirst((ATermList) t);
      k_159 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = d_159;
  if(match_cons(t, sym__2))
    {
      e_159 = ATgetArgument(t, 0);
      j_159 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_159;
  if(match_cons(t, sym_Real_1))
    {
      f_159 = ATgetArgument(t, 0);
      t = j_159;
      if((f_159 != t))
        {
          _fail(t);
        }
      t = k_159;
    }
  else
    {
      if(match_cons(t, sym_Str_1))
        {
          f_159 = ATgetArgument(t, 0);
          t = j_159;
          if((f_159 != t))
            {
              _fail(t);
            }
          t = k_159;
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              f_159 = ATgetArgument(t, 0);
              t = j_159;
              if((f_159 != t))
                {
                  _fail(t);
                }
              t = k_159;
            }
          else
            {
              ATerm u_119 = NULL,c_120 = NULL;
              if(match_cons(t, sym_Op_2))
                {
                  f_159 = ATgetArgument(t, 0);
                  i_159 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_explode_term(j_159);
              if(match_cons(t, sym__2))
                {
                  if((f_159 != ATgetArgument(t, 0)))
                    {
                      _fail(ATgetArgument(t, 0));
                    }
                  u_119 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, i_159, u_119);
              t = genzip_4_0(p_0, r_0, s_0, _id, t);
              c_120 = t;
              t = (ATerm) ATmakeAppl(sym__2, c_120, k_159);
              t = conc_0_0(t);
            }
        }
    }
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm y_160 = NULL;
  y_160 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_160, (ATerm) ATempty);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm z_160 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_19 = ATgetArgument(t, 0);
      if(((ATgetType(r_19) != AT_LIST) || !(ATisEmpty(r_19))))
        _fail(t);
      z_160 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_160;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_s_19;
  return(t);
}
static ATerm f_163 (ATerm f_161, ATerm g_161, ATerm h_161, ATerm t)
{
  ATerm i_161 = NULL,l_161 = NULL,m_161 = NULL,a_8 = NULL;
  t = SSLgetAnnotations(f_161);
  i_161 = t;
  t = g_161;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_19 = ATgetFirst((ATermList) t);
      if(match_cons(t_19, sym__2))
        {
          l_161 = ATgetArgument(t_19, 0);
          if((l_161 != ATgetArgument(t_19, 1)))
            {
              _fail(ATgetArgument(t_19, 1));
            }
        }
      else
        _fail(t);
      m_161 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_161, h_161);
  a_8 = t;
  t = SSLsetAnnotations(a_8, i_161);
  return(t);
}
static ATerm g_163 (ATerm o_161, ATerm p_161, ATerm q_161, ATerm t)
{
  ATerm r_161 = NULL,v_161 = NULL,b_8 = NULL;
  t = SSLgetAnnotations(o_161);
  r_161 = t;
  t = p_161;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_19 = ATgetFirst((ATermList) t);
      if(match_cons(u_19, sym__2))
        {
          ATerm v_19 = ATgetArgument(u_19, 0);
          if(!(match_cons(v_19, sym_Wld_0)))
            _fail(t);
          {
            ATerm x_19 = ATgetArgument(u_19, 1);
          }
        }
      else
        _fail(t);
      v_161 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_161, q_161);
  b_8 = t;
  t = SSLsetAnnotations(b_8, r_161);
  return(t);
}
static ATerm i_163 (ATerm x_161, ATerm y_161, ATerm z_161, ATerm t)
{
  ATerm a_162 = NULL,f_162 = NULL,c_8 = NULL;
  t = SSLgetAnnotations(x_161);
  a_162 = t;
  t = y_161;
  t = PatDecompose_0_0(t);
  f_162 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_162, z_161);
  c_8 = t;
  t = SSLsetAnnotations(c_8, a_162);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_y_19;
  return(t);
}
ATerm stratego_match_1_0 (ATerm s_145 (ATerm), ATerm t)
{
  static ATerm h_1 (ATerm t)
  {
    ATerm w_162 = NULL,a_161 = NULL,h_162 = NULL,i_162 = NULL,k_162 = NULL,l_162 = NULL,m_162 = NULL,o_162 = NULL,p_162 = NULL;
    a_161 = t;
    {
      ATerm z_19 = t;
      int a_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_b_19;
          t = get_config_0_0(t);
          t = a_161;
          t = debug_1_0(j_1, t);
          LocalPopChoice(a_20);
        }
      else
        {
          t = z_19;
          t = a_161;
        }
    }
    m_162 = t;
    if(match_cons(t, sym__2))
      {
        o_162 = ATgetArgument(t, 0);
        p_162 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = o_162;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_162 = ATgetFirst((ATermList) t);
        l_162 = (ATerm) ATgetNext((ATermList) t);
        t = h_162;
        if(match_cons(t, sym__2))
          {
            i_162 = ATgetArgument(t, 0);
            k_162 = ATgetArgument(t, 1);
            {
              ATerm b_20 = t;
              int c_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_163(m_162, o_162, p_162, t);
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
                        t = m_162;
                        t = n_26(s_145, i_162, k_162, l_162, p_162, t);
                        LocalPopChoice(f_20);
                      }
                    else
                      {
                        t = e_20;
                        {
                          ATerm g_20 = t;
                          int h_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = g_163(m_162, o_162, p_162, t);
                              LocalPopChoice(h_20);
                            }
                          else
                            {
                              t = g_20;
                              t = i_163(m_162, o_162, p_162, t);
                            }
                        }
                      }
                  }
                }
            }
          }
        else
          {
            ATerm i_20 = t;
            int j_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = f_163(m_162, o_162, p_162, t);
                LocalPopChoice(j_20);
              }
            else
              {
                t = i_20;
                {
                  ATerm k_20 = t;
                  int l_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = g_163(m_162, o_162, p_162, t);
                      LocalPopChoice(l_20);
                    }
                  else
                    {
                      t = k_20;
                      t = i_163(m_162, o_162, p_162, t);
                    }
                }
              }
          }
      }
    else
      {
        ATerm m_20 = t;
        int n_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_163(m_162, o_162, p_162, t);
            LocalPopChoice(n_20);
          }
        else
          {
            t = m_20;
            {
              ATerm p_20 = t;
              int q_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_163(m_162, o_162, p_162, t);
                  LocalPopChoice(q_20);
                }
              else
                {
                  t = p_20;
                  t = i_163(m_162, o_162, p_162, t);
                }
            }
          }
      }
    w_162 = t;
    {
      ATerm r_20 = t;
      int s_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_b_19;
          t = get_config_0_0(t);
          t = w_162;
          t = debug_1_0(k_1, t);
          LocalPopChoice(s_20);
        }
      else
        {
          t = r_20;
          t = w_162;
        }
    }
    return(t);
  }
  t = for_3_0(v_0, d_1, h_1, t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm k_163 = NULL,l_163 = NULL,n_163 = NULL,g_8 = NULL;
  n_163 = t;
  if(match_cons(t, sym_Var_1))
    {
      l_163 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_163);
  k_163 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, l_163);
  g_8 = t;
  t = SSLsetAnnotations(g_8, k_163);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_t_20;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm t_163 = NULL,u_163 = NULL;
  if(match_cons(t, sym__2))
    {
      t_163 = ATgetArgument(t, 0);
      u_163 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_26(t_163, u_163, t);
  return(t);
}
static ATerm p_26 (ATerm z_78, ATerm a_79, ATerm t)
{
  ATerm o_163 = NULL;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, z_78, a_79));
  t = stratego_match_1_0(l_1, t);
  o_163 = t;
  {
    ATerm u_20 = t;
    int v_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_19;
        t = get_config_0_0(t);
        t = o_163;
        t = debug_1_0(m_1, t);
        LocalPopChoice(v_20);
      }
    else
      {
        t = u_20;
        t = o_163;
      }
  }
  t = map_1_0(n_1, t);
  t = a_79;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm w_163 = NULL,x_163 = NULL,y_163 = NULL,z_163 = NULL;
  w_163 = t;
  t = term_c_17;
  x_163 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, w_163);
  y_163 = t;
  t = term_w_20;
  z_163 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_c_17, (ATerm)ATmakeAppl(sym_Var_1, w_163), term_w_20);
  t = v_28(x_163, y_163, z_163, t);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm a_164 = NULL,b_164 = NULL,c_164 = NULL;
  a_164 = t;
  t = term_c_17;
  b_164 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, a_164);
  c_164 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_17, (ATerm) ATmakeAppl(sym_Var_1, a_164));
  t = a_27(b_164, c_164, t);
  return(t);
}
static ATerm q_26 (ATerm t_145 (ATerm), ATerm i_79, ATerm f_79, ATerm g_79, ATerm t)
{
  ATerm v_163 = NULL;
  t = i_79;
  t = map_1_0(s_1, t);
  t = (ATerm) ATmakeAppl(sym_App_2, f_79, g_79);
  t = t_145(t);
  v_163 = t;
  t = i_79;
  t = map_1_0(t_1, t);
  t = v_163;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_20 = ATgetArgument(t, 0);
      if(((ATgetType(x_20) != AT_LIST) || !(ATisEmpty(x_20))))
        _fail(t);
      {
        ATerm y_20 = ATgetArgument(t, 1);
        if(((ATgetType(y_20) != AT_LIST) || !(ATisEmpty(y_20))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm i_164 = NULL,l_164 = NULL,m_164 = NULL,n_164 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_20 = ATgetArgument(t, 0);
      if(((ATgetType(z_20) == AT_LIST) && !(ATisEmpty(z_20))))
        {
          i_164 = ATgetFirst((ATermList) z_20);
          l_164 = (ATerm) ATgetNext((ATermList) z_20);
        }
      else
        _fail(t);
      {
        ATerm a_21 = ATgetArgument(t, 1);
        if(((ATgetType(a_21) == AT_LIST) && !(ATisEmpty(a_21))))
          {
            m_164 = ATgetFirst((ATermList) a_21);
            n_164 = (ATerm) ATgetNext((ATermList) a_21);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_164, m_164), (ATerm) ATmakeAppl(sym__2, l_164, n_164));
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm o_164 = NULL,s_164 = NULL;
  if(match_cons(t, sym__2))
    {
      o_164 = ATgetArgument(t, 0);
      s_164 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_164), o_164);
  return(t);
}
static ATerm s_26 (ATerm q_145 (ATerm), ATerm n_77, ATerm o_77, ATerm y_753, ATerm t)
{
  ATerm d_164 = NULL,e_164 = NULL;
  t = SSL_explode_term(y_753);
  if(match_cons(t, sym__2))
    {
      if((n_77 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      d_164 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_77, d_164);
  {
    static ATerm g_2 (ATerm t)
    {
      ATerm v_164 = NULL,y_164 = NULL;
      if(match_cons(t, sym__2))
        {
          v_164 = ATgetArgument(t, 0);
          y_164 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_App_2, v_164, y_164);
      t = q_145(t);
      {
        ATerm b_21 = t;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_Fail_0)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = b_21;
          }
      }
      return(t);
    }
    t = genzip_4_0(x_1, y_1, a_2, g_2, t);
  }
  e_164 = t;
  t = SSL_mkterm(n_77, e_164);
  return(t);
}
static ATerm u_26 (ATerm p_145 (ATerm), ATerm i_77, ATerm a_751, ATerm t)
{
  ATerm z_164 = NULL,c_165 = NULL,d_165 = NULL;
  t = SSL_explode_term(a_751);
  if(match_cons(t, sym__2))
    {
      z_164 = ATgetArgument(t, 0);
      c_165 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_165;
  {
    static ATerm h_2 (ATerm t)
    {
      ATerm f_165 = NULL;
      f_165 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, i_77, f_165);
      t = p_145(t);
      {
        ATerm c_21 = t;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_Fail_0)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = c_21;
          }
      }
      return(t);
    }
    t = fetch_1_0(h_2, t);
  }
  d_165 = t;
  t = SSL_mkterm(z_164, d_165);
  return(t);
}
ATerm EvalAll_1_0 (ATerm j_0 (ATerm), ATerm t)
{
  ATerm o_166 = NULL,p_166 = NULL,q_166 = NULL,r_166 = NULL;
  o_166 = t;
  if(match_cons(t, sym_App_2))
    {
      p_166 = ATgetArgument(t, 0);
      r_166 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_166;
  if(match_cons(t, sym_All_1))
    {
      q_166 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm d_21 = t;
    int e_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_is_string(r_166);
        t = r_166;
        LocalPopChoice(e_21);
      }
    else
      {
        t = d_21;
        {
          ATerm x_122 = NULL,e_123 = NULL,m_123 = NULL;
          t = SSL_explode_term(r_166);
          if(match_cons(t, sym__2))
            {
              x_122 = ATgetArgument(t, 0);
              e_123 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_166;
          {
            ATerm f_21 = t;
            if((PushChoice() == 0))
              {
                ATerm u_125 = NULL;
                u_125 = t;
                t = SSL_is_string(u_125);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = f_21;
              }
          }
          t = e_123;
          {
            static ATerm i_2 (ATerm t)
            {
              ATerm v_125 = NULL;
              v_125 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, q_166, v_125);
              t = j_0(t);
              {
                ATerm g_21 = t;
                if((PushChoice() == 0))
                  {
                    if(!(match_cons(t, sym_Fail_0)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = g_21;
                  }
              }
              return(t);
            }
            t = map_1_0(i_2, t);
          }
          m_123 = t;
          t = SSL_mkterm(x_122, m_123);
        }
      }
  }
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm y_166 = NULL,z_166 = NULL,a_167 = NULL,b_167 = NULL,c_167 = NULL,d_167 = NULL;
  y_166 = t;
  if(match_cons(t, sym_SDef_3))
    {
      z_166 = ATgetArgument(t, 0);
      a_167 = ATgetArgument(t, 1);
      {
        ATerm h_21 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = a_167;
  t = foldr_3_0(k_2, l_2, m_2, t);
  b_167 = t;
  t = term_b_17;
  c_167 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_166, b_167);
  d_167 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_b_17, (ATerm)ATmakeAppl(sym__2, z_166, b_167), y_166);
  t = v_28(c_167, d_167, y_166, t);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = term_n_21;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm e_167 = NULL,f_167 = NULL;
  if(match_cons(t, sym__2))
    {
      e_167 = ATgetArgument(t, 0);
      f_167 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_27(e_167, f_167, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_o_21;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm g_167 = NULL,h_167 = NULL,i_167 = NULL,j_167 = NULL,k_167 = NULL;
  if(match_cons(t, sym_SDef_3))
    {
      g_167 = ATgetArgument(t, 0);
      h_167 = ATgetArgument(t, 1);
      {
        ATerm p_21 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = h_167;
  t = foldr_3_0(o_2, p_2, q_2, t);
  i_167 = t;
  t = term_b_17;
  j_167 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_167, i_167);
  k_167 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_17, (ATerm) ATmakeAppl(sym__2, g_167, i_167));
  t = a_27(j_167, k_167, t);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_n_21;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm l_167 = NULL,m_167 = NULL;
  if(match_cons(t, sym__2))
    {
      l_167 = ATgetArgument(t, 0);
      m_167 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_27(l_167, m_167, t);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_o_21;
  return(t);
}
static ATerm x_26 (ATerm z_145 (ATerm), ATerm y_80, ATerm v_80, ATerm w_80, ATerm t)
{
  ATerm x_166 = NULL;
  t = y_80;
  t = map_1_0(j_2, t);
  t = (ATerm) ATmakeAppl(sym_App_2, v_80, w_80);
  t = z_145(t);
  x_166 = t;
  t = y_80;
  t = map_1_0(n_2, t);
  t = x_166;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_n_21;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm r_167 = NULL,s_167 = NULL;
  if(match_cons(t, sym__2))
    {
      r_167 = ATgetArgument(t, 0);
      s_167 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_27(r_167, s_167, t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_o_21;
  return(t);
}
static ATerm y_26 (ATerm t_80, ATerm u_80, ATerm s_80, ATerm t)
{
  ATerm n_167 = NULL,o_167 = NULL,p_167 = NULL,q_167 = NULL;
  t = u_80;
  t = foldr_3_0(r_2, t_2, u_2, t);
  n_167 = t;
  t = term_q_21;
  p_167 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_21), n_167), term_s_21), t_80), term_r_21);
  q_167 = t;
  t = SSL_printnl(p_167, q_167);
  t = term_o_21;
  o_167 = t;
  t = SSL_exit(o_167);
  t = term_u_21;
  return(t);
}
static ATerm a_27 (ATerm r_58, ATerm s_58, ATerm t)
{
  ATerm v_167 = NULL,w_167 = NULL;
  v_167 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_58, s_58);
  {
    ATerm v_21 = t;
    int w_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_126 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm y_21 = ATgetArgument(t, 0);
            ATerm z_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, r_58, s_58);
        t = u_28(r_58, s_58, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm a_22 = ATgetFirst((ATermList) t);
            i_126 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = i_126;
        LocalPopChoice(w_21);
      }
    else
      {
        t = v_21;
        t = (ATerm) ATempty;
      }
  }
  w_167 = t;
  t = SSL_table_put(r_58, s_58, w_167);
  t = v_167;
  return(t);
}
static ATerm f_27 (ATerm a_59, ATerm b_59, ATerm t)
{
  ATerm d_168 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_59, b_59);
  t = u_28(a_59, b_59, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_168 = ATgetFirst((ATermList) t);
      {
        ATerm b_22 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = d_168;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_n_21;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm u_168 = NULL,v_168 = NULL;
  if(match_cons(t, sym__2))
    {
      u_168 = ATgetArgument(t, 0);
      v_168 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_27(u_168, v_168, t);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = term_o_21;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm x_168 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      x_168 = ATgetArgument(t, 0);
      t = x_168;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_168 = ATgetArgument(t, 0);
          {
            ATerm c_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = x_168;
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm h_22 = ATgetArgument(t, 0);
      if(((ATgetType(h_22) != AT_LIST) || !(ATisEmpty(h_22))))
        _fail(t);
      {
        ATerm i_22 = ATgetArgument(t, 1);
        if(((ATgetType(i_22) != AT_LIST) || !(ATisEmpty(i_22))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm b_169 = NULL,c_169 = NULL,d_169 = NULL,e_169 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_22 = ATgetArgument(t, 0);
      if(((ATgetType(j_22) == AT_LIST) && !(ATisEmpty(j_22))))
        {
          b_169 = ATgetFirst((ATermList) j_22);
          c_169 = (ATerm) ATgetNext((ATermList) j_22);
        }
      else
        _fail(t);
      {
        ATerm k_22 = ATgetArgument(t, 1);
        if(((ATgetType(k_22) == AT_LIST) && !(ATisEmpty(k_22))))
          {
            d_169 = ATgetFirst((ATermList) k_22);
            e_169 = (ATerm) ATgetNext((ATermList) k_22);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_169, d_169), (ATerm) ATmakeAppl(sym__2, c_169, e_169));
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm f_169 = NULL,g_169 = NULL;
  if(match_cons(t, sym__2))
    {
      f_169 = ATgetArgument(t, 0);
      g_169 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_169), f_169);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm h_169 = NULL,i_169 = NULL,j_169 = NULL,k_169 = NULL,l_169 = NULL;
  if(match_cons(t, sym__2))
    {
      h_169 = ATgetArgument(t, 0);
      i_169 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_b_17;
  j_169 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_169, term_n_21);
  k_169 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, h_169, (ATerm)ATempty, i_169);
  l_169 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_b_17, (ATerm)ATmakeAppl(sym__2, h_169, term_n_21), (ATerm) ATmakeAppl(sym_SDef_3, h_169, (ATerm)ATempty, i_169));
  t = v_28(j_169, k_169, l_169, t);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm m_169 = NULL,n_169 = NULL,o_169 = NULL;
  m_169 = t;
  t = term_b_17;
  n_169 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_169, term_n_21);
  o_169 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_17, (ATerm) ATmakeAppl(sym__2, m_169, term_n_21));
  t = a_27(n_169, o_169, t);
  return(t);
}
static ATerm h_27 (ATerm y_145 (ATerm), ATerm i_80, ATerm k_80, ATerm m_80, ATerm t)
{
  ATerm n_168 = NULL,o_168 = NULL,p_168 = NULL,q_168 = NULL,r_168 = NULL,s_168 = NULL,t_168 = NULL;
  t = k_80;
  t = foldr_3_0(v_2, w_2, x_2, t);
  r_168 = t;
  t = term_b_17;
  s_168 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_80, r_168);
  t_168 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_17, (ATerm) ATmakeAppl(sym__2, i_80, r_168));
  t = f_27(s_168, t_168, t);
  if(match_cons(t, sym_SDef_3))
    {
      if((i_80 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      n_168 = ATgetArgument(t, 1);
      o_168 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = n_168;
  t = map_1_0(y_2, t);
  q_168 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_168, k_80);
  t = genzip_4_0(z_2, a_3, c_3, d_3, t);
  t = (ATerm) ATmakeAppl(sym_App_2, o_168, m_80);
  t = y_145(t);
  p_168 = t;
  t = q_168;
  t = map_1_0(e_3, t);
  t = p_168;
  return(t);
}
static ATerm i_27 (ATerm x_145 (ATerm), ATerm e_80, ATerm f_80, ATerm g_80, ATerm t)
{
  ATerm n_22 = t;
  int r_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_App_2, e_80, g_80);
      t = x_145(t);
      {
        ATerm y_22 = t;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_Fail_0)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = y_22;
          }
      }
      LocalPopChoice(r_22);
    }
  else
    {
      t = n_22;
      {
        ATerm z_22 = t;
        int a_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_App_2, f_80, g_80);
            t = x_145(t);
            {
              ATerm b_23 = t;
              if((PushChoice() == 0))
                {
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = b_23;
                }
            }
            LocalPopChoice(a_23);
          }
        else
          {
            t = z_22;
            t = term_u_21;
          }
      }
    }
  return(t);
}
static ATerm j_27 (ATerm w_145 (ATerm), ATerm a_80, ATerm b_80, ATerm c_80, ATerm t)
{
  ATerm c_23 = t;
  int d_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_App_2, a_80, c_80);
      t = w_145(t);
      {
        ATerm g_23 = t;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_Fail_0)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = g_23;
          }
      }
      LocalPopChoice(d_23);
    }
  else
    {
      t = c_23;
      {
        ATerm h_23 = t;
        int i_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_App_2, b_80, c_80);
            t = w_145(t);
            {
              ATerm j_23 = t;
              if((PushChoice() == 0))
                {
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = j_23;
                }
            }
            LocalPopChoice(i_23);
          }
        else
          {
            t = h_23;
            t = term_u_21;
          }
      }
    }
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = term_k_23;
  return(t);
}
ATerm eval_0_0 (ATerm t)
{
  ATerm w_170 = NULL,r_170 = NULL,s_170 = NULL,t_170 = NULL;
  t_170 = t;
  if(match_cons(t, sym_App_2))
    {
      r_170 = ATgetArgument(t, 0);
      s_170 = ATgetArgument(t, 1);
      {
        ATerm l_23 = t;
        int m_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_127 = NULL,p_127 = NULL,i_8 = NULL;
            t = SSLgetAnnotations(t_170);
            b_127 = t;
            t = s_170;
            t = eval_0_0(t);
            p_127 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, r_170, p_127);
            i_8 = t;
            t = SSLsetAnnotations(i_8, b_127);
            LocalPopChoice(m_23);
          }
        else
          {
            t = l_23;
            t = t_170;
          }
      }
    }
  else
    {
      t = t_170;
    }
  w_170 = t;
  {
    ATerm o_23 = t;
    int p_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_19;
        t = get_config_0_0(t);
        t = w_170;
        t = debug_1_0(f_3, t);
        LocalPopChoice(p_23);
      }
    else
      {
        t = o_23;
        t = w_170;
      }
  }
  {
    ATerm q_23 = t;
    int s_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_23 = t;
        int b_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_171 = NULL,e_171 = NULL,f_171 = NULL,g_171 = NULL,h_171 = NULL,i_171 = NULL;
            e_171 = t;
            if(match_cons(t, sym_App_2))
              {
                f_171 = ATgetArgument(t, 0);
                i_171 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = i_171;
            if(match_cons(t, sym_Fail_0))
              {
                t = f_171;
                if(match_cons(t, sym_Id_0))
                  {
                    t = i_171;
                  }
                else
                  {
                    if(match_cons(t, sym_Fail_0))
                      {
                        t = term_u_21;
                      }
                    else
                      {
                        ATerm c_24 = t;
                        int d_24 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Test_1))
                              {
                                ATerm e_24 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(d_24);
                            t = term_u_21;
                          }
                        else
                          {
                            t = c_24;
                            {
                              ATerm f_24 = t;
                              int g_24 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_Not_1))
                                    {
                                      ATerm h_24 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(g_24);
                                  t = term_u_21;
                                }
                              else
                                {
                                  t = f_24;
                                  {
                                    ATerm i_24 = t;
                                    int j_24 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            ATerm k_24 = ATgetArgument(t, 0);
                                            ATerm l_24 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        LocalPopChoice(j_24);
                                        t = term_u_21;
                                      }
                                    else
                                      {
                                        t = i_24;
                                        {
                                          ATerm m_24 = t;
                                          int n_24 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              if(match_cons(t, sym_Choice_2))
                                                {
                                                  ATerm o_24 = ATgetArgument(t, 0);
                                                  ATerm q_24 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              LocalPopChoice(n_24);
                                              t = term_u_21;
                                            }
                                          else
                                            {
                                              t = m_24;
                                              {
                                                ATerm r_24 = t;
                                                int s_24 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_LChoice_2))
                                                      {
                                                        ATerm t_24 = ATgetArgument(t, 0);
                                                        ATerm u_24 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(s_24);
                                                    t = term_u_21;
                                                  }
                                                else
                                                  {
                                                    t = r_24;
                                                    {
                                                      ATerm v_24 = t;
                                                      int x_24 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Call_2))
                                                            {
                                                              g_171 = ATgetArgument(t, 0);
                                                              {
                                                                ATerm y_24 = ATgetArgument(t, 1);
                                                              }
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(x_24);
                                                          t = g_171;
                                                          {
                                                            ATerm z_24 = t;
                                                            int a_25 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                if(match_cons(t, sym_SVar_1))
                                                                  {
                                                                    ATerm e_25 = ATgetArgument(t, 0);
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                LocalPopChoice(a_25);
                                                                t = term_u_21;
                                                              }
                                                            else
                                                              {
                                                                t = z_24;
                                                                t = term_u_21;
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = v_24;
                                                          {
                                                            ATerm f_25 = t;
                                                            int g_25 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                if(match_cons(t, sym_Let_2))
                                                                  {
                                                                    ATerm h_25 = ATgetArgument(t, 0);
                                                                    ATerm k_25 = ATgetArgument(t, 1);
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                LocalPopChoice(g_25);
                                                                t = term_u_21;
                                                              }
                                                            else
                                                              {
                                                                t = f_25;
                                                                {
                                                                  ATerm l_25 = t;
                                                                  int q_25 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      if(match_cons(t, sym_Rec_2))
                                                                        {
                                                                          ATerm s_25 = ATgetArgument(t, 0);
                                                                          ATerm v_25 = ATgetArgument(t, 1);
                                                                        }
                                                                      else
                                                                        _fail(t);
                                                                      LocalPopChoice(q_25);
                                                                      t = term_u_21;
                                                                    }
                                                                  else
                                                                    {
                                                                      t = l_25;
                                                                      t = term_u_21;
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
            else
              {
                t = f_171;
                if(match_cons(t, sym_Id_0))
                  {
                    t = i_171;
                  }
                else
                  {
                    if(match_cons(t, sym_Fail_0))
                      {
                        t = term_u_21;
                      }
                    else
                      {
                        if(match_cons(t, sym_Test_1))
                          {
                            g_171 = ATgetArgument(t, 0);
                            t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Seq_2, g_171, (ATerm) ATmakeAppl(sym_Build_1, i_171)), i_171);
                            {
                              ATerm c_26 = t;
                              int d_26 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = eval_0_0(t);
                                  LocalPopChoice(d_26);
                                }
                              else
                                {
                                  t = c_26;
                                }
                            }
                          }
                        else
                          {
                            if(match_cons(t, sym_Not_1))
                              {
                                g_171 = ATgetArgument(t, 0);
                                t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Not_1, g_171), i_171);
                                {
                                  ATerm e_26 = t;
                                  int g_26 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = (ATerm) ATmakeAppl(sym_App_2, g_171, i_171);
                                      t = eval_0_0(t);
                                      if(!(match_cons(t, sym_Fail_0)))
                                        _fail(t);
                                      t = i_171;
                                      LocalPopChoice(g_26);
                                    }
                                  else
                                    {
                                      t = e_26;
                                      t = term_u_21;
                                    }
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_Seq_2))
                                  {
                                    g_171 = ATgetArgument(t, 0);
                                    h_171 = ATgetArgument(t, 1);
                                    t = (ATerm) ATmakeAppl(sym_App_2, h_171, (ATerm) ATmakeAppl(sym_App_2, g_171, i_171));
                                    {
                                      ATerm h_26 = t;
                                      int j_26 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = eval_0_0(t);
                                          LocalPopChoice(j_26);
                                        }
                                      else
                                        {
                                          t = h_26;
                                        }
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Choice_2))
                                      {
                                        g_171 = ATgetArgument(t, 0);
                                        h_171 = ATgetArgument(t, 1);
                                        t = e_171;
                                        t = j_27(eval_0_0, g_171, h_171, i_171, t);
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_LChoice_2))
                                          {
                                            g_171 = ATgetArgument(t, 0);
                                            h_171 = ATgetArgument(t, 1);
                                            t = e_171;
                                            t = i_27(eval_0_0, g_171, h_171, i_171, t);
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Call_2))
                                              {
                                                g_171 = ATgetArgument(t, 0);
                                                h_171 = ATgetArgument(t, 1);
                                                t = g_171;
                                                if(match_cons(t, sym_SVar_1))
                                                  {
                                                    d_171 = ATgetArgument(t, 0);
                                                  }
                                                else
                                                  _fail(t);
                                                {
                                                  ATerm m_26 = t;
                                                  int o_26 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = e_171;
                                                      t = h_27(eval_0_0, d_171, h_171, i_171, t);
                                                      LocalPopChoice(o_26);
                                                    }
                                                  else
                                                    {
                                                      t = m_26;
                                                      t = e_171;
                                                      t = y_26(d_171, h_171, i_171, t);
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Let_2))
                                                  {
                                                    g_171 = ATgetArgument(t, 0);
                                                    h_171 = ATgetArgument(t, 1);
                                                    t = e_171;
                                                    t = x_26(eval_0_0, g_171, h_171, i_171, t);
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Rec_2))
                                                      {
                                                        g_171 = ATgetArgument(t, 0);
                                                        h_171 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, g_171, (ATerm)ATempty, h_171)), h_171), i_171);
                                                    {
                                                      ATerm v_26 = t;
                                                      int w_26 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = eval_0_0(t);
                                                          LocalPopChoice(w_26);
                                                        }
                                                      else
                                                        {
                                                          t = v_26;
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
            LocalPopChoice(b_24);
          }
        else
          {
            t = u_23;
            {
              ATerm z_26 = t;
              int b_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_27 = t;
                  int d_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = EvalAll_1_0(eval_0_0, t);
                      LocalPopChoice(d_27);
                    }
                  else
                    {
                      t = c_27;
                      {
                        ATerm j_172 = NULL,k_172 = NULL,l_172 = NULL;
                        if(match_cons(t, sym_App_2))
                          {
                            j_172 = ATgetArgument(t, 0);
                            l_172 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = j_172;
                        if(match_cons(t, sym_All_1))
                          {
                            k_172 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = term_u_21;
                      }
                    }
                  LocalPopChoice(b_27);
                }
              else
                {
                  t = z_26;
                  {
                    ATerm e_27 = t;
                    int k_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm z_172 = NULL,a_173 = NULL,b_173 = NULL,c_173 = NULL,d_173 = NULL;
                        a_173 = t;
                        if(match_cons(t, sym_App_2))
                          {
                            b_173 = ATgetArgument(t, 0);
                            d_173 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = b_173;
                        if(match_cons(t, sym_One_1))
                          {
                            c_173 = ATgetArgument(t, 0);
                            {
                              ATerm l_27 = t;
                              int n_27 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = a_173;
                                  t = u_26(eval_0_0, c_173, d_173, t);
                                  LocalPopChoice(n_27);
                                }
                              else
                                {
                                  t = l_27;
                                  t = term_u_21;
                                }
                            }
                          }
                        else
                          {
                            if(match_cons(t, sym_Cong_2))
                              {
                                c_173 = ATgetArgument(t, 0);
                                z_172 = ATgetArgument(t, 1);
                                {
                                  ATerm o_27 = t;
                                  int r_27 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = a_173;
                                      t = s_26(eval_0_0, c_173, z_172, d_173, t);
                                      LocalPopChoice(r_27);
                                    }
                                  else
                                    {
                                      t = o_27;
                                      t = SSL_explode_term(d_173);
                                      if(match_cons(t, sym__2))
                                        {
                                          ATerm v_27 = ATgetArgument(t, 0);
                                          ATerm x_27 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = term_u_21;
                                    }
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    c_173 = ATgetArgument(t, 0);
                                    z_172 = ATgetArgument(t, 1);
                                    t = a_173;
                                    t = q_26(eval_0_0, c_173, z_172, d_173, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Match_1))
                                      {
                                        c_173 = ATgetArgument(t, 0);
                                        {
                                          ATerm y_27 = t;
                                          int a_28 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = a_173;
                                              t = p_26(c_173, d_173, t);
                                              LocalPopChoice(a_28);
                                            }
                                          else
                                            {
                                              t = y_27;
                                              t = term_u_21;
                                            }
                                        }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Build_1))
                                          {
                                            c_173 = ATgetArgument(t, 0);
                                            t = c_173;
                                            t = EvalTerm_0_0(t);
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Where_1))
                                              {
                                                c_173 = ATgetArgument(t, 0);
                                              }
                                            else
                                              _fail(t);
                                            {
                                              ATerm b_28 = t;
                                              int c_28 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = (ATerm) ATmakeAppl(sym_App_2, c_173, d_173);
                                                  t = eval_0_0(t);
                                                  {
                                                    ATerm d_28 = t;
                                                    if((PushChoice() == 0))
                                                      {
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        PopChoice();
                                                        _fail(t);
                                                      }
                                                    else
                                                      {
                                                        t = d_28;
                                                      }
                                                  }
                                                  t = d_173;
                                                  LocalPopChoice(c_28);
                                                }
                                              else
                                                {
                                                  t = b_28;
                                                  t = term_u_21;
                                                }
                                            }
                                          }
                                      }
                                  }
                              }
                          }
                        LocalPopChoice(k_27);
                      }
                    else
                      {
                        t = e_27;
                        {
                          ATerm f_28 = t;
                          int g_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = EvalPrim_0_0(t);
                              LocalPopChoice(g_28);
                            }
                          else
                            {
                              t = f_28;
                              {
                                ATerm y_173 = NULL,z_173 = NULL,a_174 = NULL,b_174 = NULL;
                                if(match_cons(t, sym_App_2))
                                  {
                                    y_173 = ATgetArgument(t, 0);
                                    b_174 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = y_173;
                                if(match_cons(t, sym_Prim_2))
                                  {
                                    z_173 = ATgetArgument(t, 0);
                                    a_174 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = term_u_21;
                              }
                            }
                        }
                      }
                  }
                }
            }
          }
        LocalPopChoice(s_23);
      }
    else
      {
        t = q_23;
      }
  }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_h_28;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_n_28;
  return(t);
}
static ATerm j_28 (ATerm p_27, ATerm q_27, ATerm t)
{
  ATerm k_189 = NULL,t_189 = NULL,n_189 = NULL;
  t = p_27;
  t = desugar_0_0(t);
  k_189 = t;
  t = (ATerm) ATmakeAppl(sym_App_2, k_189, q_27);
  {
    ATerm q_28 = t;
    int r_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_19;
        t = get_config_0_0(t);
        t = (ATerm) ATmakeAppl(sym_App_2, k_189, q_27);
        t = debug_1_0(g_3, t);
        LocalPopChoice(r_28);
      }
    else
      {
        t = q_28;
      }
  }
  t = eval_0_0(t);
  n_189 = t;
  {
    ATerm s_28 = t;
    int w_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_28;
        t = get_config_0_0(t);
        t = n_189;
        t = debug_1_0(j_3, t);
        LocalPopChoice(w_28);
      }
    else
      {
        t = s_28;
        t = n_189;
      }
  }
  t_189 = t;
  if(match_cons(t, sym_Fail_0))
    {
      ATerm z_28 = t;
      int b_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_158 = NULL,b_158 = NULL,c_158 = NULL;
          t = term_q_21;
          b_158 = t;
          t = (ATerm) ATinsert(ATempty, term_c_29);
          c_158 = t;
          t = SSL_printnl(b_158, c_158);
          t = term_o_21;
          a_158 = t;
          t = SSL_exit(a_158);
          t = (ATerm) ATinsert(ATempty, term_c_29);
          LocalPopChoice(b_29);
        }
      else
        {
          t = z_28;
          t = t_189;
        }
    }
  else
    {
      t = t_189;
    }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm u_1 = NULL;
  ATerm d_29 = t;
  int e_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_1 = ATgetArgument(t, 0);
          {
            ATerm l_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_29);
      t = u_1;
    }
  else
    {
      t = d_29;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_1 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_1;
    }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm z_1 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_1);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm m_29 = t;
  int n_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(n_29);
    }
  else
    {
      t = m_29;
      {
        ATerm b_2 = NULL,c_2 = NULL,d_2 = NULL,f_2 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            b_2 = ATgetArgument(t, 0);
            t = b_2;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                b_2 = ATgetArgument(t, 0);
                c_2 = ATgetArgument(t, 1);
                d_2 = ATgetArgument(t, 2);
                f_2 = ATgetArgument(t, 3);
                t = d_2;
                t = map_1_0(r_3, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    b_2 = ATgetArgument(t, 0);
                    c_2 = ATgetArgument(t, 1);
                    d_2 = ATgetArgument(t, 2);
                    f_2 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = d_2;
                t = map_1_0(s_3, t);
              }
          }
      }
    }
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm s_2 = NULL;
  ATerm o_29 = t;
  int q_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_2 = ATgetArgument(t, 0);
          {
            ATerm s_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_29);
      t = s_2;
    }
  else
    {
      t = o_29;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_2 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_2;
    }
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm b_3 = NULL;
  ATerm t_29 = t;
  int u_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_3 = ATgetArgument(t, 0);
          {
            ATerm v_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_29);
      t = b_3;
    }
  else
    {
      t = t_29;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_3;
    }
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm i_3 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_3);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm x_29 = t;
  int y_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(y_29);
    }
  else
    {
      t = x_29;
      {
        ATerm k_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            k_3 = ATgetArgument(t, 0);
            t = k_3;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                k_3 = ATgetArgument(t, 0);
                l_3 = ATgetArgument(t, 1);
                m_3 = ATgetArgument(t, 2);
                n_3 = ATgetArgument(t, 3);
                t = m_3;
                t = map_1_0(w_3, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    k_3 = ATgetArgument(t, 0);
                    l_3 = ATgetArgument(t, 1);
                    m_3 = ATgetArgument(t, 2);
                    n_3 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = m_3;
                t = map_1_0(x_3, t);
              }
          }
      }
    }
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm v_3 = NULL;
  ATerm b_30 = t;
  int c_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_3 = ATgetArgument(t, 0);
          {
            ATerm d_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_30);
      t = v_3;
    }
  else
    {
      t = b_30;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_3;
    }
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm e_4 = NULL;
  ATerm f_30 = t;
  int j_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_4 = ATgetArgument(t, 0);
          {
            ATerm k_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_30);
      t = e_4;
    }
  else
    {
      t = f_30;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_4;
    }
  return(t);
}
ATerm RDtoSD_0_0 (ATerm t)
{
  ATerm b_1 = NULL,e_1 = NULL,f_1 = NULL,g_1 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      e_1 = ATgetArgument(t, 0);
      f_1 = ATgetArgument(t, 1);
      g_1 = ATgetArgument(t, 2);
      b_1 = ATgetArgument(t, 3);
      {
        ATerm o_1 = NULL,p_1 = NULL,q_1 = NULL;
        t = g_1;
        t = map_1_0(o_3, t);
        o_1 = t;
        t = b_1;
        t = free_vars_3_0(p_3, q_3, tboundin_3_0, t);
        q_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_1, o_1);
        t = diff_0_0(t);
        p_1 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, e_1, f_1, g_1, (ATerm) ATmakeAppl(sym_Scope_2, p_1, (ATerm) ATmakeAppl(sym_SRule_1, b_1)));
      }
    }
  else
    {
      ATerm h_3 = NULL;
      if(match_cons(t, sym_RDef_3))
        {
          e_1 = ATgetArgument(t, 0);
          f_1 = ATgetArgument(t, 1);
          g_1 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = g_1;
      t = free_vars_3_0(t_3, u_3, tboundin_3_0, t);
      h_3 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, e_1, f_1, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, h_3, (ATerm) ATmakeAppl(sym_SRule_1, g_1)));
    }
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_l_30;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = bottomup_1_0(a_4, t);
  t = RDtoSD_0_0(t);
  t = desugar_0_0(t);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm u_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL,y_4 = NULL;
  y_4 = t;
  if(match_cons(t, sym_LRule_1))
    {
      x_4 = ATgetArgument(t, 0);
      t = x_4;
      if(match_cons(t, sym_Rule_3))
        {
          u_4 = ATgetArgument(t, 0);
          v_4 = ATgetArgument(t, 1);
          w_4 = ATgetArgument(t, 2);
          {
            ATerm m_30 = t;
            int n_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_5 = NULL;
                t = u_4;
                t = free_vars_3_0(b_4, c_4, tboundin_3_0, t);
                c_5 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, c_5, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, u_4, v_4, w_4)));
                LocalPopChoice(n_30);
              }
            else
              {
                t = m_30;
                t = y_4;
              }
          }
        }
      else
        {
          t = y_4;
        }
    }
  else
    {
      if(match_cons(t, sym_ScopeDefault_1))
        {
          x_4 = ATgetArgument(t, 0);
          {
            ATerm o_30 = t;
            int p_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_6 = NULL;
                t = x_4;
                t = free_vars_3_0(g_4, h_4, tboundin_3_0, t);
                f_6 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, f_6, x_4);
                LocalPopChoice(p_30);
              }
            else
              {
                t = o_30;
                t = y_4;
              }
          }
        }
      else
        {
          t = y_4;
        }
    }
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm d_5 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_5);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm q_30 = t;
  int s_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(s_30);
    }
  else
    {
      t = q_30;
      {
        ATerm f_5 = NULL,g_5 = NULL,h_5 = NULL,i_5 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            f_5 = ATgetArgument(t, 0);
            t = f_5;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                f_5 = ATgetArgument(t, 0);
                g_5 = ATgetArgument(t, 1);
                h_5 = ATgetArgument(t, 2);
                i_5 = ATgetArgument(t, 3);
                t = h_5;
                t = map_1_0(d_4, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    f_5 = ATgetArgument(t, 0);
                    g_5 = ATgetArgument(t, 1);
                    h_5 = ATgetArgument(t, 2);
                    i_5 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = h_5;
                t = map_1_0(f_4, t);
              }
          }
      }
    }
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm q_5 = NULL;
  ATerm t_30 = t;
  int u_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_5 = ATgetArgument(t, 0);
          {
            ATerm v_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_30);
      t = q_5;
    }
  else
    {
      t = t_30;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_5;
    }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm z_5 = NULL;
  ATerm x_30 = t;
  int y_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_5 = ATgetArgument(t, 0);
          {
            ATerm b_31 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_30);
      t = z_5;
    }
  else
    {
      t = x_30;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_5;
    }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm g_6 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_6);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm c_31 = t;
  int e_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(e_31);
    }
  else
    {
      t = c_31;
      {
        ATerm i_6 = NULL,j_6 = NULL,k_6 = NULL,l_6 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            i_6 = ATgetArgument(t, 0);
            t = i_6;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                i_6 = ATgetArgument(t, 0);
                j_6 = ATgetArgument(t, 1);
                k_6 = ATgetArgument(t, 2);
                l_6 = ATgetArgument(t, 3);
                t = k_6;
                t = map_1_0(i_4, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    i_6 = ATgetArgument(t, 0);
                    j_6 = ATgetArgument(t, 1);
                    k_6 = ATgetArgument(t, 2);
                    l_6 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = k_6;
                t = map_1_0(j_4, t);
              }
          }
      }
    }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm t_6 = NULL;
  ATerm f_31 = t;
  int h_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_6 = ATgetArgument(t, 0);
          {
            ATerm i_31 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_31);
      t = t_6;
    }
  else
    {
      t = f_31;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_6;
    }
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm c_7 = NULL;
  ATerm j_31 = t;
  int q_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_7 = ATgetArgument(t, 0);
          {
            ATerm r_31 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_31);
      t = c_7;
    }
  else
    {
      t = j_31;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_7;
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_t_31;
  return(t);
}
static ATerm w_24 (ATerm k_150, ATerm t)
{
  ATerm h_7 = NULL;
  t = k_150;
  {
    ATerm u_31 = t;
    int v_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_19;
        t = get_config_0_0(t);
        t = k_150;
        t = debug_1_0(y_3, t);
        LocalPopChoice(v_31);
      }
    else
      {
        t = u_31;
      }
  }
  t = map_1_0(z_3, t);
  h_7 = t;
  {
    ATerm w_31 = t;
    int x_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_19;
        t = get_config_0_0(t);
        t = h_7;
        t = debug_1_0(k_4, t);
        LocalPopChoice(x_31);
      }
    else
      {
        t = w_31;
        t = h_7;
      }
  }
  t = define_strategies_0_0(t);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_31 = ATgetArgument(t, 0);
      if(((ATgetType(y_31) != AT_LIST) || !(ATisEmpty(y_31))))
        _fail(t);
      {
        ATerm z_31 = ATgetArgument(t, 1);
        if(((ATgetType(z_31) != AT_LIST) || !(ATisEmpty(z_31))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm w_0 = NULL,x_0 = NULL,y_0 = NULL,z_0 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_32 = ATgetArgument(t, 0);
      if(((ATgetType(a_32) == AT_LIST) && !(ATisEmpty(a_32))))
        {
          w_0 = ATgetFirst((ATermList) a_32);
          x_0 = (ATerm) ATgetNext((ATermList) a_32);
        }
      else
        _fail(t);
      {
        ATerm c_32 = ATgetArgument(t, 1);
        if(((ATgetType(c_32) == AT_LIST) && !(ATisEmpty(c_32))))
          {
            y_0 = ATgetFirst((ATermList) c_32);
            z_0 = (ATerm) ATgetNext((ATermList) c_32);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_0, y_0), (ATerm) ATmakeAppl(sym__2, x_0, z_0));
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm a_1 = NULL,c_1 = NULL;
  if(match_cons(t, sym__2))
    {
      a_1 = ATgetArgument(t, 0);
      c_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_1), a_1);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm i_1 = NULL,r_1 = NULL,v_1 = NULL,w_1 = NULL,e_2 = NULL;
  if(match_cons(t, sym__2))
    {
      i_1 = ATgetArgument(t, 0);
      e_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_1;
  {
    ATerm d_32 = t;
    int e_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm f_32 = ATgetArgument(t, 0);
            r_1 = ATgetArgument(t, 1);
            v_1 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(e_32);
        t = (ATerm) ATmakeAppl(sym_SDef_3, e_2, r_1, v_1);
      }
    else
      {
        t = d_32;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm g_32 = ATgetArgument(t, 0);
            r_1 = ATgetArgument(t, 1);
            v_1 = ATgetArgument(t, 2);
            w_1 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, e_2, r_1, v_1, w_1);
      }
  }
  return(t);
}
static ATerm p_4 (ATerm t)
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
static ATerm r_4 (ATerm t)
{
  ATerm p_7 = NULL,q_7 = NULL,r_7 = NULL,s_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_32 = ATgetArgument(t, 0);
      if(((ATgetType(j_32) == AT_LIST) && !(ATisEmpty(j_32))))
        {
          p_7 = ATgetFirst((ATermList) j_32);
          q_7 = (ATerm) ATgetNext((ATermList) j_32);
        }
      else
        _fail(t);
      {
        ATerm k_32 = ATgetArgument(t, 1);
        if(((ATgetType(k_32) == AT_LIST) && !(ATisEmpty(k_32))))
          {
            r_7 = ATgetFirst((ATermList) k_32);
            s_7 = (ATerm) ATgetNext((ATermList) k_32);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_7, r_7), (ATerm) ATmakeAppl(sym__2, q_7, s_7));
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm t_7 = NULL,u_7 = NULL;
  if(match_cons(t, sym__2))
    {
      t_7 = ATgetArgument(t, 0);
      u_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_7), t_7);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm w_7 = NULL,u_12 = NULL,v_12 = NULL;
  if(match_cons(t, sym__2))
    {
      w_7 = ATgetArgument(t, 0);
      v_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_7;
  {
    ATerm m_32 = t;
    int n_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm o_32 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(n_32);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, v_12);
      }
    else
      {
        t = m_32;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm p_32 = ATgetArgument(t, 0);
            u_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, v_12, u_12);
      }
  }
  return(t);
}
static ATerm z_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_32 = ATgetArgument(t, 0);
      if(((ATgetType(r_32) != AT_LIST) || !(ATisEmpty(r_32))))
        _fail(t);
      {
        ATerm s_32 = ATgetArgument(t, 1);
        if(((ATgetType(s_32) != AT_LIST) || !(ATisEmpty(s_32))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm m_18 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_32 = ATgetArgument(t, 0);
      if(((ATgetType(v_32) == AT_LIST) && !(ATisEmpty(v_32))))
        {
          m_18 = ATgetFirst((ATermList) v_32);
          i_19 = (ATerm) ATgetNext((ATermList) v_32);
        }
      else
        _fail(t);
      {
        ATerm w_32 = ATgetArgument(t, 1);
        if(((ATgetType(w_32) == AT_LIST) && !(ATisEmpty(w_32))))
          {
            j_19 = ATgetFirst((ATermList) w_32);
            k_19 = (ATerm) ATgetNext((ATermList) w_32);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_18, j_19), (ATerm) ATmakeAppl(sym__2, i_19, k_19));
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm l_19 = NULL,m_19 = NULL;
  if(match_cons(t, sym__2))
    {
      l_19 = ATgetArgument(t, 0);
      m_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_19), l_19);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm w_19 = NULL,d_20 = NULL,o_20 = NULL;
  if(match_cons(t, sym__2))
    {
      w_19 = ATgetArgument(t, 0);
      o_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_19;
  {
    ATerm x_32 = t;
    int y_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm z_32 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(y_32);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, o_20);
      }
    else
      {
        t = x_32;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm b_33 = ATgetArgument(t, 0);
            d_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, o_20, d_20);
      }
  }
  return(t);
}
static ATerm j_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_33 = ATgetArgument(t, 0);
      if(((ATgetType(c_33) != AT_LIST) || !(ATisEmpty(c_33))))
        _fail(t);
      {
        ATerm d_33 = ATgetArgument(t, 1);
        if(((ATgetType(d_33) != AT_LIST) || !(ATisEmpty(d_33))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm o_22 = NULL,p_22 = NULL,q_22 = NULL,t_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_33 = ATgetArgument(t, 0);
      if(((ATgetType(e_33) == AT_LIST) && !(ATisEmpty(e_33))))
        {
          o_22 = ATgetFirst((ATermList) e_33);
          p_22 = (ATerm) ATgetNext((ATermList) e_33);
        }
      else
        _fail(t);
      {
        ATerm f_33 = ATgetArgument(t, 1);
        if(((ATgetType(f_33) == AT_LIST) && !(ATisEmpty(f_33))))
          {
            q_22 = ATgetFirst((ATermList) f_33);
            t_22 = (ATerm) ATgetNext((ATermList) f_33);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_22, q_22), (ATerm) ATmakeAppl(sym__2, p_22, t_22));
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm x_22 = NULL,e_23 = NULL;
  if(match_cons(t, sym__2))
    {
      x_22 = ATgetArgument(t, 0);
      e_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_23), x_22);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm n_23 = NULL,t_23 = NULL,a_24 = NULL;
  if(match_cons(t, sym__2))
    {
      n_23 = ATgetArgument(t, 0);
      a_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_23;
  {
    ATerm g_33 = t;
    int h_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm i_33 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(h_33);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, a_24);
      }
    else
      {
        t = g_33;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm j_33 = ATgetArgument(t, 0);
            t_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, a_24, t_23);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm z_144 (ATerm), ATerm t)
{
  ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL;
  m_12 = t;
  if(match_cons(t, sym_Let_2))
    {
      n_12 = ATgetArgument(t, 0);
      o_12 = ATgetArgument(t, 1);
      {
        ATerm q_0 = NULL,t_0 = NULL,u_0 = NULL,k_8 = NULL;
        t = SSLgetAnnotations(m_12);
        q_0 = t;
        t = n_12;
        t = z_144(t);
        u_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_12, u_0);
        t = genzip_4_0(l_4, m_4, n_4, o_4, t);
        t_0 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, t_0, o_12);
        k_8 = t;
        t = SSLsetAnnotations(k_8, q_0);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          n_12 = ATgetArgument(t, 0);
          o_12 = ATgetArgument(t, 1);
          k_12 = ATgetArgument(t, 2);
          {
            ATerm q_4 = NULL,m_7 = NULL,n_7 = NULL,l_8 = NULL;
            t = SSLgetAnnotations(m_12);
            q_4 = t;
            t = o_12;
            t = z_144(t);
            n_7 = t;
            t = (ATerm) ATmakeAppl(sym__2, o_12, n_7);
            t = genzip_4_0(p_4, r_4, s_4, t_4, t);
            m_7 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, n_12, m_7, k_12);
            l_8 = t;
            t = SSLsetAnnotations(l_8, q_4);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              n_12 = ATgetArgument(t, 0);
              o_12 = ATgetArgument(t, 1);
              k_12 = ATgetArgument(t, 2);
              l_12 = ATgetArgument(t, 3);
              {
                ATerm n_17 = NULL,j_18 = NULL,k_18 = NULL,m_8 = NULL;
                t = SSLgetAnnotations(m_12);
                n_17 = t;
                t = o_12;
                t = z_144(t);
                k_18 = t;
                t = (ATerm) ATmakeAppl(sym__2, o_12, k_18);
                t = genzip_4_0(z_4, a_5, b_5, e_5, t);
                j_18 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, n_12, j_18, k_12, l_12);
                m_8 = t;
                t = SSLsetAnnotations(m_8, n_17);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  n_12 = ATgetArgument(t, 0);
                  o_12 = ATgetArgument(t, 1);
                  k_12 = ATgetArgument(t, 2);
                  l_12 = ATgetArgument(t, 3);
                  {
                    ATerm e_22 = NULL,l_22 = NULL,m_22 = NULL,n_8 = NULL;
                    t = SSLgetAnnotations(m_12);
                    e_22 = t;
                    t = o_12;
                    t = z_144(t);
                    m_22 = t;
                    t = (ATerm) ATmakeAppl(sym__2, o_12, m_22);
                    t = genzip_4_0(j_5, k_5, l_5, m_5, t);
                    l_22 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, n_12, l_22, k_12, l_12);
                    n_8 = t;
                    t = SSLsetAnnotations(n_8, e_22);
                  }
                }
              else
                {
                  ATerm j_25 = NULL,m_25 = NULL,o_8 = NULL;
                  if(match_cons(t, sym_Rec_2))
                    {
                      n_12 = ATgetArgument(t, 0);
                      o_12 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(m_12);
                  j_25 = t;
                  t = n_12;
                  t = z_144(t);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      m_25 = ATgetFirst((ATermList) t);
                      {
                        ATerm k_33 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Rec_2, m_25, o_12);
                  o_8 = t;
                  t = SSLsetAnnotations(o_8, j_25);
                }
            }
        }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm a_145 (ATerm), ATerm b_145 (ATerm), ATerm c_145 (ATerm), ATerm t)
{
  ATerm s_14 = NULL,t_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL;
  u_14 = t;
  if(match_cons(t, sym_Let_2))
    {
      v_14 = ATgetArgument(t, 0);
      w_14 = ATgetArgument(t, 1);
      {
        ATerm i_26 = NULL,r_26 = NULL,t_26 = NULL,u_8 = NULL;
        t = SSLgetAnnotations(u_14);
        i_26 = t;
        t = v_14;
        t = a_145(t);
        r_26 = t;
        t = w_14;
        t = a_145(t);
        t_26 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, r_26, t_26);
        u_8 = t;
        t = SSLsetAnnotations(u_8, i_26);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          v_14 = ATgetArgument(t, 0);
          w_14 = ATgetArgument(t, 1);
          s_14 = ATgetArgument(t, 2);
          {
            ATerm m_27 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL,v_8 = NULL;
            t = SSLgetAnnotations(u_14);
            m_27 = t;
            t = v_14;
            t = c_145(t);
            s_27 = t;
            t = w_14;
            t = c_145(t);
            t_27 = t;
            t = s_14;
            t = a_145(t);
            u_27 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, s_27, t_27, u_27);
            v_8 = t;
            t = SSLsetAnnotations(v_8, m_27);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              v_14 = ATgetArgument(t, 0);
              w_14 = ATgetArgument(t, 1);
              s_14 = ATgetArgument(t, 2);
              t_14 = ATgetArgument(t, 3);
              {
                ATerm a_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL,w_8 = NULL;
                t = SSLgetAnnotations(u_14);
                a_29 = t;
                t = v_14;
                t = c_145(t);
                f_29 = t;
                t = w_14;
                t = c_145(t);
                g_29 = t;
                t = s_14;
                t = c_145(t);
                h_29 = t;
                t = t_14;
                t = a_145(t);
                i_29 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, f_29, g_29, h_29, i_29);
                w_8 = t;
                t = SSLsetAnnotations(w_8, a_29);
              }
            }
          else
            {
              ATerm w_29 = NULL,z_29 = NULL,a_30 = NULL,x_8 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  v_14 = ATgetArgument(t, 0);
                  w_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(u_14);
              w_29 = t;
              t = v_14;
              t = c_145(t);
              z_29 = t;
              t = w_14;
              t = a_145(t);
              a_30 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, z_29, a_30);
              x_8 = t;
              t = SSLsetAnnotations(x_8, w_29);
            }
        }
    }
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm d_15 = NULL;
  ATerm l_33 = t;
  int m_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          d_15 = ATgetArgument(t, 0);
          {
            ATerm q_33 = ATgetArgument(t, 1);
          }
          {
            ATerm r_33 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_33);
      t = d_15;
    }
  else
    {
      t = l_33;
      if(match_cons(t, sym_SDefT_4))
        {
          d_15 = ATgetArgument(t, 0);
          {
            ATerm s_33 = ATgetArgument(t, 1);
          }
          {
            ATerm v_33 = ATgetArgument(t, 2);
          }
          {
            ATerm y_33 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = d_15;
    }
  return(t);
}
static ATerm b_25 (ATerm b_70, ATerm a_70, ATerm t)
{
  t = b_70;
  t = map_1_0(n_5, t);
  return(t);
}
ATerm SVar_1_0 (ATerm w_108 (ATerm), ATerm t)
{
  ATerm j_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL,c_9 = NULL;
  m_15 = t;
  if(match_cons(t, sym_SVar_1))
    {
      k_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_15);
  j_15 = t;
  t = k_15;
  t = w_108(t);
  l_15 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, l_15);
  c_9 = t;
  t = SSLsetAnnotations(c_9, j_15);
  return(t);
}
static ATerm c_25 (ATerm l_141 (ATerm), ATerm m_141 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm i_61, ATerm h_61, ATerm g_61, ATerm t)
{
  static ATerm o_5 (ATerm t)
  {
    ATerm o_15 = NULL;
    o_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_15, g_61);
    t = l_141(t);
    return(t);
  }
  static ATerm p_5 (ATerm t)
  {
    ATerm p_15 = NULL;
    p_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_15, h_61);
    t = l_141(t);
    return(t);
  }
  t = i_61;
  t = m_141(o_5, p_5, _id, t);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_33 = ATgetArgument(t, 0);
      if(((ATgetType(z_33) != AT_LIST) || !(ATisEmpty(z_33))))
        _fail(t);
      {
        ATerm a_34 = ATgetArgument(t, 1);
        if(((ATgetType(a_34) != AT_LIST) || !(ATisEmpty(a_34))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_34 = ATgetArgument(t, 0);
      if(((ATgetType(b_34) == AT_LIST) && !(ATisEmpty(b_34))))
        {
          y_15 = ATgetFirst((ATermList) b_34);
          z_15 = (ATerm) ATgetNext((ATermList) b_34);
        }
      else
        _fail(t);
      {
        ATerm c_34 = ATgetArgument(t, 1);
        if(((ATgetType(c_34) == AT_LIST) && !(ATisEmpty(c_34))))
          {
            a_16 = ATgetFirst((ATermList) c_34);
            b_16 = (ATerm) ATgetNext((ATermList) c_34);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_15, a_16), (ATerm) ATmakeAppl(sym__2, z_15, b_16));
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm c_16 = NULL,d_16 = NULL;
  if(match_cons(t, sym__2))
    {
      c_16 = ATgetArgument(t, 0);
      d_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_16), c_16);
  return(t);
}
static ATerm d_25 (ATerm f_141 (ATerm), ATerm g_141 (ATerm (ATerm), ATerm), ATerm a_61, ATerm d_61, ATerm t)
{
  ATerm s_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL,x_15 = NULL;
  t = a_61;
  t = f_141(t);
  s_15 = t;
  t = map_1_0(new_0_0, t);
  t_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_15, t_15);
  t = genzip_4_0(r_5, s_5, t_5, _id, t);
  x_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_15, d_61);
  t = conc_0_0(t);
  u_15 = t;
  t = a_61;
  {
    static ATerm u_5 (ATerm t)
    {
      t = t_15;
      return(t);
    }
    t = g_141(u_5, t);
  }
  v_15 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_15, d_61, u_15);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL;
  k_16 = t;
  if(match_cons(t, sym__2))
    {
      l_16 = ATgetArgument(t, 0);
      m_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_16;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_16 = ATgetFirst((ATermList) t);
      o_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_16;
  if(match_cons(t, sym__2))
    {
      i_16 = ATgetArgument(t, 0);
      j_16 = ATgetArgument(t, 1);
      {
        ATerm e_34 = t;
        int f_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_16;
            if((l_16 != t))
              {
                _fail(t);
              }
            t = j_16;
            LocalPopChoice(f_34);
          }
        else
          {
            t = e_34;
            t = (ATerm) ATmakeAppl(sym__2, l_16, o_16);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, l_16, o_16);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm b_119 (ATerm), ATerm t)
{
  static ATerm k_17 (ATerm t)
  {
    ATerm g_34 = t;
    int j_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_119(t);
        LocalPopChoice(j_34);
      }
    else
      {
        t = g_34;
        {
          ATerm h_17 = NULL,i_17 = NULL,j_17 = NULL;
          static ATerm v_5 (ATerm t)
          {
            ATerm r_30 = NULL;
            r_30 = t;
            t = (ATerm) ATmakeAppl(sym__2, r_30, not_null(j_17));
            t = k_17(t);
            return(t);
          }
          h_17 = t;
          if(match_cons(t, sym__2))
            {
              i_17 = ATgetArgument(t, 0);
              if(((j_17 != NULL) && (j_17 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                j_17 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = i_17;
          t = SRTS_all(v_5, t);
        }
      }
    return(t);
  }
  t = k_17(t);
  return(t);
}
ATerm rename_4_0 (ATerm a_141 (ATerm (ATerm), ATerm), ATerm b_141 (ATerm), ATerm c_141 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm d_141 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm o_17 = NULL;
  static ATerm d_18 (ATerm t)
  {
    static ATerm w_5 (ATerm t)
    {
      ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL;
      x_17 = t;
      if(match_cons(t, sym__2))
        {
          y_17 = ATgetArgument(t, 0);
          z_17 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm m_34 = t;
        int n_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm x_5 (ATerm t)
            {
              ATerm c_18 = NULL;
              c_18 = t;
              t = (ATerm) ATmakeAppl(sym__2, c_18, z_17);
              t = lookup_0_0(t);
              return(t);
            }
            t = y_17;
            t = a_141(x_5, t);
            LocalPopChoice(n_34);
          }
        else
          {
            t = m_34;
            {
              ATerm k_31 = NULL,n_31 = NULL,s_31 = NULL;
              t = x_17;
              t = d_25(b_141, d_141, y_17, z_17, t);
              if(match_cons(t, sym__3))
                {
                  k_31 = ATgetArgument(t, 0);
                  n_31 = ATgetArgument(t, 1);
                  s_31 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = c_25(d_18, c_141, k_31, n_31, s_31, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(w_5, t);
    return(t);
  }
  o_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_17, (ATerm) ATempty);
  t = d_18(t);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_34 = ATgetArgument(t, 0);
      if(((ATgetType(o_34) != AT_LIST) || !(ATisEmpty(o_34))))
        _fail(t);
      {
        ATerm p_34 = ATgetArgument(t, 1);
        if(((ATgetType(p_34) != AT_LIST) || !(ATisEmpty(p_34))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm k_34 = NULL,l_34 = NULL,w_34 = NULL,x_34 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_34 = ATgetArgument(t, 0);
      if(((ATgetType(q_34) == AT_LIST) && !(ATisEmpty(q_34))))
        {
          k_34 = ATgetFirst((ATermList) q_34);
          l_34 = (ATerm) ATgetNext((ATermList) q_34);
        }
      else
        _fail(t);
      {
        ATerm r_34 = ATgetArgument(t, 1);
        if(((ATgetType(r_34) == AT_LIST) && !(ATisEmpty(r_34))))
          {
            w_34 = ATgetFirst((ATermList) r_34);
            x_34 = (ATerm) ATgetNext((ATermList) r_34);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_34, w_34), (ATerm) ATmakeAppl(sym__2, l_34, x_34));
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm y_34 = NULL,z_34 = NULL;
  if(match_cons(t, sym__2))
    {
      y_34 = ATgetArgument(t, 0);
      z_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_34), y_34);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm b_35 = NULL,i_35 = NULL,l_35 = NULL;
  if(match_cons(t, sym__2))
    {
      b_35 = ATgetArgument(t, 0);
      l_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_35;
  {
    ATerm s_34 = t;
    int t_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm v_34 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(t_34);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, l_35);
      }
    else
      {
        t = s_34;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm a_35 = ATgetArgument(t, 0);
            i_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, l_35, i_35);
      }
  }
  return(t);
}
static ATerm d_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_35 = ATgetArgument(t, 0);
      if(((ATgetType(c_35) != AT_LIST) || !(ATisEmpty(c_35))))
        _fail(t);
      {
        ATerm h_35 = ATgetArgument(t, 1);
        if(((ATgetType(h_35) != AT_LIST) || !(ATisEmpty(h_35))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm g_37 = NULL,h_37 = NULL,s_37 = NULL,t_37 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_35 = ATgetArgument(t, 0);
      if(((ATgetType(m_35) == AT_LIST) && !(ATisEmpty(m_35))))
        {
          g_37 = ATgetFirst((ATermList) m_35);
          h_37 = (ATerm) ATgetNext((ATermList) m_35);
        }
      else
        _fail(t);
      {
        ATerm n_35 = ATgetArgument(t, 1);
        if(((ATgetType(n_35) == AT_LIST) && !(ATisEmpty(n_35))))
          {
            s_37 = ATgetFirst((ATermList) n_35);
            t_37 = (ATerm) ATgetNext((ATermList) n_35);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_37, s_37), (ATerm) ATmakeAppl(sym__2, h_37, t_37));
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm u_37 = NULL,v_37 = NULL;
  if(match_cons(t, sym__2))
    {
      u_37 = ATgetArgument(t, 0);
      v_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_37), u_37);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm z_37 = NULL,b_38 = NULL,c_38 = NULL;
  if(match_cons(t, sym__2))
    {
      z_37 = ATgetArgument(t, 0);
      c_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_37;
  {
    ATerm o_35 = t;
    int p_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm q_35 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(p_35);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, c_38);
      }
    else
      {
        t = o_35;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm r_35 = ATgetArgument(t, 0);
            b_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, c_38, b_38);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm v_144 (ATerm), ATerm t)
{
  ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL;
  i_21 = t;
  if(match_cons(t, sym_Scope_2))
    {
      j_21 = ATgetArgument(t, 0);
      k_21 = ATgetArgument(t, 1);
      {
        ATerm l_32 = NULL,a_33 = NULL,e_9 = NULL;
        t = SSLgetAnnotations(i_21);
        l_32 = t;
        t = j_21;
        t = v_144(t);
        a_33 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, a_33, k_21);
        e_9 = t;
        t = SSLsetAnnotations(e_9, l_32);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          j_21 = ATgetArgument(t, 0);
          k_21 = ATgetArgument(t, 1);
          l_21 = ATgetArgument(t, 2);
          m_21 = ATgetArgument(t, 3);
          {
            ATerm p_33 = NULL,d_34 = NULL,i_34 = NULL,f_9 = NULL;
            t = SSLgetAnnotations(i_21);
            p_33 = t;
            t = l_21;
            t = v_144(t);
            i_34 = t;
            t = (ATerm) ATmakeAppl(sym__2, l_21, i_34);
            t = genzip_4_0(y_5, a_6, b_6, c_6, t);
            d_34 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, j_21, k_21, d_34, m_21);
            f_9 = t;
            t = SSLsetAnnotations(f_9, p_33);
          }
        }
      else
        {
          ATerm o_36 = NULL,d_37 = NULL,e_37 = NULL,g_9 = NULL;
          if(match_cons(t, sym_RDefT_4))
            {
              j_21 = ATgetArgument(t, 0);
              k_21 = ATgetArgument(t, 1);
              l_21 = ATgetArgument(t, 2);
              m_21 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(i_21);
          o_36 = t;
          t = l_21;
          t = v_144(t);
          e_37 = t;
          t = (ATerm) ATmakeAppl(sym__2, l_21, e_37);
          t = genzip_4_0(d_6, e_6, h_6, m_6, t);
          d_37 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, j_21, k_21, d_37, m_21);
          g_9 = t;
          t = SSLsetAnnotations(g_9, o_36);
        }
    }
  return(t);
}
ATerm Var_1_0 (ATerm j_103 (ATerm), ATerm t)
{
  ATerm x_21 = NULL,d_22 = NULL,f_22 = NULL,g_22 = NULL,k_9 = NULL;
  g_22 = t;
  if(match_cons(t, sym_Var_1))
    {
      d_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_22);
  x_21 = t;
  t = d_22;
  t = j_103(t);
  f_22 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, f_22);
  k_9 = t;
  t = SSLsetAnnotations(k_9, x_21);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm s_35 = t;
  int t_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(t_35);
    }
  else
    {
      t = s_35;
      {
        ATerm s_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL;
        if(match_cons(t, sym_SDefT_4))
          {
            s_22 = ATgetArgument(t, 0);
            u_22 = ATgetArgument(t, 1);
            v_22 = ATgetArgument(t, 2);
            w_22 = ATgetArgument(t, 3);
            t = v_22;
            t = map_1_0(o_6, t);
          }
        else
          {
            if(match_cons(t, sym_RDefT_4))
              {
                s_22 = ATgetArgument(t, 0);
                u_22 = ATgetArgument(t, 1);
                v_22 = ATgetArgument(t, 2);
                w_22 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = v_22;
            t = map_1_0(p_6, t);
          }
      }
    }
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm f_23 = NULL;
  ATerm u_35 = t;
  int v_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_23 = ATgetArgument(t, 0);
          {
            ATerm w_35 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_35);
      t = f_23;
    }
  else
    {
      t = u_35;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_23;
    }
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm r_23 = NULL;
  ATerm x_35 = t;
  int y_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_23 = ATgetArgument(t, 0);
          {
            ATerm z_35 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_35);
      t = r_23;
    }
  else
    {
      t = x_35;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_23;
    }
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL,z_23 = NULL;
  v_23 = t;
  if(match_cons(t, sym_Let_2))
    {
      w_23 = ATgetArgument(t, 0);
      x_23 = ATgetArgument(t, 1);
      t = v_23;
      t = b_25(w_23, x_23, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          w_23 = ATgetArgument(t, 0);
          x_23 = ATgetArgument(t, 1);
          y_23 = ATgetArgument(t, 2);
          t = x_23;
          t = map_1_0(r_6, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              w_23 = ATgetArgument(t, 0);
              x_23 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, w_23);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  w_23 = ATgetArgument(t, 0);
                  x_23 = ATgetArgument(t, 1);
                  y_23 = ATgetArgument(t, 2);
                  z_23 = ATgetArgument(t, 3);
                  t = x_23;
                  t = map_1_0(s_6, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      w_23 = ATgetArgument(t, 0);
                      x_23 = ATgetArgument(t, 1);
                      y_23 = ATgetArgument(t, 2);
                      z_23 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = x_23;
                  t = map_1_0(u_6, t);
                }
            }
        }
    }
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm p_24 = NULL;
  ATerm a_36 = t;
  int b_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_24 = ATgetArgument(t, 0);
          {
            ATerm c_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_36);
      t = p_24;
    }
  else
    {
      t = a_36;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_24;
    }
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm i_25 = NULL;
  ATerm d_36 = t;
  int e_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_25 = ATgetArgument(t, 0);
          {
            ATerm f_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_36);
      t = i_25;
    }
  else
    {
      t = d_36;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_25;
    }
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm p_28 = NULL;
  ATerm g_36 = t;
  int h_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_28 = ATgetArgument(t, 0);
          {
            ATerm i_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_36);
      t = p_28;
    }
  else
    {
      t = g_36;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_28;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, n_6, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, q_6, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm Expl_0_0 (ATerm t)
{
  ATerm n_174 = NULL,o_174 = NULL,p_174 = NULL;
  o_174 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      p_174 = ATgetArgument(t, 0);
      n_174 = ATgetArgument(t, 1);
      {
        ATerm s_174 = NULL,t_174 = NULL,u_174 = NULL,v_174 = NULL;
        t = o_174;
        t = new_0_0(t);
        s_174 = t;
        t = new_0_0(t);
        t_174 = t;
        t = new_0_0(t);
        u_174 = t;
        t = new_0_0(t);
        v_174 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_174), u_174), t_174), s_174), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, s_174), (ATerm) ATmakeAppl(sym_Var_1, u_174))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, p_174, (ATerm)ATmakeAppl(sym_Var_1, s_174), (ATerm) ATmakeAppl(sym_Var_1, t_174)), (ATerm) ATmakeAppl(sym_BAM_3, n_174, (ATerm)ATmakeAppl(sym_Var_1, u_174), (ATerm) ATmakeAppl(sym_Var_1, v_174)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_j_36, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, v_174)), (ATerm) ATmakeAppl(sym_Var_1, t_174))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          p_174 = ATgetArgument(t, 0);
          {
            ATerm w_174 = NULL,x_174 = NULL,z_174 = NULL,a_175 = NULL;
            t = o_174;
            t = new_0_0(t);
            z_174 = t;
            t = p_174;
            {
              static ATerm v_6 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((w_174 != NULL) && (w_174 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      w_174 = ATgetArgument(t, 0);
                    if(((x_174 != NULL) && (x_174 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      x_174 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, z_174);
                return(t);
              }
              t = oncetd_1_0(v_6, t);
            }
            a_175 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, z_174), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_j_36, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_174)), not_null(w_174))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, z_174)), (ATerm) ATmakeAppl(sym_Build_1, a_175))));
          }
        }
      else
        {
          ATerm c_175 = NULL,d_175 = NULL,e_175 = NULL,f_175 = NULL,g_175 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              p_174 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = o_174;
          t = new_0_0(t);
          e_175 = t;
          t = new_0_0(t);
          f_175 = t;
          t = p_174;
          {
            static ATerm w_6 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((c_175 != NULL) && (c_175 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    c_175 = ATgetArgument(t, 0);
                  if(((d_175 != NULL) && (d_175 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    d_175 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, e_175);
              return(t);
            }
            t = oncetd_1_0(w_6, t);
          }
          g_175 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, e_175), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, g_175), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, f_175), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, f_175)), (ATerm) ATmakeAppl(sym_PrimT_3, term_k_36, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, f_175))))), (ATerm)ATmakeAppl(sym_Var_1, e_175), (ATerm) ATmakeAppl(sym_Op_2, term_l_36, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_175)), not_null(c_175)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm i_175 = NULL,j_175 = NULL;
  i_175 = t;
  if(match_cons(t, sym_Match_1))
    {
      j_175 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm m_36 = t;
    int n_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_175 = NULL,m_175 = NULL,n_175 = NULL,o_175 = NULL;
        t = i_175;
        t = new_0_0(t);
        n_175 = t;
        t = j_175;
        {
          static ATerm x_6 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((l_175 != NULL) && (l_175 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  l_175 = ATgetArgument(t, 0);
                if(((m_175 != NULL) && (m_175 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  m_175 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, n_175), l_175);
            return(t);
          }
          t = pat_td_1_0(x_6, t);
        }
        o_175 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, n_175), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, o_175), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_p_36, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, n_175))), (ATerm) ATmakeAppl(sym_Match_1, not_null(m_175))))));
        LocalPopChoice(n_36);
      }
    else
      {
        t = m_36;
        {
          ATerm q_36 = t;
          int r_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_175 = NULL,r_175 = NULL,s_175 = NULL;
              t = i_175;
              t = new_0_0(t);
              r_175 = t;
              t = j_175;
              {
                static ATerm y_6 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((q_175 != NULL) && (q_175 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        q_175 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, r_175);
                  return(t);
                }
                t = pat_td_1_0(y_6, t);
              }
              s_175 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_175), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, s_175), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, r_175)), not_null(q_175))));
              LocalPopChoice(r_36);
            }
          else
            {
              t = q_36;
              {
                ATerm u_175 = NULL,v_175 = NULL,w_175 = NULL,x_175 = NULL;
                t = i_175;
                t = new_0_0(t);
                w_175 = t;
                t = j_175;
                {
                  static ATerm z_6 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((v_175 != NULL) && (v_175 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          v_175 = ATgetArgument(t, 0);
                        if(((u_175 != NULL) && (u_175 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          u_175 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, w_175);
                    return(t);
                  }
                  t = pat_td_1_0(z_6, t);
                }
                x_175 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, w_175), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, x_175), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, w_175)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(u_175)), not_null(v_175)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm b_144 (ATerm), ATerm t)
{
  ATerm s_36 = t;
  int t_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_144(t);
      LocalPopChoice(t_36);
    }
  else
    {
      t = s_36;
      {
        ATerm f_178 = NULL,g_178 = NULL,h_178 = NULL,i_178 = NULL;
        g_178 = t;
        if(match_cons(t, sym_Op_2))
          {
            h_178 = ATgetArgument(t, 0);
            i_178 = ATgetArgument(t, 1);
            {
              ATerm p_132 = NULL,s_132 = NULL,m_9 = NULL;
              t = SSLgetAnnotations(g_178);
              p_132 = t;
              t = i_178;
              {
                static ATerm a_7 (ATerm t)
                {
                  t = pat_td_1_0(b_144, t);
                  return(t);
                }
                t = fetch_1_0(a_7, t);
              }
              s_132 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, h_178, s_132);
              m_9 = t;
              t = SSLsetAnnotations(m_9, p_132);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                h_178 = ATgetArgument(t, 0);
                i_178 = ATgetArgument(t, 1);
                {
                  ATerm u_36 = t;
                  int v_36 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm f_135 = NULL,j_135 = NULL,n_9 = NULL;
                      t = SSLgetAnnotations(g_178);
                      f_135 = t;
                      t = i_178;
                      t = pat_td_1_0(b_144, t);
                      j_135 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, h_178, j_135);
                      n_9 = t;
                      t = SSLsetAnnotations(n_9, f_135);
                      LocalPopChoice(v_36);
                    }
                  else
                    {
                      t = u_36;
                      {
                        ATerm g_136 = NULL,j_136 = NULL,o_9 = NULL;
                        t = SSLgetAnnotations(g_178);
                        g_136 = t;
                        t = h_178;
                        t = pat_td_1_0(b_144, t);
                        j_136 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, j_136, i_178);
                        o_9 = t;
                        t = SSLsetAnnotations(o_9, g_136);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    h_178 = ATgetArgument(t, 0);
                    i_178 = ATgetArgument(t, 1);
                    f_178 = ATgetArgument(t, 2);
                    {
                      ATerm l_138 = NULL,w_138 = NULL,p_9 = NULL;
                      t = SSLgetAnnotations(g_178);
                      l_138 = t;
                      t = f_178;
                      {
                        static ATerm b_7 (ATerm t)
                        {
                          t = pat_td_1_0(b_144, t);
                          return(t);
                        }
                        t = fetch_1_0(b_7, t);
                      }
                      w_138 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, h_178, i_178, w_138);
                      p_9 = t;
                      t = SSLsetAnnotations(p_9, l_138);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        h_178 = ATgetArgument(t, 0);
                        i_178 = ATgetArgument(t, 1);
                        f_178 = ATgetArgument(t, 2);
                        {
                          ATerm j_139 = NULL,o_139 = NULL,q_9 = NULL;
                          t = SSLgetAnnotations(g_178);
                          j_139 = t;
                          t = f_178;
                          {
                            static ATerm d_7 (ATerm t)
                            {
                              t = pat_td_1_0(b_144, t);
                              return(t);
                            }
                            t = fetch_1_0(d_7, t);
                          }
                          o_139 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, h_178, i_178, o_139);
                          q_9 = t;
                          t = SSLsetAnnotations(q_9, j_139);
                        }
                      }
                    else
                      {
                        ATerm s_140 = NULL,w_140 = NULL,r_9 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            h_178 = ATgetArgument(t, 0);
                            i_178 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(g_178);
                        s_140 = t;
                        t = i_178;
                        t = pat_td_1_0(b_144, t);
                        w_140 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, h_178, w_140);
                        r_9 = t;
                        t = SSLsetAnnotations(r_9, s_140);
                      }
                  }
              }
          }
      }
    }
  return(t);
}
ATerm Bapp_0_0 (ATerm t)
{
  ATerm r_178 = NULL,s_178 = NULL;
  r_178 = t;
  if(match_cons(t, sym_Build_1))
    {
      s_178 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm w_36 = t;
    int x_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_178 = NULL,u_178 = NULL,w_178 = NULL,x_178 = NULL;
        t = r_178;
        t = new_0_0(t);
        w_178 = t;
        t = s_178;
        {
          static ATerm e_7 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((t_178 != NULL) && (t_178 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  t_178 = ATgetArgument(t, 0);
                if(((u_178 != NULL) && (u_178 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  u_178 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, w_178);
            return(t);
          }
          t = pat_td_1_0(e_7, t);
        }
        x_178 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, w_178), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_y_36, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_178)), not_null(t_178))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, w_178)))), (ATerm) ATmakeAppl(sym_Build_1, x_178)));
        LocalPopChoice(x_36);
      }
    else
      {
        t = w_36;
        {
          ATerm z_36 = t;
          int a_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_178 = NULL,a_179 = NULL,b_179 = NULL;
              t = r_178;
              t = new_0_0(t);
              a_179 = t;
              t = s_178;
              {
                static ATerm f_7 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((y_178 != NULL) && (y_178 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        y_178 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, a_179);
                  return(t);
                }
                t = pat_td_1_0(f_7, t);
              }
              b_179 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, a_179), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_178), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, a_179)))), (ATerm) ATmakeAppl(sym_Build_1, b_179)));
              LocalPopChoice(a_37);
            }
          else
            {
              t = z_36;
              {
                ATerm c_179 = NULL,d_179 = NULL,f_179 = NULL,g_179 = NULL;
                t = r_178;
                t = new_0_0(t);
                f_179 = t;
                t = s_178;
                {
                  static ATerm g_7 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((c_179 != NULL) && (c_179 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          c_179 = ATgetArgument(t, 0);
                        if(((d_179 != NULL) && (d_179 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          d_179 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, f_179);
                    return(t);
                  }
                  t = pat_td_1_0(g_7, t);
                }
                g_179 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, f_179), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(c_179), not_null(d_179), (ATerm) ATmakeAppl(sym_Var_1, f_179))), (ATerm) ATmakeAppl(sym_Build_1, g_179)));
              }
            }
        }
      }
  }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm l_179 = NULL,m_179 = NULL,n_179 = NULL,p_179 = NULL,q_179 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      p_179 = ATgetArgument(t, 0);
      q_179 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, p_179, q_179);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          p_179 = ATgetArgument(t, 0);
          t = p_179;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              l_179 = ATgetFirst((ATermList) t);
              m_179 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, l_179, (ATerm) ATmakeAppl(sym_LChoices_1, m_179));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_u_21;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              p_179 = ATgetArgument(t, 0);
              t = p_179;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  l_179 = ATgetFirst((ATermList) t);
                  m_179 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, l_179, (ATerm) ATmakeAppl(sym_Choices_1, m_179));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_u_21;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  p_179 = ATgetArgument(t, 0);
                  t = p_179;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      l_179 = ATgetFirst((ATermList) t);
                      m_179 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, l_179, (ATerm) ATmakeAppl(sym_Seqs_1, m_179));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_b_37;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      p_179 = ATgetArgument(t, 0);
                      q_179 = ATgetArgument(t, 1);
                      n_179 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, q_179, (ATerm) ATmakeAppl(sym_Op_2, term_l_36, (ATerm) ATinsert(ATinsert(ATempty, n_179), p_179)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          p_179 = ATgetArgument(t, 0);
                          q_179 = ATgetArgument(t, 1);
                          n_179 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, n_179)), p_179), (ATerm) ATmakeAppl(sym_Build_1, q_179)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              p_179 = ATgetArgument(t, 0);
                              q_179 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, p_179, (ATerm) ATmakeAppl(sym_Match_1, q_179));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  p_179 = ATgetArgument(t, 0);
                                  q_179 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, p_179), q_179);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      p_179 = ATgetArgument(t, 0);
                                      q_179 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, q_179), p_179);
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
static ATerm i_7 (ATerm t)
{
  ATerm c_37 = t;
  if((PushChoice() == 0))
    {
      ATerm v_180 = NULL,w_180 = NULL,x_180 = NULL,y_9 = NULL;
      x_180 = t;
      if(match_cons(t, sym_Var_1))
        {
          w_180 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(x_180);
      v_180 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, w_180);
      y_9 = t;
      t = SSLsetAnnotations(y_9, v_180);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = c_37;
    }
  return(t);
}
static ATerm j_7 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_f_37;
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm y_180 = NULL,z_180 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_180 = ATgetFirst((ATermList) t);
      z_180 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_180, z_180);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm a_181 = NULL,b_181 = NULL,c_181 = NULL,d_181 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_37 = ATgetArgument(t, 0);
      if(match_cons(i_37, sym__2))
        {
          a_181 = ATgetArgument(i_37, 0);
          b_181 = ATgetArgument(i_37, 1);
        }
      else
        _fail(t);
      {
        ATerm j_37 = ATgetArgument(t, 1);
        if(match_cons(j_37, sym__2))
          {
            c_181 = ATgetArgument(j_37, 0);
            d_181 = ATgetArgument(j_37, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_181), a_181), (ATerm) ATinsert(CheckATermList(d_181), b_181));
  return(t);
}
static ATerm o_7 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_f_37;
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm e_181 = NULL,f_181 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_181 = ATgetFirst((ATermList) t);
      f_181 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_181, f_181);
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm g_181 = NULL,h_181 = NULL,i_181 = NULL,j_181 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_37 = ATgetArgument(t, 0);
      if(match_cons(k_37, sym__2))
        {
          g_181 = ATgetArgument(k_37, 0);
          h_181 = ATgetArgument(k_37, 1);
        }
      else
        _fail(t);
      {
        ATerm l_37 = ATgetArgument(t, 1);
        if(match_cons(l_37, sym__2))
          {
            i_181 = ATgetArgument(l_37, 0);
            j_181 = ATgetArgument(l_37, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_181), g_181), (ATerm) ATinsert(CheckATermList(j_181), h_181));
  return(t);
}
static ATerm e_28 (ATerm y_67, ATerm z_67, ATerm a_68, ATerm t)
{
  ATerm m_180 = NULL,n_180 = NULL,o_180 = NULL,p_180 = NULL,q_180 = NULL,r_180 = NULL,s_180 = NULL,t_180 = NULL,u_180 = NULL,z_9 = NULL;
  t = a_68;
  t = fetch_1_0(i_7, t);
  t = a_68;
  t = genzip_4_0(j_7, k_7, l_7, LiftPrimArg_0_0, t);
  u_180 = t;
  if(match_cons(t, sym__2))
    {
      q_180 = ATgetArgument(t, 0);
      r_180 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_180);
  p_180 = t;
  t = q_180;
  t = concat_0_0(t);
  s_180 = t;
  t = r_180;
  t = genzip_4_0(o_7, v_7, x_7, _id, t);
  t_180 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_180, t_180);
  z_9 = t;
  t = SSLsetAnnotations(z_9, p_180);
  if(match_cons(t, sym__2))
    {
      m_180 = ATgetArgument(t, 0);
      {
        ATerm m_37 = ATgetArgument(t, 1);
        if(match_cons(m_37, sym__2))
          {
            n_180 = ATgetArgument(m_37, 0);
            o_180 = ATgetArgument(m_37, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, m_180, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, n_180), (ATerm) ATmakeAppl(sym_CallT_3, y_67, z_67, o_180)));
  return(t);
}
static ATerm d_182 (ATerm u_181, ATerm t)
{
  ATerm w_181 = NULL;
  t = u_181;
  {
    ATerm n_37 = t;
    if((PushChoice() == 0))
      {
        ATerm x_181 = NULL,y_181 = NULL,z_181 = NULL,c_10 = NULL;
        z_181 = t;
        if(match_cons(t, sym_Var_1))
          {
            y_181 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_181);
        x_181 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, y_181);
        c_10 = t;
        t = SSLsetAnnotations(c_10, x_181);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_37;
      }
  }
  t = new_0_0(t);
  w_181 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, w_181), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, u_181), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, w_181)))), (ATerm) ATmakeAppl(sym_Var_1, w_181)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm a_182 = NULL,b_182 = NULL;
  a_182 = t;
  if(match_cons(t, sym_Var_1))
    {
      b_182 = ATgetArgument(t, 0);
      {
        ATerm o_37 = t;
        int p_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_182(a_182, t);
            LocalPopChoice(p_37);
          }
        else
          {
            t = o_37;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_b_37, (ATerm) ATmakeAppl(sym_Var_1, b_182)));
          }
      }
    }
  else
    {
      t = d_182(a_182, t);
    }
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm q_37 = t;
  if((PushChoice() == 0))
    {
      ATerm k_144 = NULL,p_144 = NULL,q_144 = NULL,e_10 = NULL;
      q_144 = t;
      if(match_cons(t, sym_Var_1))
        {
          p_144 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(q_144);
      k_144 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, p_144);
      e_10 = t;
      t = SSLsetAnnotations(e_10, k_144);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = q_37;
    }
  return(t);
}
static ATerm d_8 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_f_37;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm r_144 = NULL,s_144 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_144 = ATgetFirst((ATermList) t);
      s_144 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_144, s_144);
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm m_145 = NULL,n_145 = NULL,r_145 = NULL,a_146 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_37 = ATgetArgument(t, 0);
      if(match_cons(r_37, sym__2))
        {
          m_145 = ATgetArgument(r_37, 0);
          n_145 = ATgetArgument(r_37, 1);
        }
      else
        _fail(t);
      {
        ATerm w_37 = ATgetArgument(t, 1);
        if(match_cons(w_37, sym__2))
          {
            r_145 = ATgetArgument(w_37, 0);
            a_146 = ATgetArgument(w_37, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_145), m_145), (ATerm) ATinsert(CheckATermList(a_146), n_145));
  return(t);
}
static ATerm h_8 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_f_37;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm e_146 = NULL,f_146 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_146 = ATgetFirst((ATermList) t);
      f_146 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_146, f_146);
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm g_146 = NULL,h_146 = NULL,r_147 = NULL,a_148 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_37 = ATgetArgument(t, 0);
      if(match_cons(x_37, sym__2))
        {
          g_146 = ATgetArgument(x_37, 0);
          h_146 = ATgetArgument(x_37, 1);
        }
      else
        _fail(t);
      {
        ATerm y_37 = ATgetArgument(t, 1);
        if(match_cons(y_37, sym__2))
          {
            r_147 = ATgetArgument(y_37, 0);
            a_148 = ATgetArgument(y_37, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_147), g_146), (ATerm) ATinsert(CheckATermList(a_148), h_146));
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm a_38 = t;
  if((PushChoice() == 0))
    {
      ATerm p_150 = NULL,u_150 = NULL,v_150 = NULL,g_10 = NULL;
      v_150 = t;
      if(match_cons(t, sym_Var_1))
        {
          u_150 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_150);
      p_150 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, u_150);
      g_10 = t;
      t = SSLsetAnnotations(g_10, p_150);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = a_38;
    }
  return(t);
}
static ATerm r_8 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_f_37;
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm w_150 = NULL,x_150 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_150 = ATgetFirst((ATermList) t);
      x_150 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_150, x_150);
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm p_151 = NULL,q_151 = NULL,r_151 = NULL,w_151 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_38 = ATgetArgument(t, 0);
      if(match_cons(d_38, sym__2))
        {
          p_151 = ATgetArgument(d_38, 0);
          q_151 = ATgetArgument(d_38, 1);
        }
      else
        _fail(t);
      {
        ATerm e_38 = ATgetArgument(t, 1);
        if(match_cons(e_38, sym__2))
          {
            r_151 = ATgetArgument(e_38, 0);
            w_151 = ATgetArgument(e_38, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_151), p_151), (ATerm) ATinsert(CheckATermList(w_151), q_151));
  return(t);
}
static ATerm y_8 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_f_37;
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm x_151 = NULL,y_151 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_151 = ATgetFirst((ATermList) t);
      y_151 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_151, y_151);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm z_151 = NULL,a_152 = NULL,b_152 = NULL,g_152 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_38 = ATgetArgument(t, 0);
      if(match_cons(f_38, sym__2))
        {
          z_151 = ATgetArgument(f_38, 0);
          a_152 = ATgetArgument(f_38, 1);
        }
      else
        _fail(t);
      {
        ATerm g_38 = ATgetArgument(t, 1);
        if(match_cons(g_38, sym__2))
          {
            b_152 = ATgetArgument(g_38, 0);
            g_152 = ATgetArgument(g_38, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_152), z_151), (ATerm) ATinsert(CheckATermList(g_152), a_152));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm t_184 = NULL,u_184 = NULL,v_184 = NULL,w_184 = NULL;
  u_184 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      v_184 = ATgetArgument(t, 0);
      w_184 = ATgetArgument(t, 1);
      t_184 = ATgetArgument(t, 2);
      {
        ATerm n_142 = NULL,t_142 = NULL,z_142 = NULL,a_143 = NULL,f_143 = NULL,g_143 = NULL,h_143 = NULL,a_144 = NULL,j_144 = NULL,f_10 = NULL;
        t = t_184;
        t = fetch_1_0(z_7, t);
        t = t_184;
        t = genzip_4_0(d_8, e_8, f_8, LiftPrimArg_0_0, t);
        j_144 = t;
        if(match_cons(t, sym__2))
          {
            f_143 = ATgetArgument(t, 0);
            g_143 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_144);
        a_143 = t;
        t = f_143;
        t = concat_0_0(t);
        h_143 = t;
        t = g_143;
        t = genzip_4_0(h_8, j_8, p_8, _id, t);
        a_144 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_143, a_144);
        f_10 = t;
        t = SSLsetAnnotations(f_10, a_143);
        if(match_cons(t, sym__2))
          {
            n_142 = ATgetArgument(t, 0);
            {
              ATerm h_38 = ATgetArgument(t, 1);
              if(match_cons(h_38, sym__2))
                {
                  t_142 = ATgetArgument(h_38, 0);
                  z_142 = ATgetArgument(h_38, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, n_142, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, t_142), (ATerm) ATmakeAppl(sym_PrimT_3, v_184, w_184, z_142)));
      }
    }
  else
    {
      ATerm f_149 = NULL,m_149 = NULL,s_149 = NULL,t_149 = NULL,y_149 = NULL,z_149 = NULL,a_150 = NULL,b_150 = NULL,o_150 = NULL,h_10 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          v_184 = ATgetArgument(t, 0);
          w_184 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = w_184;
      t = fetch_1_0(q_8, t);
      t = w_184;
      t = genzip_4_0(r_8, s_8, t_8, LiftPrimArg_0_0, t);
      o_150 = t;
      if(match_cons(t, sym__2))
        {
          y_149 = ATgetArgument(t, 0);
          z_149 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_150);
      t_149 = t;
      t = y_149;
      t = concat_0_0(t);
      a_150 = t;
      t = z_149;
      t = genzip_4_0(y_8, z_8, a_9, _id, t);
      b_150 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_150, b_150);
      h_10 = t;
      t = SSLsetAnnotations(h_10, t_149);
      if(match_cons(t, sym__2))
        {
          f_149 = ATgetArgument(t, 0);
          {
            ATerm i_38 = ATgetArgument(t, 1);
            if(match_cons(i_38, sym__2))
              {
                m_149 = ATgetArgument(i_38, 0);
                s_149 = ATgetArgument(i_38, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, f_149, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, m_149), (ATerm) ATmakeAppl(sym_PrimT_3, v_184, (ATerm)ATempty, s_149)));
    }
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm k_185 = NULL,l_185 = NULL,m_185 = NULL,n_185 = NULL;
  n_185 = t;
  if(match_cons(t, sym_Con_3))
    {
      k_185 = ATgetArgument(t, 0);
      l_185 = ATgetArgument(t, 1);
      m_185 = ATgetArgument(t, 2);
      {
        ATerm g_153 = NULL,m_10 = NULL;
        t = SSLgetAnnotations(n_185);
        g_153 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, k_185, l_185, m_185);
        m_10 = t;
        t = SSLsetAnnotations(m_10, g_153);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = n_185;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm j_38 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(b_9, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_38;
    }
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm j_186 = NULL,k_186 = NULL,l_186 = NULL,m_186 = NULL;
  k_186 = t;
  if(match_cons(t, sym_Con_3))
    {
      l_186 = ATgetArgument(t, 0);
      m_186 = ATgetArgument(t, 1);
      j_186 = ATgetArgument(t, 2);
      {
        ATerm c_154 = NULL,o_10 = NULL;
        t = SSLgetAnnotations(k_186);
        c_154 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, l_186, m_186, j_186);
        o_10 = t;
        t = SSLsetAnnotations(o_10, c_154);
      }
    }
  else
    {
      ATerm h_155 = NULL,p_10 = NULL;
      if(match_cons(t, sym_App_2))
        {
          l_186 = ATgetArgument(t, 0);
          m_186 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(k_186);
      h_155 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, l_186, m_186);
      p_10 = t;
      t = SSLsetAnnotations(p_10, h_155);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm k_38 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(d_9, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = k_38;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm s_186 = NULL,t_186 = NULL,u_186 = NULL,v_186 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      s_186 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_186;
  if(match_cons(t, sym_StratRule_3))
    {
      t_186 = ATgetArgument(t, 0);
      u_186 = ATgetArgument(t, 1);
      v_186 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, u_186), (ATerm) ATmakeAppl(sym_Where_1, v_186)), t_186));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          t_186 = ATgetArgument(t, 0);
          u_186 = ATgetArgument(t, 1);
          v_186 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = t_186;
      t = pureterm_0_0(t);
      t = u_186;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, u_186)), (ATerm) ATmakeAppl(sym_Where_1, v_186)), (ATerm) ATmakeAppl(sym_Match_1, t_186)));
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm p_115 (ATerm), ATerm t)
{
  static ATerm c_187 (ATerm t)
  {
    ATerm l_38 = t;
    int m_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_115(t);
        LocalPopChoice(m_38);
      }
    else
      {
        t = l_38;
        t = SRTS_one(c_187, t);
      }
    return(t);
  }
  t = c_187(t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm i_28 (ATerm l_63, ATerm m_63, ATerm n_63, ATerm t)
{
  ATerm d_187 = NULL,e_187 = NULL,f_187 = NULL,g_187 = NULL,h_187 = NULL,i_187 = NULL,j_187 = NULL;
  t = new_0_0(t);
  h_187 = t;
  t = l_63;
  {
    static ATerm h_9 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm n_38 = ATgetArgument(t, 0);
          if(match_cons(n_38, sym_Var_1))
            {
              if(((g_187 != NULL) && (g_187 != ATgetArgument(n_38, 0))))
                _fail(ATgetArgument(n_38, 0));
              else
                g_187 = ATgetArgument(n_38, 0);
            }
          else
            _fail(t);
          if(((e_187 != NULL) && (e_187 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            e_187 = ATgetArgument(t, 1);
          {
            ATerm t_38 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, g_187);
      return(t);
    }
    t = oncetd_1_0(h_9, t);
  }
  i_187 = t;
  t = m_63;
  {
    static ATerm i_9 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm u_38 = ATgetArgument(t, 0);
          if(match_cons(u_38, sym_Var_1))
            {
              if(((g_187 != NULL) && (g_187 != ATgetArgument(u_38, 0))))
                _fail(ATgetArgument(u_38, 0));
              else
                g_187 = ATgetArgument(u_38, 0);
            }
          else
            _fail(t);
          if(((f_187 != NULL) && (f_187 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            f_187 = ATgetArgument(t, 1);
          {
            ATerm v_38 = ATgetArgument(t, 2);
            if(match_cons(v_38, sym_CallT_3))
              {
                if(((d_187 != NULL) && (d_187 != ATgetArgument(v_38, 0))))
                  _fail(ATgetArgument(v_38, 0));
                else
                  d_187 = ATgetArgument(v_38, 0);
                {
                  ATerm w_38 = ATgetArgument(v_38, 1);
                  if(((ATgetType(w_38) != AT_LIST) || !(ATisEmpty(w_38))))
                    _fail(t);
                }
                {
                  ATerm x_38 = ATgetArgument(v_38, 2);
                  if(((ATgetType(x_38) != AT_LIST) || !(ATisEmpty(x_38))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, h_187);
      return(t);
    }
    t = oncetd_1_0(i_9, t);
  }
  j_187 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, h_187), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, i_187, j_187, (ATerm) ATmakeAppl(sym_Seq_2, n_63, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(d_187), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(e_187), not_null(f_187), term_b_37))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(g_187)), (ATerm) ATmakeAppl(sym_Var_1, h_187))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm y_38 = t;
  int z_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_39 = t;
      int c_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_187 = NULL,x_187 = NULL,y_187 = NULL,z_187 = NULL,a_188 = NULL,b_188 = NULL;
          z_187 = t;
          if(match_cons(t, sym_SRule_1))
            {
              a_188 = ATgetArgument(t, 0);
              t = a_188;
              if(match_cons(t, sym_Rule_3))
                {
                  w_187 = ATgetArgument(t, 0);
                  x_187 = ATgetArgument(t, 1);
                  y_187 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = z_187;
              t = i_28(w_187, x_187, y_187, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm t_156 = NULL,o_157 = NULL,s_10 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  a_188 = ATgetArgument(t, 0);
                  b_188 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(z_187);
              t_156 = t;
              t = b_188;
              t = desugarRule_0_0(t);
              o_157 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, a_188, o_157);
              s_10 = t;
              t = SSLsetAnnotations(s_10, t_156);
            }
          LocalPopChoice(c_39);
        }
      else
        {
          t = a_39;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(z_38);
    }
  else
    {
      t = y_38;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm l_114 (ATerm), ATerm t)
{
  static ATerm j_9 (ATerm t)
  {
    t = topdown_1_0(l_114, t);
    return(t);
  }
  t = l_114(t);
  t = SRTS_all(j_9, t);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm d_39 = t;
  int e_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(e_39);
    }
  else
    {
      t = d_39;
    }
  t = repeat_2_0(s_9, _id, t);
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm f_39 = t;
  int g_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      LocalPopChoice(g_39);
    }
  else
    {
      t = f_39;
      {
        ATerm h_39 = t;
        int k_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_188 = NULL,r_188 = NULL,s_188 = NULL,t_188 = NULL;
            q_188 = t;
            if(match_cons(t, sym_CallT_3))
              {
                r_188 = ATgetArgument(t, 0);
                s_188 = ATgetArgument(t, 1);
                t_188 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = q_188;
            t = e_28(r_188, s_188, t_188, t);
            LocalPopChoice(k_39);
          }
        else
          {
            t = h_39;
            {
              ATerm m_39 = t;
              int n_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(n_39);
                }
              else
                {
                  t = m_39;
                  {
                    ATerm o_39 = t;
                    int s_39 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(s_39);
                      }
                    else
                      {
                        t = o_39;
                        {
                          ATerm t_39 = t;
                          int u_39 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm w_39 = t;
                              int x_39 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm y_188 = NULL,z_188 = NULL,a_189 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      y_188 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = y_188;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      z_188 = ATgetArgument(t, 0);
                                      t = z_188;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          z_188 = ATgetArgument(t, 0);
                                          a_189 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, z_188, a_189);
                                    }
                                  LocalPopChoice(x_39);
                                }
                              else
                                {
                                  t = w_39;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(u_39);
                            }
                          else
                            {
                              t = t_39;
                              t = Expl_0_0(t);
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
ATerm desugar_0_0 (ATerm t)
{
  t = topdown_1_0(l_9, t);
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm d_31 = NULL;
  ATerm y_39 = t;
  int z_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_31 = ATgetArgument(t, 0);
          {
            ATerm a_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_39);
      t = d_31;
    }
  else
    {
      t = y_39;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_31;
    }
  return(t);
}
static ATerm u_9 (ATerm t)
{
  ATerm g_31 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_31);
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm b_40 = t;
  int c_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(c_40);
    }
  else
    {
      t = b_40;
      {
        ATerm l_31 = NULL,m_31 = NULL,o_31 = NULL,p_31 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            l_31 = ATgetArgument(t, 0);
            t = l_31;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                l_31 = ATgetArgument(t, 0);
                m_31 = ATgetArgument(t, 1);
                o_31 = ATgetArgument(t, 2);
                p_31 = ATgetArgument(t, 3);
                t = o_31;
                t = map_1_0(w_9, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    l_31 = ATgetArgument(t, 0);
                    m_31 = ATgetArgument(t, 1);
                    o_31 = ATgetArgument(t, 2);
                    p_31 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = o_31;
                t = map_1_0(x_9, t);
              }
          }
      }
    }
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm b_32 = NULL;
  ATerm e_40 = t;
  int f_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_32 = ATgetArgument(t, 0);
          {
            ATerm g_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_40);
      t = b_32;
    }
  else
    {
      t = e_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_32;
    }
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm q_32 = NULL;
  ATerm h_40 = t;
  int i_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_32 = ATgetArgument(t, 0);
          {
            ATerm k_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_40);
      t = q_32;
    }
  else
    {
      t = h_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_32;
    }
  return(t);
}
static ATerm a_10 (ATerm t)
{
  ATerm t_32 = NULL,u_32 = NULL;
  u_32 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      t_32 = ATgetArgument(t, 0);
      t = t_32;
    }
  else
    {
      t = u_32;
    }
  return(t);
}
static ATerm b_10 (ATerm t)
{
  ATerm o_33 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_33);
  return(t);
}
static ATerm d_10 (ATerm t)
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
        ATerm t_33 = NULL,u_33 = NULL,w_33 = NULL,x_33 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            t_33 = ATgetArgument(t, 0);
            t = t_33;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                t_33 = ATgetArgument(t, 0);
                u_33 = ATgetArgument(t, 1);
                w_33 = ATgetArgument(t, 2);
                x_33 = ATgetArgument(t, 3);
                t = w_33;
                t = map_1_0(i_10, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    t_33 = ATgetArgument(t, 0);
                    u_33 = ATgetArgument(t, 1);
                    w_33 = ATgetArgument(t, 2);
                    x_33 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = w_33;
                t = map_1_0(j_10, t);
              }
          }
      }
    }
  return(t);
}
static ATerm i_10 (ATerm t)
{
  ATerm h_34 = NULL;
  ATerm n_40 = t;
  int o_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_34 = ATgetArgument(t, 0);
          {
            ATerm p_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_40);
      t = h_34;
    }
  else
    {
      t = n_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_34;
    }
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm u_34 = NULL;
  ATerm q_40 = t;
  int r_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_34 = ATgetArgument(t, 0);
          {
            ATerm s_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_40);
      t = u_34;
    }
  else
    {
      t = q_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_34;
    }
  return(t);
}
ATerm DeclareVariables_0_0 (ATerm t)
{
  ATerm e_30 = NULL,g_30 = NULL,h_30 = NULL,i_30 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      g_30 = ATgetArgument(t, 0);
      h_30 = ATgetArgument(t, 1);
      i_30 = ATgetArgument(t, 2);
      e_30 = ATgetArgument(t, 3);
      {
        ATerm w_30 = NULL,z_30 = NULL,a_31 = NULL;
        t = i_30;
        t = map_1_0(t_9, t);
        w_30 = t;
        t = e_30;
        t = free_vars_3_0(u_9, v_9, tboundin_3_0, t);
        t = map_1_0(a_10, t);
        z_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_30, w_30);
        t = diff_0_0(t);
        a_31 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, g_30, h_30, i_30, (ATerm) ATmakeAppl(sym_Scope_2, a_31, e_30));
      }
    }
  else
    {
      ATerm n_33 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          g_30 = ATgetArgument(t, 0);
          h_30 = ATgetArgument(t, 1);
          i_30 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = i_30;
      t = free_vars_3_0(b_10, d_10, tboundin_3_0, t);
      n_33 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, g_30, h_30, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, n_33, i_30));
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm w_144 (ATerm), ATerm x_144 (ATerm), ATerm y_144 (ATerm), ATerm t)
{
  ATerm o_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL,s_38 = NULL;
  r_38 = t;
  if(match_cons(t, sym_Scope_2))
    {
      s_38 = ATgetArgument(t, 0);
      o_38 = ATgetArgument(t, 1);
      {
        ATerm b_39 = NULL,i_39 = NULL,j_39 = NULL,u_10 = NULL;
        t = SSLgetAnnotations(r_38);
        b_39 = t;
        t = s_38;
        t = y_144(t);
        i_39 = t;
        t = o_38;
        t = w_144(t);
        j_39 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, i_39, j_39);
        u_10 = t;
        t = SSLsetAnnotations(u_10, b_39);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          s_38 = ATgetArgument(t, 0);
          o_38 = ATgetArgument(t, 1);
          p_38 = ATgetArgument(t, 2);
          q_38 = ATgetArgument(t, 3);
          {
            ATerm d_40 = NULL,v_40 = NULL,x_40 = NULL,y_40 = NULL,a_41 = NULL,v_10 = NULL;
            t = SSLgetAnnotations(r_38);
            d_40 = t;
            t = s_38;
            t = y_144(t);
            v_40 = t;
            t = o_38;
            t = y_144(t);
            x_40 = t;
            t = p_38;
            t = y_144(t);
            y_40 = t;
            t = q_38;
            t = w_144(t);
            a_41 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, v_40, x_40, y_40, a_41);
            v_10 = t;
            t = SSLsetAnnotations(v_10, d_40);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              s_38 = ATgetArgument(t, 0);
              o_38 = ATgetArgument(t, 1);
              p_38 = ATgetArgument(t, 2);
              q_38 = ATgetArgument(t, 3);
              {
                ATerm m_41 = NULL,x_41 = NULL,d_42 = NULL,f_42 = NULL,g_42 = NULL,w_10 = NULL;
                t = SSLgetAnnotations(r_38);
                m_41 = t;
                t = s_38;
                t = y_144(t);
                x_41 = t;
                t = o_38;
                t = y_144(t);
                d_42 = t;
                t = p_38;
                t = y_144(t);
                f_42 = t;
                t = q_38;
                t = w_144(t);
                g_42 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, x_41, d_42, f_42, g_42);
                w_10 = t;
                t = SSLsetAnnotations(w_10, m_41);
              }
            }
          else
            {
              ATerm t_42 = NULL,v_42 = NULL,x_10 = NULL;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  s_38 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(r_38);
              t_42 = t;
              t = s_38;
              t = w_144(t);
              v_42 = t;
              t = (ATerm) ATmakeAppl(sym_DynamicRules_1, v_42);
              x_10 = t;
              t = SSLsetAnnotations(x_10, t_42);
            }
        }
    }
  return(t);
}
static ATerm k_10 (ATerm t)
{
  ATerm l_39 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_39);
  return(t);
}
static ATerm l_10 (ATerm t)
{
  ATerm t_40 = t;
  int w_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(w_40);
    }
  else
    {
      t = t_40;
      {
        ATerm p_39 = NULL,q_39 = NULL,r_39 = NULL,v_39 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            p_39 = ATgetArgument(t, 0);
            t = p_39;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                p_39 = ATgetArgument(t, 0);
                q_39 = ATgetArgument(t, 1);
                r_39 = ATgetArgument(t, 2);
                v_39 = ATgetArgument(t, 3);
                t = r_39;
                t = map_1_0(n_10, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    p_39 = ATgetArgument(t, 0);
                    q_39 = ATgetArgument(t, 1);
                    r_39 = ATgetArgument(t, 2);
                    v_39 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = r_39;
                t = map_1_0(q_10, t);
              }
          }
      }
    }
  return(t);
}
static ATerm n_10 (ATerm t)
{
  ATerm j_40 = NULL;
  ATerm z_40 = t;
  int b_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_40 = ATgetArgument(t, 0);
          {
            ATerm c_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_41);
      t = j_40;
    }
  else
    {
      t = z_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_40;
    }
  return(t);
}
static ATerm q_10 (ATerm t)
{
  ATerm u_40 = NULL;
  ATerm d_41 = t;
  int e_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_40 = ATgetArgument(t, 0);
          {
            ATerm f_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_41);
      t = u_40;
    }
  else
    {
      t = d_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_40;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(k_10, l_10, tboundin_3_0, t);
  return(t);
}
static ATerm r_10 (ATerm t)
{
  ATerm z_41 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_41);
  return(t);
}
static ATerm t_10 (ATerm t)
{
  ATerm g_41 = t;
  int h_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(h_41);
    }
  else
    {
      t = g_41;
      {
        ATerm b_42 = NULL,c_42 = NULL,e_42 = NULL,h_42 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            b_42 = ATgetArgument(t, 0);
            t = b_42;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                b_42 = ATgetArgument(t, 0);
                c_42 = ATgetArgument(t, 1);
                e_42 = ATgetArgument(t, 2);
                h_42 = ATgetArgument(t, 3);
                t = e_42;
                t = map_1_0(y_10, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    b_42 = ATgetArgument(t, 0);
                    c_42 = ATgetArgument(t, 1);
                    e_42 = ATgetArgument(t, 2);
                    h_42 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = e_42;
                t = map_1_0(z_10, t);
              }
          }
      }
    }
  return(t);
}
static ATerm y_10 (ATerm t)
{
  ATerm a_43 = NULL;
  ATerm i_41 = t;
  int j_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_43 = ATgetArgument(t, 0);
          {
            ATerm k_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_41);
      t = a_43;
    }
  else
    {
      t = i_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_43;
    }
  return(t);
}
static ATerm z_10 (ATerm t)
{
  ATerm m_43 = NULL;
  ATerm l_41 = t;
  int n_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_43 = ATgetArgument(t, 0);
          {
            ATerm o_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_41);
      t = m_43;
    }
  else
    {
      t = l_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_43;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm q_41 = NULL,u_41 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      u_41 = ATgetArgument(t, 0);
      t = u_41;
      if(match_cons(t, sym_Rule_3))
        {
          q_41 = ATgetArgument(t, 0);
          {
            ATerm p_41 = ATgetArgument(t, 1);
          }
          {
            ATerm r_41 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = q_41;
      t = free_vars_3_0(r_10, t_10, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          u_41 = ATgetArgument(t, 0);
          {
            ATerm s_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = u_41;
    }
  return(t);
}
static ATerm n_25 (ATerm b_125 (ATerm), ATerm g_35, ATerm f_35, ATerm t)
{
  static ATerm t_45 (ATerm t)
  {
    ATerm h_45 = NULL,k_45 = NULL,l_45 = NULL;
    h_45 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_35;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_45 = ATgetFirst((ATermList) t);
            l_45 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm t_41 = t;
          int v_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_45;
              {
                static ATerm a_11 (ATerm t)
                {
                  t = f_35;
                  return(t);
                }
                t = o_25(b_125, a_11, k_45, l_45, t);
              }
              t = t_45(t);
              LocalPopChoice(v_41);
            }
          else
            {
              t = t_41;
              {
                ATerm s_43 = NULL,v_43 = NULL,c_11 = NULL;
                t = SSLgetAnnotations(h_45);
                s_43 = t;
                t = l_45;
                t = t_45(t);
                v_43 = t;
                t = (ATerm) ATinsert(CheckATermList(v_43), k_45);
                c_11 = t;
                t = SSLsetAnnotations(c_11, s_43);
              }
            }
        }
      }
    return(t);
  }
  t = g_35;
  t = t_45(t);
  return(t);
}
static ATerm o_25 (ATerm e_125 (ATerm), ATerm f_125 (ATerm), ATerm k_35, ATerm j_35, ATerm t)
{
  t = f_125(t);
  {
    static ATerm b_11 (ATerm t)
    {
      ATerm x_45 = NULL;
      x_45 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_35, x_45);
      t = e_125(t);
      return(t);
    }
    t = fetch_1_0(b_11, t);
  }
  t = j_35;
  return(t);
}
static ATerm p_25 (ATerm w_124 (ATerm), ATerm e_35, ATerm d_35, ATerm t)
{
  static ATerm g_47 (ATerm t)
  {
    ATerm u_46 = NULL,y_46 = NULL,z_46 = NULL;
    u_46 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_46;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_46 = ATgetFirst((ATermList) t);
            z_46 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm w_41 = t;
          int y_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_46;
              {
                static ATerm d_11 (ATerm t)
                {
                  t = d_35;
                  return(t);
                }
                t = o_25(w_124, d_11, y_46, z_46, t);
              }
              t = g_47(t);
              LocalPopChoice(y_41);
            }
          else
            {
              t = w_41;
              {
                ATerm g_44 = NULL,j_44 = NULL,e_11 = NULL;
                t = SSLgetAnnotations(u_46);
                g_44 = t;
                t = z_46;
                t = g_47(t);
                j_44 = t;
                t = (ATerm) ATinsert(CheckATermList(j_44), y_46);
                e_11 = t;
                t = SSLsetAnnotations(e_11, g_44);
              }
            }
        }
      }
    return(t);
  }
  t = e_35;
  t = g_47(t);
  return(t);
}
ATerm genzip_4_0 (ATerm a_123 (ATerm), ATerm b_123 (ATerm), ATerm c_123 (ATerm), ATerm d_123 (ATerm), ATerm t)
{
  static ATerm r_181 (ATerm t)
  {
    ATerm a_42 = t;
    int i_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_123(t);
        LocalPopChoice(i_42);
      }
    else
      {
        t = a_42;
        {
          ATerm l_181 = NULL,m_181 = NULL,n_181 = NULL,o_181 = NULL,p_181 = NULL,q_181 = NULL,g_11 = NULL;
          t = b_123(t);
          q_181 = t;
          if(match_cons(t, sym__2))
            {
              m_181 = ATgetArgument(t, 0);
              n_181 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(q_181);
          l_181 = t;
          t = m_181;
          t = d_123(t);
          o_181 = t;
          t = n_181;
          t = r_181(t);
          p_181 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_181, p_181);
          g_11 = t;
          t = SSLsetAnnotations(g_11, l_181);
          t = c_123(t);
        }
      }
    return(t);
  }
  t = r_181(t);
  return(t);
}
static ATerm f_11 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_42 = ATgetArgument(t, 0);
      if(((ATgetType(j_42) != AT_LIST) || !(ATisEmpty(j_42))))
        _fail(t);
      {
        ATerm k_42 = ATgetArgument(t, 1);
        if(((ATgetType(k_42) != AT_LIST) || !(ATisEmpty(k_42))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_11 (ATerm t)
{
  ATerm z_47 = NULL,a_48 = NULL,b_48 = NULL,c_48 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_42 = ATgetArgument(t, 0);
      if(((ATgetType(l_42) == AT_LIST) && !(ATisEmpty(l_42))))
        {
          z_47 = ATgetFirst((ATermList) l_42);
          a_48 = (ATerm) ATgetNext((ATermList) l_42);
        }
      else
        _fail(t);
      {
        ATerm m_42 = ATgetArgument(t, 1);
        if(((ATgetType(m_42) == AT_LIST) && !(ATisEmpty(m_42))))
          {
            b_48 = ATgetFirst((ATermList) m_42);
            c_48 = (ATerm) ATgetNext((ATermList) m_42);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_47, b_48), (ATerm) ATmakeAppl(sym__2, a_48, c_48));
  return(t);
}
static ATerm k_11 (ATerm t)
{
  ATerm d_48 = NULL,e_48 = NULL;
  if(match_cons(t, sym__2))
    {
      d_48 = ATgetArgument(t, 0);
      e_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_48), d_48);
  return(t);
}
static ATerm r_25 (ATerm r_622, ATerm w_622, ATerm b_63, ATerm t)
{
  ATerm n_47 = NULL,u_47 = NULL,w_47 = NULL,x_47 = NULL;
  t = SSL_explode_term(w_622);
  if(match_cons(t, sym__2))
    {
      n_47 = ATgetArgument(t, 0);
      w_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(r_622);
  if(match_cons(t, sym__2))
    {
      if((n_47 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      u_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_47, w_47);
  t = genzip_4_0(f_11, h_11, k_11, _id, t);
  x_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_47, b_63);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm c_114 (ATerm), ATerm d_114 (ATerm), ATerm t)
{
  static ATerm l_160 (ATerm t)
  {
    ATerm n_42 = t;
    int o_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_114(t);
        LocalPopChoice(o_42);
      }
    else
      {
        t = n_42;
        t = d_114(t);
        t = l_160(t);
      }
    return(t);
  }
  t = l_160(t);
  return(t);
}
ATerm for_3_0 (ATerm f_114 (ATerm), ATerm g_114 (ATerm), ATerm h_114 (ATerm), ATerm t)
{
  t = f_114(t);
  t = while_not_2_0(g_114, h_114, t);
  return(t);
}
static ATerm l_11 (ATerm t)
{
  ATerm u_48 = NULL;
  u_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, u_48);
  return(t);
}
static ATerm n_11 (ATerm t)
{
  ATerm v_48 = NULL,x_48 = NULL,z_48 = NULL,a_49 = NULL,i_11 = NULL;
  a_49 = t;
  if(match_cons(t, sym__2))
    {
      x_48 = ATgetArgument(t, 0);
      z_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_49);
  v_48 = t;
  t = z_48;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_48, z_48);
  i_11 = t;
  t = SSLsetAnnotations(i_11, v_48);
  return(t);
}
static ATerm q_11 (ATerm t)
{
  ATerm i_50 = NULL,q_50 = NULL,r_50 = NULL,s_50 = NULL,t_50 = NULL;
  i_50 = t;
  if(match_cons(t, sym__2))
    {
      q_50 = ATgetArgument(t, 0);
      r_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_50;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_50 = ATgetFirst((ATermList) t);
      t_50 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_42 = t;
        int q_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_51(q_50, r_50, i_50, t);
            LocalPopChoice(q_42);
          }
        else
          {
            t = p_42;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_50), s_50), t_50);
          }
      }
    }
  else
    {
      t = g_51(q_50, r_50, i_50, t);
    }
  return(t);
}
static ATerm g_51 (ATerm i_49, ATerm j_49, ATerm k_49, ATerm t)
{
  ATerm l_49 = NULL,o_49 = NULL,j_11 = NULL,t_49 = NULL,u_49 = NULL,v_49 = NULL,w_49 = NULL;
  t = SSLgetAnnotations(k_49);
  l_49 = t;
  t = j_49;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_49 = ATgetFirst((ATermList) t);
      w_49 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_49;
  if(match_cons(t, sym__2))
    {
      u_49 = ATgetArgument(t, 0);
      v_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_42 = t;
    int s_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_49;
        if((u_49 != t))
          {
            _fail(t);
          }
        t = w_49;
        LocalPopChoice(s_42);
      }
    else
      {
        t = r_42;
        t = j_49;
        t = r_25(u_49, v_49, w_49, t);
      }
  }
  o_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_49, o_49);
  j_11 = t;
  t = SSLsetAnnotations(j_11, l_49);
  return(t);
}
static ATerm r_11 (ATerm t)
{
  ATerm e_51 = NULL;
  if(match_cons(t, sym__2))
    {
      e_51 = ATgetArgument(t, 0);
      if((e_51 != ATgetArgument(t, 1)))
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
  ATerm u_42 = t;
  int w_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(l_11, n_11, q_11, t);
      LocalPopChoice(w_42);
    }
  else
    {
      t = u_42;
      {
        ATerm x_50 = NULL,a_51 = NULL,b_51 = NULL;
        x_50 = t;
        if(match_cons(t, sym__2))
          {
            a_51 = ATgetArgument(t, 0);
            b_51 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_50;
        t = p_25(r_11, a_51, b_51, t);
      }
    }
  return(t);
}
static ATerm v_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_11 (ATerm t)
{
  ATerm f_45 = NULL,g_45 = NULL;
  if(match_cons(t, sym__2))
    {
      f_45 = ATgetArgument(t, 0);
      g_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_25(b_12, f_45, g_45, t);
  return(t);
}
static ATerm b_12 (ATerm t)
{
  ATerm i_45 = NULL;
  if(match_cons(t, sym__2))
    {
      i_45 = ATgetArgument(t, 0);
      if((i_45 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm d_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_12 (ATerm t)
{
  ATerm y_45 = NULL,z_45 = NULL;
  if(match_cons(t, sym__2))
    {
      y_45 = ATgetArgument(t, 0);
      z_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_25(h_12, y_45, z_45, t);
  return(t);
}
static ATerm h_12 (ATerm t)
{
  ATerm a_46 = NULL;
  if(match_cons(t, sym__2))
    {
      a_46 = ATgetArgument(t, 0);
      if((a_46 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm q_142 (ATerm), ATerm r_142 (ATerm), ATerm s_142 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm e_52 (ATerm t)
  {
    ATerm x_42 = t;
    int y_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_142(t);
        LocalPopChoice(y_42);
      }
    else
      {
        t = x_42;
        {
          ATerm z_42 = t;
          int b_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_51 = NULL,p_51 = NULL,o_44 = NULL,z_44 = NULL;
              o_51 = t;
              t = r_142(t);
              p_51 = t;
              t = o_51;
              {
                static ATerm t_11 (ATerm t)
                {
                  ATerm r_51 = NULL;
                  t = e_52(t);
                  r_51 = t;
                  t = (ATerm) ATmakeAppl(sym__2, r_51, p_51);
                  t = diff_0_0(t);
                  return(t);
                }
                t = s_142(t_11, e_52, v_11, t);
              }
              z_44 = t;
              t = SSL_explode_term(z_44);
              if(match_cons(t, sym__2))
                {
                  ATerm c_43 = ATgetArgument(t, 0);
                  o_44 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = o_44;
              t = foldr_3_0(y_11, z_11, _id, t);
              LocalPopChoice(b_43);
            }
          else
            {
              t = z_42;
              {
                ATerm n_45 = NULL,o_45 = NULL;
                o_45 = t;
                t = SSL_explode_term(o_45);
                if(match_cons(t, sym__2))
                  {
                    ATerm d_43 = ATgetArgument(t, 0);
                    n_45 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = n_45;
                t = foldr_3_0(d_12, f_12, e_52, t);
              }
            }
        }
      }
    return(t);
  }
  t = e_52(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm m_114 (ATerm), ATerm t)
{
  static ATerm j_12 (ATerm t)
  {
    t = bottomup_1_0(m_114, t);
    return(t);
  }
  t = SRTS_all(j_12, t);
  t = m_114(t);
  return(t);
}
static ATerm r_12 (ATerm t)
{
  t = bottomup_1_0(s_12, t);
  t = DeclareVariables_0_0(t);
  t = desugar_0_0(t);
  t = strename_0_0(t);
  return(t);
}
static ATerm s_12 (ATerm t)
{
  ATerm d_53 = NULL,g_53 = NULL,l_53 = NULL,m_53 = NULL,p_53 = NULL;
  p_53 = t;
  if(match_cons(t, sym_LRule_1))
    {
      m_53 = ATgetArgument(t, 0);
      t = m_53;
      if(match_cons(t, sym_Rule_3))
        {
          d_53 = ATgetArgument(t, 0);
          g_53 = ATgetArgument(t, 1);
          l_53 = ATgetArgument(t, 2);
          {
            ATerm e_43 = t;
            int f_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_54 = NULL;
                t = d_53;
                t = free_vars_3_0(w_12, x_12, tboundin_3_0, t);
                h_54 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, h_54, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, d_53, g_53, l_53)));
                LocalPopChoice(f_43);
              }
            else
              {
                t = e_43;
                t = p_53;
              }
          }
        }
      else
        {
          t = p_53;
        }
    }
  else
    {
      if(match_cons(t, sym_ScopeDefault_1))
        {
          m_53 = ATgetArgument(t, 0);
          {
            ATerm g_43 = t;
            int h_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_55 = NULL;
                t = m_53;
                t = free_vars_3_0(a_13, b_13, tboundin_3_0, t);
                x_55 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, x_55, m_53);
                LocalPopChoice(h_43);
              }
            else
              {
                t = g_43;
                t = p_53;
              }
          }
        }
      else
        {
          t = p_53;
        }
    }
  return(t);
}
static ATerm w_12 (ATerm t)
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
static ATerm x_12 (ATerm t)
{
  ATerm i_43 = t;
  int j_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(j_43);
    }
  else
    {
      t = i_43;
      {
        ATerm m_54 = NULL,n_54 = NULL,o_54 = NULL,p_54 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            m_54 = ATgetArgument(t, 0);
            t = m_54;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                m_54 = ATgetArgument(t, 0);
                n_54 = ATgetArgument(t, 1);
                o_54 = ATgetArgument(t, 2);
                p_54 = ATgetArgument(t, 3);
                t = o_54;
                t = map_1_0(y_12, t);
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
                t = map_1_0(z_12, t);
              }
          }
      }
    }
  return(t);
}
static ATerm y_12 (ATerm t)
{
  ATerm f_55 = NULL;
  ATerm k_43 = t;
  int l_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_55 = ATgetArgument(t, 0);
          {
            ATerm n_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_43);
      t = f_55;
    }
  else
    {
      t = k_43;
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
static ATerm z_12 (ATerm t)
{
  ATerm q_55 = NULL;
  ATerm o_43 = t;
  int r_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_55 = ATgetArgument(t, 0);
          {
            ATerm t_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_43);
      t = q_55;
    }
  else
    {
      t = o_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_55;
    }
  return(t);
}
static ATerm a_13 (ATerm t)
{
  ATerm y_55 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_55);
  return(t);
}
static ATerm b_13 (ATerm t)
{
  ATerm u_43 = t;
  int w_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(w_43);
    }
  else
    {
      t = u_43;
      {
        ATerm h_56 = NULL,j_56 = NULL,q_56 = NULL,r_56 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            h_56 = ATgetArgument(t, 0);
            t = h_56;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                h_56 = ATgetArgument(t, 0);
                j_56 = ATgetArgument(t, 1);
                q_56 = ATgetArgument(t, 2);
                r_56 = ATgetArgument(t, 3);
                t = q_56;
                t = map_1_0(c_13, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    h_56 = ATgetArgument(t, 0);
                    j_56 = ATgetArgument(t, 1);
                    q_56 = ATgetArgument(t, 2);
                    r_56 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = q_56;
                t = map_1_0(d_13, t);
              }
          }
      }
    }
  return(t);
}
static ATerm c_13 (ATerm t)
{
  ATerm f_57 = NULL;
  ATerm x_43 = t;
  int y_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_57 = ATgetArgument(t, 0);
          {
            ATerm z_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_43);
      t = f_57;
    }
  else
    {
      t = x_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_57;
    }
  return(t);
}
static ATerm d_13 (ATerm t)
{
  ATerm v_57 = NULL;
  ATerm a_44 = t;
  int b_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_57 = ATgetArgument(t, 0);
          {
            ATerm c_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_44);
      t = v_57;
    }
  else
    {
      t = a_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_57;
    }
  return(t);
}
static ATerm t_25 (ATerm s_148, ATerm t)
{
  t = s_148;
  t = map_1_0(r_12, t);
  t = define_strategies_0_0(t);
  return(t);
}
static ATerm g_27 (ATerm q_47, ATerm r_47, ATerm t)
{
  ATerm d_44 = t;
  int e_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(q_47, r_47);
      LocalPopChoice(e_44);
    }
  else
    {
      t = d_44;
      t = SSL_addr(q_47, r_47);
    }
  return(t);
}
ATerm foldr_3_0 (ATerm c_127 (ATerm), ATerm d_127 (ATerm), ATerm e_127 (ATerm), ATerm t)
{
  ATerm f_168 = NULL,g_168 = NULL,h_168 = NULL;
  f_168 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_168;
      t = c_127(t);
    }
  else
    {
      ATerm k_168 = NULL,l_168 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_168 = ATgetFirst((ATermList) t);
          h_168 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_168;
      t = e_127(t);
      k_168 = t;
      t = h_168;
      t = foldr_3_0(c_127, d_127, e_127, t);
      l_168 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_168, l_168);
      t = d_127(t);
    }
  return(t);
}
static ATerm e_13 (ATerm t)
{
  ATerm f_58 = NULL,g_58 = NULL,h_58 = NULL,i_58 = NULL,k_58 = NULL,n_58 = NULL;
  f_58 = t;
  if(match_cons(t, sym_SDef_3))
    {
      g_58 = ATgetArgument(t, 0);
      h_58 = ATgetArgument(t, 1);
      {
        ATerm f_44 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = h_58;
  t = foldr_3_0(f_13, g_13, h_13, t);
  i_58 = t;
  t = term_b_17;
  k_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_58, i_58);
  n_58 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_b_17, (ATerm)ATmakeAppl(sym__2, g_58, i_58), f_58);
  t = v_28(k_58, n_58, f_58, t);
  return(t);
}
static ATerm f_13 (ATerm t)
{
  t = term_n_21;
  return(t);
}
static ATerm g_13 (ATerm t)
{
  ATerm y_58 = NULL,z_58 = NULL;
  if(match_cons(t, sym__2))
    {
      y_58 = ATgetArgument(t, 0);
      z_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_27(y_58, z_58, t);
  return(t);
}
static ATerm h_13 (ATerm t)
{
  t = term_o_21;
  return(t);
}
ATerm define_strategies_0_0 (ATerm t)
{
  t = map_1_0(e_13, t);
  return(t);
}
static ATerm u_25 (ATerm t_54, ATerm u_54, ATerm t)
{
  t = SSL_execvp(t_54, u_54);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm t_60 = NULL,w_60 = NULL,x_60 = NULL,y_60 = NULL;
  t_60 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      w_60 = ATgetArgument(t, 0);
      {
        ATerm g_46 = NULL,h_46 = NULL;
        t = SSL_int_to_string(w_60);
        g_46 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_44), g_46), term_h_44);
        h_46 = t;
        t = SSL_concat_strings(h_46);
      }
    }
  else
    {
      ATerm a_47 = NULL,b_47 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          w_60 = ATgetArgument(t, 0);
          x_60 = ATgetArgument(t, 1);
          y_60 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(x_60);
      a_47 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, y_60), term_l_44), a_47), term_k_44), w_60);
      b_47 = t;
      t = SSL_concat_strings(b_47);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm j_121 (ATerm), ATerm t)
{
  ATerm s_61 = NULL;
  static ATerm i_13 (ATerm t)
  {
    t = j_121(t);
    if(((s_61 != NULL) && (s_61 != t)))
      _fail(t);
    else
      s_61 = t;
    return(t);
  }
  t = fetch_1_0(i_13, t);
  t = not_null(s_61);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm t_61 = NULL;
  t_61 = t;
  {
    ATerm m_44 = t;
    int n_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm j_13 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm r_44 = ATgetArgument(t, 0);
              if((t_61 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm s_44 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_52), term_a_52), term_u_51), term_n_51), term_j_51), term_d_51), term_w_50), term_m_50), term_h_50), term_d_50), term_z_49), term_q_49), term_h_49), term_d_49), term_m_48), term_y_47), term_m_47), term_h_47), term_c_47), term_t_46), term_p_46), term_l_46), term_f_46), term_b_46), term_s_45), term_m_45), term_c_45), term_v_44);
        t = fetch_elem_1_0(j_13, t);
        LocalPopChoice(n_44);
      }
    else
      {
        t = m_44;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, t_61);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm z_61 = NULL,k_62 = NULL;
  z_61 = t;
  {
    ATerm g_52 = t;
    int h_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm i_52 = ATgetArgument(t, 0);
            k_62 = ATgetArgument(t, 1);
            {
              ATerm j_52 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(h_52);
        {
          ATerm k_52 = t;
          int l_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_47 = NULL,o_47 = NULL,p_47 = NULL;
              t = k_62;
              {
                ATerm n_52 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = n_52;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              l_47 = t;
              t = term_q_21;
              o_47 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, l_47), term_o_52);
              p_47 = t;
              t = SSL_printnl(o_47, p_47);
              t = (ATerm) ATmakeAppl(sym__2, term_q_21, (ATerm) ATinsert(ATinsert(ATempty, l_47), term_o_52));
              LocalPopChoice(l_52);
            }
          else
            {
              t = k_52;
              t = z_61;
            }
        }
      }
    else
      {
        t = g_52;
        t = z_61;
      }
  }
  t = z_61;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm z_136 (ATerm), ATerm t)
{
  ATerm f_63 = NULL,g_63 = NULL;
  g_63 = t;
  t = fork_0_0(t);
  f_63 = t;
  {
    ATerm p_52 = t;
    int q_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = g_63;
        t = z_136(t);
        LocalPopChoice(q_52);
      }
    else
      {
        t = p_52;
        t = SSL_waitpid(f_63);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm r_52 = ATgetArgument(t, 0);
            if(((ATgetType(r_52) != AT_INT) || (ATgetInt((ATermInt) r_52) != 0)))
              _fail(t);
            {
              ATerm s_52 = ATgetArgument(t, 1);
            }
            {
              ATerm t_52 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = g_63;
      }
  }
  return(t);
}
ATerm call_sc_0_0 (ATerm t)
{
  ATerm k_63 = NULL,x_63 = NULL,y_63 = NULL;
  k_63 = t;
  {
    ATerm u_52 = t;
    int v_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_64 = NULL,b_64 = NULL,c_64 = NULL,d_64 = NULL;
        t = term_y_28;
        t = get_config_0_0(t);
        t = term_w_52;
        d_64 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_w_52, k_63);
        t = t_28(d_64, k_63, t);
        a_64 = t;
        t = term_q_21;
        b_64 = t;
        t = (ATerm) ATinsert(ATempty, a_64);
        c_64 = t;
        t = SSL_printnl(b_64, c_64);
        t = k_63;
        LocalPopChoice(v_52);
      }
    else
      {
        t = u_52;
      }
  }
  t = term_z_52;
  t = get_config_0_0(t);
  x_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_53, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(x_63), term_c_53), k_63), term_b_53));
  {
    static ATerm k_13 (ATerm t)
    {
      ATerm k_64 = NULL,l_64 = NULL,j_65 = NULL,k_65 = NULL;
      t = term_q_21;
      j_65 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_a_53, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(x_63), term_c_53), k_63), term_b_53)));
      k_65 = t;
      t = SSL_printnl(j_65, k_65);
      t = term_a_53;
      k_64 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(x_63), term_c_53), k_63), term_b_53);
      l_64 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_a_53, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(x_63), term_c_53), k_63), term_b_53));
      t = u_25(k_64, l_64, t);
      return(t);
    }
    t = fork_and_wait_1_0(k_13, t);
  }
  t = term_e_53;
  y_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_63, term_e_53);
  t = t_28(k_63, y_63, t);
  t = ReadFromFile_0_0(t);
  return(t);
}
ATerm eval_import_0_0 (ATerm t)
{
  ATerm m_65 = NULL;
  ATerm f_53 = t;
  int h_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Imports_1))
        {
          ATerm i_53 = ATgetArgument(t, 0);
          if(((ATgetType(i_53) != AT_LIST) || !(ATisEmpty(i_53))))
            _fail(t);
        }
      else
        _fail(t);
      LocalPopChoice(h_53);
    }
  else
    {
      t = f_53;
      {
        ATerm j_53 = t;
        int k_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Imports_1))
              {
                ATerm n_53 = ATgetArgument(t, 0);
                if(((ATgetType(n_53) == AT_LIST) && !(ATisEmpty(n_53))))
                  {
                    m_65 = ATgetFirst((ATermList) n_53);
                    {
                      ATerm t_53 = (ATerm) ATgetNext((ATermList) n_53);
                      if(((ATgetType(t_53) != AT_LIST) || !(ATisEmpty(t_53))))
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            LocalPopChoice(k_53);
            {
              ATerm o_65 = NULL;
              t = m_65;
              t = call_sc_0_0(t);
              if(match_cons(t, sym_Specification_1))
                {
                  ATerm u_53 = ATgetArgument(t, 0);
                  if(((ATgetType(u_53) == AT_LIST) && !(ATisEmpty(u_53))))
                    {
                      ATerm v_53 = ATgetFirst((ATermList) u_53);
                      if(match_cons(v_53, sym_Signature_1))
                        {
                          ATerm z_53 = ATgetArgument(v_53, 0);
                        }
                      else
                        _fail(t);
                      {
                        ATerm y_53 = (ATerm) ATgetNext((ATermList) u_53);
                        if(((ATgetType(y_53) == AT_LIST) && !(ATisEmpty(y_53))))
                          {
                            ATerm a_54 = ATgetFirst((ATermList) y_53);
                            if(match_cons(a_54, sym_Strategies_1))
                              {
                                o_65 = ATgetArgument(a_54, 0);
                              }
                            else
                              _fail(t);
                            {
                              ATerm b_54 = (ATerm) ATgetNext((ATermList) y_53);
                              if(((ATgetType(b_54) != AT_LIST) || !(ATisEmpty(b_54))))
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
              t = o_65;
              t = define_strategies_0_0(t);
            }
          }
        else
          {
            t = j_53;
            {
              ATerm v_65 = NULL,w_65 = NULL,x_65 = NULL;
              if(match_cons(t, sym_Imports_1))
                {
                  ATerm c_54 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = term_q_21;
              w_65 = t;
              t = (ATerm) ATinsert(ATempty, term_d_54);
              x_65 = t;
              t = SSL_printnl(w_65, x_65);
              t = term_o_21;
              v_65 = t;
              t = SSL_exit(v_65);
              t = (ATerm) ATinsert(ATempty, term_d_54);
            }
          }
      }
    }
  return(t);
}
static ATerm w_25 (ATerm s_59, ATerm r_59, ATerm t)
{
  static ATerm l_13 (ATerm t)
  {
    ATerm f_66 = NULL,p_66 = NULL;
    if(match_cons(t, sym__2))
      {
        f_66 = ATgetArgument(t, 0);
        p_66 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_table_put(s_59, f_66, p_66);
    t = (ATerm) ATmakeAppl(sym__3, s_59, f_66, p_66);
    return(t);
  }
  t = r_59;
  t = map_1_0(l_13, t);
  return(t);
}
static ATerm x_25 (ATerm p_44, ATerm q_44, ATerm t)
{
  t = SSL_access(p_44, q_44);
  return(t);
}
static ATerm y_25 (ATerm z_27, ATerm t)
{
  ATerm u_66 = NULL,a_67 = NULL,d_69 = NULL,e_69 = NULL,i_70 = NULL,s_69 = NULL;
  s_69 = t;
  {
    ATerm e_54 = t;
    int f_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_48 = NULL,h_48 = NULL,i_48 = NULL,j_48 = NULL;
        t = term_y_28;
        t = get_config_0_0(t);
        t = term_g_54;
        j_48 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_g_54, z_27);
        t = t_28(j_48, z_27, t);
        g_48 = t;
        t = term_q_21;
        h_48 = t;
        t = (ATerm) ATinsert(ATempty, g_48);
        i_48 = t;
        t = SSL_printnl(h_48, i_48);
        t = s_69;
        LocalPopChoice(f_54);
      }
    else
      {
        t = e_54;
        t = s_69;
      }
  }
  t = z_27;
  {
    ATerm i_54 = t;
    int j_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_69 = NULL;
        t = (ATerm) ATinsert(ATempty, term_l_54);
        u_69 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_27, (ATerm) ATinsert(ATempty, term_l_54));
        t = x_25(z_27, u_69, t);
        LocalPopChoice(j_54);
      }
    else
      {
        t = i_54;
        {
          ATerm v_69 = NULL,x_69 = NULL,y_69 = NULL;
          t = term_q_21;
          x_69 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_54), z_27), term_q_54);
          y_69 = t;
          t = SSL_printnl(x_69, y_69);
          t = term_o_21;
          v_69 = t;
          t = SSL_exit(v_69);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_54), z_27), term_q_54);
        }
      }
  }
  t = z_27;
  t = ReadFromFile_0_0(t);
  if(match_cons(t, sym_StrategoDump_2))
    {
      u_66 = ATgetArgument(t, 0);
      a_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_c_17;
  e_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_17, u_66);
  t = w_25(e_69, u_66, t);
  t = term_b_17;
  d_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_17, a_67);
  t = w_25(d_69, a_67, t);
  i_70 = t;
  {
    ATerm s_54 = t;
    int w_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_48 = NULL,o_48 = NULL,p_48 = NULL,q_48 = NULL;
        t = term_y_28;
        t = get_config_0_0(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_54), z_27), term_x_54);
        q_48 = t;
        t = SSL_concat_strings(q_48);
        n_48 = t;
        t = term_q_21;
        o_48 = t;
        t = (ATerm) ATinsert(ATempty, n_48);
        p_48 = t;
        t = SSL_printnl(o_48, p_48);
        t = i_70;
        LocalPopChoice(w_54);
      }
    else
      {
        t = s_54;
        t = i_70;
      }
  }
  return(t);
}
static ATerm z_25 (ATerm j_29, ATerm k_29, ATerm t)
{
  ATerm r_70 = NULL;
  t = SSL_write_term_to_stream_baf(j_29, k_29);
  r_70 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_70);
  return(t);
}
static ATerm a_26 (ATerm o_120 (ATerm), ATerm p_185, ATerm r_29, ATerm t)
{
  ATerm s_70 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_185, term_a_55);
  t = m_28(t);
  s_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_70, r_29);
  t = o_120(t);
  t = fclose_0_0(t);
  t = r_29;
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm t_70 = NULL;
  static ATerm m_13 (ATerm t)
  {
    ATerm u_70 = NULL,v_70 = NULL;
    u_70 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_70), u_70);
    t = u_28(not_null(t_70), u_70, t);
    v_70 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_70, v_70);
    return(t);
  }
  if(((t_70 != NULL) && (t_70 != t)))
    _fail(t);
  else
    t_70 = t;
  t = SSL_table_keys(t_70);
  t = map_1_0(m_13, t);
  return(t);
}
static ATerm n_13 (ATerm t)
{
  ATerm h_71 = NULL,i_71 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_55 = ATgetArgument(t, 0);
      if(match_cons(b_55, sym_Stream_1))
        {
          h_71 = ATgetArgument(b_55, 0);
        }
      else
        _fail(t);
      i_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_25(h_71, i_71, t);
  return(t);
}
static ATerm b_26 (ATerm w_27, ATerm t)
{
  ATerm e_71 = NULL,f_71 = NULL,g_71 = NULL,m_72 = NULL;
  t = term_c_17;
  t = table_getlist_0_0(t);
  e_71 = t;
  t = term_b_17;
  t = table_getlist_0_0(t);
  f_71 = t;
  t = (ATerm) ATmakeAppl(sym_StrategoDump_2, e_71, f_71);
  g_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_27, (ATerm) ATmakeAppl(sym_StrategoDump_2, e_71, f_71));
  t = a_26(n_13, w_27, g_71, t);
  m_72 = t;
  {
    ATerm c_55 = t;
    int d_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_48 = NULL,y_48 = NULL,b_49 = NULL,c_49 = NULL;
        t = term_y_28;
        t = get_config_0_0(t);
        t = term_e_55;
        c_49 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_e_55, w_27);
        t = t_28(c_49, w_27, t);
        w_48 = t;
        t = term_q_21;
        y_48 = t;
        t = (ATerm) ATinsert(ATempty, w_48);
        b_49 = t;
        t = SSL_printnl(y_48, b_49);
        t = m_72;
        LocalPopChoice(d_55);
      }
    else
      {
        t = c_55;
        t = m_72;
      }
  }
  return(t);
}
static ATerm c_191 (ATerm f_190, ATerm g_190, ATerm h_190, ATerm t)
{
  ATerm i_190 = NULL,l_190 = NULL,d_158 = NULL,e_158 = NULL,m_11 = NULL;
  t = SSLgetAnnotations(h_190);
  i_190 = t;
  t = f_190;
  {
    ATerm g_55 = t;
    int h_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_190 = NULL;
        if(match_cons(t, sym_Dump_1))
          {
            o_190 = ATgetArgument(t, 0);
            t = f_190;
            t = b_26(o_190, t);
          }
        else
          {
            if(match_cons(t, sym_Load_1))
              {
                o_190 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = f_190;
            t = y_25(o_190, t);
          }
        LocalPopChoice(h_55);
      }
    else
      {
        t = g_55;
        {
          ATerm i_55 = t;
          int j_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = eval_import_0_0(t);
              LocalPopChoice(j_55);
            }
          else
            {
              t = i_55;
              {
                ATerm s_190 = NULL;
                if(match_cons(t, sym_Strategies_1))
                  {
                    s_190 = ATgetArgument(t, 0);
                    t = f_190;
                    t = t_25(s_190, t);
                  }
                else
                  {
                    if(match_cons(t, sym_Rules_1))
                      {
                        s_190 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = f_190;
                    t = w_24(s_190, t);
                  }
              }
            }
        }
      }
  }
  l_190 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_190, g_190);
  m_11 = t;
  t = SSLsetAnnotations(m_11, i_190);
  e_158 = t;
  t = SSL_explode_term(e_158);
  if(match_cons(t, sym__2))
    {
      ATerm k_55 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_55) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_55 = ATgetArgument(t, 1);
        if(((ATgetType(l_55) == AT_LIST) && !(ATisEmpty(l_55))))
          {
            ATerm m_55 = ATgetFirst((ATermList) l_55);
            ATerm n_55 = (ATerm) ATgetNext((ATermList) l_55);
            if(((ATgetType(n_55) == AT_LIST) && !(ATisEmpty(n_55))))
              {
                d_158 = ATgetFirst((ATermList) n_55);
                {
                  ATerm o_55 = (ATerm) ATgetNext((ATermList) n_55);
                }
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = d_158;
  return(t);
}
static ATerm o_13 (ATerm t)
{
  t = term_p_55;
  return(t);
}
static ATerm p_13 (ATerm t)
{
  t = term_r_55;
  return(t);
}
ATerm eval_command_0_0 (ATerm t)
{
  ATerm s_55 = t;
  int t_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_190 = NULL,w_190 = NULL,x_190 = NULL,y_190 = NULL;
      ATerm u_55 = t;
      int v_55 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_190 = NULL;
          d_190 = t;
          t = term_b_19;
          t = get_config_0_0(t);
          t = d_190;
          t = debug_1_0(o_13, t);
          LocalPopChoice(v_55);
        }
      else
        {
          t = u_55;
        }
      w_190 = t;
      if(match_cons(t, sym__2))
        {
          x_190 = ATgetArgument(t, 0);
          y_190 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = x_190;
      if(match_cons(t, sym_Eval_1))
        {
          v_190 = ATgetArgument(t, 0);
          {
            ATerm w_55 = t;
            int z_55 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = w_190;
                t = j_28(v_190, y_190, t);
                LocalPopChoice(z_55);
              }
            else
              {
                t = w_55;
                t = c_191(x_190, y_190, w_190, t);
              }
          }
        }
      else
        {
          t = c_191(x_190, y_190, w_190, t);
        }
      LocalPopChoice(t_55);
    }
  else
    {
      t = s_55;
      {
        ATerm b_191 = NULL;
        t = debug_1_0(p_13, t);
        t = term_o_21;
        b_191 = t;
        t = SSL_exit(b_191);
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm l_113 (ATerm), ATerm m_113 (ATerm), ATerm t)
{
  static ATerm d_191 (ATerm t)
  {
    ATerm a_56 = t;
    int b_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_113(t);
        t = d_191(t);
        LocalPopChoice(b_56);
      }
    else
      {
        t = a_56;
        t = m_113(t);
      }
    return(t);
  }
  t = d_191(t);
  return(t);
}
static ATerm q_13 (ATerm t)
{
  ATerm f_191 = NULL,g_191 = NULL,h_191 = NULL,i_191 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_56 = ATgetArgument(t, 0);
      if(((ATgetType(d_56) == AT_LIST) && !(ATisEmpty(d_56))))
        {
          f_191 = ATgetFirst((ATermList) d_56);
          g_191 = (ATerm) ATgetNext((ATermList) d_56);
        }
      else
        _fail(t);
      h_191 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_191, h_191);
  t = eval_command_0_0(t);
  i_191 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_191, i_191);
  return(t);
}
ATerm evaluate_commands_0_0 (ATerm t)
{
  t = repeat_2_0(q_13, _id, t);
  return(t);
}
static ATerm x_191 (ATerm r_191, ATerm t)
{
  t = SSL_fclose(r_191);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_191 = NULL,v_191 = NULL;
  v_191 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_191 = ATgetArgument(t, 0);
      {
        ATerm e_56 = t;
        int f_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_191);
            LocalPopChoice(f_56);
          }
        else
          {
            t = e_56;
            t = x_191(v_191, t);
          }
      }
    }
  else
    {
      t = x_191(v_191, t);
    }
  return(t);
}
static ATerm k_28 (ATerm p_29, ATerm t)
{
  t = SSL_read_term_from_stream(p_29);
  return(t);
}
static ATerm l_28 (ATerm x_44, ATerm y_44, ATerm t)
{
  ATerm y_191 = NULL;
  t = SSL_fopen(x_44, y_44);
  y_191 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_191);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm z_191 = NULL;
  t = SSL_stdin_stream();
  z_191 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_191);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm a_192 = NULL;
  t = SSL_stdout_stream();
  a_192 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_192);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm b_192 = NULL;
  t = SSL_stderr_stream();
  b_192 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_192);
  return(t);
}
static ATerm i_193 (ATerm h_192, ATerm t)
{
  ATerm i_192 = NULL;
  t = SSL_explode_term(h_192);
  if(match_cons(t, sym__2))
    {
      ATerm g_56 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_56) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_56 = ATgetArgument(t, 1);
        if(((ATgetType(i_56) == AT_LIST) && !(ATisEmpty(i_56))))
          {
            i_192 = ATgetFirst((ATermList) i_56);
            {
              ATerm k_56 = (ATerm) ATgetNext((ATermList) i_56);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_192;
  if(match_cons(t, sym_stderr_0))
    {
      t = i_192;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = i_192;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = i_192;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm j_193 (ATerm l_192, ATerm m_192, ATerm n_192, ATerm t)
{
  ATerm o_192 = NULL,p_192 = NULL,q_192 = NULL,t_192 = NULL,o_11 = NULL;
  t = SSLgetAnnotations(n_192);
  q_192 = t;
  t = l_192;
  if(match_cons(t, sym_Path_1))
    {
      t_192 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_192, m_192);
  o_11 = t;
  t = SSLsetAnnotations(o_11, q_192);
  if(match_cons(t, sym__2))
    {
      o_192 = ATgetArgument(t, 0);
      p_192 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_28(o_192, p_192, t);
  return(t);
}
static ATerm k_193 (ATerm v_192, ATerm w_192, ATerm x_192, ATerm t)
{
  ATerm y_192 = NULL,z_192 = NULL,a_193 = NULL,d_193 = NULL,p_11 = NULL;
  t = SSLgetAnnotations(x_192);
  a_193 = t;
  t = SSL_is_string(v_192);
  d_193 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_193, w_192);
  p_11 = t;
  t = SSLsetAnnotations(p_11, a_193);
  if(match_cons(t, sym__2))
    {
      y_192 = ATgetArgument(t, 0);
      z_192 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_28(y_192, z_192, t);
  return(t);
}
static ATerm m_28 (ATerm t)
{
  ATerm f_193 = NULL,g_193 = NULL,h_193 = NULL;
  f_193 = t;
  if(match_cons(t, sym__2))
    {
      g_193 = ATgetArgument(t, 0);
      h_193 = ATgetArgument(t, 1);
      {
        ATerm l_56 = t;
        int m_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_193(f_193, t);
            LocalPopChoice(m_56);
          }
        else
          {
            t = l_56;
            {
              ATerm o_56 = t;
              int p_56 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_193(g_193, h_193, f_193, t);
                  LocalPopChoice(p_56);
                }
              else
                {
                  t = o_56;
                  t = k_193(g_193, h_193, f_193, t);
                }
            }
          }
      }
    }
  else
    {
      t = i_193(f_193, t);
    }
  return(t);
}
static ATerm r_13 (ATerm t)
{
  t = term_s_56;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm l_193 = NULL,m_193 = NULL,n_193 = NULL;
  ATerm t_56 = t;
  int u_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_193 = NULL;
      o_193 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_193, term_v_56);
      t = m_28(t);
      LocalPopChoice(u_56);
    }
  else
    {
      t = t_56;
      t = debug_1_0(r_13, t);
      _fail(t);
    }
  m_193 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_193 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_28(n_193, t);
  l_193 = t;
  t = m_193;
  t = fclose_0_0(t);
  t = l_193;
  return(t);
}
ATerm copyright_0_0 (ATerm t)
{
  ATerm q_193 = NULL,r_193 = NULL,s_193 = NULL,u_193 = NULL,v_193 = NULL,w_193 = NULL,x_193 = NULL,y_193 = NULL,z_193 = NULL,a_194 = NULL,b_194 = NULL,c_194 = NULL,d_194 = NULL,e_194 = NULL,f_194 = NULL,g_194 = NULL,h_194 = NULL;
  f_194 = t;
  t = term_q_21;
  g_194 = t;
  t = (ATerm) ATinsert(ATempty, term_w_56);
  h_194 = t;
  t = SSL_printnl(g_194, h_194);
  t = term_q_21;
  d_194 = t;
  t = (ATerm) ATinsert(ATempty, term_x_56);
  e_194 = t;
  t = SSL_printnl(d_194, e_194);
  t = term_q_21;
  b_194 = t;
  t = (ATerm) ATinsert(ATempty, term_y_56);
  c_194 = t;
  t = SSL_printnl(b_194, c_194);
  t = term_q_21;
  z_193 = t;
  t = (ATerm) ATinsert(ATempty, term_z_56);
  a_194 = t;
  t = SSL_printnl(z_193, a_194);
  t = term_q_21;
  x_193 = t;
  t = (ATerm) ATinsert(ATempty, term_a_57);
  y_193 = t;
  t = SSL_printnl(x_193, y_193);
  t = term_q_21;
  v_193 = t;
  t = (ATerm) ATinsert(ATempty, term_b_57);
  w_193 = t;
  t = SSL_printnl(v_193, w_193);
  t = term_q_21;
  s_193 = t;
  t = (ATerm) ATinsert(ATempty, term_c_57);
  u_193 = t;
  t = SSL_printnl(s_193, u_193);
  t = term_q_21;
  q_193 = t;
  t = (ATerm) ATinsert(ATempty, term_w_56);
  r_193 = t;
  t = SSL_printnl(q_193, r_193);
  t = f_194;
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm q_194 = NULL,r_194 = NULL,s_194 = NULL;
  q_194 = t;
  if(match_cons(t, sym__2))
    {
      r_194 = ATgetArgument(t, 0);
      s_194 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_57 = t;
    int e_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_194;
        if((r_194 != t))
          {
            _fail(t);
          }
        t = q_194;
        LocalPopChoice(e_57);
      }
    else
      {
        t = d_57;
        t = (ATerm) ATmakeAppl(sym__2, r_194, s_194);
        {
          ATerm g_57 = t;
          int h_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(r_194, s_194);
              LocalPopChoice(h_57);
            }
          else
            {
              t = g_57;
              t = SSL_gtr(r_194, s_194);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, r_194, s_194);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm m_135 (ATerm), ATerm t)
{
  ATerm w_194 = NULL;
  w_194 = t;
  {
    ATerm i_57 = t;
    int j_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_194 = NULL;
        t = term_l_57;
        t = get_config_0_0(t);
        y_194 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_194, term_o_21);
        t = geq_0_0(t);
        t = w_194;
        t = m_135(t);
        LocalPopChoice(j_57);
      }
    else
      {
        t = i_57;
        t = w_194;
      }
  }
  return(t);
}
ATerm at_end_1_0 (ATerm n_121 (ATerm), ATerm t)
{
  static ATerm w_195 (ATerm t)
  {
    ATerm t_195 = NULL,u_195 = NULL,v_195 = NULL;
    v_195 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_195 = ATgetFirst((ATermList) t);
        u_195 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm c_160 = NULL,h_160 = NULL,s_11 = NULL;
          t = SSLgetAnnotations(v_195);
          c_160 = t;
          t = u_195;
          t = w_195(t);
          h_160 = t;
          t = (ATerm) ATinsert(CheckATermList(h_160), t_195);
          s_11 = t;
          t = SSLsetAnnotations(s_11, c_160);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_195;
        t = n_121(t);
      }
    return(t);
  }
  t = w_195(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm d_195 = NULL,e_195 = NULL,f_195 = NULL;
  d_195 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_195;
    }
  else
    {
      static ATerm s_13 (ATerm t)
      {
        t = not_null(f_195);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_195 = ATgetFirst((ATermList) t);
          if(((f_195 != NULL) && (f_195 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            f_195 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_195;
      t = at_end_1_0(s_13, t);
    }
  return(t);
}
static ATerm i_196 (ATerm a_196, ATerm t)
{
  ATerm b_196 = NULL;
  t = SSL_explode_term(a_196);
  if(match_cons(t, sym__2))
    {
      ATerm m_57 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_57) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      b_196 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_196;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm d_196 = NULL,e_196 = NULL,f_196 = NULL;
  f_196 = t;
  if(match_cons(t, sym__2))
    {
      d_196 = ATgetArgument(t, 0);
      e_196 = ATgetArgument(t, 1);
      {
        ATerm n_57 = t;
        int o_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm t_13 (ATerm t)
            {
              t = e_196;
              return(t);
            }
            t = d_196;
            t = at_end_1_0(t_13, t);
            LocalPopChoice(o_57);
          }
        else
          {
            t = n_57;
            t = i_196(f_196, t);
          }
      }
    }
  else
    {
      t = i_196(f_196, t);
    }
  return(t);
}
static ATerm o_28 (ATerm x_53, ATerm w_53, ATerm t)
{
  ATerm j_196 = NULL,k_196 = NULL,l_196 = NULL;
  t = x_53;
  {
    ATerm p_57 = t;
    int r_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(r_57);
      }
    else
      {
        t = p_57;
        t = (ATerm) ATempty;
      }
  }
  k_196 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_53, k_196);
  t = conc_0_0(t);
  j_196 = t;
  t = term_s_57;
  l_196 = t;
  t = SSL_table_put(l_196, x_53, j_196);
  t = (ATerm) ATmakeAppl(sym__3, term_s_57, x_53, j_196);
  return(t);
}
static ATerm u_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-I", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_13 (ATerm t)
{
  ATerm m_196 = NULL,n_196 = NULL,o_196 = NULL;
  m_196 = t;
  t = term_z_52;
  n_196 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_196), term_z_52);
  o_196 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_52, (ATerm) ATinsert(ATinsert(ATempty, m_196), term_z_52));
  t = o_28(n_196, o_196, t);
  return(t);
}
static ATerm w_13 (ATerm t)
{
  t = term_t_57;
  return(t);
}
static ATerm x_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("@version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_13 (ATerm t)
{
  ATerm p_196 = NULL,q_196 = NULL;
  p_196 = t;
  t = term_u_57;
  q_196 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_57, p_196);
  t = x_28(q_196, p_196, t);
  return(t);
}
static ATerm z_13 (ATerm t)
{
  t = term_w_57;
  return(t);
}
static ATerm a_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-d", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_14 (ATerm t)
{
  ATerm r_196 = NULL,s_196 = NULL,t_196 = NULL,u_196 = NULL;
  t = term_b_19;
  t_196 = t;
  t = term_o_21;
  u_196 = t;
  t = term_x_57;
  t = x_28(t_196, u_196, t);
  t = term_l_57;
  r_196 = t;
  t = term_a_45;
  s_196 = t;
  t = term_y_57;
  t = x_28(r_196, s_196, t);
  return(t);
}
static ATerm c_14 (ATerm t)
{
  t = term_z_57;
  return(t);
}
static ATerm d_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-t", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_14 (ATerm t)
{
  ATerm v_196 = NULL,w_196 = NULL;
  t = term_y_28;
  v_196 = t;
  t = term_o_21;
  w_196 = t;
  t = term_a_58;
  t = x_28(v_196, w_196, t);
  return(t);
}
static ATerm f_14 (ATerm t)
{
  t = term_b_58;
  return(t);
}
ATerm si_options_0_0 (ATerm t)
{
  ATerm c_58 = t;
  int d_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(u_13, v_13, w_13, t);
      LocalPopChoice(d_58);
    }
  else
    {
      t = c_58;
      {
        ATerm e_58 = t;
        int j_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(x_13, y_13, z_13, t);
            LocalPopChoice(j_58);
          }
        else
          {
            t = e_58;
            {
              ATerm m_58 = t;
              int t_58 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(a_14, b_14, c_14, t);
                  LocalPopChoice(t_58);
                }
              else
                {
                  t = m_58;
                  t = Option_3_0(d_14, e_14, f_14, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm g_14 (ATerm t)
{
  ATerm y_196 = NULL;
  y_196 = t;
  if(match_string(t, "-k"))
    {
      t = y_196;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = y_196;
    }
  return(t);
}
static ATerm h_14 (ATerm t)
{
  ATerm z_196 = NULL,a_197 = NULL,b_197 = NULL;
  z_196 = t;
  t = SSL_string_to_int(z_196);
  a_197 = t;
  t = term_u_58;
  b_197 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_58, a_197);
  t = x_28(b_197, a_197, t);
  t = z_196;
  return(t);
}
static ATerm i_14 (ATerm t)
{
  t = term_v_58;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_14, h_14, i_14, t);
  return(t);
}
static ATerm j_14 (ATerm t)
{
  ATerm d_197 = NULL;
  d_197 = t;
  if(match_string(t, "-S"))
    {
      t = d_197;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = d_197;
    }
  return(t);
}
static ATerm k_14 (ATerm t)
{
  ATerm e_197 = NULL,f_197 = NULL;
  t = term_l_57;
  e_197 = t;
  t = term_n_21;
  f_197 = t;
  t = term_w_58;
  t = x_28(e_197, f_197, t);
  t = term_x_58;
  return(t);
}
static ATerm l_14 (ATerm t)
{
  t = term_f_59;
  return(t);
}
static ATerm m_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_14 (ATerm t)
{
  ATerm g_197 = NULL,h_197 = NULL,i_197 = NULL;
  g_197 = t;
  t = SSL_string_to_int(g_197);
  h_197 = t;
  t = term_l_57;
  i_197 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_57, h_197);
  t = x_28(i_197, h_197, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, g_197);
  return(t);
}
static ATerm o_14 (ATerm t)
{
  t = term_g_59;
  return(t);
}
static ATerm p_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_14 (ATerm t)
{
  ATerm j_197 = NULL,k_197 = NULL;
  t = term_i_59;
  j_197 = t;
  t = term_j_59;
  k_197 = t;
  t = term_k_59;
  t = x_28(j_197, k_197, t);
  t = term_l_59;
  return(t);
}
static ATerm r_14 (ATerm t)
{
  t = term_m_59;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm n_59 = t;
  int o_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_14, k_14, l_14, t);
      LocalPopChoice(o_59);
    }
  else
    {
      t = n_59;
      {
        ATerm p_59 = t;
        int q_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(m_14, n_14, o_14, t);
            LocalPopChoice(q_59);
          }
        else
          {
            t = p_59;
            t = Option_3_0(p_14, q_14, r_14, t);
          }
      }
    }
  return(t);
}
static ATerm x_28 (ATerm r_53, ATerm s_53, ATerm t)
{
  ATerm l_197 = NULL;
  t = term_s_57;
  l_197 = t;
  t = SSL_table_put(l_197, r_53, s_53);
  t = (ATerm) ATmakeAppl(sym__3, term_s_57, r_53, s_53);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm o_197 = NULL,p_197 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_197 = NULL,r_197 = NULL,s_197 = NULL;
      t = term_j_59;
      t = d_0(t);
      q_197 = t;
      t = term_t_59;
      r_197 = t;
      t = term_u_59;
      s_197 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_59, term_u_59, q_197);
      t = v_28(r_197, s_197, q_197, t);
      _fail(t);
    }
  else
    {
      ATerm v_197 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_197 = ATgetFirst((ATermList) t);
          p_197 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_197;
      t = b_0(t);
      t = term_j_59;
      t = c_0(t);
      v_197 = t;
      t = (ATerm) ATinsert(CheckATermList(p_197), v_197);
    }
  return(t);
}
static ATerm x_14 (ATerm t)
{
  ATerm x_197 = NULL;
  x_197 = t;
  if(match_string(t, "-o"))
    {
      t = x_197;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = x_197;
    }
  return(t);
}
static ATerm y_14 (ATerm t)
{
  ATerm y_197 = NULL,z_197 = NULL;
  y_197 = t;
  t = term_v_59;
  z_197 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_59, y_197);
  t = x_28(z_197, y_197, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, y_197);
  return(t);
}
static ATerm z_14 (ATerm t)
{
  t = term_w_59;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_14, y_14, z_14, t);
  return(t);
}
static ATerm v_28 (ATerm p_58, ATerm q_58, ATerm o_58, ATerm t)
{
  ATerm b_198 = NULL,c_198 = NULL,d_198 = NULL;
  b_198 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_58, q_58);
  {
    ATerm y_59 = t;
    int z_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_60 = ATgetArgument(t, 0);
            ATerm b_60 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, p_58, q_58);
        t = u_28(p_58, q_58, t);
        LocalPopChoice(z_59);
      }
    else
      {
        t = y_59;
        t = (ATerm) ATempty;
      }
  }
  c_198 = t;
  t = (ATerm) ATinsert(CheckATermList(c_198), o_58);
  d_198 = t;
  t = SSL_table_put(p_58, q_58, d_198);
  t = b_198;
  return(t);
}
ATerm ArgOption_3_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm k_198 = NULL,l_198 = NULL,m_198 = NULL,n_198 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_198 = NULL,p_198 = NULL,q_198 = NULL;
      t = term_j_59;
      t = i_0(t);
      o_198 = t;
      t = term_t_59;
      p_198 = t;
      t = term_u_59;
      q_198 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_59, term_u_59, o_198);
      t = v_28(p_198, q_198, o_198, t);
      _fail(t);
    }
  else
    {
      ATerm u_198 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_198 = ATgetFirst((ATermList) t);
          l_198 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_198;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_198 = ATgetFirst((ATermList) t);
          n_198 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_198;
      t = g_0(t);
      t = m_198;
      t = h_0(t);
      u_198 = t;
      t = (ATerm) ATinsert(CheckATermList(n_198), u_198);
    }
  return(t);
}
static ATerm a_15 (ATerm t)
{
  ATerm w_198 = NULL;
  w_198 = t;
  if(match_string(t, "-i"))
    {
      t = w_198;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = w_198;
    }
  return(t);
}
static ATerm b_15 (ATerm t)
{
  ATerm x_198 = NULL,y_198 = NULL;
  x_198 = t;
  t = term_b_53;
  y_198 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_53, x_198);
  t = x_28(y_198, x_198, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, x_198);
  return(t);
}
static ATerm c_15 (ATerm t)
{
  t = term_c_60;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_15, b_15, c_15, t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm a_199 = NULL,b_199 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_199 = ATgetFirst((ATermList) t);
      b_199 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_199 = NULL,g_199 = NULL;
        static ATerm e_15 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(f_199)), not_null(g_199));
          return(t);
        }
        t = b_199;
        t = f_0(t);
        if(((f_199 != NULL) && (f_199 != t)))
          _fail(t);
        else
          f_199 = t;
        t = a_199;
        t = e_0(t);
        if(((g_199 != NULL) && (g_199 != t)))
          _fail(t);
        else
          g_199 = t;
        t = b_199;
        t = reverse_acc_2_0(e_0, e_15, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_j_59;
      t = f_0(t);
    }
  return(t);
}
static ATerm f_15 (ATerm t)
{
  ATerm k_199 = NULL,l_199 = NULL,m_199 = NULL,u_11 = NULL;
  m_199 = t;
  if(match_cons(t, sym_Program_1))
    {
      l_199 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_199);
  k_199 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, l_199);
  u_11 = t;
  t = SSLsetAnnotations(u_11, k_199);
  return(t);
}
static ATerm g_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_15 (ATerm t)
{
  ATerm o_199 = NULL;
  o_199 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_199), term_d_60);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm i_199 = NULL,j_199 = NULL;
  ATerm e_60 = t;
  int f_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_60;
      t = get_config_0_0(t);
      LocalPopChoice(f_60);
    }
  else
    {
      t = e_60;
      t = fetch_1_0(f_15, t);
    }
  t = term_j_60;
  t = echo_0_0(t);
  t = term_t_59;
  i_199 = t;
  t = term_u_59;
  j_199 = t;
  t = term_k_60;
  t = u_28(i_199, j_199, t);
  t = reverse_acc_2_0(_id, g_15, t);
  t = map_1_0(h_15, t);
  return(t);
}
ATerm fetch_1_0 (ATerm h_121 (ATerm), ATerm t)
{
  static ATerm l_200 (ATerm t)
  {
    ATerm i_200 = NULL,j_200 = NULL,k_200 = NULL;
    i_200 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_200 = ATgetFirst((ATermList) t);
        k_200 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm l_60 = t;
      int m_60 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_160 = NULL,u_160 = NULL,w_11 = NULL;
          t = SSLgetAnnotations(i_200);
          r_160 = t;
          t = j_200;
          t = h_121(t);
          u_160 = t;
          t = (ATerm) ATinsert(CheckATermList(k_200), u_160);
          w_11 = t;
          t = SSLsetAnnotations(w_11, r_160);
          LocalPopChoice(m_60);
        }
      else
        {
          t = l_60;
          {
            ATerm d_162 = NULL,q_162 = NULL,x_11 = NULL;
            t = SSLgetAnnotations(i_200);
            d_162 = t;
            t = k_200;
            t = l_200(t);
            q_162 = t;
            t = (ATerm) ATinsert(CheckATermList(q_162), j_200);
            x_11 = t;
            t = SSLsetAnnotations(x_11, d_162);
          }
        }
    }
    return(t);
  }
  t = l_200(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm p_200 = NULL,q_200 = NULL,r_200 = NULL;
  p_200 = t;
  {
    ATerm n_60 = t;
    int o_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = p_200;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm p_60 = ATgetFirst((ATermList) t);
                ATerm q_60 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = p_200;
          }
        LocalPopChoice(o_60);
      }
    else
      {
        t = n_60;
        t = (ATerm) ATinsert(ATempty, p_200);
      }
  }
  q_200 = t;
  t = term_r_60;
  r_200 = t;
  t = SSL_printnl(r_200, q_200);
  t = p_200;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_i_60;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm t_28 (ATerm p_43, ATerm q_43, ATerm t)
{
  t = SSL_strcat(p_43, q_43);
  return(t);
}
ATerm debug_1_0 (ATerm m_120 (ATerm), ATerm t)
{
  ATerm v_200 = NULL,w_200 = NULL,x_200 = NULL,y_200 = NULL;
  v_200 = t;
  t = m_120(t);
  w_200 = t;
  t = term_q_21;
  x_200 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_200), w_200);
  y_200 = t;
  t = SSL_printnl(x_200, y_200);
  t = v_200;
  return(t);
}
ATerm map_1_0 (ATerm x_120 (ATerm), ATerm t)
{
  static ATerm n_201 (ATerm t)
  {
    ATerm k_201 = NULL,l_201 = NULL,m_201 = NULL;
    k_201 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_201;
      }
    else
      {
        ATerm h_163 = NULL,p_163 = NULL,q_163 = NULL,a_12 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_201 = ATgetFirst((ATermList) t);
            m_201 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_201);
        h_163 = t;
        t = l_201;
        t = x_120(t);
        p_163 = t;
        t = m_201;
        t = n_201(t);
        q_163 = t;
        t = (ATerm) ATinsert(CheckATermList(q_163), p_163);
        a_12 = t;
        t = SSLsetAnnotations(a_12, h_163);
      }
    return(t);
  }
  t = n_201(t);
  return(t);
}
static ATerm i_15 (ATerm t)
{
  ATerm s_60 = t;
  int v_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(v_60);
    }
  else
    {
      t = s_60;
    }
  return(t);
}
static ATerm n_15 (ATerm t)
{
  t = term_z_60;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm b_61 = t;
  int c_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_201 = NULL;
      v_201 = t;
      t = SSL_is_string(v_201);
      LocalPopChoice(c_61);
    }
  else
    {
      t = b_61;
      {
        ATerm e_61 = t;
        int f_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(i_15, t);
            LocalPopChoice(f_61);
          }
        else
          {
            t = e_61;
            {
              ATerm b_202 = NULL,c_202 = NULL,d_202 = NULL;
              b_202 = t;
              if(match_cons(t, sym_Path_1))
                {
                  c_202 = ATgetArgument(t, 0);
                  t = c_202;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      c_202 = ATgetArgument(t, 0);
                      t = c_202;
                      {
                        ATerm j_61 = t;
                        int k_61 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(k_61);
                          }
                        else
                          {
                            t = j_61;
                            t = debug_1_0(n_15, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm h_202 = NULL,i_202 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          c_202 = ATgetArgument(t, 0);
                          d_202 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = c_202;
                      t = eval_config_0_0(t);
                      h_202 = t;
                      t = d_202;
                      t = eval_config_0_0(t);
                      i_202 = t;
                      t = (ATerm) ATmakeAppl(sym__2, h_202, i_202);
                      t = t_28(h_202, i_202, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm u_28 (ATerm g_60, ATerm h_60, ATerm t)
{
  t = SSL_table_get(g_60, h_60);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm m_202 = NULL,n_202 = NULL;
  m_202 = t;
  t = term_s_57;
  n_202 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_57, m_202);
  t = u_28(n_202, m_202, t);
  {
    ATerm l_61 = t;
    int m_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_202 = NULL,p_202 = NULL;
        t = eval_config_0_0(t);
        o_202 = t;
        t = term_s_57;
        p_202 = t;
        t = SSL_table_put(p_202, m_202, o_202);
        t = o_202;
        LocalPopChoice(m_61);
      }
    else
      {
        t = l_61;
      }
  }
  return(t);
}
static ATerm q_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_15 (ATerm t)
{
  ATerm s_202 = NULL,t_202 = NULL;
  t = term_n_61;
  s_202 = t;
  t = term_j_59;
  t_202 = t;
  t = term_q_61;
  t = x_28(s_202, t_202, t);
  return(t);
}
static ATerm w_15 (ATerm t)
{
  t = term_r_61;
  return(t);
}
static ATerm e_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_16 (ATerm t)
{
  ATerm u_202 = NULL,v_202 = NULL,w_202 = NULL,x_202 = NULL;
  t = term_n_61;
  w_202 = t;
  t = term_j_59;
  x_202 = t;
  t = term_q_61;
  t = x_28(w_202, x_202, t);
  t = term_u_61;
  u_202 = t;
  t = term_j_59;
  v_202 = t;
  t = term_v_61;
  t = x_28(u_202, v_202, t);
  t = term_w_61;
  return(t);
}
static ATerm g_16 (ATerm t)
{
  t = term_x_61;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm y_61 = t;
  int a_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_15, r_15, w_15, t);
      LocalPopChoice(a_62);
    }
  else
    {
      t = y_61;
      t = Option_3_0(e_16, f_16, g_16, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm e_92 (ATerm), ATerm f_92 (ATerm), ATerm t)
{
  ATerm y_202 = NULL,z_202 = NULL,a_203 = NULL,b_203 = NULL,c_203 = NULL,d_203 = NULL,c_12 = NULL;
  d_203 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_202 = ATgetFirst((ATermList) t);
      a_203 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_203);
  y_202 = t;
  t = z_202;
  t = e_92(t);
  b_203 = t;
  t = a_203;
  t = f_92(t);
  c_203 = t;
  t = (ATerm) ATinsert(CheckATermList(c_203), b_203);
  c_12 = t;
  t = SSLsetAnnotations(c_12, y_202);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm f_140 (ATerm), ATerm t)
{
  ATerm i_203 = NULL,j_203 = NULL,k_203 = NULL,l_203 = NULL,n_203 = NULL,o_203 = NULL,e_12 = NULL;
  i_203 = t;
  {
    ATerm b_62 = t;
    int c_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_d_62;
        t = f_140(t);
        LocalPopChoice(c_62);
      }
    else
      {
        t = b_62;
      }
  }
  t = i_203;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_203 = ATgetFirst((ATermList) t);
      l_203 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_203);
  j_203 = t;
  t = term_i_60;
  o_203 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_60, k_203);
  t = x_28(o_203, k_203, t);
  t = l_203;
  {
    static ATerm y_203 (ATerm t)
    {
      ATerm e_62 = t;
      int f_62 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_62 = t;
          int i_62 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_203 = NULL;
              r_203 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = r_203;
              LocalPopChoice(i_62);
            }
          else
            {
              t = h_62;
              t = f_140(t);
              t = Cons_2_0(_id, y_203, t);
            }
          LocalPopChoice(f_62);
        }
      else
        {
          t = e_62;
          {
            ATerm u_203 = NULL,v_203 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                u_203 = ATgetFirst((ATermList) t);
                v_203 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(v_203), (ATerm) ATmakeAppl(sym_Undefined_1, u_203));
          }
        }
      return(t);
    }
    t = y_203(t);
  }
  n_203 = t;
  t = (ATerm) ATinsert(CheckATermList(n_203), (ATerm) ATmakeAppl(sym_Program_1, k_203));
  e_12 = t;
  t = SSLsetAnnotations(e_12, j_203);
  return(t);
}
static ATerm p_16 (ATerm t)
{
  ATerm k_204 = NULL;
  k_204 = t;
  if(match_string(t, "--help"))
    {
      t = k_204;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = k_204;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = k_204;
        }
    }
  return(t);
}
static ATerm q_16 (ATerm t)
{
  ATerm l_204 = NULL,n_204 = NULL;
  t = term_j_62;
  l_204 = t;
  t = term_j_59;
  n_204 = t;
  t = term_p_62;
  t = x_28(l_204, n_204, t);
  t = term_q_62;
  return(t);
}
static ATerm r_16 (ATerm t)
{
  t = term_r_62;
  return(t);
}
static ATerm s_16 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm e_140 (ATerm), ATerm t)
{
  ATerm d_204 = NULL,e_204 = NULL,f_204 = NULL,g_204 = NULL,h_204 = NULL,i_204 = NULL,j_204 = NULL;
  f_204 = t;
  t = term_t_59;
  h_204 = t;
  t = term_u_59;
  i_204 = t;
  t = (ATerm) ATempty;
  j_204 = t;
  t = SSL_table_put(h_204, i_204, j_204);
  t = f_204;
  {
    static ATerm h_16 (ATerm t)
    {
      ATerm s_62 = t;
      int t_62 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_140(t);
          LocalPopChoice(t_62);
        }
      else
        {
          t = s_62;
          {
            ATerm u_62 = t;
            int v_62 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(p_16, q_16, r_16, t);
                LocalPopChoice(v_62);
              }
            else
              {
                t = u_62;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(h_16, t);
  }
  {
    ATerm w_62 = t;
    int x_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_204 = NULL;
        v_204 = t;
        {
          ATerm y_62 = t;
          int z_62 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_165 = NULL;
              t = v_204;
              {
                ATerm a_63 = t;
                int c_63 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_j_62;
                    t = get_config_0_0(t);
                    LocalPopChoice(c_63);
                  }
                else
                  {
                    t = a_63;
                    t = fetch_1_0(s_16, t);
                  }
              }
              t = v_204;
              t = default_system_usage_0_0(t);
              t = term_n_21;
              h_165 = t;
              t = SSL_exit(h_165);
              LocalPopChoice(z_62);
            }
          else
            {
              t = y_62;
              {
                ATerm l_165 = NULL;
                t = term_n_61;
                t = get_config_0_0(t);
                t = v_204;
                t = default_system_about_0_0(t);
                t = term_n_21;
                l_165 = t;
                t = SSL_exit(l_165);
              }
            }
        }
        LocalPopChoice(x_62);
      }
    else
      {
        t = w_62;
        {
          ATerm d_63 = t;
          int e_63 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_204 = NULL,x_204 = NULL,y_204 = NULL;
              static ATerm t_16 (ATerm t)
              {
                ATerm z_204 = NULL,a_205 = NULL,b_205 = NULL,g_12 = NULL;
                b_205 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    a_205 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(b_205);
                z_204 = t;
                t = a_205;
                if(((d_204 != NULL) && (d_204 != t)))
                  _fail(t);
                else
                  d_204 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, a_205);
                g_12 = t;
                t = SSLsetAnnotations(g_12, z_204);
                return(t);
              }
              t = fetch_1_0(t_16, t);
              t = term_q_21;
              x_204 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_204)), term_h_63);
              y_204 = t;
              t = SSL_printnl(x_204, y_204);
              t = (ATerm) ATmakeAppl(sym__2, term_q_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_204)), term_h_63));
              t = default_system_usage_0_0(t);
              t = term_o_21;
              w_204 = t;
              t = SSL_exit(w_204);
              LocalPopChoice(e_63);
            }
          else
            {
              t = d_63;
            }
        }
      }
  }
  e_204 = t;
  t = term_t_59;
  g_204 = t;
  t = SSL_table_destroy(g_204);
  t = e_204;
  return(t);
}
static ATerm u_16 (ATerm t)
{
  ATerm o_63 = t;
  int p_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_63 = t;
      int r_63 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = input_option_0_0(t);
          LocalPopChoice(r_63);
        }
      else
        {
          t = q_63;
          {
            ATerm s_63 = t;
            int t_63 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = output_option_0_0(t);
                LocalPopChoice(t_63);
              }
            else
              {
                t = s_63;
                {
                  ATerm u_63 = t;
                  int v_63 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Option_3_0(v_16, w_16, x_16, t);
                      LocalPopChoice(v_63);
                    }
                  else
                    {
                      t = u_63;
                      {
                        ATerm w_63 = t;
                        int e_64 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = verbose_option_0_0(t);
                            LocalPopChoice(e_64);
                          }
                        else
                          {
                            t = w_63;
                            t = keep_option_0_0(t);
                          }
                      }
                    }
                }
              }
          }
        }
      LocalPopChoice(p_63);
    }
  else
    {
      t = o_63;
      t = si_options_0_0(t);
    }
  return(t);
}
static ATerm v_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_16 (ATerm t)
{
  ATerm j_205 = NULL,k_205 = NULL;
  t = term_f_64;
  j_205 = t;
  t = term_j_59;
  k_205 = t;
  t = term_g_64;
  t = x_28(j_205, k_205, t);
  t = term_h_64;
  return(t);
}
static ATerm x_16 (ATerm t)
{
  t = term_i_64;
  return(t);
}
ATerm make_option_table_0_0 (ATerm t)
{
  ATerm g_205 = NULL,h_205 = NULL,i_205 = NULL;
  g_205 = t;
  t = term_z_52;
  h_205 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_j_64), term_z_52);
  i_205 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_52, (ATerm) ATinsert(ATinsert(ATempty, term_j_64), term_z_52));
  t = x_28(h_205, i_205, t);
  t = g_205;
  t = parse_options_1_0(u_16, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm r_121 (ATerm), ATerm t)
{
  static ATerm y_205 (ATerm t)
  {
    ATerm m_64 = t;
    int n_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_121(t);
        LocalPopChoice(n_64);
      }
    else
      {
        t = m_64;
        {
          ATerm v_205 = NULL,w_205 = NULL,x_205 = NULL,t_165 = NULL,f_166 = NULL,i_12 = NULL;
          v_205 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              w_205 = ATgetFirst((ATermList) t);
              x_205 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(v_205);
          t_165 = t;
          t = x_205;
          t = y_205(t);
          f_166 = t;
          t = (ATerm) ATinsert(CheckATermList(f_166), w_205);
          i_12 = t;
          t = SSLsetAnnotations(i_12, t_165);
        }
      }
    return(t);
  }
  t = y_205(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm k_121 (ATerm), ATerm t)
{
  ATerm a_206 = NULL,b_206 = NULL;
  static ATerm z_16 (ATerm t)
  {
    ATerm c_206 = NULL,d_206 = NULL,e_206 = NULL,f_206 = NULL,g_206 = NULL,h_206 = NULL,i_206 = NULL,j_206 = NULL,k_206 = NULL,q_12 = NULL,p_12 = NULL;
    k_206 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_206 = ATgetFirst((ATermList) t);
        h_206 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(k_206);
    f_206 = t;
    t = g_206;
    t = k_121(t);
    i_206 = t;
    t = (ATerm) ATinsert(CheckATermList(h_206), i_206);
    p_12 = t;
    t = SSLsetAnnotations(p_12, f_206);
    j_206 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_206 = ATgetFirst((ATermList) t);
        e_206 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(j_206);
    c_206 = t;
    t = e_206;
    if(((a_206 != NULL) && (a_206 != t)))
      _fail(t);
    else
      a_206 = t;
    t = (ATerm) ATinsert(CheckATermList(e_206), d_206);
    q_12 = t;
    t = SSLsetAnnotations(q_12, c_206);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(z_16, t);
  b_206 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_206, not_null(a_206));
  return(t);
}
static ATerm a_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--args", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm process_options_0_0 (ATerm t)
{
  ATerm l_206 = NULL,m_206 = NULL,n_206 = NULL,o_206 = NULL,p_206 = NULL,m_166 = NULL,u_166 = NULL,t_12 = NULL;
  ATerm o_64 = t;
  int p_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(a_17, t);
      LocalPopChoice(p_64);
    }
  else
    {
      t = o_64;
      {
        ATerm q_206 = NULL;
        q_206 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_206, (ATerm) ATempty);
      }
    }
  p_206 = t;
  if(match_cons(t, sym__2))
    {
      m_206 = ATgetArgument(t, 0);
      n_206 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_206);
  l_206 = t;
  t = m_206;
  t = make_option_table_0_0(t);
  o_206 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_206, n_206);
  t_12 = t;
  t = SSLsetAnnotations(t_12, l_206);
  u_166 = t;
  t = SSL_explode_term(u_166);
  if(match_cons(t, sym__2))
    {
      ATerm q_64 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_64) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm r_64 = ATgetArgument(t, 1);
        if(((ATgetType(r_64) == AT_LIST) && !(ATisEmpty(r_64))))
          {
            ATerm u_64 = ATgetFirst((ATermList) r_64);
            ATerm v_64 = (ATerm) ATgetNext((ATermList) r_64);
            if(((ATgetType(v_64) == AT_LIST) && !(ATisEmpty(v_64))))
              {
                m_166 = ATgetFirst((ATermList) v_64);
                {
                  ATerm w_64 = (ATerm) ATgetNext((ATermList) v_64);
                }
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = m_166;
  return(t);
}
ATerm create_runtime_environment_0_0 (ATerm t)
{
  ATerm s_206 = NULL,t_206 = NULL,u_206 = NULL,v_206 = NULL;
  s_206 = t;
  t = term_y_16;
  v_206 = t;
  t = SSL_table_create(v_206);
  t = term_b_17;
  u_206 = t;
  t = SSL_table_create(u_206);
  t = term_c_17;
  t_206 = t;
  t = SSL_table_create(t_206);
  t = s_206;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm w_206 = NULL,x_206 = NULL,y_206 = NULL;
  t = create_runtime_environment_0_0(t);
  t = process_options_0_0(t);
  t = if_verbose1_1_0(copyright_0_0, t);
  y_206 = t;
  t = term_x_64;
  t = ReadFromFile_0_0(t);
  x_206 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_206, y_206);
  t = evaluate_commands_0_0(t);
  t = destroy_runtime_environment_0_0(t);
  t = term_n_21;
  w_206 = t;
  t = SSL_exit(w_206);
  return(t);
}
