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
Symbol sym_StrategoDump_2;
Symbol sym_Dump_1;
Symbol sym_Load_1;
Symbol sym_Eval_1;
Symbol sym_Anno_2;
Symbol sym_Undefined_0;
Symbol sym_F__OK_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_Var_1;
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
  sym_StrategoDump_2 = ATmakeSymbol("StrategoDump", 2, ATfalse);
  ATprotectSymbol(sym_StrategoDump_2);
  sym_Dump_1 = ATmakeSymbol("Dump", 1, ATfalse);
  ATprotectSymbol(sym_Dump_1);
  sym_Load_1 = ATmakeSymbol("Load", 1, ATfalse);
  ATprotectSymbol(sym_Load_1);
  sym_Eval_1 = ATmakeSymbol("Eval", 1, ATfalse);
  ATprotectSymbol(sym_Eval_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_v_96;
ATerm term_u_96;
ATerm term_k_96;
ATerm term_j_96;
ATerm term_i_96;
ATerm term_h_96;
ATerm term_v_95;
ATerm term_d_95;
ATerm term_c_95;
ATerm term_b_95;
ATerm term_v_94;
ATerm term_q_94;
ATerm term_p_94;
ATerm term_o_94;
ATerm term_l_94;
ATerm term_k_94;
ATerm term_j_94;
ATerm term_i_94;
ATerm term_m_93;
ATerm term_f_93;
ATerm term_c_93;
ATerm term_z_92;
ATerm term_y_92;
ATerm term_t_92;
ATerm term_s_92;
ATerm term_p_92;
ATerm term_o_92;
ATerm term_j_92;
ATerm term_i_92;
ATerm term_h_92;
ATerm term_g_92;
ATerm term_f_92;
ATerm term_e_92;
ATerm term_d_92;
ATerm term_c_92;
ATerm term_b_92;
ATerm term_u_91;
ATerm term_t_91;
ATerm term_s_91;
ATerm term_r_91;
ATerm term_q_91;
ATerm term_p_91;
ATerm term_o_91;
ATerm term_c_91;
ATerm term_v_90;
ATerm term_u_90;
ATerm term_t_90;
ATerm term_s_90;
ATerm term_r_90;
ATerm term_q_90;
ATerm term_p_90;
ATerm term_o_90;
ATerm term_n_90;
ATerm term_w_89;
ATerm term_m_89;
ATerm term_y_87;
ATerm term_v_87;
ATerm term_q_87;
ATerm term_d_84;
ATerm term_m_82;
ATerm term_l_82;
ATerm term_k_82;
ATerm term_k_81;
ATerm term_j_81;
ATerm term_c_81;
ATerm term_r_80;
ATerm term_m_79;
ATerm term_r_77;
ATerm term_l_77;
ATerm term_k_77;
ATerm term_j_77;
ATerm term_e_77;
ATerm term_d_77;
ATerm term_c_77;
ATerm term_b_77;
ATerm term_y_76;
ATerm term_t_76;
ATerm term_c_76;
ATerm term_b_76;
ATerm term_a_76;
ATerm term_z_75;
ATerm term_w_75;
ATerm term_v_75;
ATerm term_s_75;
ATerm term_k_75;
ATerm term_c_75;
ATerm term_b_75;
ATerm term_a_75;
ATerm term_z_74;
ATerm term_y_74;
ATerm term_x_74;
ATerm term_w_74;
ATerm term_v_74;
ATerm term_u_74;
ATerm term_t_74;
ATerm term_s_74;
ATerm term_r_74;
ATerm term_q_74;
ATerm term_p_74;
ATerm term_o_74;
ATerm term_n_74;
ATerm term_m_74;
ATerm term_l_74;
ATerm term_k_74;
ATerm term_j_74;
ATerm term_i_74;
ATerm term_g_74;
ATerm term_f_74;
ATerm term_e_74;
ATerm term_d_74;
ATerm term_c_74;
ATerm term_b_74;
ATerm term_a_74;
ATerm term_z_73;
ATerm term_y_73;
ATerm term_x_73;
ATerm term_w_73;
ATerm term_v_73;
ATerm term_u_73;
ATerm term_t_73;
ATerm term_s_73;
ATerm term_r_73;
ATerm term_q_73;
ATerm term_p_73;
ATerm term_o_73;
ATerm term_n_73;
ATerm term_m_73;
ATerm term_l_73;
ATerm term_k_73;
ATerm term_j_73;
ATerm term_i_73;
ATerm term_h_73;
ATerm term_g_73;
ATerm term_f_73;
ATerm term_e_73;
ATerm term_d_73;
ATerm term_c_73;
ATerm term_b_73;
ATerm term_a_73;
ATerm term_z_72;
ATerm term_y_72;
ATerm term_x_72;
ATerm term_w_72;
ATerm term_v_72;
ATerm term_u_72;
ATerm term_t_72;
ATerm term_s_72;
ATerm term_q_72;
ATerm term_p_72;
ATerm term_o_72;
ATerm term_n_72;
ATerm term_m_72;
ATerm term_l_72;
ATerm term_k_72;
ATerm term_j_72;
ATerm term_i_72;
ATerm term_h_72;
ATerm term_g_72;
ATerm term_f_72;
ATerm term_e_72;
ATerm term_d_72;
ATerm term_c_72;
ATerm term_b_72;
ATerm term_a_72;
ATerm term_z_71;
ATerm term_y_71;
ATerm term_x_71;
ATerm term_w_71;
ATerm term_v_71;
ATerm term_u_71;
ATerm term_t_71;
ATerm term_s_71;
ATerm term_r_71;
ATerm term_q_71;
ATerm term_p_71;
ATerm term_o_71;
ATerm term_n_71;
ATerm term_m_71;
ATerm term_l_71;
ATerm term_k_71;
ATerm term_j_71;
ATerm term_i_71;
ATerm term_h_71;
ATerm term_g_71;
ATerm term_f_71;
ATerm term_e_71;
ATerm term_d_71;
ATerm term_c_71;
ATerm term_b_71;
ATerm term_a_71;
ATerm term_z_70;
ATerm term_y_70;
ATerm term_x_70;
ATerm term_w_70;
ATerm term_v_70;
ATerm term_u_70;
ATerm term_r_70;
ATerm term_q_70;
ATerm term_p_70;
ATerm term_o_70;
ATerm term_d_63;
ATerm term_z_62;
ATerm term_y_62;
ATerm term_q_62;
ATerm term_p_62;
ATerm term_o_62;
ATerm term_f_62;
ATerm term_m_61;
ATerm term_j_61;
ATerm term_i_61;
ATerm term_h_61;
ATerm term_i_55;
ATerm term_f_55;
ATerm term_e_55;
ATerm term_c_55;
ATerm term_v_54;
ATerm term_u_54;
ATerm term_r_54;
ATerm term_q_54;
void init_constant_terms (void)
{
  ATprotect(&(term_q_54));
  term_q_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-d", 0, ATtrue));
  ATprotect(&(term_r_54));
  term_r_54 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_54));
  term_u_54 = (ATerm) ATmakeAppl(ATmakeSymbol("eval-rules: ", 0, ATtrue));
  ATprotect(&(term_v_54));
  term_v_54 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_55));
  term_c_55 = (ATerm) ATmakeAppl(ATmakeSymbol("rules normalized: ", 0, ATtrue));
  ATprotect(&(term_e_55));
  term_e_55 = (ATerm) ATmakeAppl(ATmakeSymbol("senv", 0, ATtrue));
  ATprotect(&(term_f_55));
  term_f_55 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_55));
  term_i_55 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_61));
  term_h_61 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_i_61));
  term_i_61 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_j_61));
  term_j_61 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_m_61));
  term_m_61 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_f_62));
  term_f_62 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_o_62));
  term_o_62 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_p_62));
  term_p_62 = (ATerm) ATmakeAppl(sym_Op_2, term_o_62, (ATerm) ATempty);
  ATprotect(&(term_q_62));
  term_q_62 = (ATerm) ATmakeAppl(sym_ConstType_1, term_p_62);
  ATprotect(&(term_y_62));
  term_y_62 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_z_62));
  term_z_62 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_d_63));
  term_d_63 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_o_70));
  term_o_70 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_p_70));
  term_p_70 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_q_70));
  term_q_70 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_70));
  term_r_70 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_u_70));
  term_u_70 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_v_70));
  term_v_70 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_w_70));
  term_w_70 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_70, term_i_55, term_v_70);
  ATprotect(&(term_x_70));
  term_x_70 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_y_70));
  term_y_70 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_z_70));
  term_z_70 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_a_71));
  term_a_71 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_70, term_y_70, term_z_70);
  ATprotect(&(term_b_71));
  term_b_71 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_c_71));
  term_c_71 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_d_71));
  term_d_71 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_e_71));
  term_e_71 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_71, term_c_71, term_d_71);
  ATprotect(&(term_f_71));
  term_f_71 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_g_71));
  term_g_71 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_h_71));
  term_h_71 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_i_71));
  term_i_71 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_71, term_g_71, term_h_71);
  ATprotect(&(term_j_71));
  term_j_71 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_k_71));
  term_k_71 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_l_71));
  term_l_71 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_m_71));
  term_m_71 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_71, term_k_71, term_l_71);
  ATprotect(&(term_n_71));
  term_n_71 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_o_71));
  term_o_71 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_p_71));
  term_p_71 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_q_71));
  term_q_71 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_71, term_o_71, term_p_71);
  ATprotect(&(term_r_71));
  term_r_71 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_s_71));
  term_s_71 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_t_71));
  term_t_71 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_u_71));
  term_u_71 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_71, term_s_71, term_t_71);
  ATprotect(&(term_v_71));
  term_v_71 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_w_71));
  term_w_71 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_x_71));
  term_x_71 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_y_71));
  term_y_71 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_71, term_w_71, term_x_71);
  ATprotect(&(term_z_71));
  term_z_71 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_a_72));
  term_a_72 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_b_72));
  term_b_72 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_c_72));
  term_c_72 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_71, term_a_72, term_b_72);
  ATprotect(&(term_d_72));
  term_d_72 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_e_72));
  term_e_72 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_f_72));
  term_f_72 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_g_72));
  term_g_72 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_72, term_e_72, term_f_72);
  ATprotect(&(term_h_72));
  term_h_72 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_i_72));
  term_i_72 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_j_72));
  term_j_72 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_k_72));
  term_k_72 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_72, term_i_72, term_j_72);
  ATprotect(&(term_l_72));
  term_l_72 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_m_72));
  term_m_72 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_n_72));
  term_n_72 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_o_72));
  term_o_72 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_72, term_m_72, term_n_72);
  ATprotect(&(term_p_72));
  term_p_72 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_q_72));
  term_q_72 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_s_72));
  term_s_72 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_t_72));
  term_t_72 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_72, term_q_72, term_s_72);
  ATprotect(&(term_u_72));
  term_u_72 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_v_72));
  term_v_72 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_w_72));
  term_w_72 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_x_72));
  term_x_72 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_72, term_v_72, term_w_72);
  ATprotect(&(term_y_72));
  term_y_72 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_z_72));
  term_z_72 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_a_73));
  term_a_73 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_b_73));
  term_b_73 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_72, term_z_72, term_a_73);
  ATprotect(&(term_c_73));
  term_c_73 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_d_73));
  term_d_73 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_e_73));
  term_e_73 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_f_73));
  term_f_73 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_73, term_d_73, term_e_73);
  ATprotect(&(term_g_73));
  term_g_73 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_h_73));
  term_h_73 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_i_73));
  term_i_73 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_j_73));
  term_j_73 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_73, term_h_73, term_i_73);
  ATprotect(&(term_k_73));
  term_k_73 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_l_73));
  term_l_73 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_m_73));
  term_m_73 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_n_73));
  term_n_73 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_73, term_l_73, term_m_73);
  ATprotect(&(term_o_73));
  term_o_73 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_p_73));
  term_p_73 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_q_73));
  term_q_73 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_r_73));
  term_r_73 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_73, term_p_73, term_q_73);
  ATprotect(&(term_s_73));
  term_s_73 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_t_73));
  term_t_73 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_u_73));
  term_u_73 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_v_73));
  term_v_73 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_73, term_t_73, term_u_73);
  ATprotect(&(term_w_73));
  term_w_73 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_x_73));
  term_x_73 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_y_73));
  term_y_73 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_z_73));
  term_z_73 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_73, term_x_73, term_y_73);
  ATprotect(&(term_a_74));
  term_a_74 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_b_74));
  term_b_74 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_c_74));
  term_c_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_d_74));
  term_d_74 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_74, term_b_74, term_c_74);
  ATprotect(&(term_e_74));
  term_e_74 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_f_74));
  term_f_74 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_g_74));
  term_g_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_i_74));
  term_i_74 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_74, term_f_74, term_g_74);
  ATprotect(&(term_j_74));
  term_j_74 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_k_74));
  term_k_74 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_l_74));
  term_l_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_m_74));
  term_m_74 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_74, term_k_74, term_l_74);
  ATprotect(&(term_n_74));
  term_n_74 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_o_74));
  term_o_74 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_p_74));
  term_p_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_q_74));
  term_q_74 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_74, term_o_74, term_p_74);
  ATprotect(&(term_r_74));
  term_r_74 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_s_74));
  term_s_74 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_t_74));
  term_t_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_u_74));
  term_u_74 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_74, term_s_74, term_t_74);
  ATprotect(&(term_v_74));
  term_v_74 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_w_74));
  term_w_74 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_x_74));
  term_x_74 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_y_74));
  term_y_74 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_74, term_w_74, term_x_74);
  ATprotect(&(term_z_74));
  term_z_74 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_a_75));
  term_a_75 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_b_75));
  term_b_75 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_c_75));
  term_c_75 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_74, term_a_75, term_b_75);
  ATprotect(&(term_k_75));
  term_k_75 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_s_75));
  term_s_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_v_75));
  term_v_75 = (ATerm) ATmakeAppl(ATmakeSymbol("importing module: ", 0, ATtrue));
  ATprotect(&(term_w_75));
  term_w_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_z_75));
  term_z_75 = (ATerm) ATmakeAppl(ATmakeSymbol("sc", 0, ATtrue));
  ATprotect(&(term_a_76));
  term_a_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_76));
  term_b_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_c_76));
  term_c_76 = (ATerm) ATmakeAppl(ATmakeSymbol(".sdefs", 0, ATtrue));
  ATprotect(&(term_t_76));
  term_t_76 = (ATerm) ATmakeAppl(ATmakeSymbol("error: import of multiple modules not supported yet", 0, ATtrue));
  ATprotect(&(term_y_76));
  term_y_76 = (ATerm) ATmakeAppl(ATmakeSymbol("loading image from file: ", 0, ATtrue));
  ATprotect(&(term_b_77));
  term_b_77 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_c_77));
  term_c_77 = (ATerm) ATmakeAppl(ATmakeSymbol("image: ", 0, ATtrue));
  ATprotect(&(term_d_77));
  term_d_77 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_e_77));
  term_e_77 = (ATerm) ATmakeAppl(ATmakeSymbol("tenv", 0, ATtrue));
  ATprotect(&(term_j_77));
  term_j_77 = (ATerm) ATmakeAppl(ATmakeSymbol("image ", 0, ATtrue));
  ATprotect(&(term_k_77));
  term_k_77 = (ATerm) ATmakeAppl(ATmakeSymbol(" loaded", 0, ATtrue));
  ATprotect(&(term_l_77));
  term_l_77 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_r_77));
  term_r_77 = (ATerm) ATmakeAppl(ATmakeSymbol("image written to file: ", 0, ATtrue));
  ATprotect(&(term_m_79));
  term_m_79 = (ATerm) ATmakeAppl(ATmakeSymbol("BindVar: ", 0, ATtrue));
  ATprotect(&(term_r_80));
  term_r_80 = (ATerm) ATmakeAppl(ATmakeSymbol("match1: ", 0, ATtrue));
  ATprotect(&(term_c_81));
  term_c_81 = (ATerm) ATmakeAppl(ATmakeSymbol("match2: ", 0, ATtrue));
  ATprotect(&(term_j_81));
  term_j_81 = (ATerm) ATmakeAppl(ATmakeSymbol("bindings: ", 0, ATtrue));
  ATprotect(&(term_k_81));
  term_k_81 = (ATerm) ATmakeAppl(sym_NULL_0);
  ATprotect(&(term_k_82));
  term_k_82 = (ATerm) ATmakeAppl(ATmakeSymbol("operator ", 0, ATtrue));
  ATprotect(&(term_l_82));
  term_l_82 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_m_82));
  term_m_82 = (ATerm) ATmakeAppl(ATmakeSymbol(" not defined", 0, ATtrue));
  ATprotect(&(term_d_84));
  term_d_84 = (ATerm) ATmakeAppl(ATmakeSymbol("eval: ", 0, ATtrue));
  ATprotect(&(term_q_87));
  term_q_87 = (ATerm) ATmakeAppl(ATmakeSymbol("Evaluate strategy: ", 0, ATtrue));
  ATprotect(&(term_v_87));
  term_v_87 = (ATerm) ATmakeAppl(ATmakeSymbol("> ", 0, ATtrue));
  ATprotect(&(term_y_87));
  term_y_87 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_m_89));
  term_m_89 = (ATerm) ATmakeAppl(ATmakeSymbol("Evaluating command: ", 0, ATtrue));
  ATprotect(&(term_w_89));
  term_w_89 = (ATerm) ATmakeAppl(ATmakeSymbol("unknown command: ", 0, ATtrue));
  ATprotect(&(term_n_90));
  term_n_90 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_o_90));
  term_o_90 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_p_90));
  term_p_90 = (ATerm) ATmakeAppl(ATmakeSymbol("--------------------------------------------------------------------", 0, ATtrue));
  ATprotect(&(term_q_90));
  term_q_90 = (ATerm) ATmakeAppl(ATmakeSymbol("This is SI, the Stratego Interpreter ", 0, ATtrue));
  ATprotect(&(term_r_90));
  term_r_90 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (c) 2001, Eelco Visser <visser@acm.org>", 0, ATtrue));
  ATprotect(&(term_s_90));
  term_s_90 = (ATerm) ATmakeAppl(ATmakeSymbol("This program is free software; you can redistribute it and/or modify", 0, ATtrue));
  ATprotect(&(term_t_90));
  term_t_90 = (ATerm) ATmakeAppl(ATmakeSymbol("it under the terms of the GNU General Public License as published by", 0, ATtrue));
  ATprotect(&(term_u_90));
  term_u_90 = (ATerm) ATmakeAppl(ATmakeSymbol("the Free Software Foundation; either version 2, or (at your option)", 0, ATtrue));
  ATprotect(&(term_v_90));
  term_v_90 = (ATerm) ATmakeAppl(ATmakeSymbol("any later version.", 0, ATtrue));
  ATprotect(&(term_c_91));
  term_c_91 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_o_91));
  term_o_91 = (ATerm) ATmakeAppl(ATmakeSymbol("-I dir           include modules from directory dir", 0, ATtrue));
  ATprotect(&(term_p_91));
  term_p_91 = (ATerm) ATmakeAppl(ATmakeSymbol("@version", 0, ATtrue));
  ATprotect(&(term_q_91));
  term_q_91 = (ATerm) ATmakeAppl(ATmakeSymbol("@version v       declare version", 0, ATtrue));
  ATprotect(&(term_r_91));
  term_r_91 = (ATerm) ATmakeAppl(sym__3, term_r_54, term_c_91, term_y_70);
  ATprotect(&(term_s_91));
  term_s_91 = (ATerm) ATmakeAppl(ATmakeSymbol("-d               debug mode", 0, ATtrue));
  ATprotect(&(term_t_91));
  term_t_91 = (ATerm) ATmakeAppl(sym__3, term_r_54, term_s_75, term_i_55);
  ATprotect(&(term_u_91));
  term_u_91 = (ATerm) ATmakeAppl(ATmakeSymbol("-t               trace mode", 0, ATtrue));
  ATprotect(&(term_b_92));
  term_b_92 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_92));
  term_c_92 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_d_92));
  term_d_92 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_55);
  ATprotect(&(term_e_92));
  term_e_92 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_92));
  term_f_92 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_92));
  term_g_92 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_h_92));
  term_h_92 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_92));
  term_i_92 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_92));
  term_j_92 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_o_92));
  term_o_92 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_92));
  term_p_92 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_92));
  term_s_92 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_92));
  term_t_92 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_92));
  term_y_92 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_92));
  term_z_92 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_93));
  term_c_93 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_93));
  term_f_93 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_93));
  term_m_93 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_94));
  term_i_94 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_j_94));
  term_j_94 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_k_94));
  term_k_94 = (ATerm) ATmakeAppl(sym__3, term_r_54, term_j_94, term_h_92);
  ATprotect(&(term_l_94));
  term_l_94 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_o_94));
  term_o_94 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_94));
  term_p_94 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_94));
  term_q_94 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_94));
  term_v_94 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_b_95));
  term_b_95 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_c_95));
  term_c_95 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_95));
  term_d_95 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_95));
  term_v_95 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_h_96));
  term_h_96 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_i_96));
  term_i_96 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_96));
  term_j_96 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_k_96));
  term_k_96 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_u_96));
  term_u_96 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_v_96));
  term_v_96 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm x_34 (ATerm);
ATerm b_35 (ATerm);
ATerm c_35 (ATerm);
ATerm d_35 (ATerm);
ATerm e_35 (ATerm);
ATerm i_35 (ATerm);
ATerm j_35 (ATerm);
ATerm l_35 (ATerm);
ATerm m_35 (ATerm);
ATerm RDtoSD_0_0 (ATerm);
ATerm o_35 (ATerm);
ATerm q_35 (ATerm);
ATerm s_35 (ATerm);
ATerm t_35 (ATerm);
ATerm u_35 (ATerm);
ATerm v_35 (ATerm);
ATerm eval_rules_0_0 (ATerm);
ATerm w_35 (ATerm);
ATerm y_35 (ATerm);
ATerm z_35 (ATerm);
ATerm a_36 (ATerm);
ATerm define_strategies_0_0 (ATerm);
ATerm c_36 (ATerm);
ATerm e_36 (ATerm);
ATerm f_36 (ATerm);
ATerm g_36 (ATerm);
ATerm i_36 (ATerm);
ATerm j_36 (ATerm);
ATerm k_36 (ATerm);
ATerm l_36 (ATerm);
ATerm q_36 (ATerm);
ATerm r_36 (ATerm);
ATerm t_36 (ATerm);
ATerm v_36 (ATerm);
ATerm x_36 (ATerm);
ATerm y_36 (ATerm);
ATerm z_36 (ATerm);
ATerm a_37 (ATerm);
ATerm spaste_1_0 (ATerm v_161 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm h_129 (ATerm), ATerm i_129 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm y_130 (ATerm), ATerm z_130 (ATerm), ATerm a_131 (ATerm), ATerm);
ATerm Let_2_0 (ATerm k_128 (ATerm), ATerm l_128 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm w_161 (ATerm), ATerm x_161 (ATerm), ATerm y_161 (ATerm), ATerm);
ATerm c_37 (ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm SVar_1_0 (ATerm j_128 (ATerm), ATerm);
ATerm DistBinding_2_0 (ATerm i_159 (ATerm), ATerm j_159 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm g_37 (ATerm);
ATerm h_37 (ATerm);
ATerm i_37 (ATerm);
ATerm RnBinding_2_0 (ATerm c_159 (ATerm), ATerm d_159 (ATerm (ATerm), ATerm), ATerm);
ATerm lookup_0_0 (ATerm);
ATerm env_alltd_1_0 (ATerm i_138 (ATerm), ATerm);
ATerm rename_4_0 (ATerm x_158 (ATerm (ATerm), ATerm), ATerm y_158 (ATerm), ATerm z_158 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm a_159 (ATerm (ATerm), ATerm), ATerm);
ATerm r_37 (ATerm);
ATerm u_37 (ATerm);
ATerm w_37 (ATerm);
ATerm x_37 (ATerm);
ATerm a_38 (ATerm);
ATerm d_38 (ATerm);
ATerm e_38 (ATerm);
ATerm f_38 (ATerm);
ATerm tpaste_1_0 (ATerm r_161 (ATerm), ATerm);
ATerm g_38 (ATerm);
ATerm k_38 (ATerm);
ATerm r_38 (ATerm);
ATerm s_38 (ATerm);
ATerm v_38 (ATerm);
ATerm w_38 (ATerm);
ATerm z_38 (ATerm);
ATerm strename_0_0 (ATerm);
ATerm Expl_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm As_2_0 (ATerm r_125 (ATerm), ATerm s_125 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm o_128 (ATerm), ATerm p_128 (ATerm), ATerm q_128 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm q_129 (ATerm), ATerm r_129 (ATerm), ATerm s_129 (ATerm), ATerm);
ATerm Explode_2_0 (ATerm m_125 (ATerm), ATerm n_125 (ATerm), ATerm);
ATerm pat_td_1_0 (ATerm x_160 (ATerm), ATerm);
ATerm Bapp_0_0 (ATerm);
ATerm map1_1_0 (ATerm i_0 (ATerm), ATerm);
ATerm j_40 (ATerm);
ATerm l_40 (ATerm);
ATerm m_40 (ATerm);
ATerm o_40 (ATerm);
ATerm p_40 (ATerm);
ATerm q_40 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm r_40 (ATerm);
ATerm s_40 (ATerm);
ATerm u_40 (ATerm);
ATerm v_40 (ATerm);
ATerm w_40 (ATerm);
ATerm x_40 (ATerm);
ATerm y_40 (ATerm);
ATerm a_41 (ATerm);
ATerm LiftCallArgs_0_0 (ATerm);
ATerm t_21 (ATerm j_21, ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm b_41 (ATerm);
ATerm d_41 (ATerm);
ATerm f_41 (ATerm);
ATerm g_41 (ATerm);
ATerm i_41 (ATerm);
ATerm j_41 (ATerm);
ATerm k_41 (ATerm);
ATerm l_41 (ATerm);
ATerm m_41 (ATerm);
ATerm n_41 (ATerm);
ATerm o_41 (ATerm);
ATerm q_41 (ATerm);
ATerm r_41 (ATerm);
ATerm s_41 (ATerm);
ATerm u_41 (ATerm);
ATerm v_41 (ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm x_41 (ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm Con_3_0 (ATerm a_126 (ATerm), ATerm b_126 (ATerm), ATerm c_126 (ATerm), ATerm);
ATerm y_41 (ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm w_134 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm Rcon_0_0 (ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm topdown_1_0 (ATerm s_133 (ATerm), ATerm);
ATerm g_42 (ATerm);
ATerm h_42 (ATerm);
ATerm desugar_0_0 (ATerm);
ATerm j_42 (ATerm);
ATerm k_42 (ATerm);
ATerm m_42 (ATerm);
ATerm p_42 (ATerm);
ATerm t_42 (ATerm);
ATerm u_42 (ATerm);
ATerm c_43 (ATerm);
ATerm g_43 (ATerm);
ATerm h_43 (ATerm);
ATerm DeclareVariables_0_0 (ATerm);
ATerm DynamicRules_1_0 (ATerm r_127 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm i_127 (ATerm), ATerm j_127 (ATerm), ATerm k_127 (ATerm), ATerm l_127 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm b_131 (ATerm), ATerm c_131 (ATerm), ATerm d_131 (ATerm), ATerm e_131 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm u_128 (ATerm), ATerm v_128 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm s_161 (ATerm), ATerm t_161 (ATerm), ATerm u_161 (ATerm), ATerm);
ATerm i_43 (ATerm);
ATerm j_43 (ATerm);
ATerm k_43 (ATerm);
ATerm l_43 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm m_43 (ATerm);
ATerm p_43 (ATerm);
ATerm q_43 (ATerm);
ATerm r_43 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm union_1_0 (ATerm o_143 (ATerm), ATerm);
ATerm diff_1_0 (ATerm j_143 (ATerm), ATerm);
ATerm z_43 (ATerm);
ATerm a_44 (ATerm);
ATerm b_44 (ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm h_44 (ATerm);
ATerm i_44 (ATerm);
ATerm j_44 (ATerm);
ATerm l_44 (ATerm);
ATerm m_44 (ATerm);
ATerm o_44 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm r_44 (ATerm);
ATerm t_44 (ATerm);
ATerm u_44 (ATerm);
ATerm v_44 (ATerm);
ATerm w_44 (ATerm);
ATerm e_45 (ATerm);
ATerm f_45 (ATerm);
ATerm free_vars_3_0 (ATerm n_160 (ATerm), ATerm o_160 (ATerm), ATerm p_160 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm h_45 (ATerm);
ATerm i_45 (ATerm);
ATerm k_45 (ATerm);
ATerm l_45 (ATerm);
ATerm DefLRule_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm t_133 (ATerm), ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm w_139 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm w_154 (ATerm), ATerm);
ATerm call_sc_0_0 (ATerm);
ATerm eval_import_0_0 (ATerm);
ATerm r_45 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm table_putlist_0_0 (ATerm);
ATerm eval_load_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm z_151 (ATerm), ATerm);
ATerm t_45 (ATerm);
ATerm u_45 (ATerm);
ATerm v_45 (ATerm);
ATerm eval_dump_0_0 (ATerm);
ATerm EvalPrim_0_0 (ATerm);
ATerm Op_2_0 (ATerm i_125 (ATerm), ATerm j_125 (ATerm), ATerm);
ATerm e_130 (ATerm d_129, ATerm e_129, ATerm f_129, ATerm);
ATerm x_45 (ATerm);
ATerm EvalTerm_0_0 (ATerm);
ATerm table_replace_0_0 (ATerm);
ATerm BindVar_0_0 (ATerm);
ATerm Var_1_0 (ATerm b_123 (ATerm), ATerm);
ATerm y_45 (ATerm);
ATerm z_45 (ATerm);
ATerm a_46 (ATerm);
ATerm PatDecompose_0_0 (ATerm);
ATerm MatchVar_1_0 (ATerm w_159 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm j_133 (ATerm), ATerm k_133 (ATerm), ATerm);
ATerm for_3_0 (ATerm m_133 (ATerm), ATerm n_133 (ATerm), ATerm o_133 (ATerm), ATerm);
ATerm d_46 (ATerm);
ATerm e_46 (ATerm);
ATerm g_46 (ATerm);
ATerm h_46 (ATerm);
ATerm stratego_match_1_0 (ATerm u_162 (ATerm), ATerm);
ATerm i_46 (ATerm);
ATerm EvalMatch_0_0 (ATerm);
ATerm j_46 (ATerm);
ATerm k_46 (ATerm);
ATerm EvalScope_1_0 (ATerm v_162 (ATerm), ATerm);
ATerm l_46 (ATerm);
ATerm m_46 (ATerm);
ATerm n_46 (ATerm);
ATerm EvalCong_1_0 (ATerm s_162 (ATerm), ATerm);
ATerm EvalOne_1_0 (ATerm r_162 (ATerm), ATerm);
ATerm EvalAll_1_0 (ATerm j_0 (ATerm), ATerm);
ATerm r_46 (ATerm);
ATerm s_46 (ATerm);
ATerm x_46 (ATerm);
ATerm y_46 (ATerm);
ATerm e_47 (ATerm);
ATerm f_47 (ATerm);
ATerm g_47 (ATerm);
ATerm h_47 (ATerm);
ATerm EvalLet_1_0 (ATerm b_163 (ATerm), ATerm);
ATerm i_47 (ATerm);
ATerm k_47 (ATerm);
ATerm l_47 (ATerm);
ATerm EvalCallFail_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm genzip_4_0 (ATerm n_141 (ATerm), ATerm o_141 (ATerm), ATerm p_141 (ATerm), ATerm q_141 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm n_145 (ATerm), ATerm o_145 (ATerm), ATerm p_145 (ATerm), ATerm);
ATerm m_47 (ATerm);
ATerm p_47 (ATerm);
ATerm b_48 (ATerm);
ATerm g_48 (ATerm);
ATerm h_48 (ATerm);
ATerm i_48 (ATerm);
ATerm k_48 (ATerm);
ATerm o_48 (ATerm);
ATerm p_48 (ATerm);
ATerm EvalCall_1_0 (ATerm a_163 (ATerm), ATerm);
ATerm EvalLChoice_1_0 (ATerm z_162 (ATerm), ATerm);
ATerm EvalChoice_1_0 (ATerm y_162 (ATerm), ATerm);
ATerm App_2_0 (ATerm o_125 (ATerm), ATerm p_125 (ATerm), ATerm);
ATerm eval_0_0 (ATerm);
ATerm eval_strategy_0_0 (ATerm);
ATerm q_48 (ATerm);
ATerm r_48 (ATerm);
ATerm x_48 (ATerm);
ATerm y_48 (ATerm);
ATerm z_48 (ATerm);
ATerm a_49 (ATerm);
ATerm b_49 (ATerm);
ATerm eval_command_0_0 (ATerm);
ATerm repeat_1_0 (ATerm u_132 (ATerm), ATerm);
ATerm c_49 (ATerm);
ATerm evaluate_commands_0_0 (ATerm);
ATerm j_145 (ATerm d_145, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm d_49 (ATerm);
ATerm e_49 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm copyright_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm j_153 (ATerm), ATerm);
ATerm extend_config_0_0 (ATerm);
ATerm i_49 (ATerm);
ATerm j_49 (ATerm);
ATerm k_49 (ATerm);
ATerm l_49 (ATerm);
ATerm n_49 (ATerm);
ATerm o_49 (ATerm);
ATerm p_49 (ATerm);
ATerm r_49 (ATerm);
ATerm s_49 (ATerm);
ATerm t_49 (ATerm);
ATerm u_49 (ATerm);
ATerm v_49 (ATerm);
ATerm si_options_0_0 (ATerm);
ATerm w_49 (ATerm);
ATerm x_49 (ATerm);
ATerm a_50 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm b_50 (ATerm);
ATerm c_50 (ATerm);
ATerm d_50 (ATerm);
ATerm e_50 (ATerm);
ATerm f_50 (ATerm);
ATerm g_50 (ATerm);
ATerm h_50 (ATerm);
ATerm i_50 (ATerm);
ATerm j_50 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm);
ATerm k_50 (ATerm);
ATerm n_50 (ATerm);
ATerm o_50 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm p_50 (ATerm);
ATerm q_50 (ATerm);
ATerm r_50 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm reverse_acc_2_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm c_124 (ATerm), ATerm);
ATerm t_50 (ATerm);
ATerm u_50 (ATerm);
ATerm v_50 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm d_124 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm u_139 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm a_140 (ATerm), ATerm);
ATerm x_50 (ATerm);
ATerm a_51 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm map_1_0 (ATerm j_139 (ATerm), ATerm);
ATerm c_51 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm d_51 (ATerm);
ATerm e_51 (ATerm);
ATerm f_51 (ATerm);
ATerm g_51 (ATerm);
ATerm h_51 (ATerm);
ATerm i_51 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm j_51 (ATerm);
ATerm parse_options_p__1_0 (ATerm c_158 (ATerm), ATerm);
ATerm o_51 (ATerm);
ATerm p_51 (ATerm);
ATerm q_51 (ATerm);
ATerm r_51 (ATerm);
ATerm parse_options_1_0 (ATerm b_158 (ATerm), ATerm);
ATerm u_51 (ATerm);
ATerm v_51 (ATerm);
ATerm w_51 (ATerm);
ATerm x_51 (ATerm);
ATerm make_option_table_0_0 (ATerm);
ATerm _2_0 (ATerm s_113 (ATerm), ATerm t_113 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm h_118 (ATerm), ATerm i_118 (ATerm), ATerm);
ATerm at_suffix_1_0 (ATerm e_140 (ATerm), ATerm);
ATerm split_fetch_1_0 (ATerm x_139 (ATerm), ATerm);
ATerm c_52 (ATerm);
ATerm process_options_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm x_34 (ATerm t)
{
  ATerm q_1 = NULL;
  ATerm w_10 = t;
  int t_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_1 = ATgetArgument(t, 0);
          {
            ATerm d_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_29);
      t = q_1;
    }
  else
    {
      t = w_10;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_1 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_1;
    }
  return(t);
}
ATerm b_35 (ATerm t)
{
  ATerm t_1 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      t_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, t_1);
  return(t);
}
ATerm c_35 (ATerm t)
{
  ATerm e_52 = t;
  int f_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(f_52);
    }
  else
    {
      t = e_52;
      {
        ATerm v_1 = NULL,y_1 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            v_1 = ATgetArgument(t, 0);
            t = v_1;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm g_52 = t;
            int h_52 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm i_52 = ATgetArgument(t, 0);
                    ATerm j_52 = ATgetArgument(t, 1);
                    y_1 = ATgetArgument(t, 2);
                    {
                      ATerm k_52 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(h_52);
                t = y_1;
                t = map_1_0(d_35, t);
              }
            else
              {
                t = g_52;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm n_52 = ATgetArgument(t, 0);
                    ATerm o_52 = ATgetArgument(t, 1);
                    y_1 = ATgetArgument(t, 2);
                    {
                      ATerm p_52 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = y_1;
                t = map_1_0(e_35, t);
              }
          }
      }
    }
  return(t);
}
ATerm d_35 (ATerm t)
{
  ATerm e_2 = NULL;
  ATerm q_52 = t;
  int r_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_2 = ATgetArgument(t, 0);
          {
            ATerm s_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_52);
      t = e_2;
    }
  else
    {
      t = q_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_2 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_2;
    }
  return(t);
}
ATerm e_35 (ATerm t)
{
  ATerm s_2 = NULL;
  ATerm t_52 = t;
  int u_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_2 = ATgetArgument(t, 0);
          {
            ATerm v_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_52);
      t = s_2;
    }
  else
    {
      t = t_52;
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
ATerm i_35 (ATerm t)
{
  ATerm z_2 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_2);
  return(t);
}
ATerm j_35 (ATerm t)
{
  ATerm w_52 = t;
  int x_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(x_52);
    }
  else
    {
      t = w_52;
      {
        ATerm b_3 = NULL,d_3 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            b_3 = ATgetArgument(t, 0);
            t = b_3;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm a_53 = t;
            int b_53 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm c_53 = ATgetArgument(t, 0);
                    ATerm d_53 = ATgetArgument(t, 1);
                    d_3 = ATgetArgument(t, 2);
                    {
                      ATerm e_53 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(b_53);
                t = d_3;
                t = map_1_0(l_35, t);
              }
            else
              {
                t = a_53;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm f_53 = ATgetArgument(t, 0);
                    ATerm g_53 = ATgetArgument(t, 1);
                    d_3 = ATgetArgument(t, 2);
                    {
                      ATerm h_53 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = d_3;
                t = map_1_0(m_35, t);
              }
          }
      }
    }
  return(t);
}
ATerm l_35 (ATerm t)
{
  ATerm j_3 = NULL;
  ATerm i_53 = t;
  int j_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_3 = ATgetArgument(t, 0);
          {
            ATerm k_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_53);
      t = j_3;
    }
  else
    {
      t = i_53;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_3;
    }
  return(t);
}
ATerm m_35 (ATerm t)
{
  ATerm p_3 = NULL;
  ATerm n_53 = t;
  int o_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_3 = ATgetArgument(t, 0);
          {
            ATerm p_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_53);
      t = p_3;
    }
  else
    {
      t = n_53;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_3;
    }
  return(t);
}
ATerm RDtoSD_0_0 (ATerm t)
{
  ATerm x_0 = NULL,z_0 = NULL,a_1 = NULL,b_1 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      z_0 = ATgetArgument(t, 0);
      a_1 = ATgetArgument(t, 1);
      b_1 = ATgetArgument(t, 2);
      x_0 = ATgetArgument(t, 3);
      {
        ATerm h_1 = NULL,m_1 = NULL,n_1 = NULL;
        t = b_1;
        t = map_1_0(x_34, t);
        h_1 = t;
        t = x_0;
        t = free_vars_3_0(b_35, c_35, tboundin_3_0, t);
        m_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_1, h_1);
        t = diff_0_0(t);
        n_1 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, z_0, a_1, b_1, (ATerm) ATmakeAppl(sym_Scope_2, n_1, (ATerm) ATmakeAppl(sym_SRule_1, x_0)));
      }
    }
  else
    {
      ATerm y_2 = NULL;
      if(match_cons(t, sym_RDef_3))
        {
          z_0 = ATgetArgument(t, 0);
          a_1 = ATgetArgument(t, 1);
          b_1 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = b_1;
      t = free_vars_3_0(i_35, j_35, tboundin_3_0, t);
      y_2 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, z_0, a_1, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, y_2, (ATerm) ATmakeAppl(sym_SRule_1, b_1)));
    }
  return(t);
}
ATerm o_35 (ATerm t)
{
  t = bottomup_1_0(q_35, t);
  t = RDtoSD_0_0(t);
  t = desugar_0_0(t);
  return(t);
}
ATerm q_35 (ATerm t)
{
  ATerm q_53 = t;
  int r_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_53 = t;
      int t_53 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = DefLRule_0_0(t);
          ;
          LocalPopChoice(t_53);
        }
      else
        {
          t = s_53;
          {
            ATerm y_3 = NULL,a_4 = NULL;
            if(match_cons(t, sym_ScopeDefault_1))
              {
                y_3 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = y_3;
            t = free_vars_3_0(s_35, t_35, tboundin_3_0, t);
            a_4 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, a_4, y_3);
          }
        }
      ;
      LocalPopChoice(r_53);
    }
  else
    {
      t = q_53;
    }
  return(t);
}
ATerm s_35 (ATerm t)
{
  ATerm b_4 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      b_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, b_4);
  return(t);
}
ATerm t_35 (ATerm t)
{
  ATerm u_53 = t;
  int v_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(v_53);
    }
  else
    {
      t = u_53;
      {
        ATerm d_4 = NULL,f_4 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            d_4 = ATgetArgument(t, 0);
            t = d_4;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm w_53 = t;
            int x_53 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm a_54 = ATgetArgument(t, 0);
                    ATerm b_54 = ATgetArgument(t, 1);
                    f_4 = ATgetArgument(t, 2);
                    {
                      ATerm c_54 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(x_53);
                t = f_4;
                t = map_1_0(u_35, t);
              }
            else
              {
                t = w_53;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm d_54 = ATgetArgument(t, 0);
                    ATerm e_54 = ATgetArgument(t, 1);
                    f_4 = ATgetArgument(t, 2);
                    {
                      ATerm f_54 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = f_4;
                t = map_1_0(v_35, t);
              }
          }
      }
    }
  return(t);
}
ATerm u_35 (ATerm t)
{
  ATerm l_4 = NULL;
  ATerm g_54 = t;
  int h_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_4 = ATgetArgument(t, 0);
          {
            ATerm i_54 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_54);
      t = l_4;
    }
  else
    {
      t = g_54;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_4;
    }
  return(t);
}
ATerm v_35 (ATerm t)
{
  ATerm r_4 = NULL;
  ATerm j_54 = t;
  int k_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_4 = ATgetArgument(t, 0);
          {
            ATerm n_54 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_54);
      t = r_4;
    }
  else
    {
      t = j_54;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_4;
    }
  return(t);
}
ATerm eval_rules_0_0 (ATerm t)
{
  ATerm w_3 = NULL;
  if(match_cons(t, sym_Rules_1))
    {
      w_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_3;
  {
    ATerm o_54 = t;
    int p_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_0 = NULL,l_0 = NULL,m_0 = NULL,n_0 = NULL,t_0 = NULL,u_0 = NULL,v_0 = NULL,w_0 = NULL;
        t = term_q_54;
        m_0 = t;
        t = term_r_54;
        k_0 = t;
        t = m_0;
        n_0 = t;
        t = term_q_54;
        l_0 = t;
        t = SSL_table_get(k_0, l_0);
        {
          ATerm s_54 = t;
          int t_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_0 = NULL,o_0 = NULL,p_0 = NULL,r_0 = NULL,s_0 = NULL;
              t = eval_config_0_0(t);
              q_0 = t;
              r_0 = t;
              t = term_r_54;
              o_0 = t;
              t = r_0;
              s_0 = t;
              t = term_q_54;
              p_0 = t;
              t = SSL_table_put(o_0, p_0, q_0);
              t = q_0;
              ;
              LocalPopChoice(t_54);
            }
          else
            {
              t = s_54;
            }
          t = term_u_54;
          v_0 = t;
          t = term_v_54;
          t_0 = t;
          t = v_0;
          w_0 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, w_3), term_u_54);
          u_0 = t;
          t = SSL_printnl(t_0, u_0);
          t = w_3;
        }
        ;
        LocalPopChoice(p_54);
      }
    else
      {
        t = o_54;
      }
    t = map_1_0(o_35, t);
    {
      ATerm w_54 = t;
      int x_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_4 = NULL,y_0 = NULL,c_1 = NULL,d_1 = NULL,e_1 = NULL,o_1 = NULL,p_1 = NULL,r_1 = NULL,s_1 = NULL;
          u_4 = t;
          t = term_q_54;
          d_1 = t;
          t = term_r_54;
          y_0 = t;
          t = d_1;
          e_1 = t;
          t = term_q_54;
          c_1 = t;
          t = SSL_table_get(y_0, c_1);
          {
            ATerm a_55 = t;
            int b_55 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_1 = NULL,g_1 = NULL,i_1 = NULL,j_1 = NULL,k_1 = NULL;
                t = eval_config_0_0(t);
                f_1 = t;
                j_1 = t;
                t = term_r_54;
                g_1 = t;
                t = j_1;
                k_1 = t;
                t = term_q_54;
                i_1 = t;
                t = SSL_table_put(g_1, i_1, f_1);
                t = f_1;
                ;
                LocalPopChoice(b_55);
              }
            else
              {
                t = a_55;
              }
            t = term_c_55;
            r_1 = t;
            t = term_v_54;
            o_1 = t;
            t = r_1;
            s_1 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, u_4), term_c_55);
            p_1 = t;
            t = SSL_printnl(o_1, p_1);
            t = u_4;
          }
          ;
          LocalPopChoice(x_54);
        }
      else
        {
          t = w_54;
        }
      t = define_strategies_0_0(t);
    }
  }
  return(t);
}
ATerm w_35 (ATerm t)
{
  ATerm w_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL;
  w_4 = t;
  if(match_cons(t, sym_SDef_3))
    {
      x_4 = ATgetArgument(t, 0);
      y_4 = ATgetArgument(t, 1);
      {
        ATerm d_55 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = y_4;
  t = foldr_3_0(y_35, z_35, a_36, t);
  z_4 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_e_55, (ATerm)ATmakeAppl(sym__2, x_4, z_4), w_4);
  t = table_push_0_0(t);
  return(t);
}
ATerm y_35 (ATerm t)
{
  t = term_f_55;
  return(t);
}
ATerm z_35 (ATerm t)
{
  ATerm a_5 = NULL,b_5 = NULL;
  if(match_cons(t, sym__2))
    {
      a_5 = ATgetArgument(t, 0);
      b_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_55 = t;
    int h_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(a_5, b_5);
        ;
        LocalPopChoice(h_55);
      }
    else
      {
        t = g_55;
        t = SSL_addr(a_5, b_5);
      }
  }
  return(t);
}
ATerm a_36 (ATerm t)
{
  t = term_i_55;
  return(t);
}
ATerm define_strategies_0_0 (ATerm t)
{
  t = map_1_0(w_35, t);
  return(t);
}
ATerm c_36 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_55 = ATgetArgument(t, 0);
      if(((ATgetType(j_55) != AT_LIST) || !(ATisEmpty(j_55))))
        _fail(t);
      {
        ATerm k_55 = ATgetArgument(t, 1);
        if(((ATgetType(k_55) != AT_LIST) || !(ATisEmpty(k_55))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm e_36 (ATerm t)
{
  ATerm k_5 = NULL,l_5 = NULL,m_5 = NULL,n_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_55 = ATgetArgument(t, 0);
      if(((ATgetType(n_55) == AT_LIST) && !(ATisEmpty(n_55))))
        {
          k_5 = ATgetFirst((ATermList) n_55);
          m_5 = (ATerm) ATgetNext((ATermList) n_55);
        }
      else
        _fail(t);
      {
        ATerm o_55 = ATgetArgument(t, 1);
        if(((ATgetType(o_55) == AT_LIST) && !(ATisEmpty(o_55))))
          {
            l_5 = ATgetFirst((ATermList) o_55);
            n_5 = (ATerm) ATgetNext((ATermList) o_55);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_5, l_5), (ATerm) ATmakeAppl(sym__2, m_5, n_5));
  return(t);
}
ATerm f_36 (ATerm t)
{
  ATerm o_5 = NULL,p_5 = NULL;
  if(match_cons(t, sym__2))
    {
      o_5 = ATgetArgument(t, 0);
      p_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_5), o_5);
  return(t);
}
ATerm g_36 (ATerm t)
{
  ATerm r_5 = NULL,t_5 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL;
  if(match_cons(t, sym__2))
    {
      r_5 = ATgetArgument(t, 0);
      w_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_5;
  {
    ATerm p_55 = t;
    int q_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm r_55 = ATgetArgument(t, 0);
            t_5 = ATgetArgument(t, 1);
            u_5 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(q_55);
        t = (ATerm) ATmakeAppl(sym_SDef_3, w_5, t_5, u_5);
      }
    else
      {
        t = p_55;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm s_55 = ATgetArgument(t, 0);
            t_5 = ATgetArgument(t, 1);
            u_5 = ATgetArgument(t, 2);
            v_5 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, w_5, t_5, u_5, v_5);
      }
  }
  return(t);
}
ATerm i_36 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm t_55 = ATgetArgument(t, 0);
      if(((ATgetType(t_55) != AT_LIST) || !(ATisEmpty(t_55))))
        _fail(t);
      {
        ATerm u_55 = ATgetArgument(t, 1);
        if(((ATgetType(u_55) != AT_LIST) || !(ATisEmpty(u_55))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_36 (ATerm t)
{
  ATerm e_6 = NULL,f_6 = NULL,g_6 = NULL,h_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_55 = ATgetArgument(t, 0);
      if(((ATgetType(v_55) == AT_LIST) && !(ATisEmpty(v_55))))
        {
          e_6 = ATgetFirst((ATermList) v_55);
          g_6 = (ATerm) ATgetNext((ATermList) v_55);
        }
      else
        _fail(t);
      {
        ATerm w_55 = ATgetArgument(t, 1);
        if(((ATgetType(w_55) == AT_LIST) && !(ATisEmpty(w_55))))
          {
            f_6 = ATgetFirst((ATermList) w_55);
            h_6 = (ATerm) ATgetNext((ATermList) w_55);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_6, f_6), (ATerm) ATmakeAppl(sym__2, g_6, h_6));
  return(t);
}
ATerm k_36 (ATerm t)
{
  ATerm i_6 = NULL,j_6 = NULL;
  if(match_cons(t, sym__2))
    {
      i_6 = ATgetArgument(t, 0);
      j_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_6), i_6);
  return(t);
}
ATerm l_36 (ATerm t)
{
  ATerm l_6 = NULL,n_6 = NULL,o_6 = NULL;
  if(match_cons(t, sym__2))
    {
      l_6 = ATgetArgument(t, 0);
      o_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_6;
  {
    ATerm x_55 = t;
    int a_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm b_56 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(a_56);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, o_6);
      }
    else
      {
        t = x_55;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm c_56 = ATgetArgument(t, 0);
            n_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, o_6, n_6);
      }
  }
  return(t);
}
ATerm q_36 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_56 = ATgetArgument(t, 0);
      if(((ATgetType(d_56) != AT_LIST) || !(ATisEmpty(d_56))))
        _fail(t);
      {
        ATerm e_56 = ATgetArgument(t, 1);
        if(((ATgetType(e_56) != AT_LIST) || !(ATisEmpty(e_56))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_36 (ATerm t)
{
  ATerm s_6 = NULL,t_6 = NULL,u_6 = NULL,v_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_56 = ATgetArgument(t, 0);
      if(((ATgetType(f_56) == AT_LIST) && !(ATisEmpty(f_56))))
        {
          s_6 = ATgetFirst((ATermList) f_56);
          u_6 = (ATerm) ATgetNext((ATermList) f_56);
        }
      else
        _fail(t);
      {
        ATerm g_56 = ATgetArgument(t, 1);
        if(((ATgetType(g_56) == AT_LIST) && !(ATisEmpty(g_56))))
          {
            t_6 = ATgetFirst((ATermList) g_56);
            v_6 = (ATerm) ATgetNext((ATermList) g_56);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_6, t_6), (ATerm) ATmakeAppl(sym__2, u_6, v_6));
  return(t);
}
ATerm t_36 (ATerm t)
{
  ATerm w_6 = NULL,x_6 = NULL;
  if(match_cons(t, sym__2))
    {
      w_6 = ATgetArgument(t, 0);
      x_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_6), w_6);
  return(t);
}
ATerm v_36 (ATerm t)
{
  ATerm z_6 = NULL,b_7 = NULL,c_7 = NULL;
  if(match_cons(t, sym__2))
    {
      z_6 = ATgetArgument(t, 0);
      c_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_6;
  {
    ATerm h_56 = t;
    int i_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm j_56 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(i_56);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, c_7);
      }
    else
      {
        t = h_56;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm k_56 = ATgetArgument(t, 0);
            b_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, c_7, b_7);
      }
  }
  return(t);
}
ATerm x_36 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_56 = ATgetArgument(t, 0);
      if(((ATgetType(n_56) != AT_LIST) || !(ATisEmpty(n_56))))
        _fail(t);
      {
        ATerm o_56 = ATgetArgument(t, 1);
        if(((ATgetType(o_56) != AT_LIST) || !(ATisEmpty(o_56))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_36 (ATerm t)
{
  ATerm g_7 = NULL,h_7 = NULL,i_7 = NULL,j_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_56 = ATgetArgument(t, 0);
      if(((ATgetType(p_56) == AT_LIST) && !(ATisEmpty(p_56))))
        {
          g_7 = ATgetFirst((ATermList) p_56);
          i_7 = (ATerm) ATgetNext((ATermList) p_56);
        }
      else
        _fail(t);
      {
        ATerm q_56 = ATgetArgument(t, 1);
        if(((ATgetType(q_56) == AT_LIST) && !(ATisEmpty(q_56))))
          {
            h_7 = ATgetFirst((ATermList) q_56);
            j_7 = (ATerm) ATgetNext((ATermList) q_56);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_7, h_7), (ATerm) ATmakeAppl(sym__2, i_7, j_7));
  return(t);
}
ATerm z_36 (ATerm t)
{
  ATerm k_7 = NULL,l_7 = NULL;
  if(match_cons(t, sym__2))
    {
      k_7 = ATgetArgument(t, 0);
      l_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_7), k_7);
  return(t);
}
ATerm a_37 (ATerm t)
{
  ATerm n_7 = NULL,p_7 = NULL,q_7 = NULL;
  if(match_cons(t, sym__2))
    {
      n_7 = ATgetArgument(t, 0);
      q_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_7;
  {
    ATerm r_56 = t;
    int s_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm t_56 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(s_56);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, q_7);
      }
    else
      {
        t = r_56;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm u_56 = ATgetArgument(t, 0);
            p_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, q_7, p_7);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm v_161 (ATerm), ATerm t)
{
  ATerm v_56 = t;
  int w_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_36 (ATerm t)
      {
        ATerm l_1 = NULL,f_2 = NULL;
        l_1 = t;
        t = v_161(t);
        f_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_1, f_2);
        t = genzip_4_0(c_36, e_36, f_36, g_36, t);
        return(t);
      }
      t = Let_2_0(b_36, _id, t);
      ;
      LocalPopChoice(w_56);
    }
  else
    {
      t = v_56;
      {
        ATerm x_56 = t;
        int a_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_36 (ATerm t)
            {
              ATerm m_2 = NULL,p_2 = NULL;
              m_2 = t;
              t = v_161(t);
              p_2 = t;
              t = (ATerm) ATmakeAppl(sym__2, m_2, p_2);
              t = genzip_4_0(i_36, j_36, k_36, l_36, t);
              return(t);
            }
            t = SDef_3_0(_id, h_36, _id, t);
            ;
            LocalPopChoice(a_57);
          }
        else
          {
            t = x_56;
            {
              ATerm b_57 = t;
              int c_57 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_36 (ATerm t)
                  {
                    ATerm s_3 = NULL,u_3 = NULL;
                    s_3 = t;
                    t = v_161(t);
                    u_3 = t;
                    t = (ATerm) ATmakeAppl(sym__2, s_3, u_3);
                    t = genzip_4_0(q_36, r_36, t_36, v_36, t);
                    return(t);
                  }
                  t = SDefT_4_0(_id, m_36, _id, _id, t);
                  ;
                  LocalPopChoice(c_57);
                }
              else
                {
                  t = b_57;
                  {
                    ATerm d_57 = t;
                    int e_57 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm w_36 (ATerm t)
                        {
                          ATerm d_5 = NULL,f_5 = NULL;
                          d_5 = t;
                          t = v_161(t);
                          f_5 = t;
                          t = (ATerm) ATmakeAppl(sym__2, d_5, f_5);
                          t = genzip_4_0(x_36, y_36, z_36, a_37, t);
                          return(t);
                        }
                        t = RDefT_4_0(_id, w_36, _id, _id, t);
                        ;
                        LocalPopChoice(e_57);
                      }
                    else
                      {
                        t = d_57;
                        {
                          ATerm b_37 (ATerm t)
                          {
                            ATerm u_7 = NULL;
                            t = v_161(t);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                u_7 = ATgetFirst((ATermList) t);
                                {
                                  ATerm f_57 = (ATerm) ATgetNext((ATermList) t);
                                }
                              }
                            else
                              _fail(t);
                            t = u_7;
                            return(t);
                          }
                          t = Rec_2_0(b_37, _id, t);
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
ATerm Rec_2_0 (ATerm h_129 (ATerm), ATerm i_129 (ATerm), ATerm t)
{
  ATerm v_7 = NULL,w_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL,u_1 = NULL,w_1 = NULL;
  a_8 = t;
  if(match_cons(t, sym_Rec_2))
    {
      w_7 = ATgetArgument(t, 0);
      x_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_8);
  v_7 = t;
  t = w_7;
  t = h_129(t);
  y_7 = t;
  t = x_7;
  t = i_129(t);
  z_7 = t;
  w_1 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, y_7, z_7);
  u_1 = t;
  t = SSLsetAnnotations(u_1, v_7);
  return(t);
}
ATerm SDef_3_0 (ATerm y_130 (ATerm), ATerm z_130 (ATerm), ATerm a_131 (ATerm), ATerm t)
{
  ATerm d_8 = NULL,e_8 = NULL,f_8 = NULL,g_8 = NULL,h_8 = NULL,i_8 = NULL,j_8 = NULL,k_8 = NULL,x_1 = NULL,z_1 = NULL;
  k_8 = t;
  if(match_cons(t, sym_SDef_3))
    {
      e_8 = ATgetArgument(t, 0);
      f_8 = ATgetArgument(t, 1);
      g_8 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_8);
  d_8 = t;
  t = e_8;
  t = y_130(t);
  h_8 = t;
  t = f_8;
  t = z_130(t);
  i_8 = t;
  t = g_8;
  t = a_131(t);
  j_8 = t;
  z_1 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, h_8, i_8, j_8);
  x_1 = t;
  t = SSLsetAnnotations(x_1, d_8);
  return(t);
}
ATerm Let_2_0 (ATerm k_128 (ATerm), ATerm l_128 (ATerm), ATerm t)
{
  ATerm n_8 = NULL,o_8 = NULL,p_8 = NULL,q_8 = NULL,r_8 = NULL,s_8 = NULL,a_2 = NULL,b_2 = NULL;
  s_8 = t;
  if(match_cons(t, sym_Let_2))
    {
      o_8 = ATgetArgument(t, 0);
      p_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_8);
  n_8 = t;
  t = o_8;
  t = k_128(t);
  q_8 = t;
  t = p_8;
  t = l_128(t);
  r_8 = t;
  b_2 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, q_8, r_8);
  a_2 = t;
  t = SSLsetAnnotations(a_2, n_8);
  return(t);
}
ATerm sboundin_3_0 (ATerm w_161 (ATerm), ATerm x_161 (ATerm), ATerm y_161 (ATerm), ATerm t)
{
  ATerm g_57 = t;
  int h_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(w_161, w_161, t);
      ;
      LocalPopChoice(h_57);
    }
  else
    {
      t = g_57;
      {
        ATerm i_57 = t;
        int j_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(y_161, y_161, w_161, t);
            ;
            LocalPopChoice(j_57);
          }
        else
          {
            t = i_57;
            {
              ATerm k_57 = t;
              int n_57 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(y_161, y_161, y_161, w_161, t);
                  ;
                  LocalPopChoice(n_57);
                }
              else
                {
                  t = k_57;
                  t = Rec_2_0(y_161, w_161, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm c_37 (ATerm t)
{
  ATerm y_8 = NULL;
  ATerm o_57 = t;
  int p_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          y_8 = ATgetArgument(t, 0);
          {
            ATerm q_57 = ATgetArgument(t, 1);
          }
          {
            ATerm r_57 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_57);
      t = y_8;
    }
  else
    {
      t = o_57;
      if(match_cons(t, sym_SDefT_4))
        {
          y_8 = ATgetArgument(t, 0);
          {
            ATerm s_57 = ATgetArgument(t, 1);
          }
          {
            ATerm t_57 = ATgetArgument(t, 2);
          }
          {
            ATerm u_57 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = y_8;
    }
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm w_8 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      w_8 = ATgetArgument(t, 0);
      {
        ATerm v_57 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = w_8;
  t = map_1_0(c_37, t);
  return(t);
}
ATerm SVar_1_0 (ATerm j_128 (ATerm), ATerm t)
{
  ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL,c_2 = NULL,d_2 = NULL;
  h_9 = t;
  if(match_cons(t, sym_SVar_1))
    {
      f_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_9);
  e_9 = t;
  t = f_9;
  t = j_128(t);
  g_9 = t;
  d_2 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, g_9);
  c_2 = t;
  t = SSLsetAnnotations(c_2, e_9);
  return(t);
}
ATerm DistBinding_2_0 (ATerm i_159 (ATerm), ATerm j_159 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm k_9 = NULL,l_9 = NULL,m_9 = NULL;
  if(match_cons(t, sym__3))
    {
      k_9 = ATgetArgument(t, 0);
      l_9 = ATgetArgument(t, 1);
      m_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = k_9;
  {
    ATerm e_37 (ATerm t)
    {
      ATerm n_9 = NULL;
      n_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_9, m_9);
      t = i_159(t);
      return(t);
    }
    ATerm f_37 (ATerm t)
    {
      ATerm o_9 = NULL;
      o_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_9, l_9);
      t = i_159(t);
      return(t);
    }
    t = j_159(e_37, f_37, _id, t);
  }
  return(t);
}
ATerm g_37 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_57 = ATgetArgument(t, 0);
      if(((ATgetType(x_57) != AT_LIST) || !(ATisEmpty(x_57))))
        _fail(t);
      {
        ATerm y_57 = ATgetArgument(t, 1);
        if(((ATgetType(y_57) != AT_LIST) || !(ATisEmpty(y_57))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_37 (ATerm t)
{
  ATerm x_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_57 = ATgetArgument(t, 0);
      if(((ATgetType(z_57) == AT_LIST) && !(ATisEmpty(z_57))))
        {
          x_9 = ATgetFirst((ATermList) z_57);
          z_9 = (ATerm) ATgetNext((ATermList) z_57);
        }
      else
        _fail(t);
      {
        ATerm a_58 = ATgetArgument(t, 1);
        if(((ATgetType(a_58) == AT_LIST) && !(ATisEmpty(a_58))))
          {
            y_9 = ATgetFirst((ATermList) a_58);
            a_10 = (ATerm) ATgetNext((ATermList) a_58);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_9, y_9), (ATerm) ATmakeAppl(sym__2, z_9, a_10));
  return(t);
}
ATerm i_37 (ATerm t)
{
  ATerm b_10 = NULL,c_10 = NULL;
  if(match_cons(t, sym__2))
    {
      b_10 = ATgetArgument(t, 0);
      c_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_10), b_10);
  return(t);
}
ATerm RnBinding_2_0 (ATerm c_159 (ATerm), ATerm d_159 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm q_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL;
  if(match_cons(t, sym__2))
    {
      q_9 = ATgetArgument(t, 0);
      r_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_9;
  t = c_159(t);
  s_9 = t;
  t = map_1_0(new_0_0, t);
  t_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_9, t_9);
  t = genzip_4_0(g_37, h_37, i_37, _id, t);
  u_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_9, r_9);
  {
    ATerm b_58 = t;
    int c_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_58 = ATgetArgument(t, 0);
            ATerm e_58 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_9;
        {
          ATerm j_37 (ATerm t)
          {
            t = r_9;
            return(t);
          }
          t = at_end_1_0(j_37, t);
        }
        ;
        LocalPopChoice(c_58);
      }
    else
      {
        t = b_58;
        {
          ATerm p_9 = NULL,g_2 = NULL,h_2 = NULL;
          h_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, u_9, r_9);
          g_2 = t;
          t = SSL_explode_term(g_2);
          if(match_cons(t, sym__2))
            {
              ATerm g_58 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) g_58) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              p_9 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_9;
          t = concat_0_0(t);
        }
      }
    v_9 = t;
    t = q_9;
    {
      ATerm k_37 (ATerm t)
      {
        t = t_9;
        return(t);
      }
      t = d_159(k_37, t);
      w_9 = t;
      t = (ATerm) ATmakeAppl(sym__3, w_9, r_9, v_9);
    }
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm j_10 = NULL,k_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL;
  if(match_cons(t, sym__2))
    {
      m_10 = ATgetArgument(t, 0);
      n_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_10;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_10 = ATgetFirst((ATermList) t);
      p_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_10;
  if(match_cons(t, sym__2))
    {
      j_10 = ATgetArgument(t, 0);
      k_10 = ATgetArgument(t, 1);
      {
        ATerm h_58 = t;
        int i_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_10;
            if((m_10 != t))
              {
                _fail(t);
              }
            t = k_10;
            ;
            LocalPopChoice(i_58);
          }
        else
          {
            t = h_58;
            t = (ATerm) ATmakeAppl(sym__2, m_10, p_10);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, m_10, p_10);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm i_138 (ATerm), ATerm t)
{
  ATerm c_11 (ATerm t)
  {
    ATerm j_58 = t;
    int k_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_138(t);
        ;
        LocalPopChoice(k_58);
      }
    else
      {
        t = j_58;
        {
          ATerm h_11 = NULL,i_11 = NULL;
          ATerm l_37 (ATerm t)
          {
            ATerm l_12 = NULL;
            l_12 = t;
            t = (ATerm) ATmakeAppl(sym__2, l_12, not_null(i_11));
            t = c_11(t);
            return(t);
          }
          if(match_cons(t, sym__2))
            {
              if(((h_11 != NULL) && (h_11 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                h_11 = ATgetArgument(t, 0);
              if(((i_11 != NULL) && (i_11 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                i_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = not_null(h_11);
          t = SRTS_all(l_37, t);
        }
      }
    return(t);
  }
  t = c_11(t);
  return(t);
}
ATerm rename_4_0 (ATerm x_158 (ATerm (ATerm), ATerm), ATerm y_158 (ATerm), ATerm z_158 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm a_159 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm d_11 = NULL;
  d_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_11, (ATerm) ATempty);
  {
    ATerm e_11 (ATerm t)
    {
      ATerm n_37 (ATerm t)
      {
        ATerm l_58 = t;
        int m_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_12 = NULL,o_12 = NULL;
            ATerm o_37 (ATerm t)
            {
              ATerm q_12 = NULL;
              q_12 = t;
              t = (ATerm) ATmakeAppl(sym__2, q_12, not_null(o_12));
              t = lookup_0_0(t);
              return(t);
            }
            if(match_cons(t, sym__2))
              {
                if(((n_12 != NULL) && (n_12 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  n_12 = ATgetArgument(t, 0);
                if(((o_12 != NULL) && (o_12 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  o_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = not_null(n_12);
            t = x_158(o_37, t);
            ;
            LocalPopChoice(m_58);
          }
        else
          {
            t = l_58;
            t = RnBinding_2_0(y_158, a_159, t);
            t = DistBinding_2_0(e_11, z_158, t);
          }
        return(t);
      }
      t = env_alltd_1_0(n_37, t);
      return(t);
    }
    t = e_11(t);
  }
  return(t);
}
ATerm r_37 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_58 = ATgetArgument(t, 0);
      if(((ATgetType(n_58) != AT_LIST) || !(ATisEmpty(n_58))))
        _fail(t);
      {
        ATerm p_58 = ATgetArgument(t, 1);
        if(((ATgetType(p_58) != AT_LIST) || !(ATisEmpty(p_58))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_37 (ATerm t)
{
  ATerm j_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_58 = ATgetArgument(t, 0);
      if(((ATgetType(q_58) == AT_LIST) && !(ATisEmpty(q_58))))
        {
          j_11 = ATgetFirst((ATermList) q_58);
          l_11 = (ATerm) ATgetNext((ATermList) q_58);
        }
      else
        _fail(t);
      {
        ATerm r_58 = ATgetArgument(t, 1);
        if(((ATgetType(r_58) == AT_LIST) && !(ATisEmpty(r_58))))
          {
            k_11 = ATgetFirst((ATermList) r_58);
            m_11 = (ATerm) ATgetNext((ATermList) r_58);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_11, k_11), (ATerm) ATmakeAppl(sym__2, l_11, m_11));
  return(t);
}
ATerm w_37 (ATerm t)
{
  ATerm n_11 = NULL,o_11 = NULL;
  if(match_cons(t, sym__2))
    {
      n_11 = ATgetArgument(t, 0);
      o_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_11), n_11);
  return(t);
}
ATerm x_37 (ATerm t)
{
  ATerm q_11 = NULL,s_11 = NULL,t_11 = NULL;
  if(match_cons(t, sym__2))
    {
      q_11 = ATgetArgument(t, 0);
      t_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_11;
  {
    ATerm s_58 = t;
    int t_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm u_58 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(t_58);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, t_11);
      }
    else
      {
        t = s_58;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm v_58 = ATgetArgument(t, 0);
            s_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, t_11, s_11);
      }
  }
  return(t);
}
ATerm a_38 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_58 = ATgetArgument(t, 0);
      if(((ATgetType(w_58) != AT_LIST) || !(ATisEmpty(w_58))))
        _fail(t);
      {
        ATerm y_58 = ATgetArgument(t, 1);
        if(((ATgetType(y_58) != AT_LIST) || !(ATisEmpty(y_58))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm d_38 (ATerm t)
{
  ATerm x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_58 = ATgetArgument(t, 0);
      if(((ATgetType(z_58) == AT_LIST) && !(ATisEmpty(z_58))))
        {
          x_11 = ATgetFirst((ATermList) z_58);
          z_11 = (ATerm) ATgetNext((ATermList) z_58);
        }
      else
        _fail(t);
      {
        ATerm a_59 = ATgetArgument(t, 1);
        if(((ATgetType(a_59) == AT_LIST) && !(ATisEmpty(a_59))))
          {
            y_11 = ATgetFirst((ATermList) a_59);
            a_12 = (ATerm) ATgetNext((ATermList) a_59);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_11, y_11), (ATerm) ATmakeAppl(sym__2, z_11, a_12));
  return(t);
}
ATerm e_38 (ATerm t)
{
  ATerm b_12 = NULL,c_12 = NULL;
  if(match_cons(t, sym__2))
    {
      b_12 = ATgetArgument(t, 0);
      c_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_12), b_12);
  return(t);
}
ATerm f_38 (ATerm t)
{
  ATerm e_12 = NULL,g_12 = NULL,h_12 = NULL;
  if(match_cons(t, sym__2))
    {
      e_12 = ATgetArgument(t, 0);
      h_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_12;
  {
    ATerm b_59 = t;
    int c_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm d_59 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(c_59);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, h_12);
      }
    else
      {
        t = b_59;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm e_59 = ATgetArgument(t, 0);
            g_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, h_12, g_12);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm r_161 (ATerm), ATerm t)
{
  ATerm f_59 = t;
  int g_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(r_161, _id, t);
      ;
      LocalPopChoice(g_59);
    }
  else
    {
      t = f_59;
      {
        ATerm h_59 = t;
        int k_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_37 (ATerm t)
            {
              ATerm x_17 = NULL,z_17 = NULL;
              x_17 = t;
              t = r_161(t);
              z_17 = t;
              t = (ATerm) ATmakeAppl(sym__2, x_17, z_17);
              t = genzip_4_0(r_37, u_37, w_37, x_37, t);
              return(t);
            }
            t = SDefT_4_0(_id, _id, q_37, _id, t);
            ;
            LocalPopChoice(k_59);
          }
        else
          {
            t = h_59;
            {
              ATerm z_37 (ATerm t)
              {
                ATerm c_18 = NULL,d_19 = NULL;
                c_18 = t;
                t = r_161(t);
                d_19 = t;
                t = (ATerm) ATmakeAppl(sym__2, c_18, d_19);
                t = genzip_4_0(a_38, d_38, e_38, f_38, t);
                return(t);
              }
              t = RDefT_4_0(_id, _id, z_37, _id, t);
            }
          }
      }
    }
  return(t);
}
ATerm g_38 (ATerm t)
{
  ATerm l_59 = t;
  int m_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(m_59);
    }
  else
    {
      t = l_59;
      {
        ATerm v_12 = NULL;
        ATerm n_59 = t;
        int o_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SDefT_4))
              {
                ATerm p_59 = ATgetArgument(t, 0);
                ATerm q_59 = ATgetArgument(t, 1);
                v_12 = ATgetArgument(t, 2);
                {
                  ATerm r_59 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            LocalPopChoice(o_59);
            t = v_12;
            t = map_1_0(k_38, t);
          }
        else
          {
            t = n_59;
            if(match_cons(t, sym_RDefT_4))
              {
                ATerm s_59 = ATgetArgument(t, 0);
                ATerm u_59 = ATgetArgument(t, 1);
                v_12 = ATgetArgument(t, 2);
                {
                  ATerm v_59 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            t = v_12;
            t = map_1_0(r_38, t);
          }
      }
    }
  return(t);
}
ATerm k_38 (ATerm t)
{
  ATerm a_13 = NULL;
  ATerm w_59 = t;
  int x_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_13 = ATgetArgument(t, 0);
          {
            ATerm y_59 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_59);
      t = a_13;
    }
  else
    {
      t = w_59;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_13;
    }
  return(t);
}
ATerm r_38 (ATerm t)
{
  ATerm g_13 = NULL;
  ATerm z_59 = t;
  int a_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_13 = ATgetArgument(t, 0);
          {
            ATerm b_60 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_60);
      t = g_13;
    }
  else
    {
      t = z_59;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_13;
    }
  return(t);
}
ATerm s_38 (ATerm t)
{
  ATerm d_60 = t;
  int e_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind1_0_0(t);
      ;
      LocalPopChoice(e_60);
    }
  else
    {
      t = d_60;
      {
        ATerm k_13 = NULL,l_13 = NULL;
        ATerm f_60 = t;
        int g_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SDef_3))
              {
                ATerm h_60 = ATgetArgument(t, 0);
                l_13 = ATgetArgument(t, 1);
                {
                  ATerm i_60 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            LocalPopChoice(g_60);
            t = l_13;
            t = map_1_0(v_38, t);
          }
        else
          {
            t = f_60;
            {
              ATerm j_60 = t;
              int k_60 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      k_13 = ATgetArgument(t, 0);
                      {
                        ATerm m_60 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(k_60);
                  t = (ATerm) ATinsert(ATempty, k_13);
                }
              else
                {
                  t = j_60;
                  {
                    ATerm n_60 = t;
                    int o_60 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_SDefT_4))
                          {
                            ATerm p_60 = ATgetArgument(t, 0);
                            l_13 = ATgetArgument(t, 1);
                            {
                              ATerm q_60 = ATgetArgument(t, 2);
                            }
                            {
                              ATerm r_60 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(o_60);
                        t = l_13;
                        t = map_1_0(w_38, t);
                      }
                    else
                      {
                        t = n_60;
                        if(match_cons(t, sym_RDefT_4))
                          {
                            ATerm s_60 = ATgetArgument(t, 0);
                            l_13 = ATgetArgument(t, 1);
                            {
                              ATerm t_60 = ATgetArgument(t, 2);
                            }
                            {
                              ATerm v_60 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        t = l_13;
                        t = map_1_0(z_38, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm v_38 (ATerm t)
{
  ATerm r_13 = NULL;
  ATerm w_60 = t;
  int x_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_13 = ATgetArgument(t, 0);
          {
            ATerm y_60 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_60);
      t = r_13;
    }
  else
    {
      t = w_60;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_13;
    }
  return(t);
}
ATerm w_38 (ATerm t)
{
  ATerm y_13 = NULL;
  ATerm z_60 = t;
  int a_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_13 = ATgetArgument(t, 0);
          {
            ATerm b_61 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_61);
      t = y_13;
    }
  else
    {
      t = z_60;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_13;
    }
  return(t);
}
ATerm z_38 (ATerm t)
{
  ATerm e_14 = NULL;
  ATerm c_61 = t;
  int d_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_14 = ATgetArgument(t, 0);
          {
            ATerm e_61 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_61);
      t = e_14;
    }
  else
    {
      t = c_61;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_14;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, g_38, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, s_38, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm Expl_0_0 (ATerm t)
{
  ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL;
  j_14 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      k_14 = ATgetArgument(t, 0);
      i_14 = ATgetArgument(t, 1);
      {
        ATerm n_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL;
        t = j_14;
        t = new_0_0(t);
        n_14 = t;
        t = new_0_0(t);
        o_14 = t;
        t = new_0_0(t);
        p_14 = t;
        t = new_0_0(t);
        q_14 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, q_14), p_14), o_14), n_14), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, n_14), (ATerm) ATmakeAppl(sym_Var_1, p_14))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, k_14, (ATerm)ATmakeAppl(sym_Var_1, n_14), (ATerm) ATmakeAppl(sym_Var_1, o_14)), (ATerm) ATmakeAppl(sym_BAM_3, i_14, (ATerm)ATmakeAppl(sym_Var_1, p_14), (ATerm) ATmakeAppl(sym_Var_1, q_14)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_h_61, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, q_14)), (ATerm) ATmakeAppl(sym_Var_1, o_14))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          k_14 = ATgetArgument(t, 0);
          {
            ATerm s_14 = NULL,t_14 = NULL,u_14 = NULL,v_14 = NULL;
            t = j_14;
            t = new_0_0(t);
            s_14 = t;
            t = k_14;
            {
              ATerm a_39 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((t_14 != NULL) && (t_14 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      t_14 = ATgetArgument(t, 0);
                    if(((u_14 != NULL) && (u_14 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      u_14 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, s_14);
                return(t);
              }
              t = oncetd_1_0(a_39, t);
              v_14 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, s_14), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_h_61, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_14)), not_null(t_14))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, s_14)), (ATerm) ATmakeAppl(sym_Build_1, v_14))));
            }
          }
        }
      else
        {
          ATerm x_14 = NULL,y_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              k_14 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = j_14;
          t = new_0_0(t);
          x_14 = t;
          t = new_0_0(t);
          y_14 = t;
          t = k_14;
          {
            ATerm h_39 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((z_14 != NULL) && (z_14 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    z_14 = ATgetArgument(t, 0);
                  if(((a_15 != NULL) && (a_15 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    a_15 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, x_14);
              return(t);
            }
            t = oncetd_1_0(h_39, t);
            b_15 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, x_14), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, b_15), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, y_14), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, y_14)), (ATerm) ATmakeAppl(sym_PrimT_3, term_i_61, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, y_14))))), (ATerm)ATmakeAppl(sym_Var_1, x_14), (ATerm) ATmakeAppl(sym_Op_2, term_j_61, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_15)), not_null(z_14)))))));
          }
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm d_15 = NULL,e_15 = NULL;
  d_15 = t;
  if(match_cons(t, sym_Match_1))
    {
      e_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm k_61 = t;
    int l_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL;
        t = d_15;
        t = new_0_0(t);
        g_15 = t;
        t = e_15;
        {
          ATerm i_39 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((i_15 != NULL) && (i_15 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  i_15 = ATgetArgument(t, 0);
                if(((h_15 != NULL) && (h_15 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  h_15 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, g_15), not_null(i_15));
            return(t);
          }
          t = pat_td_1_0(i_39, t);
          j_15 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, g_15), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, j_15), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_m_61, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, g_15))), (ATerm) ATmakeAppl(sym_Match_1, not_null(h_15))))));
        }
        ;
        LocalPopChoice(l_61);
      }
    else
      {
        t = k_61;
        {
          ATerm n_61 = t;
          int o_61 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_15 = NULL,m_15 = NULL,n_15 = NULL;
              t = d_15;
              t = new_0_0(t);
              l_15 = t;
              t = e_15;
              {
                ATerm p_39 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((m_15 != NULL) && (m_15 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        m_15 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, l_15);
                  return(t);
                }
                t = pat_td_1_0(p_39, t);
                n_15 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_15), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, n_15), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, l_15)), not_null(m_15))));
              }
              ;
              LocalPopChoice(o_61);
            }
          else
            {
              t = n_61;
              {
                ATerm p_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL;
                t = d_15;
                t = new_0_0(t);
                p_15 = t;
                t = e_15;
                {
                  ATerm q_39 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((q_15 != NULL) && (q_15 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          q_15 = ATgetArgument(t, 0);
                        if(((r_15 != NULL) && (r_15 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          r_15 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, p_15);
                    return(t);
                  }
                  t = pat_td_1_0(q_39, t);
                  s_15 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, p_15), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, s_15), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, p_15)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(r_15)), not_null(q_15)))));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm As_2_0 (ATerm r_125 (ATerm), ATerm s_125 (ATerm), ATerm t)
{
  ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL,i_2 = NULL,j_2 = NULL;
  b_16 = t;
  if(match_cons(t, sym_As_2))
    {
      x_15 = ATgetArgument(t, 0);
      y_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_16);
  w_15 = t;
  t = x_15;
  t = r_125(t);
  z_15 = t;
  t = y_15;
  t = s_125(t);
  a_16 = t;
  j_2 = t;
  t = (ATerm) ATmakeAppl(sym_As_2, z_15, a_16);
  i_2 = t;
  t = SSLsetAnnotations(i_2, w_15);
  return(t);
}
ATerm CallT_3_0 (ATerm o_128 (ATerm), ATerm p_128 (ATerm), ATerm q_128 (ATerm), ATerm t)
{
  ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,k_2 = NULL,l_2 = NULL;
  l_16 = t;
  if(match_cons(t, sym_CallT_3))
    {
      f_16 = ATgetArgument(t, 0);
      g_16 = ATgetArgument(t, 1);
      h_16 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_16);
  e_16 = t;
  t = f_16;
  t = o_128(t);
  i_16 = t;
  t = g_16;
  t = p_128(t);
  j_16 = t;
  t = h_16;
  t = q_128(t);
  k_16 = t;
  l_2 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, i_16, j_16, k_16);
  k_2 = t;
  t = SSLsetAnnotations(k_2, e_16);
  return(t);
}
ATerm PrimT_3_0 (ATerm q_129 (ATerm), ATerm r_129 (ATerm), ATerm s_129 (ATerm), ATerm t)
{
  ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL,n_2 = NULL,o_2 = NULL;
  v_16 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      p_16 = ATgetArgument(t, 0);
      q_16 = ATgetArgument(t, 1);
      r_16 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_16);
  o_16 = t;
  t = p_16;
  t = q_129(t);
  s_16 = t;
  t = q_16;
  t = r_129(t);
  t_16 = t;
  t = r_16;
  t = s_129(t);
  u_16 = t;
  o_2 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, s_16, t_16, u_16);
  n_2 = t;
  t = SSLsetAnnotations(n_2, o_16);
  return(t);
}
ATerm Explode_2_0 (ATerm m_125 (ATerm), ATerm n_125 (ATerm), ATerm t)
{
  ATerm y_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL,q_2 = NULL,r_2 = NULL;
  d_17 = t;
  if(match_cons(t, sym_Explode_2))
    {
      z_16 = ATgetArgument(t, 0);
      a_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_17);
  y_16 = t;
  t = z_16;
  t = m_125(t);
  b_17 = t;
  t = a_17;
  t = n_125(t);
  c_17 = t;
  r_2 = t;
  t = (ATerm) ATmakeAppl(sym_Explode_2, b_17, c_17);
  q_2 = t;
  t = SSLsetAnnotations(q_2, y_16);
  return(t);
}
ATerm pat_td_1_0 (ATerm x_160 (ATerm), ATerm t)
{
  ATerm p_61 = t;
  int r_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_160(t);
      ;
      LocalPopChoice(r_61);
    }
  else
    {
      t = p_61;
      {
        ATerm s_61 = t;
        int t_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_39 (ATerm t)
            {
              ATerm s_39 (ATerm t)
              {
                t = pat_td_1_0(x_160, t);
                return(t);
              }
              t = fetch_1_0(s_39, t);
              return(t);
            }
            t = Op_2_0(_id, r_39, t);
            ;
            LocalPopChoice(t_61);
          }
        else
          {
            t = s_61;
            {
              ATerm u_61 = t;
              int v_61 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_39 (ATerm t)
                  {
                    t = pat_td_1_0(x_160, t);
                    return(t);
                  }
                  t = Explode_2_0(_id, t_39, t);
                  ;
                  LocalPopChoice(v_61);
                }
              else
                {
                  t = u_61;
                  {
                    ATerm w_61 = t;
                    int x_61 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm v_39 (ATerm t)
                        {
                          t = pat_td_1_0(x_160, t);
                          return(t);
                        }
                        t = Explode_2_0(v_39, _id, t);
                        ;
                        LocalPopChoice(x_61);
                      }
                    else
                      {
                        t = w_61;
                        {
                          ATerm y_61 = t;
                          int a_62 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm x_39 (ATerm t)
                              {
                                ATerm z_39 (ATerm t)
                                {
                                  t = pat_td_1_0(x_160, t);
                                  return(t);
                                }
                                t = fetch_1_0(z_39, t);
                                return(t);
                              }
                              t = PrimT_3_0(_id, _id, x_39, t);
                              ;
                              LocalPopChoice(a_62);
                            }
                          else
                            {
                              t = y_61;
                              {
                                ATerm b_62 = t;
                                int c_62 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm a_40 (ATerm t)
                                    {
                                      ATerm b_40 (ATerm t)
                                      {
                                        t = pat_td_1_0(x_160, t);
                                        return(t);
                                      }
                                      t = fetch_1_0(b_40, t);
                                      return(t);
                                    }
                                    t = CallT_3_0(_id, _id, a_40, t);
                                    ;
                                    LocalPopChoice(c_62);
                                  }
                                else
                                  {
                                    t = b_62;
                                    {
                                      ATerm c_40 (ATerm t)
                                      {
                                        t = pat_td_1_0(x_160, t);
                                        return(t);
                                      }
                                      t = As_2_0(_id, c_40, t);
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
ATerm Bapp_0_0 (ATerm t)
{
  ATerm h_17 = NULL,i_17 = NULL;
  h_17 = t;
  if(match_cons(t, sym_Build_1))
    {
      i_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm d_62 = t;
    int e_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL;
        t = h_17;
        t = new_0_0(t);
        k_17 = t;
        t = i_17;
        {
          ATerm d_40 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((l_17 != NULL) && (l_17 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  l_17 = ATgetArgument(t, 0);
                if(((m_17 != NULL) && (m_17 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  m_17 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, k_17);
            return(t);
          }
          t = pat_td_1_0(d_40, t);
          n_17 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, k_17), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_f_62, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_17)), not_null(l_17))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, k_17)))), (ATerm) ATmakeAppl(sym_Build_1, n_17)));
        }
        ;
        LocalPopChoice(e_62);
      }
    else
      {
        t = d_62;
        {
          ATerm g_62 = t;
          int h_62 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL;
              t = h_17;
              t = new_0_0(t);
              p_17 = t;
              t = i_17;
              {
                ATerm f_40 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((q_17 != NULL) && (q_17 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        q_17 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, p_17);
                  return(t);
                }
                t = pat_td_1_0(f_40, t);
                r_17 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, p_17), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_17), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, p_17)))), (ATerm) ATmakeAppl(sym_Build_1, r_17)));
              }
              ;
              LocalPopChoice(h_62);
            }
          else
            {
              t = g_62;
              {
                ATerm t_17 = NULL,u_17 = NULL,v_17 = NULL,w_17 = NULL;
                t = h_17;
                t = new_0_0(t);
                t_17 = t;
                t = i_17;
                {
                  ATerm g_40 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((u_17 != NULL) && (u_17 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          u_17 = ATgetArgument(t, 0);
                        if(((v_17 != NULL) && (v_17 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          v_17 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, t_17);
                    return(t);
                  }
                  t = pat_td_1_0(g_40, t);
                  w_17 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, t_17), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(u_17), not_null(v_17), (ATerm) ATmakeAppl(sym_Var_1, t_17))), (ATerm) ATmakeAppl(sym_Build_1, w_17)));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm map1_1_0 (ATerm i_0 (ATerm), ATerm t)
{
  ATerm i_62 = t;
  int j_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(i_0, _id, t);
      {
        ATerm h_40 (ATerm t)
        {
          ATerm m_62 = t;
          int n_62 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(i_0, t);
              ;
              LocalPopChoice(n_62);
            }
          else
            {
              t = m_62;
            }
          return(t);
        }
        t = Cons_2_0(_id, h_40, t);
      }
      ;
      LocalPopChoice(j_62);
    }
  else
    {
      t = i_62;
      {
        ATerm i_40 (ATerm t)
        {
          t = map1_1_0(i_0, t);
          return(t);
        }
        t = Cons_2_0(_id, i_40, t);
      }
    }
  return(t);
}
ATerm j_40 (ATerm t)
{
  ATerm z_18 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      z_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, z_18, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_q_62), term_q_62));
  return(t);
}
ATerm l_40 (ATerm t)
{
  ATerm r_62 = t;
  int s_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_19 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, b_19, term_q_62);
      ;
      LocalPopChoice(s_62);
    }
  else
    {
      t = r_62;
    }
  return(t);
}
ATerm m_40 (ATerm t)
{
  ATerm m_19 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      m_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, m_19, term_q_62);
  return(t);
}
ATerm o_40 (ATerm t)
{
  ATerm t_62 = t;
  int u_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_19 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, o_19, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_q_62), term_q_62));
      ;
      LocalPopChoice(u_62);
    }
  else
    {
      t = t_62;
    }
  return(t);
}
ATerm p_40 (ATerm t)
{
  ATerm x_19 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      x_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, x_19, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_q_62), term_q_62));
  return(t);
}
ATerm q_40 (ATerm t)
{
  ATerm w_62 = t;
  int x_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_20 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, a_20, term_q_62);
      ;
      LocalPopChoice(x_62);
    }
  else
    {
      t = w_62;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL,h_18 = NULL,j_18 = NULL,k_18 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      j_18 = ATgetArgument(t, 0);
      k_18 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, j_18, k_18);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          j_18 = ATgetArgument(t, 0);
          t = j_18;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              e_18 = ATgetFirst((ATermList) t);
              f_18 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, e_18, (ATerm) ATmakeAppl(sym_LChoices_1, f_18));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_y_62;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              j_18 = ATgetArgument(t, 0);
              t = j_18;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  e_18 = ATgetFirst((ATermList) t);
                  f_18 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, e_18, (ATerm) ATmakeAppl(sym_Choices_1, f_18));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_y_62;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  j_18 = ATgetArgument(t, 0);
                  t = j_18;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      e_18 = ATgetFirst((ATermList) t);
                      f_18 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, e_18, (ATerm) ATmakeAppl(sym_Seqs_1, f_18));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_z_62;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      j_18 = ATgetArgument(t, 0);
                      k_18 = ATgetArgument(t, 1);
                      h_18 = ATgetArgument(t, 2);
                      g_18 = ATgetArgument(t, 3);
                      {
                        ATerm x_18 = NULL,y_18 = NULL;
                        t = k_18;
                        t = map1_1_0(j_40, t);
                        x_18 = t;
                        t = h_18;
                        t = map1_1_0(l_40, t);
                        y_18 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, j_18, x_18, y_18, g_18);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          j_18 = ATgetArgument(t, 0);
                          k_18 = ATgetArgument(t, 1);
                          h_18 = ATgetArgument(t, 2);
                          g_18 = ATgetArgument(t, 3);
                          {
                            ATerm a_63 = t;
                            int b_63 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm k_19 = NULL,l_19 = NULL;
                                t = h_18;
                                t = map1_1_0(m_40, t);
                                k_19 = t;
                                t = k_18;
                                t = map_1_0(o_40, t);
                                l_19 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, j_18, l_19, k_19, g_18);
                                ;
                                LocalPopChoice(b_63);
                              }
                            else
                              {
                                t = a_63;
                                {
                                  ATerm v_19 = NULL,w_19 = NULL;
                                  t = k_18;
                                  t = map1_1_0(p_40, t);
                                  v_19 = t;
                                  t = h_18;
                                  t = map_1_0(q_40, t);
                                  w_19 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, j_18, v_19, w_19, g_18);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              j_18 = ATgetArgument(t, 0);
                              k_18 = ATgetArgument(t, 1);
                              h_18 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, k_18, (ATerm) ATmakeAppl(sym_Op_2, term_j_61, (ATerm) ATinsert(ATinsert(ATempty, h_18), j_18)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  j_18 = ATgetArgument(t, 0);
                                  k_18 = ATgetArgument(t, 1);
                                  h_18 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, h_18)), j_18), (ATerm) ATmakeAppl(sym_Build_1, k_18)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      j_18 = ATgetArgument(t, 0);
                                      k_18 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, j_18, (ATerm) ATmakeAppl(sym_Match_1, k_18));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          j_18 = ATgetArgument(t, 0);
                                          k_18 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, j_18), k_18);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              j_18 = ATgetArgument(t, 0);
                                              k_18 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, k_18), j_18);
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
ATerm r_40 (ATerm t)
{
  ATerm c_63 = t;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = c_63;
    }
  return(t);
}
ATerm s_40 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_63;
  return(t);
}
ATerm u_40 (ATerm t)
{
  ATerm v_20 = NULL,w_20 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_20 = ATgetFirst((ATermList) t);
      w_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_20, w_20);
  return(t);
}
ATerm v_40 (ATerm t)
{
  ATerm x_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_63 = ATgetArgument(t, 0);
      if(match_cons(e_63, sym__2))
        {
          x_20 = ATgetArgument(e_63, 0);
          z_20 = ATgetArgument(e_63, 1);
        }
      else
        _fail(t);
      {
        ATerm f_63 = ATgetArgument(t, 1);
        if(match_cons(f_63, sym__2))
          {
            y_20 = ATgetArgument(f_63, 0);
            a_21 = ATgetArgument(f_63, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_20), x_20), (ATerm) ATinsert(CheckATermList(a_21), z_20));
  return(t);
}
ATerm w_40 (ATerm t)
{
  t = genzip_4_0(x_40, y_40, a_41, _id, t);
  return(t);
}
ATerm x_40 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_63;
  return(t);
}
ATerm y_40 (ATerm t)
{
  ATerm b_21 = NULL,c_21 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_21 = ATgetFirst((ATermList) t);
      c_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_21, c_21);
  return(t);
}
ATerm a_41 (ATerm t)
{
  ATerm d_21 = NULL,e_21 = NULL,f_21 = NULL,g_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_63 = ATgetArgument(t, 0);
      if(match_cons(h_63, sym__2))
        {
          d_21 = ATgetArgument(h_63, 0);
          f_21 = ATgetArgument(h_63, 1);
        }
      else
        _fail(t);
      {
        ATerm i_63 = ATgetArgument(t, 1);
        if(match_cons(i_63, sym__2))
          {
            e_21 = ATgetArgument(i_63, 0);
            g_21 = ATgetArgument(i_63, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_21), d_21), (ATerm) ATinsert(CheckATermList(g_21), f_21));
  return(t);
}
ATerm LiftCallArgs_0_0 (ATerm t)
{
  ATerm o_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      o_20 = ATgetArgument(t, 0);
      q_20 = ATgetArgument(t, 1);
      r_20 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = r_20;
  t = fetch_1_0(r_40, t);
  t = r_20;
  t = genzip_4_0(s_40, u_40, v_40, LiftPrimArg_0_0, t);
  t = _2_0(concat_0_0, w_40, t);
  if(match_cons(t, sym__2))
    {
      s_20 = ATgetArgument(t, 0);
      {
        ATerm j_63 = ATgetArgument(t, 1);
        if(match_cons(j_63, sym__2))
          {
            t_20 = ATgetArgument(j_63, 0);
            u_20 = ATgetArgument(j_63, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, s_20, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, t_20), (ATerm) ATmakeAppl(sym_CallT_3, o_20, q_20, u_20)));
  return(t);
}
ATerm t_21 (ATerm j_21, ATerm t)
{
  ATerm l_21 = NULL;
  t = j_21;
  {
    ATerm k_63 = t;
    if((PushChoice() == 0))
      {
        t = Var_1_0(_id, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_63;
      }
    t = new_0_0(t);
    l_21 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, l_21), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, j_21), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, l_21)))), (ATerm) ATmakeAppl(sym_Var_1, l_21)));
  }
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm m_21 = NULL,n_21 = NULL;
  m_21 = t;
  if(match_cons(t, sym_Var_1))
    {
      n_21 = ATgetArgument(t, 0);
      {
        ATerm l_63 = t;
        int m_63 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_21(m_21, t);
            ;
            LocalPopChoice(m_63);
          }
        else
          {
            t = l_63;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_z_62, (ATerm) ATmakeAppl(sym_Var_1, n_21)));
          }
      }
    }
  else
    {
      t = t_21(m_21, t);
    }
  return(t);
}
ATerm b_41 (ATerm t)
{
  ATerm n_63 = t;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_63;
    }
  return(t);
}
ATerm d_41 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_63;
  return(t);
}
ATerm f_41 (ATerm t)
{
  ATerm v_21 = NULL,w_21 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_21 = ATgetFirst((ATermList) t);
      w_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_21, w_21);
  return(t);
}
ATerm g_41 (ATerm t)
{
  ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_63 = ATgetArgument(t, 0);
      if(match_cons(o_63, sym__2))
        {
          x_21 = ATgetArgument(o_63, 0);
          z_21 = ATgetArgument(o_63, 1);
        }
      else
        _fail(t);
      {
        ATerm p_63 = ATgetArgument(t, 1);
        if(match_cons(p_63, sym__2))
          {
            y_21 = ATgetArgument(p_63, 0);
            a_22 = ATgetArgument(p_63, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_21), x_21), (ATerm) ATinsert(CheckATermList(a_22), z_21));
  return(t);
}
ATerm i_41 (ATerm t)
{
  t = genzip_4_0(j_41, k_41, l_41, _id, t);
  return(t);
}
ATerm j_41 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_63;
  return(t);
}
ATerm k_41 (ATerm t)
{
  ATerm b_22 = NULL,c_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_22 = ATgetFirst((ATermList) t);
      c_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_22, c_22);
  return(t);
}
ATerm l_41 (ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL,f_22 = NULL,h_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_63 = ATgetArgument(t, 0);
      if(match_cons(q_63, sym__2))
        {
          d_22 = ATgetArgument(q_63, 0);
          f_22 = ATgetArgument(q_63, 1);
        }
      else
        _fail(t);
      {
        ATerm t_63 = ATgetArgument(t, 1);
        if(match_cons(t_63, sym__2))
          {
            e_22 = ATgetArgument(t_63, 0);
            h_22 = ATgetArgument(t_63, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_22), d_22), (ATerm) ATinsert(CheckATermList(h_22), f_22));
  return(t);
}
ATerm m_41 (ATerm t)
{
  ATerm u_63 = t;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = u_63;
    }
  return(t);
}
ATerm n_41 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_63;
  return(t);
}
ATerm o_41 (ATerm t)
{
  ATerm w_23 = NULL,a_24 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_23 = ATgetFirst((ATermList) t);
      a_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_23, a_24);
  return(t);
}
ATerm q_41 (ATerm t)
{
  ATerm d_24 = NULL,e_24 = NULL,h_24 = NULL,i_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_63 = ATgetArgument(t, 0);
      if(match_cons(v_63, sym__2))
        {
          d_24 = ATgetArgument(v_63, 0);
          h_24 = ATgetArgument(v_63, 1);
        }
      else
        _fail(t);
      {
        ATerm w_63 = ATgetArgument(t, 1);
        if(match_cons(w_63, sym__2))
          {
            e_24 = ATgetArgument(w_63, 0);
            i_24 = ATgetArgument(w_63, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_24), d_24), (ATerm) ATinsert(CheckATermList(i_24), h_24));
  return(t);
}
ATerm r_41 (ATerm t)
{
  t = genzip_4_0(s_41, u_41, v_41, _id, t);
  return(t);
}
ATerm s_41 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_63;
  return(t);
}
ATerm u_41 (ATerm t)
{
  ATerm k_24 = NULL,l_24 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_24 = ATgetFirst((ATermList) t);
      l_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_24, l_24);
  return(t);
}
ATerm v_41 (ATerm t)
{
  ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_63 = ATgetArgument(t, 0);
      if(match_cons(x_63, sym__2))
        {
          m_24 = ATgetArgument(x_63, 0);
          o_24 = ATgetArgument(x_63, 1);
        }
      else
        _fail(t);
      {
        ATerm y_63 = ATgetArgument(t, 1);
        if(match_cons(y_63, sym__2))
          {
            n_24 = ATgetArgument(y_63, 0);
            p_24 = ATgetArgument(y_63, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_24), m_24), (ATerm) ATinsert(CheckATermList(p_24), o_24));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm f_25 = NULL,i_25 = NULL,j_25 = NULL,q_25 = NULL;
  i_25 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      j_25 = ATgetArgument(t, 0);
      q_25 = ATgetArgument(t, 1);
      f_25 = ATgetArgument(t, 2);
      {
        ATerm r_21 = NULL,s_21 = NULL,u_21 = NULL;
        t = f_25;
        t = fetch_1_0(b_41, t);
        t = f_25;
        t = genzip_4_0(d_41, f_41, g_41, LiftPrimArg_0_0, t);
        t = _2_0(concat_0_0, i_41, t);
        if(match_cons(t, sym__2))
          {
            r_21 = ATgetArgument(t, 0);
            {
              ATerm z_63 = ATgetArgument(t, 1);
              if(match_cons(z_63, sym__2))
                {
                  s_21 = ATgetArgument(z_63, 0);
                  u_21 = ATgetArgument(z_63, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, r_21, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, s_21), (ATerm) ATmakeAppl(sym_PrimT_3, j_25, q_25, u_21)));
      }
    }
  else
    {
      ATerm n_23 = NULL,o_23 = NULL,v_23 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          j_25 = ATgetArgument(t, 0);
          q_25 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = q_25;
      t = fetch_1_0(m_41, t);
      t = q_25;
      t = genzip_4_0(n_41, o_41, q_41, LiftPrimArg_0_0, t);
      t = _2_0(concat_0_0, r_41, t);
      if(match_cons(t, sym__2))
        {
          n_23 = ATgetArgument(t, 0);
          {
            ATerm a_64 = ATgetArgument(t, 1);
            if(match_cons(a_64, sym__2))
              {
                o_23 = ATgetArgument(a_64, 0);
                v_23 = ATgetArgument(a_64, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, n_23, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, o_23), (ATerm) ATmakeAppl(sym_PrimT_3, j_25, (ATerm)ATempty, v_23)));
    }
  return(t);
}
ATerm x_41 (ATerm t)
{
  ATerm b_64 = t;
  int c_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Con_3_0(_id, _id, _id, t);
      ;
      LocalPopChoice(c_64);
    }
  else
    {
      t = b_64;
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm d_64 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(x_41, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = d_64;
    }
  return(t);
}
ATerm Con_3_0 (ATerm a_126 (ATerm), ATerm b_126 (ATerm), ATerm c_126 (ATerm), ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL,b_26 = NULL,g_26 = NULL,h_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL,t_2 = NULL,u_2 = NULL;
  l_26 = t;
  if(match_cons(t, sym_Con_3))
    {
      v_25 = ATgetArgument(t, 0);
      b_26 = ATgetArgument(t, 1);
      g_26 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_26);
  u_25 = t;
  t = v_25;
  t = a_126(t);
  h_26 = t;
  t = b_26;
  t = b_126(t);
  j_26 = t;
  t = g_26;
  t = c_126(t);
  k_26 = t;
  u_2 = t;
  t = (ATerm) ATmakeAppl(sym_Con_3, h_26, j_26, k_26);
  t_2 = t;
  t = SSLsetAnnotations(t_2, u_25);
  return(t);
}
ATerm y_41 (ATerm t)
{
  ATerm g_64 = t;
  int h_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Con_3_0(_id, _id, _id, t);
      ;
      LocalPopChoice(h_64);
    }
  else
    {
      t = g_64;
      t = App_2_0(_id, _id, t);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm i_64 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(y_41, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_64;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm h_27 = NULL,i_27 = NULL,j_27 = NULL,p_27 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      h_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_27;
  if(match_cons(t, sym_StratRule_3))
    {
      i_27 = ATgetArgument(t, 0);
      j_27 = ATgetArgument(t, 1);
      p_27 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, j_27), (ATerm) ATmakeAppl(sym_Where_1, p_27)), i_27));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          i_27 = ATgetArgument(t, 0);
          j_27 = ATgetArgument(t, 1);
          p_27 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = i_27;
      t = pureterm_0_0(t);
      t = j_27;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, j_27)), (ATerm) ATmakeAppl(sym_Where_1, p_27)), (ATerm) ATmakeAppl(sym_Match_1, i_27)));
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm w_134 (ATerm), ATerm t)
{
  ATerm j_28 (ATerm t)
  {
    ATerm j_64 = t;
    int k_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_134(t);
        ;
        LocalPopChoice(k_64);
      }
    else
      {
        t = j_64;
        t = SRTS_one(j_28, t);
      }
    return(t);
  }
  t = j_28(t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm Rcon_0_0 (ATerm t)
{
  ATerm n_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL,d_29 = NULL,e_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL,s_29 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      ATerm l_64 = ATgetArgument(t, 0);
      if(match_cons(l_64, sym_Rule_3))
        {
          n_28 = ATgetArgument(l_64, 0);
          v_28 = ATgetArgument(l_64, 1);
          w_28 = ATgetArgument(l_64, 2);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = new_0_0(t);
  x_28 = t;
  t = n_28;
  {
    ATerm a_42 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm m_64 = ATgetArgument(t, 0);
          if(match_cons(m_64, sym_Var_1))
            {
              if(((e_29 != NULL) && (e_29 != ATgetArgument(m_64, 0))))
                _fail(ATgetArgument(m_64, 0));
              else
                e_29 = ATgetArgument(m_64, 0);
            }
          else
            _fail(t);
          if(((d_29 != NULL) && (d_29 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            d_29 = ATgetArgument(t, 1);
          {
            ATerm n_64 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_29));
      return(t);
    }
    t = oncetd_1_0(a_42, t);
    g_29 = t;
    t = v_28;
    {
      ATerm b_42 (ATerm t)
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm o_64 = ATgetArgument(t, 0);
            if(match_cons(o_64, sym_Var_1))
              {
                if(((e_29 != NULL) && (e_29 != ATgetArgument(o_64, 0))))
                  _fail(ATgetArgument(o_64, 0));
                else
                  e_29 = ATgetArgument(o_64, 0);
              }
            else
              _fail(t);
            if(((h_29 != NULL) && (h_29 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              h_29 = ATgetArgument(t, 1);
            {
              ATerm p_64 = ATgetArgument(t, 2);
              if(match_cons(p_64, sym_CallT_3))
                {
                  if(((i_29 != NULL) && (i_29 != ATgetArgument(p_64, 0))))
                    _fail(ATgetArgument(p_64, 0));
                  else
                    i_29 = ATgetArgument(p_64, 0);
                  {
                    ATerm q_64 = ATgetArgument(p_64, 1);
                    if(((ATgetType(q_64) != AT_LIST) || !(ATisEmpty(q_64))))
                      _fail(t);
                  }
                  {
                    ATerm t_64 = ATgetArgument(p_64, 2);
                    if(((ATgetType(t_64) != AT_LIST) || !(ATisEmpty(t_64))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, x_28);
        return(t);
      }
      t = oncetd_1_0(b_42, t);
      s_29 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, x_28), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, g_29, s_29, (ATerm) ATmakeAppl(sym_Seq_2, w_28, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(i_29), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(d_29), not_null(h_29), term_z_62))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(e_29)), (ATerm) ATmakeAppl(sym_Var_1, x_28))))));
    }
  }
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm u_64 = t;
  int v_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_64 = t;
      int x_64 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Rcon_0_0(t);
          t = desugarRule_0_0(t);
          ;
          LocalPopChoice(x_64);
        }
      else
        {
          t = w_64;
          {
            ATerm y_64 = t;
            int z_64 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Scope_2_0(_id, desugarRule_0_0, t);
                ;
                LocalPopChoice(z_64);
              }
            else
              {
                t = y_64;
                t = RtoS_0_0(t);
              }
          }
        }
      ;
      LocalPopChoice(v_64);
    }
  else
    {
      t = u_64;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm s_133 (ATerm), ATerm t)
{
  t = s_133(t);
  {
    ATerm e_42 (ATerm t)
    {
      t = topdown_1_0(s_133, t);
      return(t);
    }
    t = SRTS_all(e_42, t);
  }
  return(t);
}
ATerm g_42 (ATerm t)
{
  ATerm a_65 = t;
  int b_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      ;
      LocalPopChoice(b_65);
    }
  else
    {
      t = a_65;
    }
  t = repeat_1_0(h_42, t);
  return(t);
}
ATerm h_42 (ATerm t)
{
  ATerm d_65 = t;
  int e_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      ;
      LocalPopChoice(e_65);
    }
  else
    {
      t = d_65;
      {
        ATerm f_65 = t;
        int g_65 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftCallArgs_0_0(t);
            ;
            LocalPopChoice(g_65);
          }
        else
          {
            t = f_65;
            {
              ATerm h_65 = t;
              int i_65 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(i_65);
                }
              else
                {
                  t = h_65;
                  {
                    ATerm j_65 = t;
                    int k_65 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        ;
                        LocalPopChoice(k_65);
                      }
                    else
                      {
                        t = j_65;
                        {
                          ATerm m_65 = t;
                          int n_65 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm o_65 = t;
                              int p_65 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      b_25 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = b_25;
                                  {
                                    ATerm i_42 (ATerm t)
                                    {
                                      if(match_cons(t, sym_RootApp_1))
                                        {
                                          ATerm q_65 = ATgetArgument(t, 0);
                                          if(match_cons(q_65, sym_Match_1))
                                            {
                                              if(((c_25 != NULL) && (c_25 != ATgetArgument(q_65, 0))))
                                                _fail(ATgetArgument(q_65, 0));
                                              else
                                                c_25 = ATgetArgument(q_65, 0);
                                            }
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                      t = not_null(c_25);
                                      return(t);
                                    }
                                    t = pat_td_1_0(i_42, t);
                                    d_25 = t;
                                    t = (ATerm) ATmakeAppl(sym_Match_1, d_25);
                                  }
                                  ;
                                  LocalPopChoice(p_65);
                                }
                              else
                                {
                                  t = o_65;
                                  {
                                    ATerm r_65 = t;
                                    int s_65 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm y_29 = NULL,b_31 = NULL,q_31 = NULL;
                                        if(match_cons(t, sym_Match_1))
                                          {
                                            y_29 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = y_29;
                                        if(match_cons(t, sym_RootApp_1))
                                          {
                                            b_31 = ATgetArgument(t, 0);
                                            t = b_31;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_App_2))
                                              {
                                                b_31 = ATgetArgument(t, 0);
                                                q_31 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = (ATerm) ATmakeAppl(sym_BA_2, b_31, q_31);
                                          }
                                        ;
                                        LocalPopChoice(s_65);
                                      }
                                    else
                                      {
                                        t = r_65;
                                        t = Mapp2_0_0(t);
                                      }
                                  }
                                }
                              ;
                              LocalPopChoice(n_65);
                            }
                          else
                            {
                              t = m_65;
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
  t = topdown_1_0(g_42, t);
  return(t);
}
ATerm j_42 (ATerm t)
{
  ATerm k_35 = NULL;
  ATerm t_65 = t;
  int v_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_35 = ATgetArgument(t, 0);
          {
            ATerm w_65 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_65);
      t = k_35;
    }
  else
    {
      t = t_65;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_35;
    }
  return(t);
}
ATerm k_42 (ATerm t)
{
  ATerm n_35 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_35);
  return(t);
}
ATerm m_42 (ATerm t)
{
  ATerm x_65 = t;
  int y_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(y_65);
    }
  else
    {
      t = x_65;
      {
        ATerm p_35 = NULL,r_35 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            p_35 = ATgetArgument(t, 0);
            t = p_35;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm z_65 = t;
            int a_66 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm b_66 = ATgetArgument(t, 0);
                    ATerm c_66 = ATgetArgument(t, 1);
                    r_35 = ATgetArgument(t, 2);
                    {
                      ATerm d_66 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(a_66);
                t = r_35;
                t = map_1_0(p_42, t);
              }
            else
              {
                t = z_65;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm e_66 = ATgetArgument(t, 0);
                    ATerm f_66 = ATgetArgument(t, 1);
                    r_35 = ATgetArgument(t, 2);
                    {
                      ATerm g_66 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = r_35;
                t = map_1_0(t_42, t);
              }
          }
      }
    }
  return(t);
}
ATerm p_42 (ATerm t)
{
  ATerm x_35 = NULL;
  ATerm h_66 = t;
  int i_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_35 = ATgetArgument(t, 0);
          {
            ATerm j_66 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_66);
      t = x_35;
    }
  else
    {
      t = h_66;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_35;
    }
  return(t);
}
ATerm t_42 (ATerm t)
{
  ATerm d_36 = NULL;
  ATerm k_66 = t;
  int l_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_36 = ATgetArgument(t, 0);
          {
            ATerm m_66 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_66);
      t = d_36;
    }
  else
    {
      t = k_66;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_36 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_36;
    }
  return(t);
}
ATerm u_42 (ATerm t)
{
  ATerm o_36 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_36);
  return(t);
}
ATerm c_43 (ATerm t)
{
  ATerm n_66 = t;
  int o_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(o_66);
    }
  else
    {
      t = n_66;
      {
        ATerm s_36 = NULL,u_36 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            s_36 = ATgetArgument(t, 0);
            t = s_36;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm p_66 = t;
            int q_66 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm r_66 = ATgetArgument(t, 0);
                    ATerm s_66 = ATgetArgument(t, 1);
                    u_36 = ATgetArgument(t, 2);
                    {
                      ATerm t_66 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(q_66);
                t = u_36;
                t = map_1_0(g_43, t);
              }
            else
              {
                t = p_66;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm u_66 = ATgetArgument(t, 0);
                    ATerm v_66 = ATgetArgument(t, 1);
                    u_36 = ATgetArgument(t, 2);
                    {
                      ATerm w_66 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = u_36;
                t = map_1_0(h_43, t);
              }
          }
      }
    }
  return(t);
}
ATerm g_43 (ATerm t)
{
  ATerm d_37 = NULL;
  ATerm x_66 = t;
  int y_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_37 = ATgetArgument(t, 0);
          {
            ATerm z_66 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_66);
      t = d_37;
    }
  else
    {
      t = x_66;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_37;
    }
  return(t);
}
ATerm h_43 (ATerm t)
{
  ATerm p_37 = NULL;
  ATerm a_67 = t;
  int b_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_37 = ATgetArgument(t, 0);
          {
            ATerm c_67 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_67);
      t = p_37;
    }
  else
    {
      t = a_67;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_37;
    }
  return(t);
}
ATerm DeclareVariables_0_0 (ATerm t)
{
  ATerm o_34 = NULL,y_34 = NULL,z_34 = NULL,a_35 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      y_34 = ATgetArgument(t, 0);
      z_34 = ATgetArgument(t, 1);
      a_35 = ATgetArgument(t, 2);
      o_34 = ATgetArgument(t, 3);
      {
        ATerm f_35 = NULL,g_35 = NULL,h_35 = NULL;
        t = a_35;
        t = map_1_0(j_42, t);
        f_35 = t;
        t = o_34;
        t = free_vars_3_0(k_42, m_42, tboundin_3_0, t);
        g_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_35, f_35);
        t = diff_0_0(t);
        h_35 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, y_34, z_34, a_35, (ATerm) ATmakeAppl(sym_Scope_2, h_35, o_34));
      }
    }
  else
    {
      ATerm n_36 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          y_34 = ATgetArgument(t, 0);
          z_34 = ATgetArgument(t, 1);
          a_35 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = a_35;
      t = free_vars_3_0(u_42, c_43, tboundin_3_0, t);
      n_36 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, y_34, z_34, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, n_36, a_35));
    }
  return(t);
}
ATerm DynamicRules_1_0 (ATerm r_127 (ATerm), ATerm t)
{
  ATerm s_37 = NULL,t_37 = NULL,v_37 = NULL,y_37 = NULL,v_2 = NULL,w_2 = NULL;
  y_37 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      t_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_37);
  s_37 = t;
  t = t_37;
  t = r_127(t);
  v_37 = t;
  w_2 = t;
  t = (ATerm) ATmakeAppl(sym_DynamicRules_1, v_37);
  v_2 = t;
  t = SSLsetAnnotations(v_2, s_37);
  return(t);
}
ATerm RDefT_4_0 (ATerm i_127 (ATerm), ATerm j_127 (ATerm), ATerm k_127 (ATerm), ATerm l_127 (ATerm), ATerm t)
{
  ATerm b_38 = NULL,c_38 = NULL,h_38 = NULL,i_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL,o_38 = NULL,p_38 = NULL,q_38 = NULL,x_2 = NULL,a_3 = NULL;
  q_38 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      c_38 = ATgetArgument(t, 0);
      h_38 = ATgetArgument(t, 1);
      i_38 = ATgetArgument(t, 2);
      l_38 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_38);
  b_38 = t;
  t = c_38;
  t = i_127(t);
  m_38 = t;
  t = h_38;
  t = j_127(t);
  n_38 = t;
  t = i_38;
  t = k_127(t);
  o_38 = t;
  t = l_38;
  t = l_127(t);
  p_38 = t;
  a_3 = t;
  t = (ATerm) ATmakeAppl(sym_RDefT_4, m_38, n_38, o_38, p_38);
  x_2 = t;
  t = SSLsetAnnotations(x_2, b_38);
  return(t);
}
ATerm SDefT_4_0 (ATerm b_131 (ATerm), ATerm c_131 (ATerm), ATerm d_131 (ATerm), ATerm e_131 (ATerm), ATerm t)
{
  ATerm t_38 = NULL,u_38 = NULL,x_38 = NULL,y_38 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL,c_3 = NULL,e_3 = NULL;
  g_39 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      u_38 = ATgetArgument(t, 0);
      x_38 = ATgetArgument(t, 1);
      y_38 = ATgetArgument(t, 2);
      b_39 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_39);
  t_38 = t;
  t = u_38;
  t = b_131(t);
  c_39 = t;
  t = x_38;
  t = c_131(t);
  d_39 = t;
  t = y_38;
  t = d_131(t);
  e_39 = t;
  t = b_39;
  t = e_131(t);
  f_39 = t;
  e_3 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, c_39, d_39, e_39, f_39);
  c_3 = t;
  t = SSLsetAnnotations(c_3, t_38);
  return(t);
}
ATerm Scope_2_0 (ATerm u_128 (ATerm), ATerm v_128 (ATerm), ATerm t)
{
  ATerm j_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL,o_39 = NULL,f_3 = NULL,g_3 = NULL;
  o_39 = t;
  if(match_cons(t, sym_Scope_2))
    {
      k_39 = ATgetArgument(t, 0);
      l_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_39);
  j_39 = t;
  t = k_39;
  t = u_128(t);
  m_39 = t;
  t = l_39;
  t = v_128(t);
  n_39 = t;
  g_3 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, m_39, n_39);
  f_3 = t;
  t = SSLsetAnnotations(f_3, j_39);
  return(t);
}
ATerm tboundin_3_0 (ATerm s_161 (ATerm), ATerm t_161 (ATerm), ATerm u_161 (ATerm), ATerm t)
{
  ATerm d_67 = t;
  int e_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(u_161, s_161, t);
      ;
      LocalPopChoice(e_67);
    }
  else
    {
      t = d_67;
      {
        ATerm f_67 = t;
        int g_67 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(u_161, u_161, u_161, s_161, t);
            ;
            LocalPopChoice(g_67);
          }
        else
          {
            t = f_67;
            {
              ATerm h_67 = t;
              int i_67 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(u_161, u_161, u_161, s_161, t);
                  ;
                  LocalPopChoice(i_67);
                }
              else
                {
                  t = h_67;
                  t = DynamicRules_1_0(s_161, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm i_43 (ATerm t)
{
  ATerm u_39 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      u_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, u_39);
  return(t);
}
ATerm j_43 (ATerm t)
{
  ATerm j_67 = t;
  int k_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(k_67);
    }
  else
    {
      t = j_67;
      {
        ATerm w_39 = NULL,y_39 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            w_39 = ATgetArgument(t, 0);
            t = w_39;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm l_67 = t;
            int m_67 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm n_67 = ATgetArgument(t, 0);
                    ATerm o_67 = ATgetArgument(t, 1);
                    y_39 = ATgetArgument(t, 2);
                    {
                      ATerm p_67 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(m_67);
                t = y_39;
                t = map_1_0(k_43, t);
              }
            else
              {
                t = l_67;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm q_67 = ATgetArgument(t, 0);
                    ATerm r_67 = ATgetArgument(t, 1);
                    y_39 = ATgetArgument(t, 2);
                    {
                      ATerm s_67 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = y_39;
                t = map_1_0(l_43, t);
              }
          }
      }
    }
  return(t);
}
ATerm k_43 (ATerm t)
{
  ATerm e_40 = NULL;
  ATerm t_67 = t;
  int u_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_40 = ATgetArgument(t, 0);
          {
            ATerm v_67 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_67);
      t = e_40;
    }
  else
    {
      t = t_67;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_40;
    }
  return(t);
}
ATerm l_43 (ATerm t)
{
  ATerm k_40 = NULL;
  ATerm w_67 = t;
  int x_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_40 = ATgetArgument(t, 0);
          {
            ATerm y_67 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_67);
      t = k_40;
    }
  else
    {
      t = w_67;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_40;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(i_43, j_43, tboundin_3_0, t);
  return(t);
}
ATerm m_43 (ATerm t)
{
  ATerm c_41 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_41);
  return(t);
}
ATerm p_43 (ATerm t)
{
  ATerm z_67 = t;
  int a_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(a_68);
    }
  else
    {
      t = z_67;
      {
        ATerm e_41 = NULL,h_41 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            e_41 = ATgetArgument(t, 0);
            t = e_41;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm b_68 = t;
            int c_68 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm d_68 = ATgetArgument(t, 0);
                    ATerm e_68 = ATgetArgument(t, 1);
                    h_41 = ATgetArgument(t, 2);
                    {
                      ATerm f_68 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(c_68);
                t = h_41;
                t = map_1_0(q_43, t);
              }
            else
              {
                t = b_68;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm g_68 = ATgetArgument(t, 0);
                    ATerm h_68 = ATgetArgument(t, 1);
                    h_41 = ATgetArgument(t, 2);
                    {
                      ATerm i_68 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = h_41;
                t = map_1_0(r_43, t);
              }
          }
      }
    }
  return(t);
}
ATerm q_43 (ATerm t)
{
  ATerm p_41 = NULL;
  ATerm j_68 = t;
  int k_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_41 = ATgetArgument(t, 0);
          {
            ATerm m_68 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_68);
      t = p_41;
    }
  else
    {
      t = j_68;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_41;
    }
  return(t);
}
ATerm r_43 (ATerm t)
{
  ATerm w_41 = NULL;
  ATerm n_68 = t;
  int o_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_41 = ATgetArgument(t, 0);
          {
            ATerm p_68 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_68);
      t = w_41;
    }
  else
    {
      t = n_68;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_41;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm t_40 = NULL,z_40 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      z_40 = ATgetArgument(t, 0);
      t = z_40;
      if(match_cons(t, sym_Rule_3))
        {
          t_40 = ATgetArgument(t, 0);
          {
            ATerm q_68 = ATgetArgument(t, 1);
          }
          {
            ATerm r_68 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = t_40;
      t = free_vars_3_0(m_43, p_43, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          z_40 = ATgetArgument(t, 0);
          {
            ATerm s_68 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = z_40;
    }
  return(t);
}
ATerm union_1_0 (ATerm o_143 (ATerm), ATerm t)
{
  ATerm c_42 = NULL,d_42 = NULL;
  if(match_cons(t, sym__2))
    {
      c_42 = ATgetArgument(t, 0);
      d_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_42;
  {
    ATerm f_42 (ATerm t)
    {
      ATerm t_68 = t;
      int u_68 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = d_42;
          ;
          LocalPopChoice(u_68);
        }
      else
        {
          t = t_68;
          {
            ATerm v_68 = t;
            int w_68 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_25 = NULL,g_25 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    e_25 = ATgetFirst((ATermList) t);
                    g_25 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = d_42;
                {
                  ATerm t_43 (ATerm t)
                  {
                    ATerm h_25 = NULL;
                    h_25 = t;
                    t = (ATerm) ATmakeAppl(sym__2, e_25, h_25);
                    t = o_143(t);
                    return(t);
                  }
                  t = fetch_1_0(t_43, t);
                  t = g_25;
                  t = f_42(t);
                }
                ;
                LocalPopChoice(w_68);
              }
            else
              {
                t = v_68;
                t = Cons_2_0(_id, f_42, t);
              }
          }
        }
      return(t);
    }
    t = f_42(t);
  }
  return(t);
}
ATerm diff_1_0 (ATerm j_143 (ATerm), ATerm t)
{
  ATerm l_42 = NULL,n_42 = NULL;
  if(match_cons(t, sym__2))
    {
      l_42 = ATgetArgument(t, 0);
      n_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_42;
  {
    ATerm o_42 (ATerm t)
    {
      ATerm x_68 = t;
      int y_68 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(y_68);
        }
      else
        {
          t = x_68;
          {
            ATerm z_68 = t;
            int a_69 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_25 = NULL,n_25 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    m_25 = ATgetFirst((ATermList) t);
                    n_25 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = n_42;
                {
                  ATerm u_43 (ATerm t)
                  {
                    ATerm o_25 = NULL;
                    o_25 = t;
                    t = (ATerm) ATmakeAppl(sym__2, m_25, o_25);
                    t = j_143(t);
                    return(t);
                  }
                  t = fetch_1_0(u_43, t);
                  t = n_25;
                  t = o_42(t);
                }
                ;
                LocalPopChoice(a_69);
              }
            else
              {
                t = z_68;
                t = Cons_2_0(_id, o_42, t);
              }
          }
        }
      return(t);
    }
    t = o_42(t);
  }
  return(t);
}
ATerm z_43 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_69 = ATgetArgument(t, 0);
      if(((ATgetType(b_69) != AT_LIST) || !(ATisEmpty(b_69))))
        _fail(t);
      {
        ATerm c_69 = ATgetArgument(t, 1);
        if(((ATgetType(c_69) != AT_LIST) || !(ATisEmpty(c_69))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm a_44 (ATerm t)
{
  ATerm z_42 = NULL,a_43 = NULL,b_43 = NULL,d_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_69 = ATgetArgument(t, 0);
      if(((ATgetType(d_69) == AT_LIST) && !(ATisEmpty(d_69))))
        {
          z_42 = ATgetFirst((ATermList) d_69);
          b_43 = (ATerm) ATgetNext((ATermList) d_69);
        }
      else
        _fail(t);
      {
        ATerm e_69 = ATgetArgument(t, 1);
        if(((ATgetType(e_69) == AT_LIST) && !(ATisEmpty(e_69))))
          {
            a_43 = ATgetFirst((ATermList) e_69);
            d_43 = (ATerm) ATgetNext((ATermList) e_69);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_42, a_43), (ATerm) ATmakeAppl(sym__2, b_43, d_43));
  return(t);
}
ATerm b_44 (ATerm t)
{
  ATerm e_43 = NULL,f_43 = NULL;
  if(match_cons(t, sym__2))
    {
      e_43 = ATgetArgument(t, 0);
      f_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_43), e_43);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm q_42 = NULL,r_42 = NULL,s_42 = NULL,v_42 = NULL,w_42 = NULL,x_42 = NULL,y_42 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm f_69 = ATgetFirst((ATermList) t);
      if(match_cons(f_69, sym__2))
        {
          q_42 = ATgetArgument(f_69, 0);
          r_42 = ATgetArgument(f_69, 1);
        }
      else
        _fail(t);
      s_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(r_42);
  if(match_cons(t, sym__2))
    {
      v_42 = ATgetArgument(t, 0);
      w_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(q_42);
  if(match_cons(t, sym__2))
    {
      if((v_42 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      x_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_42, w_42);
  t = genzip_4_0(z_43, a_44, b_44, _id, t);
  y_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_42, s_42);
  {
    ATerm g_69 = t;
    int h_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_69 = ATgetArgument(t, 0);
            ATerm j_69 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_42;
        {
          ATerm f_44 (ATerm t)
          {
            t = s_42;
            return(t);
          }
          t = at_end_1_0(f_44, t);
        }
        ;
        LocalPopChoice(h_69);
      }
    else
      {
        t = g_69;
        {
          ATerm z_25 = NULL,h_3 = NULL,i_3 = NULL;
          i_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_42, s_42);
          h_3 = t;
          t = SSL_explode_term(h_3);
          if(match_cons(t, sym__2))
            {
              ATerm k_69 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) k_69) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              z_25 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_25;
          t = concat_0_0(t);
        }
      }
  }
  return(t);
}
ATerm h_44 (ATerm t)
{
  ATerm s_43 = NULL;
  s_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, s_43);
  return(t);
}
ATerm i_44 (ATerm t)
{
  t = _2_0(_id, l_44, t);
  return(t);
}
ATerm j_44 (ATerm t)
{
  ATerm l_69 = t;
  int m_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(_id, m_44, t);
      ;
      LocalPopChoice(m_69);
    }
  else
    {
      t = l_69;
      {
        ATerm c_44 = NULL,d_44 = NULL,e_44 = NULL,g_44 = NULL;
        if(match_cons(t, sym__2))
          {
            c_44 = ATgetArgument(t, 0);
            d_44 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_44;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_44 = ATgetFirst((ATermList) t);
            g_44 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_44), e_44), g_44);
      }
    }
  return(t);
}
ATerm l_44 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm m_44 (ATerm t)
{
  ATerm n_69 = t;
  int o_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_43 = NULL,w_43 = NULL,x_43 = NULL,y_43 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_43 = ATgetFirst((ATermList) t);
          y_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_43;
      if(match_cons(t, sym__2))
        {
          w_43 = ATgetArgument(t, 0);
          x_43 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = x_43;
      if((w_43 != t))
        {
          _fail(t);
        }
      t = y_43;
      ;
      LocalPopChoice(o_69);
    }
  else
    {
      t = n_69;
      t = UfDecompose_0_0(t);
    }
  return(t);
}
ATerm o_44 (ATerm t)
{
  ATerm k_44 = NULL;
  if(match_cons(t, sym__2))
    {
      k_44 = ATgetArgument(t, 0);
      if((k_44 != ATgetArgument(t, 1)))
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
  ATerm p_69 = t;
  int q_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(h_44, i_44, j_44, t);
      ;
      LocalPopChoice(q_69);
    }
  else
    {
      t = p_69;
      t = diff_1_0(o_44, t);
    }
  return(t);
}
ATerm r_44 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_44 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_44 (ATerm t)
{
  t = union_1_0(v_44, t);
  return(t);
}
ATerm v_44 (ATerm t)
{
  ATerm q_26 = NULL;
  if(match_cons(t, sym__2))
    {
      q_26 = ATgetArgument(t, 0);
      if((q_26 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm w_44 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm e_45 (ATerm t)
{
  t = union_1_0(f_45, t);
  return(t);
}
ATerm f_45 (ATerm t)
{
  ATerm y_26 = NULL;
  if(match_cons(t, sym__2))
    {
      y_26 = ATgetArgument(t, 0);
      if((y_26 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm n_160 (ATerm), ATerm o_160 (ATerm), ATerm p_160 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm s_44 (ATerm t)
  {
    ATerm r_69 = t;
    int s_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_160(t);
        ;
        LocalPopChoice(s_69);
      }
    else
      {
        t = r_69;
        {
          ATerm t_69 = t;
          int u_69 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_44 = NULL,p_44 = NULL,i_26 = NULL,m_26 = NULL;
              n_44 = t;
              t = o_160(t);
              p_44 = t;
              t = n_44;
              {
                ATerm q_44 (ATerm t)
                {
                  ATerm c_26 = NULL;
                  t = s_44(t);
                  c_26 = t;
                  t = (ATerm) ATmakeAppl(sym__2, c_26, p_44);
                  t = diff_0_0(t);
                  return(t);
                }
                t = p_160(q_44, s_44, r_44, t);
                i_26 = t;
                t = SSL_explode_term(i_26);
                if(match_cons(t, sym__2))
                  {
                    ATerm v_69 = ATgetArgument(t, 0);
                    m_26 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = m_26;
                t = foldr_3_0(t_44, u_44, _id, t);
              }
              ;
              LocalPopChoice(u_69);
            }
          else
            {
              t = t_69;
              {
                ATerm r_26 = NULL,s_26 = NULL;
                r_26 = t;
                t = SSL_explode_term(r_26);
                if(match_cons(t, sym__2))
                  {
                    ATerm w_69 = ATgetArgument(t, 0);
                    s_26 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = s_26;
                t = foldr_3_0(w_44, e_45, s_44, t);
              }
            }
        }
      }
    return(t);
  }
  t = s_44(t);
  return(t);
}
ATerm h_45 (ATerm t)
{
  ATerm d_45 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_45);
  return(t);
}
ATerm i_45 (ATerm t)
{
  ATerm x_69 = t;
  int y_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(y_69);
    }
  else
    {
      t = x_69;
      {
        ATerm g_45 = NULL,j_45 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            g_45 = ATgetArgument(t, 0);
            t = g_45;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm z_69 = t;
            int a_70 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm b_70 = ATgetArgument(t, 0);
                    ATerm c_70 = ATgetArgument(t, 1);
                    j_45 = ATgetArgument(t, 2);
                    {
                      ATerm d_70 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(a_70);
                t = j_45;
                t = map_1_0(k_45, t);
              }
            else
              {
                t = z_69;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm e_70 = ATgetArgument(t, 0);
                    ATerm f_70 = ATgetArgument(t, 1);
                    j_45 = ATgetArgument(t, 2);
                    {
                      ATerm g_70 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = j_45;
                t = map_1_0(l_45, t);
              }
          }
      }
    }
  return(t);
}
ATerm k_45 (ATerm t)
{
  ATerm p_45 = NULL;
  ATerm h_70 = t;
  int i_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_45 = ATgetArgument(t, 0);
          {
            ATerm j_70 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_70);
      t = p_45;
    }
  else
    {
      t = h_70;
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
ATerm l_45 (ATerm t)
{
  ATerm w_45 = NULL;
  ATerm k_70 = t;
  int l_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_45 = ATgetArgument(t, 0);
          {
            ATerm m_70 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_70);
      t = w_45;
    }
  else
    {
      t = k_70;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_45 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_45;
    }
  return(t);
}
ATerm DefLRule_0_0 (ATerm t)
{
  ATerm x_44 = NULL,y_44 = NULL,z_44 = NULL,a_45 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      ATerm n_70 = ATgetArgument(t, 0);
      if(match_cons(n_70, sym_Rule_3))
        {
          x_44 = ATgetArgument(n_70, 0);
          y_44 = ATgetArgument(n_70, 1);
          z_44 = ATgetArgument(n_70, 2);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = x_44;
  t = free_vars_3_0(h_45, i_45, tboundin_3_0, t);
  a_45 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, a_45, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, x_44, y_44, z_44)));
  return(t);
}
ATerm bottomup_1_0 (ATerm t_133 (ATerm), ATerm t)
{
  ATerm m_45 (ATerm t)
  {
    t = bottomup_1_0(t_133, t);
    return(t);
  }
  t = SRTS_all(m_45, t);
  t = t_133(t);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm t_46 = NULL,u_46 = NULL,v_46 = NULL,w_46 = NULL;
  t_46 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      u_46 = ATgetArgument(t, 0);
      {
        ATerm c_27 = NULL;
        t = SSL_int_to_string(u_46);
        c_27 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_70), c_27), term_o_70);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm r_27 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          u_46 = ATgetArgument(t, 0);
          v_46 = ATgetArgument(t, 1);
          w_46 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(v_46);
      r_27 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_46), term_r_70), r_27), term_q_70), u_46);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm w_139 (ATerm), ATerm t)
{
  ATerm z_46 = NULL;
  ATerm n_45 (ATerm t)
  {
    t = w_139(t);
    if(((z_46 != NULL) && (z_46 != t)))
      _fail(t);
    else
      z_46 = t;
    return(t);
  }
  t = fetch_1_0(n_45, t);
  t = not_null(z_46);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm a_47 = NULL;
  a_47 = t;
  {
    ATerm s_70 = t;
    int t_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_75), term_y_74), term_u_74), term_q_74), term_m_74), term_i_74), term_d_74), term_z_73), term_v_73), term_r_73), term_n_73), term_j_73), term_f_73), term_b_73), term_x_72), term_t_72), term_o_72), term_k_72), term_g_72), term_c_72), term_y_71), term_u_71), term_q_71), term_m_71), term_i_71), term_e_71), term_a_71), term_w_70);
        {
          ATerm o_45 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm d_75 = ATgetArgument(t, 0);
                if((a_47 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm e_75 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(o_45, t);
        }
        ;
        LocalPopChoice(t_70);
      }
    else
      {
        t = s_70;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, a_47);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm d_47 = NULL;
  d_47 = t;
  {
    ATerm f_75 = t;
    int g_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_47 = NULL,d_28 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL;
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm h_75 = ATgetArgument(t, 0);
            j_47 = ATgetArgument(t, 1);
            {
              ATerm i_75 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = j_47;
        {
          ATerm j_75 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = j_75;
            }
          t = signal_from_number_0_0(t);
          t = signal_to_descr_0_0(t);
          d_28 = t;
          m_3 = t;
          t = term_v_54;
          k_3 = t;
          t = m_3;
          n_3 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, d_28), term_k_75);
          l_3 = t;
          t = SSL_printnl(k_3, l_3);
          t = (ATerm) ATmakeAppl(sym__2, term_v_54, (ATerm) ATinsert(ATinsert(ATempty, d_28), term_k_75));
        }
        ;
        LocalPopChoice(g_75);
      }
    else
      {
        t = f_75;
      }
    t = d_47;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm w_154 (ATerm), ATerm t)
{
  ATerm n_47 = NULL,o_47 = NULL;
  n_47 = t;
  t = fork_0_0(t);
  o_47 = t;
  {
    ATerm l_75 = t;
    int m_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = n_47;
        t = w_154(t);
        ;
        LocalPopChoice(m_75);
      }
    else
      {
        t = l_75;
        t = SSL_waitpid(o_47);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm n_75 = ATgetArgument(t, 0);
            if(((ATgetType(n_75) != AT_INT) || (ATgetInt((ATermInt) n_75) != 0)))
              _fail(t);
            {
              ATerm o_75 = ATgetArgument(t, 1);
            }
            {
              ATerm p_75 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = n_47;
      }
  }
  return(t);
}
ATerm call_sc_0_0 (ATerm t)
{
  ATerm q_47 = NULL,r_47 = NULL,j_4 = NULL,k_4 = NULL,m_4 = NULL,n_4 = NULL;
  q_47 = t;
  {
    ATerm q_75 = t;
    int r_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_47 = NULL,o_3 = NULL,q_3 = NULL,r_3 = NULL,t_3 = NULL,e_4 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL;
        t = term_s_75;
        r_3 = t;
        t = term_r_54;
        o_3 = t;
        t = r_3;
        t_3 = t;
        t = term_s_75;
        q_3 = t;
        t = SSL_table_get(o_3, q_3);
        {
          ATerm t_75 = t;
          int u_75 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_28 = NULL,v_3 = NULL,x_3 = NULL,z_3 = NULL,c_4 = NULL;
              t = eval_config_0_0(t);
              k_28 = t;
              z_3 = t;
              t = term_r_54;
              v_3 = t;
              t = z_3;
              c_4 = t;
              t = term_s_75;
              x_3 = t;
              t = SSL_table_put(v_3, x_3, k_28);
              t = k_28;
              ;
              LocalPopChoice(u_75);
            }
          else
            {
              t = t_75;
            }
          t = (ATerm) ATmakeAppl(sym__2, term_v_75, q_47);
          t = conc_strings_0_0(t);
          s_47 = t;
          h_4 = t;
          t = term_v_54;
          e_4 = t;
          t = h_4;
          i_4 = t;
          t = (ATerm) ATinsert(ATempty, s_47);
          g_4 = t;
          t = SSL_printnl(e_4, g_4);
          t = q_47;
        }
        ;
        LocalPopChoice(r_75);
      }
    else
      {
        t = q_75;
      }
    t = term_w_75;
    m_4 = t;
    t = term_r_54;
    j_4 = t;
    t = m_4;
    n_4 = t;
    t = term_w_75;
    k_4 = t;
    t = SSL_table_get(j_4, k_4);
    {
      ATerm x_75 = t;
      int y_75 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_28 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL,s_4 = NULL;
          t = eval_config_0_0(t);
          p_28 = t;
          q_4 = t;
          t = term_r_54;
          o_4 = t;
          t = q_4;
          s_4 = t;
          t = term_w_75;
          p_4 = t;
          t = SSL_table_put(o_4, p_4, p_28);
          t = p_28;
          ;
          LocalPopChoice(y_75);
        }
      else
        {
          t = x_75;
        }
      r_47 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_z_75, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(r_47), term_b_76), q_47), term_a_76));
      {
        ATerm q_45 (ATerm t)
        {
          ATerm g_5 = NULL,h_5 = NULL,t_4 = NULL,v_4 = NULL,c_5 = NULL,e_5 = NULL,i_5 = NULL,j_5 = NULL;
          c_5 = t;
          t = term_v_54;
          t_4 = t;
          t = c_5;
          e_5 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_z_75, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(r_47), term_b_76), q_47), term_a_76)));
          v_4 = t;
          t = SSL_printnl(t_4, v_4);
          i_5 = t;
          t = term_z_75;
          g_5 = t;
          t = i_5;
          j_5 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(r_47), term_b_76), q_47), term_a_76);
          h_5 = t;
          t = SSL_execvp(g_5, h_5);
          return(t);
        }
        t = fork_and_wait_1_0(q_45, t);
        t = (ATerm) ATmakeAppl(sym__2, q_47, term_c_76);
        t = conc_strings_0_0(t);
        t = ReadFromFile_0_0(t);
      }
    }
  }
  return(t);
}
ATerm eval_import_0_0 (ATerm t)
{
  ATerm t_47 = NULL;
  ATerm d_76 = t;
  int e_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Imports_1))
        {
          ATerm h_76 = ATgetArgument(t, 0);
          if(((ATgetType(h_76) != AT_LIST) || !(ATisEmpty(h_76))))
            _fail(t);
        }
      else
        _fail(t);
      LocalPopChoice(e_76);
    }
  else
    {
      t = d_76;
      {
        ATerm i_76 = t;
        int j_76 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Imports_1))
              {
                ATerm k_76 = ATgetArgument(t, 0);
                if(((ATgetType(k_76) == AT_LIST) && !(ATisEmpty(k_76))))
                  {
                    t_47 = ATgetFirst((ATermList) k_76);
                    {
                      ATerm l_76 = (ATerm) ATgetNext((ATermList) k_76);
                      if(((ATgetType(l_76) != AT_LIST) || !(ATisEmpty(l_76))))
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            LocalPopChoice(j_76);
            {
              ATerm u_47 = NULL;
              t = t_47;
              t = call_sc_0_0(t);
              if(match_cons(t, sym_Specification_1))
                {
                  ATerm m_76 = ATgetArgument(t, 0);
                  if(((ATgetType(m_76) == AT_LIST) && !(ATisEmpty(m_76))))
                    {
                      ATerm n_76 = ATgetFirst((ATermList) m_76);
                      if(match_cons(n_76, sym_Signature_1))
                        {
                          ATerm p_76 = ATgetArgument(n_76, 0);
                        }
                      else
                        _fail(t);
                      {
                        ATerm o_76 = (ATerm) ATgetNext((ATermList) m_76);
                        if(((ATgetType(o_76) == AT_LIST) && !(ATisEmpty(o_76))))
                          {
                            ATerm q_76 = ATgetFirst((ATermList) o_76);
                            if(match_cons(q_76, sym_Strategies_1))
                              {
                                u_47 = ATgetArgument(q_76, 0);
                              }
                            else
                              _fail(t);
                            {
                              ATerm r_76 = (ATerm) ATgetNext((ATermList) o_76);
                              if(((ATgetType(r_76) != AT_LIST) || !(ATisEmpty(r_76))))
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
              t = u_47;
              t = define_strategies_0_0(t);
            }
          }
        else
          {
            t = i_76;
            {
              ATerm q_5 = NULL,s_5 = NULL,x_5 = NULL,y_5 = NULL,z_5 = NULL,a_6 = NULL;
              if(match_cons(t, sym_Imports_1))
                {
                  ATerm s_76 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              x_5 = t;
              t = term_v_54;
              q_5 = t;
              t = x_5;
              y_5 = t;
              t = (ATerm) ATinsert(ATempty, term_t_76);
              s_5 = t;
              t = SSL_printnl(q_5, s_5);
              a_6 = t;
              t = term_i_55;
              z_5 = t;
              t = SSL_exit(z_5);
              t = (ATerm) ATinsert(ATempty, term_t_76);
            }
          }
      }
    }
  return(t);
}
ATerm r_45 (ATerm t)
{
  ATerm w_47 = NULL;
  w_47 = t;
  t = SSL_explode_string(w_47);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm v_47 = NULL;
  t = map_1_0(r_45, t);
  t = concat_0_0(t);
  v_47 = t;
  t = SSL_implode_string(v_47);
  return(t);
}
ATerm table_putlist_0_0 (ATerm t)
{
  ATerm x_47 = NULL,y_47 = NULL;
  if(match_cons(t, sym__2))
    {
      y_47 = ATgetArgument(t, 0);
      x_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_47;
  {
    ATerm s_45 (ATerm t)
    {
      ATerm z_47 = NULL,a_48 = NULL;
      if(match_cons(t, sym__2))
        {
          z_47 = ATgetArgument(t, 0);
          a_48 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_table_put(y_47, z_47, a_48);
      t = (ATerm) ATmakeAppl(sym__3, y_47, z_47, a_48);
      return(t);
    }
    t = map_1_0(s_45, t);
  }
  return(t);
}
ATerm eval_load_0_0 (ATerm t)
{
  ATerm c_48 = NULL,d_48 = NULL,e_48 = NULL;
  if(match_cons(t, sym_Load_1))
    {
      c_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm u_76 = t;
    int v_76 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_48 = NULL,b_6 = NULL,c_6 = NULL,d_6 = NULL,k_6 = NULL,y_6 = NULL,a_7 = NULL,d_7 = NULL,e_7 = NULL;
        t = term_s_75;
        d_6 = t;
        t = term_r_54;
        b_6 = t;
        t = d_6;
        k_6 = t;
        t = term_s_75;
        c_6 = t;
        t = SSL_table_get(b_6, c_6);
        {
          ATerm w_76 = t;
          int x_76 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_28 = NULL,m_6 = NULL,p_6 = NULL,q_6 = NULL,r_6 = NULL;
              t = eval_config_0_0(t);
              t_28 = t;
              q_6 = t;
              t = term_r_54;
              m_6 = t;
              t = q_6;
              r_6 = t;
              t = term_s_75;
              p_6 = t;
              t = SSL_table_put(m_6, p_6, t_28);
              t = t_28;
              ;
              LocalPopChoice(x_76);
            }
          else
            {
              t = w_76;
            }
          t = (ATerm) ATmakeAppl(sym__2, term_y_76, c_48);
          t = conc_strings_0_0(t);
          f_48 = t;
          d_7 = t;
          t = term_v_54;
          y_6 = t;
          t = d_7;
          e_7 = t;
          t = (ATerm) ATinsert(ATempty, f_48);
          a_7 = t;
          t = SSL_printnl(y_6, a_7);
          t = (ATerm) ATmakeAppl(sym_Load_1, c_48);
        }
        ;
        LocalPopChoice(v_76);
      }
    else
      {
        t = u_76;
      }
    t = c_48;
    {
      ATerm z_76 = t;
      int a_77 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_7 = NULL,m_7 = NULL;
          m_7 = t;
          t = (ATerm) ATinsert(ATempty, term_b_77);
          f_7 = t;
          t = SSL_access(c_48, f_7);
          ;
          LocalPopChoice(a_77);
        }
      else
        {
          t = z_76;
          {
            ATerm o_7 = NULL,r_7 = NULL,s_7 = NULL,t_7 = NULL,b_8 = NULL,c_8 = NULL;
            s_7 = t;
            t = term_v_54;
            o_7 = t;
            t = s_7;
            t_7 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_77), c_48), term_c_77);
            r_7 = t;
            t = SSL_printnl(o_7, r_7);
            c_8 = t;
            t = term_i_55;
            b_8 = t;
            t = SSL_exit(b_8);
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_77), c_48), term_c_77);
          }
        }
      t = c_48;
      t = ReadFromFile_0_0(t);
      if(match_cons(t, sym_StrategoDump_2))
        {
          d_48 = ATgetArgument(t, 0);
          e_48 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, term_e_77, d_48);
      t = table_putlist_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, term_e_55, e_48);
      t = table_putlist_0_0(t);
      {
        ATerm f_77 = t;
        int g_77 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_48 = NULL,f_29 = NULL,l_8 = NULL,m_8 = NULL,t_8 = NULL,u_8 = NULL,b_9 = NULL,c_9 = NULL,d_9 = NULL,i_9 = NULL;
            j_48 = t;
            t = term_s_75;
            t_8 = t;
            t = term_r_54;
            l_8 = t;
            t = t_8;
            u_8 = t;
            t = term_s_75;
            m_8 = t;
            t = SSL_table_get(l_8, m_8);
            {
              ATerm h_77 = t;
              int i_77 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_29 = NULL,v_8 = NULL,x_8 = NULL,z_8 = NULL,a_9 = NULL;
                  t = eval_config_0_0(t);
                  n_29 = t;
                  z_8 = t;
                  t = term_r_54;
                  v_8 = t;
                  t = z_8;
                  a_9 = t;
                  t = term_s_75;
                  x_8 = t;
                  t = SSL_table_put(v_8, x_8, n_29);
                  t = n_29;
                  ;
                  LocalPopChoice(i_77);
                }
              else
                {
                  t = h_77;
                }
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_77), c_48), term_j_77);
              t = concat_strings_0_0(t);
              f_29 = t;
              d_9 = t;
              t = term_v_54;
              b_9 = t;
              t = d_9;
              i_9 = t;
              t = (ATerm) ATinsert(ATempty, f_29);
              c_9 = t;
              t = SSL_printnl(b_9, c_9);
              t = j_48;
            }
            ;
            LocalPopChoice(g_77);
          }
        else
          {
            t = f_77;
          }
      }
    }
  }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm z_151 (ATerm), ATerm t)
{
  ATerm l_48 = NULL,m_48 = NULL,n_48 = NULL;
  if(match_cons(t, sym__2))
    {
      l_48 = ATgetArgument(t, 0);
      m_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_48, term_l_77);
  t = open_stream_0_0(t);
  n_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_48, m_48);
  t = z_151(t);
  t = fclose_0_0(t);
  t = m_48;
  return(t);
}
ATerm t_45 (ATerm t)
{
  ATerm u_29 = NULL,v_29 = NULL,e_10 = NULL,f_10 = NULL;
  u_29 = t;
  f_10 = t;
  t = term_e_77;
  e_10 = t;
  t = SSL_table_get(e_10, u_29);
  v_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_29, v_29);
  return(t);
}
ATerm u_45 (ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL,i_10 = NULL,l_10 = NULL;
  c_30 = t;
  l_10 = t;
  t = term_e_55;
  i_10 = t;
  t = SSL_table_get(i_10, c_30);
  d_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_30, d_30);
  return(t);
}
ATerm v_45 (ATerm t)
{
  ATerm v_48 = NULL,w_48 = NULL,m_49 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_77 = ATgetArgument(t, 0);
      if(match_cons(m_77, sym_Stream_1))
        {
          v_48 = ATgetArgument(m_77, 0);
        }
      else
        _fail(t);
      w_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(v_48, w_48);
  m_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_49);
  return(t);
}
ATerm eval_dump_0_0 (ATerm t)
{
  ATerm s_48 = NULL,t_48 = NULL,u_48 = NULL,j_9 = NULL,d_10 = NULL,g_10 = NULL,h_10 = NULL;
  if(match_cons(t, sym_Dump_1))
    {
      s_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_e_77;
  d_10 = t;
  t = term_e_77;
  j_9 = t;
  t = SSL_table_keys(j_9);
  t = map_1_0(t_45, t);
  t_48 = t;
  t = term_e_55;
  h_10 = t;
  t = term_e_55;
  g_10 = t;
  t = SSL_table_keys(g_10);
  t = map_1_0(u_45, t);
  u_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_48, (ATerm) ATmakeAppl(sym_StrategoDump_2, t_48, u_48));
  t = WriteToFile_1_0(v_45, t);
  {
    ATerm n_77 = t;
    int o_77 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_49 = NULL,k_30 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL,f_11 = NULL;
        q_49 = t;
        t = term_s_75;
        s_10 = t;
        t = term_r_54;
        q_10 = t;
        t = s_10;
        t_10 = t;
        t = term_s_75;
        r_10 = t;
        t = SSL_table_get(q_10, r_10);
        {
          ATerm p_77 = t;
          int q_77 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_30 = NULL,u_10 = NULL,v_10 = NULL,x_10 = NULL,y_10 = NULL;
              t = eval_config_0_0(t);
              p_30 = t;
              x_10 = t;
              t = term_r_54;
              u_10 = t;
              t = x_10;
              y_10 = t;
              t = term_s_75;
              v_10 = t;
              t = SSL_table_put(u_10, v_10, p_30);
              t = p_30;
              ;
              LocalPopChoice(q_77);
            }
          else
            {
              t = p_77;
            }
          t = (ATerm) ATmakeAppl(sym__2, term_r_77, s_48);
          t = conc_strings_0_0(t);
          k_30 = t;
          b_11 = t;
          t = term_v_54;
          z_10 = t;
          t = b_11;
          f_11 = t;
          t = (ATerm) ATinsert(ATempty, k_30);
          a_11 = t;
          t = SSL_printnl(z_10, a_11);
          t = q_49;
        }
        ;
        LocalPopChoice(o_77);
      }
    else
      {
        t = n_77;
      }
  }
  return(t);
}
ATerm EvalPrim_0_0 (ATerm t)
{
  ATerm a_122 = NULL,b_122 = NULL,c_122 = NULL,d_122 = NULL,e_122 = NULL,f_122 = NULL,g_122 = NULL,h_122 = NULL,i_122 = NULL,j_122 = NULL,k_122 = NULL;
  e_122 = t;
  if(match_cons(t, sym_App_2))
    {
      f_122 = ATgetArgument(t, 0);
      k_122 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_122;
  if(match_cons(t, sym_Prim_2))
    {
      g_122 = ATgetArgument(t, 0);
      h_122 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_122;
  if(match_string(t, "\"_cpl_loaded\""))
    {
      ATerm v_30 = NULL;
      t = h_122;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_122 = ATgetFirst((ATermList) t);
          j_122 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_122;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = i_122;
      t = EvalTerm_0_0(t);
      v_30 = t;
      t = _cpl_loaded(v_30);
    }
  else
    {
      if(match_string(t, "\"SSL_explode_string\""))
        {
          ATerm f_31 = NULL;
          t = h_122;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              i_122 = ATgetFirst((ATermList) t);
              j_122 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = j_122;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = i_122;
          t = EvalTerm_0_0(t);
          f_31 = t;
          t = SSL_explode_string(f_31);
        }
      else
        {
          if(match_string(t, "\"SSL_implode_string\""))
            {
              ATerm o_31 = NULL;
              t = h_122;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  i_122 = ATgetFirst((ATermList) t);
                  j_122 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = j_122;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = i_122;
              t = EvalTerm_0_0(t);
              o_31 = t;
              t = SSL_implode_string(o_31);
            }
          else
            {
              if(match_string(t, "\"SSL_is_string\""))
                {
                  ATerm a_32 = NULL;
                  t = h_122;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      i_122 = ATgetFirst((ATermList) t);
                      j_122 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = j_122;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = i_122;
                  t = EvalTerm_0_0(t);
                  a_32 = t;
                  t = SSL_is_string(a_32);
                }
              else
                {
                  if(match_string(t, "SSL_new"))
                    {
                      t = h_122;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = SSL_new();
                    }
                  else
                    {
                      if(match_string(t, "\"SSL_address\""))
                        {
                          ATerm m_32 = NULL;
                          t = h_122;
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              i_122 = ATgetFirst((ATermList) t);
                              j_122 = (ATerm) ATgetNext((ATermList) t);
                            }
                          else
                            _fail(t);
                          t = j_122;
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = i_122;
                          t = EvalTerm_0_0(t);
                          m_32 = t;
                          t = SSL_address(m_32);
                        }
                      else
                        {
                          if(match_string(t, "\"SSL_address_lt\""))
                            {
                              ATerm x_32 = NULL,y_32 = NULL;
                              t = h_122;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  i_122 = ATgetFirst((ATermList) t);
                                  j_122 = (ATerm) ATgetNext((ATermList) t);
                                }
                              else
                                _fail(t);
                              t = j_122;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  a_122 = ATgetFirst((ATermList) t);
                                  b_122 = (ATerm) ATgetNext((ATermList) t);
                                }
                              else
                                _fail(t);
                              t = b_122;
                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                _fail(t);
                              t = i_122;
                              t = EvalTerm_0_0(t);
                              x_32 = t;
                              t = a_122;
                              t = EvalTerm_0_0(t);
                              y_32 = t;
                              t = SSL_address_lt(x_32, y_32);
                            }
                          else
                            {
                              if(match_string(t, "\"SSL_explode_term\""))
                                {
                                  ATerm i_33 = NULL;
                                  t = h_122;
                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                    {
                                      i_122 = ATgetFirst((ATermList) t);
                                      j_122 = (ATerm) ATgetNext((ATermList) t);
                                    }
                                  else
                                    _fail(t);
                                  t = j_122;
                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                    _fail(t);
                                  t = i_122;
                                  t = EvalTerm_0_0(t);
                                  i_33 = t;
                                  t = SSL_explode_term(i_33);
                                }
                              else
                                {
                                  if(match_string(t, "\"SSL_mkterm\""))
                                    {
                                      ATerm t_33 = NULL,u_33 = NULL;
                                      t = h_122;
                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                        {
                                          i_122 = ATgetFirst((ATermList) t);
                                          j_122 = (ATerm) ATgetNext((ATermList) t);
                                        }
                                      else
                                        _fail(t);
                                      t = j_122;
                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                        {
                                          a_122 = ATgetFirst((ATermList) t);
                                          b_122 = (ATerm) ATgetNext((ATermList) t);
                                        }
                                      else
                                        _fail(t);
                                      t = b_122;
                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                        _fail(t);
                                      t = i_122;
                                      t = EvalTerm_0_0(t);
                                      t_33 = t;
                                      t = a_122;
                                      t = EvalTerm_0_0(t);
                                      u_33 = t;
                                      t = SSL_mkterm(t_33, u_33);
                                    }
                                  else
                                    {
                                      if(match_string(t, "\"ATremoveAnnotations\""))
                                        {
                                          ATerm e_34 = NULL;
                                          t = h_122;
                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                            {
                                              i_122 = ATgetFirst((ATermList) t);
                                              j_122 = (ATerm) ATgetNext((ATermList) t);
                                            }
                                          else
                                            _fail(t);
                                          t = j_122;
                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                            _fail(t);
                                          t = i_122;
                                          t = EvalTerm_0_0(t);
                                          e_34 = t;
                                          t = ATremoveAnnotations(e_34);
                                        }
                                      else
                                        {
                                          if(match_string(t, "\"SSLsetAnnotations\""))
                                            {
                                              ATerm q_34 = NULL,r_34 = NULL;
                                              t = h_122;
                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                {
                                                  i_122 = ATgetFirst((ATermList) t);
                                                  j_122 = (ATerm) ATgetNext((ATermList) t);
                                                }
                                              else
                                                _fail(t);
                                              t = j_122;
                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                {
                                                  a_122 = ATgetFirst((ATermList) t);
                                                  b_122 = (ATerm) ATgetNext((ATermList) t);
                                                }
                                              else
                                                _fail(t);
                                              t = b_122;
                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                _fail(t);
                                              t = i_122;
                                              t = EvalTerm_0_0(t);
                                              q_34 = t;
                                              t = a_122;
                                              t = EvalTerm_0_0(t);
                                              r_34 = t;
                                              t = SSLsetAnnotations(q_34, r_34);
                                            }
                                          else
                                            {
                                              if(match_string(t, "\"SSLgetAnnotations\""))
                                                {
                                                  ATerm p_36 = NULL;
                                                  t = h_122;
                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                    {
                                                      i_122 = ATgetFirst((ATermList) t);
                                                      j_122 = (ATerm) ATgetNext((ATermList) t);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = j_122;
                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                    _fail(t);
                                                  t = i_122;
                                                  t = EvalTerm_0_0(t);
                                                  p_36 = t;
                                                  t = SSLgetAnnotations(p_36);
                                                }
                                              else
                                                {
                                                  if(match_string(t, "\"SSL_string_to_int\""))
                                                    {
                                                      ATerm m_37 = NULL;
                                                      t = h_122;
                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                        {
                                                          i_122 = ATgetFirst((ATermList) t);
                                                          j_122 = (ATerm) ATgetNext((ATermList) t);
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = j_122;
                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                        _fail(t);
                                                      t = i_122;
                                                      t = EvalTerm_0_0(t);
                                                      m_37 = t;
                                                      t = SSL_string_to_int(m_37);
                                                    }
                                                  else
                                                    {
                                                      if(match_string(t, "\"SSL_int_to_string\""))
                                                        {
                                                          ATerm j_38 = NULL;
                                                          t = h_122;
                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                            {
                                                              i_122 = ATgetFirst((ATermList) t);
                                                              j_122 = (ATerm) ATgetNext((ATermList) t);
                                                            }
                                                          else
                                                            _fail(t);
                                                          t = j_122;
                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                            _fail(t);
                                                          t = i_122;
                                                          t = EvalTerm_0_0(t);
                                                          j_38 = t;
                                                          t = SSL_int_to_string(j_38);
                                                        }
                                                      else
                                                        {
                                                          if(match_string(t, "\"SSL_int\""))
                                                            {
                                                              ATerm n_40 = NULL;
                                                              t = h_122;
                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                {
                                                                  i_122 = ATgetFirst((ATermList) t);
                                                                  j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                }
                                                              else
                                                                _fail(t);
                                                              t = j_122;
                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                _fail(t);
                                                              t = i_122;
                                                              t = EvalTerm_0_0(t);
                                                              n_40 = t;
                                                              t = SSL_int(n_40);
                                                            }
                                                          else
                                                            {
                                                              if(match_string(t, "\"SSL_gtr\""))
                                                                {
                                                                  t = h_122;
                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                    {
                                                                      i_122 = ATgetFirst((ATermList) t);
                                                                      j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  t = j_122;
                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                    {
                                                                      a_122 = ATgetFirst((ATermList) t);
                                                                      b_122 = (ATerm) ATgetNext((ATermList) t);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  t = b_122;
                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                    _fail(t);
                                                                  {
                                                                    ATerm t_77 = t;
                                                                    int u_77 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm t_41 = NULL,z_41 = NULL;
                                                                        t = i_122;
                                                                        t = EvalTerm_0_0(t);
                                                                        t_41 = t;
                                                                        t = a_122;
                                                                        t = EvalTerm_0_0(t);
                                                                        z_41 = t;
                                                                        t = SSL_gtr(t_41, z_41);
                                                                        ;
                                                                        LocalPopChoice(u_77);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = t_77;
                                                                        {
                                                                          ATerm n_43 = NULL,o_43 = NULL;
                                                                          t = i_122;
                                                                          t = EvalTerm_0_0(t);
                                                                          n_43 = t;
                                                                          t = a_122;
                                                                          t = EvalTerm_0_0(t);
                                                                          o_43 = t;
                                                                          t = SSL_gtr(n_43, o_43);
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  if(match_string(t, "\"SSL_gti\""))
                                                                    {
                                                                      t = h_122;
                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                        {
                                                                          i_122 = ATgetFirst((ATermList) t);
                                                                          j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                        }
                                                                      else
                                                                        _fail(t);
                                                                      t = j_122;
                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                        {
                                                                          a_122 = ATgetFirst((ATermList) t);
                                                                          b_122 = (ATerm) ATgetNext((ATermList) t);
                                                                        }
                                                                      else
                                                                        _fail(t);
                                                                      t = b_122;
                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                        _fail(t);
                                                                      {
                                                                        ATerm v_77 = t;
                                                                        int w_77 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            ATerm b_45 = NULL,c_45 = NULL;
                                                                            t = i_122;
                                                                            t = EvalTerm_0_0(t);
                                                                            b_45 = t;
                                                                            t = a_122;
                                                                            t = EvalTerm_0_0(t);
                                                                            c_45 = t;
                                                                            t = SSL_gti(b_45, c_45);
                                                                            ;
                                                                            LocalPopChoice(w_77);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = v_77;
                                                                            {
                                                                              ATerm b_47 = NULL,c_47 = NULL;
                                                                              t = i_122;
                                                                              t = EvalTerm_0_0(t);
                                                                              b_47 = t;
                                                                              t = a_122;
                                                                              t = EvalTerm_0_0(t);
                                                                              c_47 = t;
                                                                              t = SSL_gti(b_47, c_47);
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_string(t, "\"SSL_mod\""))
                                                                        {
                                                                          ATerm f_49 = NULL,g_49 = NULL;
                                                                          t = h_122;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              i_122 = ATgetFirst((ATermList) t);
                                                                              j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          t = j_122;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              a_122 = ATgetFirst((ATermList) t);
                                                                              b_122 = (ATerm) ATgetNext((ATermList) t);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          t = b_122;
                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                            _fail(t);
                                                                          t = i_122;
                                                                          t = EvalTerm_0_0(t);
                                                                          f_49 = t;
                                                                          t = a_122;
                                                                          t = EvalTerm_0_0(t);
                                                                          g_49 = t;
                                                                          t = SSL_mod(f_49, g_49);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_string(t, "\"SSL_divr\""))
                                                                            {
                                                                              t = h_122;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  i_122 = ATgetFirst((ATermList) t);
                                                                                  j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              t = j_122;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  a_122 = ATgetFirst((ATermList) t);
                                                                                  b_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              t = b_122;
                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                _fail(t);
                                                                              {
                                                                                ATerm x_77 = t;
                                                                                int y_77 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm y_49 = NULL,z_49 = NULL;
                                                                                    t = i_122;
                                                                                    t = EvalTerm_0_0(t);
                                                                                    y_49 = t;
                                                                                    t = a_122;
                                                                                    t = EvalTerm_0_0(t);
                                                                                    z_49 = t;
                                                                                    t = SSL_divr(y_49, z_49);
                                                                                    ;
                                                                                    LocalPopChoice(y_77);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = x_77;
                                                                                    {
                                                                                      ATerm l_50 = NULL,m_50 = NULL;
                                                                                      t = i_122;
                                                                                      t = EvalTerm_0_0(t);
                                                                                      l_50 = t;
                                                                                      t = a_122;
                                                                                      t = EvalTerm_0_0(t);
                                                                                      m_50 = t;
                                                                                      t = SSL_divr(l_50, m_50);
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_string(t, "\"SSL_divi\""))
                                                                                {
                                                                                  t = h_122;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      i_122 = ATgetFirst((ATermList) t);
                                                                                      j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  t = j_122;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      a_122 = ATgetFirst((ATermList) t);
                                                                                      b_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  t = b_122;
                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                    _fail(t);
                                                                                  {
                                                                                    ATerm z_77 = t;
                                                                                    int a_78 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm y_50 = NULL,z_50 = NULL;
                                                                                        t = i_122;
                                                                                        t = EvalTerm_0_0(t);
                                                                                        y_50 = t;
                                                                                        t = a_122;
                                                                                        t = EvalTerm_0_0(t);
                                                                                        z_50 = t;
                                                                                        t = SSL_divi(y_50, z_50);
                                                                                        ;
                                                                                        LocalPopChoice(a_78);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = z_77;
                                                                                        {
                                                                                          ATerm l_51 = NULL,m_51 = NULL;
                                                                                          t = i_122;
                                                                                          t = EvalTerm_0_0(t);
                                                                                          l_51 = t;
                                                                                          t = a_122;
                                                                                          t = EvalTerm_0_0(t);
                                                                                          m_51 = t;
                                                                                          t = SSL_divi(l_51, m_51);
                                                                                        }
                                                                                      }
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_string(t, "\"SSL_mulr\""))
                                                                                    {
                                                                                      t = h_122;
                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                        {
                                                                                          i_122 = ATgetFirst((ATermList) t);
                                                                                          j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      t = j_122;
                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                        {
                                                                                          a_122 = ATgetFirst((ATermList) t);
                                                                                          b_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      t = b_122;
                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                        _fail(t);
                                                                                      {
                                                                                        ATerm b_78 = t;
                                                                                        int c_78 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm y_51 = NULL,z_51 = NULL;
                                                                                            t = i_122;
                                                                                            t = EvalTerm_0_0(t);
                                                                                            y_51 = t;
                                                                                            t = a_122;
                                                                                            t = EvalTerm_0_0(t);
                                                                                            z_51 = t;
                                                                                            t = SSL_mulr(y_51, z_51);
                                                                                            ;
                                                                                            LocalPopChoice(c_78);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = b_78;
                                                                                            {
                                                                                              ATerm l_52 = NULL,m_52 = NULL;
                                                                                              t = i_122;
                                                                                              t = EvalTerm_0_0(t);
                                                                                              l_52 = t;
                                                                                              t = a_122;
                                                                                              t = EvalTerm_0_0(t);
                                                                                              m_52 = t;
                                                                                              t = SSL_mulr(l_52, m_52);
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_string(t, "\"SSL_muli\""))
                                                                                        {
                                                                                          t = h_122;
                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                            {
                                                                                              i_122 = ATgetFirst((ATermList) t);
                                                                                              j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = j_122;
                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                            {
                                                                                              a_122 = ATgetFirst((ATermList) t);
                                                                                              b_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = b_122;
                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                            _fail(t);
                                                                                          {
                                                                                            ATerm d_78 = t;
                                                                                            int e_78 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm y_52 = NULL,z_52 = NULL;
                                                                                                t = i_122;
                                                                                                t = EvalTerm_0_0(t);
                                                                                                y_52 = t;
                                                                                                t = a_122;
                                                                                                t = EvalTerm_0_0(t);
                                                                                                z_52 = t;
                                                                                                t = SSL_muli(y_52, z_52);
                                                                                                ;
                                                                                                LocalPopChoice(e_78);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = d_78;
                                                                                                {
                                                                                                  ATerm l_53 = NULL,m_53 = NULL;
                                                                                                  t = i_122;
                                                                                                  t = EvalTerm_0_0(t);
                                                                                                  l_53 = t;
                                                                                                  t = a_122;
                                                                                                  t = EvalTerm_0_0(t);
                                                                                                  m_53 = t;
                                                                                                  t = SSL_muli(l_53, m_53);
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_string(t, "\"SSL_subtr\""))
                                                                                            {
                                                                                              t = h_122;
                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                {
                                                                                                  i_122 = ATgetFirst((ATermList) t);
                                                                                                  j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              t = j_122;
                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                {
                                                                                                  a_122 = ATgetFirst((ATermList) t);
                                                                                                  b_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              t = b_122;
                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                _fail(t);
                                                                                              {
                                                                                                ATerm f_78 = t;
                                                                                                int g_78 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm y_53 = NULL,z_53 = NULL;
                                                                                                    t = i_122;
                                                                                                    t = EvalTerm_0_0(t);
                                                                                                    y_53 = t;
                                                                                                    t = a_122;
                                                                                                    t = EvalTerm_0_0(t);
                                                                                                    z_53 = t;
                                                                                                    t = SSL_subtr(y_53, z_53);
                                                                                                    ;
                                                                                                    LocalPopChoice(g_78);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = f_78;
                                                                                                    {
                                                                                                      ATerm l_54 = NULL,m_54 = NULL;
                                                                                                      t = i_122;
                                                                                                      t = EvalTerm_0_0(t);
                                                                                                      l_54 = t;
                                                                                                      t = a_122;
                                                                                                      t = EvalTerm_0_0(t);
                                                                                                      m_54 = t;
                                                                                                      t = SSL_subtr(l_54, m_54);
                                                                                                    }
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_string(t, "\"SSL_subti\""))
                                                                                                {
                                                                                                  t = h_122;
                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                    {
                                                                                                      i_122 = ATgetFirst((ATermList) t);
                                                                                                      j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  t = j_122;
                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                    {
                                                                                                      a_122 = ATgetFirst((ATermList) t);
                                                                                                      b_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  t = b_122;
                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                    _fail(t);
                                                                                                  {
                                                                                                    ATerm h_78 = t;
                                                                                                    int j_78 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm y_54 = NULL,z_54 = NULL;
                                                                                                        t = i_122;
                                                                                                        t = EvalTerm_0_0(t);
                                                                                                        y_54 = t;
                                                                                                        t = a_122;
                                                                                                        t = EvalTerm_0_0(t);
                                                                                                        z_54 = t;
                                                                                                        t = SSL_subti(y_54, z_54);
                                                                                                        ;
                                                                                                        LocalPopChoice(j_78);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = h_78;
                                                                                                        {
                                                                                                          ATerm l_55 = NULL,m_55 = NULL;
                                                                                                          t = i_122;
                                                                                                          t = EvalTerm_0_0(t);
                                                                                                          l_55 = t;
                                                                                                          t = a_122;
                                                                                                          t = EvalTerm_0_0(t);
                                                                                                          m_55 = t;
                                                                                                          t = SSL_subti(l_55, m_55);
                                                                                                        }
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(t, "\"SSL_addr\""))
                                                                                                    {
                                                                                                      t = h_122;
                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                        {
                                                                                                          i_122 = ATgetFirst((ATermList) t);
                                                                                                          j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      t = j_122;
                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                        {
                                                                                                          a_122 = ATgetFirst((ATermList) t);
                                                                                                          b_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      t = b_122;
                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                        _fail(t);
                                                                                                      {
                                                                                                        ATerm k_78 = t;
                                                                                                        int m_78 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm y_55 = NULL,z_55 = NULL;
                                                                                                            t = i_122;
                                                                                                            t = EvalTerm_0_0(t);
                                                                                                            y_55 = t;
                                                                                                            t = a_122;
                                                                                                            t = EvalTerm_0_0(t);
                                                                                                            z_55 = t;
                                                                                                            t = SSL_addr(y_55, z_55);
                                                                                                            ;
                                                                                                            LocalPopChoice(m_78);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = k_78;
                                                                                                            {
                                                                                                              ATerm l_56 = NULL,m_56 = NULL;
                                                                                                              t = i_122;
                                                                                                              t = EvalTerm_0_0(t);
                                                                                                              l_56 = t;
                                                                                                              t = a_122;
                                                                                                              t = EvalTerm_0_0(t);
                                                                                                              m_56 = t;
                                                                                                              t = SSL_addr(l_56, m_56);
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(t, "\"SSL_addi\""))
                                                                                                        {
                                                                                                          t = h_122;
                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                            {
                                                                                                              i_122 = ATgetFirst((ATermList) t);
                                                                                                              j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          t = j_122;
                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                            {
                                                                                                              a_122 = ATgetFirst((ATermList) t);
                                                                                                              b_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          t = b_122;
                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                            _fail(t);
                                                                                                          {
                                                                                                            ATerm n_78 = t;
                                                                                                            int o_78 = stack_ptr;
                                                                                                            if((PushChoice() == 0))
                                                                                                              {
                                                                                                                ATerm y_56 = NULL,z_56 = NULL;
                                                                                                                t = i_122;
                                                                                                                t = EvalTerm_0_0(t);
                                                                                                                y_56 = t;
                                                                                                                t = a_122;
                                                                                                                t = EvalTerm_0_0(t);
                                                                                                                z_56 = t;
                                                                                                                t = SSL_addi(y_56, z_56);
                                                                                                                ;
                                                                                                                LocalPopChoice(o_78);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                t = n_78;
                                                                                                                {
                                                                                                                  ATerm l_57 = NULL,m_57 = NULL;
                                                                                                                  t = i_122;
                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                  l_57 = t;
                                                                                                                  t = a_122;
                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                  m_57 = t;
                                                                                                                  t = SSL_addi(l_57, m_57);
                                                                                                                }
                                                                                                              }
                                                                                                          }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(t, "\"SSL_is_int\""))
                                                                                                            {
                                                                                                              ATerm w_57 = NULL;
                                                                                                              t = h_122;
                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                {
                                                                                                                  i_122 = ATgetFirst((ATermList) t);
                                                                                                                  j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              t = j_122;
                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                _fail(t);
                                                                                                              t = i_122;
                                                                                                              t = EvalTerm_0_0(t);
                                                                                                              w_57 = t;
                                                                                                              t = SSL_is_int(w_57);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(t, "\"SSL_real\""))
                                                                                                                {
                                                                                                                  ATerm f_58 = NULL;
                                                                                                                  t = h_122;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                    {
                                                                                                                      i_122 = ATgetFirst((ATermList) t);
                                                                                                                      j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  t = j_122;
                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                    _fail(t);
                                                                                                                  t = i_122;
                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                  f_58 = t;
                                                                                                                  t = SSL_real(f_58);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(t, "\"SSL_string_to_real\""))
                                                                                                                    {
                                                                                                                      ATerm o_58 = NULL;
                                                                                                                      t = h_122;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                        {
                                                                                                                          i_122 = ATgetFirst((ATermList) t);
                                                                                                                          j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        _fail(t);
                                                                                                                      t = j_122;
                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                        _fail(t);
                                                                                                                      t = i_122;
                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                      o_58 = t;
                                                                                                                      t = SSL_string_to_real(o_58);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(t, "\"SSL_real_to_string\""))
                                                                                                                        {
                                                                                                                          ATerm x_58 = NULL;
                                                                                                                          t = h_122;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                            {
                                                                                                                              i_122 = ATgetFirst((ATermList) t);
                                                                                                                              j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            _fail(t);
                                                                                                                          t = j_122;
                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                            _fail(t);
                                                                                                                          t = i_122;
                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                          x_58 = t;
                                                                                                                          t = SSL_real_to_string(x_58);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(t, "\"SSL_atan2\""))
                                                                                                                            {
                                                                                                                              ATerm i_59 = NULL,j_59 = NULL;
                                                                                                                              t = h_122;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                {
                                                                                                                                  i_122 = ATgetFirst((ATermList) t);
                                                                                                                                  j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                _fail(t);
                                                                                                                              t = j_122;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                {
                                                                                                                                  a_122 = ATgetFirst((ATermList) t);
                                                                                                                                  b_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                _fail(t);
                                                                                                                              t = b_122;
                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                _fail(t);
                                                                                                                              t = i_122;
                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                              i_59 = t;
                                                                                                                              t = a_122;
                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                              j_59 = t;
                                                                                                                              t = SSL_atan2(i_59, j_59);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(t, "\"SSL_sqrt\""))
                                                                                                                                {
                                                                                                                                  ATerm t_59 = NULL;
                                                                                                                                  t = h_122;
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                    {
                                                                                                                                      i_122 = ATgetFirst((ATermList) t);
                                                                                                                                      j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    _fail(t);
                                                                                                                                  t = j_122;
                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                    _fail(t);
                                                                                                                                  t = i_122;
                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                  t_59 = t;
                                                                                                                                  t = SSL_sqrt(t_59);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(t, "\"SSL_sin\""))
                                                                                                                                    {
                                                                                                                                      ATerm c_60 = NULL;
                                                                                                                                      t = h_122;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                        {
                                                                                                                                          i_122 = ATgetFirst((ATermList) t);
                                                                                                                                          j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        _fail(t);
                                                                                                                                      t = j_122;
                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                        _fail(t);
                                                                                                                                      t = i_122;
                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                      c_60 = t;
                                                                                                                                      t = SSL_sin(c_60);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(t, "\"SSL_cos\""))
                                                                                                                                        {
                                                                                                                                          ATerm l_60 = NULL;
                                                                                                                                          t = h_122;
                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                            {
                                                                                                                                              i_122 = ATgetFirst((ATermList) t);
                                                                                                                                              j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            _fail(t);
                                                                                                                                          t = j_122;
                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                            _fail(t);
                                                                                                                                          t = i_122;
                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                          l_60 = t;
                                                                                                                                          t = SSL_cos(l_60);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(t, "\"SSL_is_real\""))
                                                                                                                                            {
                                                                                                                                              ATerm u_60 = NULL;
                                                                                                                                              t = h_122;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                {
                                                                                                                                                  i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                  j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                _fail(t);
                                                                                                                                              t = j_122;
                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                _fail(t);
                                                                                                                                              t = i_122;
                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                              u_60 = t;
                                                                                                                                              t = SSL_is_real(u_60);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_string(t, "\"SSL_open_file\""))
                                                                                                                                                {
                                                                                                                                                  ATerm f_61 = NULL,g_61 = NULL;
                                                                                                                                                  t = h_122;
                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                    {
                                                                                                                                                      i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                      j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    _fail(t);
                                                                                                                                                  t = j_122;
                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                    {
                                                                                                                                                      a_122 = ATgetFirst((ATermList) t);
                                                                                                                                                      b_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    _fail(t);
                                                                                                                                                  t = b_122;
                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                    _fail(t);
                                                                                                                                                  t = i_122;
                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                  f_61 = t;
                                                                                                                                                  t = a_122;
                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                  g_61 = t;
                                                                                                                                                  t = SSL_open_file(f_61, g_61);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  if(match_string(t, "\"SSL_close_file\""))
                                                                                                                                                    {
                                                                                                                                                      ATerm q_61 = NULL;
                                                                                                                                                      t = h_122;
                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                        {
                                                                                                                                                          i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                          j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        _fail(t);
                                                                                                                                                      t = j_122;
                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                        _fail(t);
                                                                                                                                                      t = i_122;
                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                      q_61 = t;
                                                                                                                                                      t = SSL_close_file(q_61);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      if(match_string(t, "\"SSL_concat_strings\""))
                                                                                                                                                        {
                                                                                                                                                          ATerm z_61 = NULL;
                                                                                                                                                          t = h_122;
                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                            {
                                                                                                                                                              i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                              j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            _fail(t);
                                                                                                                                                          t = j_122;
                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                            _fail(t);
                                                                                                                                                          t = i_122;
                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                          z_61 = t;
                                                                                                                                                          t = SSL_concat_strings(z_61);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          if(match_string(t, "\"SSL_strcat\""))
                                                                                                                                                            {
                                                                                                                                                              ATerm k_62 = NULL,l_62 = NULL;
                                                                                                                                                              t = h_122;
                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                {
                                                                                                                                                                  i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                  j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                _fail(t);
                                                                                                                                                              t = j_122;
                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                {
                                                                                                                                                                  a_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                  b_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                _fail(t);
                                                                                                                                                              t = b_122;
                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                _fail(t);
                                                                                                                                                              t = i_122;
                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                              k_62 = t;
                                                                                                                                                              t = a_122;
                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                              l_62 = t;
                                                                                                                                                              t = SSL_strcat(k_62, l_62);
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            {
                                                                                                                                                              if(match_string(t, "\"SSL_strlen\""))
                                                                                                                                                                {
                                                                                                                                                                  ATerm v_62 = NULL;
                                                                                                                                                                  t = h_122;
                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                    {
                                                                                                                                                                      i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                      j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                    }
                                                                                                                                                                  else
                                                                                                                                                                    _fail(t);
                                                                                                                                                                  t = j_122;
                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                    _fail(t);
                                                                                                                                                                  t = i_122;
                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                  v_62 = t;
                                                                                                                                                                  t = SSL_strlen(v_62);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                {
                                                                                                                                                                  if(match_string(t, "SSL_pipe"))
                                                                                                                                                                    {
                                                                                                                                                                      t = h_122;
                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                        _fail(t);
                                                                                                                                                                      t = SSL_pipe();
                                                                                                                                                                    }
                                                                                                                                                                  else
                                                                                                                                                                    {
                                                                                                                                                                      if(match_string(t, "\"SSL_fileno\""))
                                                                                                                                                                        {
                                                                                                                                                                          ATerm g_63 = NULL;
                                                                                                                                                                          t = h_122;
                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                            {
                                                                                                                                                                              i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                              j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                            }
                                                                                                                                                                          else
                                                                                                                                                                            _fail(t);
                                                                                                                                                                          t = j_122;
                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                            _fail(t);
                                                                                                                                                                          t = i_122;
                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                          g_63 = t;
                                                                                                                                                                          t = SSL_fileno(g_63);
                                                                                                                                                                        }
                                                                                                                                                                      else
                                                                                                                                                                        {
                                                                                                                                                                          if(match_string(t, "\"SSL_fdopen\""))
                                                                                                                                                                            {
                                                                                                                                                                              ATerm r_63 = NULL,s_63 = NULL;
                                                                                                                                                                              t = h_122;
                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                {
                                                                                                                                                                                  i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                  j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                }
                                                                                                                                                                              else
                                                                                                                                                                                _fail(t);
                                                                                                                                                                              t = j_122;
                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                {
                                                                                                                                                                                  a_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                  b_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                }
                                                                                                                                                                              else
                                                                                                                                                                                _fail(t);
                                                                                                                                                                              t = b_122;
                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                _fail(t);
                                                                                                                                                                              t = i_122;
                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                              r_63 = t;
                                                                                                                                                                              t = a_122;
                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                              s_63 = t;
                                                                                                                                                                              t = SSL_fdopen(r_63, s_63);
                                                                                                                                                                            }
                                                                                                                                                                          else
                                                                                                                                                                            {
                                                                                                                                                                              if(match_string(t, "\"SSL_access\""))
                                                                                                                                                                                {
                                                                                                                                                                                  ATerm e_64 = NULL,f_64 = NULL;
                                                                                                                                                                                  t = h_122;
                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                    {
                                                                                                                                                                                      i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                      j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                    }
                                                                                                                                                                                  else
                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                  t = j_122;
                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                    {
                                                                                                                                                                                      a_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                      b_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                    }
                                                                                                                                                                                  else
                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                  t = b_122;
                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                  t = i_122;
                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                  e_64 = t;
                                                                                                                                                                                  t = a_122;
                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                  f_64 = t;
                                                                                                                                                                                  t = SSL_access(e_64, f_64);
                                                                                                                                                                                }
                                                                                                                                                                              else
                                                                                                                                                                                {
                                                                                                                                                                                  if(match_string(t, "\"SSL_dup2\""))
                                                                                                                                                                                    {
                                                                                                                                                                                      ATerm r_64 = NULL,s_64 = NULL;
                                                                                                                                                                                      t = h_122;
                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                        {
                                                                                                                                                                                          i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                          j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                        }
                                                                                                                                                                                      else
                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                      t = j_122;
                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                        {
                                                                                                                                                                                          a_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                          b_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                        }
                                                                                                                                                                                      else
                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                      t = b_122;
                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                      t = i_122;
                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                      r_64 = t;
                                                                                                                                                                                      t = a_122;
                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                      s_64 = t;
                                                                                                                                                                                      t = SSL_dup2(r_64, s_64);
                                                                                                                                                                                    }
                                                                                                                                                                                  else
                                                                                                                                                                                    {
                                                                                                                                                                                      if(match_string(t, "\"SSL_dup\""))
                                                                                                                                                                                        {
                                                                                                                                                                                          ATerm c_65 = NULL;
                                                                                                                                                                                          t = h_122;
                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                            {
                                                                                                                                                                                              i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                              j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                            }
                                                                                                                                                                                          else
                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                          t = j_122;
                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                          t = i_122;
                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                          c_65 = t;
                                                                                                                                                                                          t = SSL_dup(c_65);
                                                                                                                                                                                        }
                                                                                                                                                                                      else
                                                                                                                                                                                        {
                                                                                                                                                                                          if(match_string(t, "\"SSL_close\""))
                                                                                                                                                                                            {
                                                                                                                                                                                              ATerm l_65 = NULL;
                                                                                                                                                                                              t = h_122;
                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                {
                                                                                                                                                                                                  i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                  j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                }
                                                                                                                                                                                              else
                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                              t = j_122;
                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                              t = i_122;
                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                              l_65 = t;
                                                                                                                                                                                              t = SSL_close(l_65);
                                                                                                                                                                                            }
                                                                                                                                                                                          else
                                                                                                                                                                                            {
                                                                                                                                                                                              if(match_string(t, "\"SSL_mkstemp\""))
                                                                                                                                                                                                {
                                                                                                                                                                                                  ATerm u_65 = NULL;
                                                                                                                                                                                                  t = h_122;
                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                    {
                                                                                                                                                                                                      i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                      j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                    }
                                                                                                                                                                                                  else
                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                  t = j_122;
                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                  t = i_122;
                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                  u_65 = t;
                                                                                                                                                                                                  t = SSL_mkstemp(u_65);
                                                                                                                                                                                                }
                                                                                                                                                                                              else
                                                                                                                                                                                                {
                                                                                                                                                                                                  if(match_string(t, "\"SSL_open\""))
                                                                                                                                                                                                    {
                                                                                                                                                                                                      ATerm l_68 = NULL;
                                                                                                                                                                                                      t = h_122;
                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                        {
                                                                                                                                                                                                          i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                          j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                        }
                                                                                                                                                                                                      else
                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                      t = j_122;
                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                      t = i_122;
                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                      l_68 = t;
                                                                                                                                                                                                      t = SSL_open(l_68);
                                                                                                                                                                                                    }
                                                                                                                                                                                                  else
                                                                                                                                                                                                    {
                                                                                                                                                                                                      if(match_string(t, "\"SSL_creat\""))
                                                                                                                                                                                                        {
                                                                                                                                                                                                          ATerm r_72 = NULL;
                                                                                                                                                                                                          t = h_122;
                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                            {
                                                                                                                                                                                                              i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                              j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                            }
                                                                                                                                                                                                          else
                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                          t = j_122;
                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                          t = i_122;
                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                          r_72 = t;
                                                                                                                                                                                                          t = SSL_creat(r_72);
                                                                                                                                                                                                        }
                                                                                                                                                                                                      else
                                                                                                                                                                                                        {
                                                                                                                                                                                                          if(match_string(t, "SSL_P_tmpdir"))
                                                                                                                                                                                                            {
                                                                                                                                                                                                              t = h_122;
                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                              t = SSL_P_tmpdir();
                                                                                                                                                                                                            }
                                                                                                                                                                                                          else
                                                                                                                                                                                                            {
                                                                                                                                                                                                              if(match_string(t, "SSL_STDERR_FILENO"))
                                                                                                                                                                                                                {
                                                                                                                                                                                                                  t = h_122;
                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                  t = SSL_STDERR_FILENO();
                                                                                                                                                                                                                }
                                                                                                                                                                                                              else
                                                                                                                                                                                                                {
                                                                                                                                                                                                                  if(match_string(t, "SSL_STDOUT_FILENO"))
                                                                                                                                                                                                                    {
                                                                                                                                                                                                                      t = h_122;
                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                      t = SSL_STDOUT_FILENO();
                                                                                                                                                                                                                    }
                                                                                                                                                                                                                  else
                                                                                                                                                                                                                    {
                                                                                                                                                                                                                      if(match_string(t, "SSL_STDIN_FILENO"))
                                                                                                                                                                                                                        {
                                                                                                                                                                                                                          t = h_122;
                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                          t = SSL_STDIN_FILENO();
                                                                                                                                                                                                                        }
                                                                                                                                                                                                                      else
                                                                                                                                                                                                                        {
                                                                                                                                                                                                                          if(match_string(t, "\"SSL_fgetc\""))
                                                                                                                                                                                                                            {
                                                                                                                                                                                                                              ATerm h_74 = NULL;
                                                                                                                                                                                                                              t = h_122;
                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                  i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                  j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                }
                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                              t = j_122;
                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                              t = i_122;
                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                              h_74 = t;
                                                                                                                                                                                                                              t = SSL_fgetc(h_74);
                                                                                                                                                                                                                            }
                                                                                                                                                                                                                          else
                                                                                                                                                                                                                            {
                                                                                                                                                                                                                              if(match_string(t, "\"SSL_fputc\""))
                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                  ATerm f_76 = NULL,g_76 = NULL;
                                                                                                                                                                                                                                  t = h_122;
                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                      i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                      j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                  t = j_122;
                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                      a_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                      b_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                  t = b_122;
                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                  t = i_122;
                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                  f_76 = t;
                                                                                                                                                                                                                                  t = a_122;
                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                  g_76 = t;
                                                                                                                                                                                                                                  t = SSL_fputc(f_76, g_76);
                                                                                                                                                                                                                                }
                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_puts\""))
                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                      ATerm s_77 = NULL;
                                                                                                                                                                                                                                      t = h_122;
                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                          i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                          j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                      t = j_122;
                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                      t = i_122;
                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                      s_77 = t;
                                                                                                                                                                                                                                      t = SSL_puts(s_77);
                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_fputs\""))
                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                          ATerm i_78 = NULL,l_78 = NULL;
                                                                                                                                                                                                                                          t = h_122;
                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                              i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                              j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                          t = j_122;
                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                              a_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                              b_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                          t = b_122;
                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                          t = i_122;
                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                          i_78 = t;
                                                                                                                                                                                                                                          t = a_122;
                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                          l_78 = t;
                                                                                                                                                                                                                                          t = SSL_fputs(i_78, l_78);
                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_fflush\""))
                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                              t = h_122;
                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                  i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                  j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                              t = j_122;
                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                                ATerm p_78 = t;
                                                                                                                                                                                                                                                int q_78 = stack_ptr;
                                                                                                                                                                                                                                                if((PushChoice() == 0))
                                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                                    ATerm e_79 = NULL;
                                                                                                                                                                                                                                                    t = i_122;
                                                                                                                                                                                                                                                    t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                    e_79 = t;
                                                                                                                                                                                                                                                    t = SSL_fflush(e_79);
                                                                                                                                                                                                                                                    ;
                                                                                                                                                                                                                                                    LocalPopChoice(q_78);
                                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                                else
                                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                                    t = p_78;
                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                      ATerm u_79 = NULL;
                                                                                                                                                                                                                                                      t = i_122;
                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                      u_79 = t;
                                                                                                                                                                                                                                                      t = SSL_fflush(u_79);
                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                              }
                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                              if(match_string(t, "\"SSL_fclose\""))
                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                  t = h_122;
                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                      i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                      j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                  t = j_122;
                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                                    ATerm r_78 = t;
                                                                                                                                                                                                                                                    int s_78 = stack_ptr;
                                                                                                                                                                                                                                                    if((PushChoice() == 0))
                                                                                                                                                                                                                                                      {
                                                                                                                                                                                                                                                        ATerm g_81 = NULL;
                                                                                                                                                                                                                                                        t = i_122;
                                                                                                                                                                                                                                                        t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                        g_81 = t;
                                                                                                                                                                                                                                                        t = SSL_fclose(g_81);
                                                                                                                                                                                                                                                        ;
                                                                                                                                                                                                                                                        LocalPopChoice(s_78);
                                                                                                                                                                                                                                                      }
                                                                                                                                                                                                                                                    else
                                                                                                                                                                                                                                                      {
                                                                                                                                                                                                                                                        t = r_78;
                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                          ATerm o_82 = NULL;
                                                                                                                                                                                                                                                          t = i_122;
                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                          o_82 = t;
                                                                                                                                                                                                                                                          t = SSL_fclose(o_82);
                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                      }
                                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_fopen\""))
                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                      ATerm g_83 = NULL,j_83 = NULL;
                                                                                                                                                                                                                                                      t = h_122;
                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                          i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                          j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                      t = j_122;
                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                          a_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                          b_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                      t = b_122;
                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                      t = i_122;
                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                      g_83 = t;
                                                                                                                                                                                                                                                      t = a_122;
                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                      j_83 = t;
                                                                                                                                                                                                                                                      t = SSL_fopen(g_83, j_83);
                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                      if(match_string(t, "SSL_stderr_stream"))
                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                          t = h_122;
                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                          t = SSL_stderr_stream();
                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                          if(match_string(t, "SSL_stdout_stream"))
                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                              t = h_122;
                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                              t = SSL_stdout_stream();
                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                              if(match_string(t, "SSL_stdin_stream"))
                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                  t = h_122;
                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                  t = SSL_stdin_stream();
                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_setenv\""))
                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                      ATerm q_84 = NULL,r_84 = NULL,s_84 = NULL;
                                                                                                                                                                                                                                                                      t = h_122;
                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                          i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                          j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                      t = j_122;
                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                          a_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                          b_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                      t = b_122;
                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                          c_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                          d_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                      t = d_122;
                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                      t = i_122;
                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                      q_84 = t;
                                                                                                                                                                                                                                                                      t = a_122;
                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                      r_84 = t;
                                                                                                                                                                                                                                                                      t = c_122;
                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                      s_84 = t;
                                                                                                                                                                                                                                                                      t = SSL_setenv(q_84, r_84, s_84);
                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_getenv\""))
                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                          ATerm d_85 = NULL;
                                                                                                                                                                                                                                                                          t = h_122;
                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                              i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                              j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                          t = j_122;
                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                          t = i_122;
                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                          d_85 = t;
                                                                                                                                                                                                                                                                          t = SSL_getenv(d_85);
                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_remove\""))
                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                              ATerm t_85 = NULL;
                                                                                                                                                                                                                                                                              t = h_122;
                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                  i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                  j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                              t = j_122;
                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                              t = i_122;
                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                              t_85 = t;
                                                                                                                                                                                                                                                                              t = SSL_remove(t_85);
                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                              if(match_string(t, "\"SSL_link\""))
                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                  ATerm f_86 = NULL,g_86 = NULL;
                                                                                                                                                                                                                                                                                  t = h_122;
                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                      i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                      j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                  t = j_122;
                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                      a_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                      b_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                  t = b_122;
                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                  t = i_122;
                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                  f_86 = t;
                                                                                                                                                                                                                                                                                  t = a_122;
                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                  g_86 = t;
                                                                                                                                                                                                                                                                                  t = SSL_link(f_86, g_86);
                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_fdcopy\""))
                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                      ATerm a_87 = NULL,b_87 = NULL;
                                                                                                                                                                                                                                                                                      t = h_122;
                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                          i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                          j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                      t = j_122;
                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                          a_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                          b_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                      t = b_122;
                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                      t = i_122;
                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                      a_87 = t;
                                                                                                                                                                                                                                                                                      t = a_122;
                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                      b_87 = t;
                                                                                                                                                                                                                                                                                      t = SSL_fdcopy(a_87, b_87);
                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_copy\""))
                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                          ATerm n_87 = NULL,o_87 = NULL;
                                                                                                                                                                                                                                                                                          t = h_122;
                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                              i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                              j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                          t = j_122;
                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                              a_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                              b_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                          t = b_122;
                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                          t = i_122;
                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                          n_87 = t;
                                                                                                                                                                                                                                                                                          t = a_122;
                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                          o_87 = t;
                                                                                                                                                                                                                                                                                          t = SSL_copy(n_87, o_87);
                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_rename\""))
                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                              ATerm a_88 = NULL,b_88 = NULL;
                                                                                                                                                                                                                                                                                              t = h_122;
                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                  i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                  j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                              t = j_122;
                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                  a_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                  b_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                              t = b_122;
                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                              t = i_122;
                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                              a_88 = t;
                                                                                                                                                                                                                                                                                              t = a_122;
                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                              b_88 = t;
                                                                                                                                                                                                                                                                                              t = SSL_rename(a_88, b_88);
                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                              if(match_string(t, "\"SSL_modification_time\""))
                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                  ATerm l_88 = NULL;
                                                                                                                                                                                                                                                                                                  t = h_122;
                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                      i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                      j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                  t = j_122;
                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                  t = i_122;
                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                  l_88 = t;
                                                                                                                                                                                                                                                                                                  t = SSL_modification_time(l_88);
                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_readdir\""))
                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                      ATerm u_88 = NULL;
                                                                                                                                                                                                                                                                                                      t = h_122;
                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                          i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                          j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                      t = j_122;
                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                      t = i_122;
                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                      u_88 = t;
                                                                                                                                                                                                                                                                                                      t = SSL_readdir(u_88);
                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_getchar\""))
                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                          ATerm d_89 = NULL;
                                                                                                                                                                                                                                                                                                          t = h_122;
                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                              i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                              j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                          t = j_122;
                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                          t = i_122;
                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                          d_89 = t;
                                                                                                                                                                                                                                                                                                          t = SSL_getchar(d_89);
                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_printascii\""))
                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                              ATerm q_89 = NULL,s_89 = NULL;
                                                                                                                                                                                                                                                                                                              t = h_122;
                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                  i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                  j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                              t = j_122;
                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                  a_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                  b_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                              t = b_122;
                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                              t = i_122;
                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                              q_89 = t;
                                                                                                                                                                                                                                                                                                              t = a_122;
                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                              s_89 = t;
                                                                                                                                                                                                                                                                                                              t = SSL_printascii(q_89, s_89);
                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                              if(match_string(t, "\"SSL_printnl\""))
                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                  ATerm q_92 = NULL,r_92 = NULL;
                                                                                                                                                                                                                                                                                                                  t = h_122;
                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                      i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                      j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                  t = j_122;
                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                      a_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                      b_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                  t = b_122;
                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                  t = i_122;
                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                  q_92 = t;
                                                                                                                                                                                                                                                                                                                  t = a_122;
                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                  r_92 = t;
                                                                                                                                                                                                                                                                                                                  t = SSL_printnl(q_92, r_92);
                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_print\""))
                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                      ATerm m_94 = NULL,n_94 = NULL;
                                                                                                                                                                                                                                                                                                                      t = h_122;
                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                          i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                          j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                      t = j_122;
                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                          a_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                          b_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                      t = b_122;
                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                      t = i_122;
                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                      m_94 = t;
                                                                                                                                                                                                                                                                                                                      t = a_122;
                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                      n_94 = t;
                                                                                                                                                                                                                                                                                                                      t = SSL_print(m_94, n_94);
                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_read_term_from_stream\""))
                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                          ATerm x_94 = NULL;
                                                                                                                                                                                                                                                                                                                          t = h_122;
                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                              i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                              j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                          t = j_122;
                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                          t = i_122;
                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                          x_94 = t;
                                                                                                                                                                                                                                                                                                                          t = SSL_read_term_from_stream(x_94);
                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_write_term_to_stream_text\""))
                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                              ATerm p_95 = NULL,f_96 = NULL;
                                                                                                                                                                                                                                                                                                                              t = h_122;
                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                  i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                  j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                              t = j_122;
                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                  a_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                  b_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                              t = b_122;
                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                              t = i_122;
                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                              p_95 = t;
                                                                                                                                                                                                                                                                                                                              t = a_122;
                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                              f_96 = t;
                                                                                                                                                                                                                                                                                                                              t = SSL_write_term_to_stream_text(p_95, f_96);
                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                              if(match_string(t, "\"SSL_write_term_to_stream_taf\""))
                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                  ATerm d_97 = NULL,e_97 = NULL;
                                                                                                                                                                                                                                                                                                                                  t = h_122;
                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                      i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                      j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                  t = j_122;
                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                      a_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                      b_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                  t = b_122;
                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                  t = i_122;
                                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                  d_97 = t;
                                                                                                                                                                                                                                                                                                                                  t = a_122;
                                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                  e_97 = t;
                                                                                                                                                                                                                                                                                                                                  t = SSL_write_term_to_stream_taf(d_97, e_97);
                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_write_term_to_stream_baf\""))
                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                      ATerm e_98 = NULL,f_98 = NULL;
                                                                                                                                                                                                                                                                                                                                      t = h_122;
                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                          i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                          j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                      t = j_122;
                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                          a_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                          b_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                      t = b_122;
                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                      t = i_122;
                                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                      e_98 = t;
                                                                                                                                                                                                                                                                                                                                      t = a_122;
                                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                      f_98 = t;
                                                                                                                                                                                                                                                                                                                                      t = SSL_write_term_to_stream_baf(e_98, f_98);
                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_pipe_term_to_child\""))
                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                          ATerm f_99 = NULL,g_99 = NULL,h_99 = NULL;
                                                                                                                                                                                                                                                                                                                                          t = h_122;
                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                              i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                              j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                          t = j_122;
                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                              a_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                              b_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                          t = b_122;
                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                              c_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                              d_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                          t = d_122;
                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                          t = i_122;
                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                          f_99 = t;
                                                                                                                                                                                                                                                                                                                                          t = a_122;
                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                          g_99 = t;
                                                                                                                                                                                                                                                                                                                                          t = c_122;
                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                          h_99 = t;
                                                                                                                                                                                                                                                                                                                                          t = SSL_pipe_term_to_child(f_99, g_99, h_99);
                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_kill\""))
                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                              ATerm s_100 = NULL,t_100 = NULL;
                                                                                                                                                                                                                                                                                                                                              t = h_122;
                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                  i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                  j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                              t = j_122;
                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                  a_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                  b_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                              t = b_122;
                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                              t = i_122;
                                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                              s_100 = t;
                                                                                                                                                                                                                                                                                                                                              t = a_122;
                                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                              t_100 = t;
                                                                                                                                                                                                                                                                                                                                              t = SSL_kill(s_100, t_100);
                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                              if(match_string(t, "\"SSL_exit\""))
                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                  ATerm f_101 = NULL;
                                                                                                                                                                                                                                                                                                                                                  t = h_122;
                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                      i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                      j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                  t = j_122;
                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                  t = i_122;
                                                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                  f_101 = t;
                                                                                                                                                                                                                                                                                                                                                  t = SSL_exit(f_101);
                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_waitpid\""))
                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                      ATerm c_102 = NULL;
                                                                                                                                                                                                                                                                                                                                                      t = h_122;
                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                          i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                          j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                      t = j_122;
                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                      t = i_122;
                                                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                      c_102 = t;
                                                                                                                                                                                                                                                                                                                                                      t = SSL_waitpid(c_102);
                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_execvp\""))
                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                          ATerm r_102 = NULL,s_102 = NULL;
                                                                                                                                                                                                                                                                                                                                                          t = h_122;
                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                              i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                              j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                          t = j_122;
                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                              a_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                              b_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                          t = b_122;
                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                          t = i_122;
                                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                          r_102 = t;
                                                                                                                                                                                                                                                                                                                                                          t = a_122;
                                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                          s_102 = t;
                                                                                                                                                                                                                                                                                                                                                          t = SSL_execvp(r_102, s_102);
                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                          if(match_string(t, "SSL_fork"))
                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                              t = h_122;
                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                              t = SSL_fork();
                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                              if(match_string(t, "SSL_get_pid"))
                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                  t = h_122;
                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                  t = SSL_get_pid();
                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_TicksToSeconds\""))
                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                      ATerm j_103 = NULL;
                                                                                                                                                                                                                                                                                                                                                                      t = h_122;
                                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                          i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                          j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                                      t = j_122;
                                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                                      t = i_122;
                                                                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                      j_103 = t;
                                                                                                                                                                                                                                                                                                                                                                      t = SSL_TicksToSeconds(j_103);
                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                      if(match_string(t, "SSL_times"))
                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                          t = h_122;
                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                          t = SSL_times();
                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                          if(match_string(t, "SSL_clock"))
                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                              t = h_122;
                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                              t = SSL_clock();
                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                              if(match_string(t, "\"SSL_ClockToSeconds\""))
                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                  ATerm w_103 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                  t = h_122;
                                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                      i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                      j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                  t = j_122;
                                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                  t = i_122;
                                                                                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                  w_103 = t;
                                                                                                                                                                                                                                                                                                                                                                                  t = SSL_ClockToSeconds(w_103);
                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                  if(match_string(t, "SSL_dtime"))
                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                      t = h_122;
                                                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                      t = SSL_dtime();
                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_epoch2UTC\""))
                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                          t = h_122;
                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                              i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                              j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                          t = j_122;
                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                          {
                                                                                                                                                                                                                                                                                                                                                                                            ATerm t_78 = t;
                                                                                                                                                                                                                                                                                                                                                                                            int u_78 = stack_ptr;
                                                                                                                                                                                                                                                                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                                                                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                                                                                                                                                                                ATerm m_104 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                t = i_122;
                                                                                                                                                                                                                                                                                                                                                                                                t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                m_104 = t;
                                                                                                                                                                                                                                                                                                                                                                                                t = SSL_epoch2UTC(m_104);
                                                                                                                                                                                                                                                                                                                                                                                                ;
                                                                                                                                                                                                                                                                                                                                                                                                LocalPopChoice(u_78);
                                                                                                                                                                                                                                                                                                                                                                                              }
                                                                                                                                                                                                                                                                                                                                                                                            else
                                                                                                                                                                                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                                                                                                                                                                                t = t_78;
                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                  ATerm x_104 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                  t = i_122;
                                                                                                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                  x_104 = t;
                                                                                                                                                                                                                                                                                                                                                                                                  t = SSL_epoch2UTC(x_104);
                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                              }
                                                                                                                                                                                                                                                                                                                                                                                          }
                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_epoch2localtime\""))
                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                              ATerm g_105 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                              t = h_122;
                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                  i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                  j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                              t = j_122;
                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                              t = i_122;
                                                                                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                              g_105 = t;
                                                                                                                                                                                                                                                                                                                                                                                              t = SSL_epoch2localtime(g_105);
                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                              if(match_string(t, "SSL_now_epoch_time"))
                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                  t = h_122;
                                                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                  t = SSL_now_epoch_time();
                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                  if(match_string(t, "SSL_time"))
                                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                                      t = h_122;
                                                                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                      t = SSL_time();
                                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_table_rename\""))
                                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                                          ATerm v_105 = NULL,w_105 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                          t = h_122;
                                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                              i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                              j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                          t = j_122;
                                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                              a_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                              b_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                          t = b_122;
                                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                          t = i_122;
                                                                                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                          v_105 = t;
                                                                                                                                                                                                                                                                                                                                                                                                          t = a_122;
                                                                                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                          w_105 = t;
                                                                                                                                                                                                                                                                                                                                                                                                          t = SSL_table_rename(v_105, w_105);
                                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_table_keys\""))
                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                              ATerm g_106 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                              t = h_122;
                                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                                  i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                  j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                              t = j_122;
                                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                              t = i_122;
                                                                                                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                              g_106 = t;
                                                                                                                                                                                                                                                                                                                                                                                                              t = SSL_table_keys(g_106);
                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                              if(match_string(t, "\"SSL_table_remove\""))
                                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                                  ATerm r_106 = NULL,s_106 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                                  t = h_122;
                                                                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                                                      i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                      j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                  t = j_122;
                                                                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                                                      a_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                      b_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                  t = b_122;
                                                                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                  t = i_122;
                                                                                                                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                  r_106 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                  t = a_122;
                                                                                                                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                  s_106 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                  t = SSL_table_remove(r_106, s_106);
                                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_table_get\""))
                                                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                                                      ATerm h_107 = NULL,i_107 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                                      t = h_122;
                                                                                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                                                          i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                          j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                      t = j_122;
                                                                                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                                                          a_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                          b_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                      t = b_122;
                                                                                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                      t = i_122;
                                                                                                                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                      h_107 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                      t = a_122;
                                                                                                                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                      i_107 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                      t = SSL_table_get(h_107, i_107);
                                                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_table_put\""))
                                                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                                                          ATerm a_108 = NULL,b_108 = NULL,c_108 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                                          t = h_122;
                                                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                                              i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                              j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                          t = j_122;
                                                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                                              a_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                              b_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                          t = b_122;
                                                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                                              c_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                              d_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                          t = d_122;
                                                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                          t = i_122;
                                                                                                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                          a_108 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                          t = a_122;
                                                                                                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                          b_108 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                          t = c_122;
                                                                                                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                          c_108 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                          t = SSL_table_put(a_108, b_108, c_108);
                                                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_table_destroy\""))
                                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                                              ATerm n_108 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                                              t = h_122;
                                                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                                                  i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                                  j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                              t = j_122;
                                                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                              t = i_122;
                                                                                                                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                              n_108 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                              t = SSL_table_destroy(n_108);
                                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                                              ATerm x_108 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                                              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("\"SSL_table_create\"", 0, ATtrue)))
                                                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                              t = h_122;
                                                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                                                  i_122 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                                  j_122 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                              t = j_122;
                                                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                              t = i_122;
                                                                                                                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                              x_108 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                              t = SSL_table_create(x_108);
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
ATerm Op_2_0 (ATerm i_125 (ATerm), ATerm j_125 (ATerm), ATerm t)
{
  ATerm v_127 = NULL,w_127 = NULL,x_127 = NULL,y_127 = NULL,z_127 = NULL,a_128 = NULL,g_11 = NULL,p_11 = NULL;
  a_128 = t;
  if(match_cons(t, sym_Op_2))
    {
      w_127 = ATgetArgument(t, 0);
      x_127 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_128);
  v_127 = t;
  t = w_127;
  t = i_125(t);
  y_127 = t;
  t = x_127;
  t = j_125(t);
  z_127 = t;
  p_11 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, y_127, z_127);
  g_11 = t;
  t = SSLsetAnnotations(g_11, v_127);
  return(t);
}
ATerm e_130 (ATerm d_129, ATerm e_129, ATerm f_129, ATerm t)
{
  t = SSL_mkterm(d_129, e_129);
  return(t);
}
ATerm x_45 (ATerm t)
{
  t = map_1_0(EvalTerm_0_0, t);
  return(t);
}
ATerm EvalTerm_0_0 (ATerm t)
{
  ATerm v_78 = t;
  int w_78 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_129 = NULL,d_109 = NULL,r_11 = NULL,u_11 = NULL;
      b_129 = t;
      if(match_cons(t, sym_Var_1))
        {
          ATerm x_78 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_129;
      u_11 = t;
      t = term_e_77;
      r_11 = t;
      t = SSL_table_get(r_11, b_129);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_109 = ATgetFirst((ATermList) t);
          {
            ATerm y_78 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = d_109;
      {
        ATerm z_78 = t;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_NULL_0)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = z_78;
          }
        t = d_109;
      }
      ;
      LocalPopChoice(w_78);
    }
  else
    {
      t = v_78;
      {
        ATerm a_79 = t;
        int b_79 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_129 = NULL,l_129 = NULL,m_129 = NULL,n_129 = NULL,p_129 = NULL,t_129 = NULL,u_129 = NULL;
            t = Op_2_0(_id, x_45, t);
            p_129 = t;
            if(match_cons(t, sym_Op_2))
              {
                t_129 = ATgetArgument(t, 0);
                u_129 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = u_129;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                k_129 = ATgetFirst((ATermList) t);
                l_129 = (ATerm) ATgetNext((ATermList) t);
                t = l_129;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    m_129 = ATgetFirst((ATermList) t);
                    n_129 = (ATerm) ATgetNext((ATermList) t);
                    t = n_129;
                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                      {
                        t = t_129;
                        if(match_string(t, "Cons"))
                          {
                            ATerm c_79 = t;
                            int d_79 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = (ATerm) ATinsert(CheckATermList(m_129), k_129);
                                ;
                                LocalPopChoice(d_79);
                              }
                            else
                              {
                                t = c_79;
                                t = e_130(t_129, u_129, p_129, t);
                              }
                          }
                        else
                          {
                            t = e_130(t_129, u_129, p_129, t);
                          }
                      }
                    else
                      {
                        t = t_129;
                        t = e_130(t_129, u_129, p_129, t);
                      }
                  }
                else
                  {
                    t = t_129;
                    t = e_130(t_129, u_129, p_129, t);
                  }
              }
            else
              {
                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                  {
                    t = t_129;
                    if(match_string(t, "Nil"))
                      {
                        ATerm f_79 = t;
                        int g_79 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = (ATerm) ATempty;
                            ;
                            LocalPopChoice(g_79);
                          }
                        else
                          {
                            t = f_79;
                            t = e_130(t_129, u_129, p_129, t);
                          }
                      }
                    else
                      {
                        t = e_130(t_129, u_129, p_129, t);
                      }
                  }
                else
                  {
                    t = t_129;
                    t = e_130(t_129, u_129, p_129, t);
                  }
              }
            ;
            LocalPopChoice(b_79);
          }
        else
          {
            t = a_79;
            {
              ATerm y_129 = NULL;
              if(match_cons(t, sym_Real_1))
                {
                  y_129 = ATgetArgument(t, 0);
                  t = y_129;
                }
              else
                {
                  if(match_cons(t, sym_Str_1))
                    {
                      y_129 = ATgetArgument(t, 0);
                      t = y_129;
                    }
                  else
                    {
                      if(match_cons(t, sym_Int_1))
                        {
                          y_129 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = y_129;
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm table_replace_0_0 (ATerm t)
{
  ATerm f_130 = NULL,g_130 = NULL,h_130 = NULL,i_130 = NULL,v_11 = NULL,w_11 = NULL;
  if(match_cons(t, sym__3))
    {
      f_130 = ATgetArgument(t, 0);
      g_130 = ATgetArgument(t, 1);
      h_130 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_get(f_130, g_130);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm h_79 = ATgetFirst((ATermList) t);
      i_130 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  w_11 = t;
  t = (ATerm) ATinsert(CheckATermList(i_130), h_130);
  v_11 = t;
  t = SSL_table_put(f_130, g_130, v_11);
  t = (ATerm) ATmakeAppl(sym__3, f_130, g_130, h_130);
  return(t);
}
ATerm BindVar_0_0 (ATerm t)
{
  ATerm k_130 = NULL,l_130 = NULL;
  if(match_cons(t, sym__2))
    {
      k_130 = ATgetArgument(t, 0);
      l_130 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_79 = t;
    int j_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_12 = NULL,f_12 = NULL,i_12 = NULL,j_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,w_12 = NULL;
        t = term_q_54;
        i_12 = t;
        t = term_r_54;
        d_12 = t;
        t = i_12;
        j_12 = t;
        t = term_q_54;
        f_12 = t;
        t = SSL_table_get(d_12, f_12);
        {
          ATerm k_79 = t;
          int l_79 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_109 = NULL,k_12 = NULL,m_12 = NULL,p_12 = NULL,r_12 = NULL;
              t = eval_config_0_0(t);
              i_109 = t;
              p_12 = t;
              t = term_r_54;
              k_12 = t;
              t = p_12;
              r_12 = t;
              t = term_q_54;
              m_12 = t;
              t = SSL_table_put(k_12, m_12, i_109);
              t = i_109;
              ;
              LocalPopChoice(l_79);
            }
          else
            {
              t = k_79;
            }
          t = term_m_79;
          u_12 = t;
          t = term_v_54;
          s_12 = t;
          t = u_12;
          w_12 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, k_130, l_130)), term_m_79);
          t_12 = t;
          t = SSL_printnl(s_12, t_12);
          t = (ATerm) ATmakeAppl(sym__2, k_130, l_130);
        }
        ;
        LocalPopChoice(j_79);
      }
    else
      {
        t = i_79;
      }
    {
      ATerm n_79 = t;
      int o_79 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_130 = NULL,x_12 = NULL,y_12 = NULL;
          y_12 = t;
          t = term_e_77;
          x_12 = t;
          t = SSL_table_get(x_12, k_130);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              m_130 = ATgetFirst((ATermList) t);
              {
                ATerm p_79 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = m_130;
          if(match_cons(t, sym_NULL_0))
            {
              ATerm q_79 = t;
              int r_79 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_130;
                  if((l_130 != t))
                    {
                      _fail(t);
                    }
                  t = m_130;
                  ;
                  LocalPopChoice(r_79);
                }
              else
                {
                  t = q_79;
                  t = (ATerm) ATmakeAppl(sym__3, term_e_77, k_130, l_130);
                  t = table_replace_0_0(t);
                }
            }
          else
            {
              t = m_130;
              if((l_130 != t))
                {
                  _fail(t);
                }
              t = m_130;
            }
          ;
          LocalPopChoice(o_79);
        }
      else
        {
          t = n_79;
          t = (ATerm) ATmakeAppl(sym__3, term_e_77, k_130, l_130);
          t = table_push_0_0(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, k_130, l_130);
    }
  }
  return(t);
}
ATerm Var_1_0 (ATerm b_123 (ATerm), ATerm t)
{
  ATerm o_130 = NULL,p_130 = NULL,q_130 = NULL,r_130 = NULL,z_12 = NULL,b_13 = NULL;
  r_130 = t;
  if(match_cons(t, sym_Var_1))
    {
      p_130 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_130);
  o_130 = t;
  t = p_130;
  t = b_123(t);
  q_130 = t;
  b_13 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, q_130);
  z_12 = t;
  t = SSLsetAnnotations(z_12, o_130);
  return(t);
}
ATerm y_45 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_79 = ATgetArgument(t, 0);
      if(((ATgetType(s_79) != AT_LIST) || !(ATisEmpty(s_79))))
        _fail(t);
      {
        ATerm t_79 = ATgetArgument(t, 1);
        if(((ATgetType(t_79) != AT_LIST) || !(ATisEmpty(t_79))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_45 (ATerm t)
{
  ATerm b_110 = NULL,c_110 = NULL,d_110 = NULL,e_110 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_79 = ATgetArgument(t, 0);
      if(((ATgetType(v_79) == AT_LIST) && !(ATisEmpty(v_79))))
        {
          b_110 = ATgetFirst((ATermList) v_79);
          d_110 = (ATerm) ATgetNext((ATermList) v_79);
        }
      else
        _fail(t);
      {
        ATerm w_79 = ATgetArgument(t, 1);
        if(((ATgetType(w_79) == AT_LIST) && !(ATisEmpty(w_79))))
          {
            c_110 = ATgetFirst((ATermList) w_79);
            e_110 = (ATerm) ATgetNext((ATermList) w_79);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_110, c_110), (ATerm) ATmakeAppl(sym__2, d_110, e_110));
  return(t);
}
ATerm a_46 (ATerm t)
{
  ATerm f_110 = NULL,g_110 = NULL;
  if(match_cons(t, sym__2))
    {
      f_110 = ATgetArgument(t, 0);
      g_110 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_110), f_110);
  return(t);
}
ATerm PatDecompose_0_0 (ATerm t)
{
  ATerm b_132 = NULL,c_132 = NULL,e_132 = NULL,g_132 = NULL,h_132 = NULL,i_132 = NULL,j_132 = NULL;
  b_132 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_132 = ATgetFirst((ATermList) t);
      j_132 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = c_132;
  if(match_cons(t, sym__2))
    {
      e_132 = ATgetArgument(t, 0);
      i_132 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_132;
  if(match_cons(t, sym_Real_1))
    {
      g_132 = ATgetArgument(t, 0);
      t = i_132;
      if((g_132 != t))
        {
          _fail(t);
        }
      t = j_132;
    }
  else
    {
      if(match_cons(t, sym_Str_1))
        {
          g_132 = ATgetArgument(t, 0);
          t = i_132;
          if((g_132 != t))
            {
              _fail(t);
            }
          t = j_132;
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              g_132 = ATgetArgument(t, 0);
              t = i_132;
              if((g_132 != t))
                {
                  _fail(t);
                }
              t = j_132;
            }
          else
            {
              ATerm z_109 = NULL,a_110 = NULL;
              if(match_cons(t, sym_Op_2))
                {
                  g_132 = ATgetArgument(t, 0);
                  h_132 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_explode_term(i_132);
              if(match_cons(t, sym__2))
                {
                  if((g_132 != ATgetArgument(t, 0)))
                    {
                      _fail(ATgetArgument(t, 0));
                    }
                  z_109 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, h_132, z_109);
              t = genzip_4_0(y_45, z_45, a_46, _id, t);
              a_110 = t;
              t = (ATerm) ATmakeAppl(sym__2, a_110, j_132);
              {
                ATerm x_79 = t;
                int y_79 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym__2))
                      {
                        ATerm z_79 = ATgetArgument(t, 0);
                        ATerm a_80 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = a_110;
                    {
                      ATerm b_46 (ATerm t)
                      {
                        t = j_132;
                        return(t);
                      }
                      t = at_end_1_0(b_46, t);
                    }
                    ;
                    LocalPopChoice(y_79);
                  }
                else
                  {
                    t = x_79;
                    {
                      ATerm s_110 = NULL,c_13 = NULL,d_13 = NULL;
                      d_13 = t;
                      t = (ATerm) ATmakeAppl(sym__2, a_110, j_132);
                      c_13 = t;
                      t = SSL_explode_term(c_13);
                      if(match_cons(t, sym__2))
                        {
                          ATerm b_80 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) b_80) != ATmakeSymbol("", 0, ATtrue)))
                            _fail(t);
                          s_110 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = s_110;
                      t = concat_0_0(t);
                    }
                  }
              }
            }
        }
    }
  return(t);
}
ATerm MatchVar_1_0 (ATerm w_159 (ATerm), ATerm t)
{
  ATerm w_132 = NULL,x_132 = NULL,y_132 = NULL,a_133 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_80 = ATgetArgument(t, 0);
      if(((ATgetType(c_80) == AT_LIST) && !(ATisEmpty(c_80))))
        {
          ATerm d_80 = ATgetFirst((ATermList) c_80);
          if(match_cons(d_80, sym__2))
            {
              w_132 = ATgetArgument(d_80, 0);
              x_132 = ATgetArgument(d_80, 1);
            }
          else
            _fail(t);
          y_132 = (ATerm) ATgetNext((ATermList) c_80);
        }
      else
        _fail(t);
      a_133 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_132;
  t = w_159(t);
  t = a_133;
  {
    ATerm e_80 = t;
    if((PushChoice() == 0))
      {
        ATerm c_46 (ATerm t)
        {
          ATerm b_133 = NULL;
          if(match_cons(t, sym__2))
            {
              if((w_132 != ATgetArgument(t, 0)))
                {
                  _fail(ATgetArgument(t, 0));
                }
              b_133 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, x_132, b_133);
          {
            ATerm f_80 = t;
            if((PushChoice() == 0))
              {
                ATerm c_133 = NULL;
                if(match_cons(t, sym__2))
                  {
                    c_133 = ATgetArgument(t, 0);
                    if((c_133 != ATgetArgument(t, 1)))
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
                t = f_80;
              }
          }
          return(t);
        }
        t = fetch_1_0(c_46, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_80;
      }
    t = (ATerm) ATmakeAppl(sym__2, y_132, (ATerm) ATinsert(CheckATermList(a_133), (ATerm) ATmakeAppl(sym__2, w_132, x_132)));
  }
  return(t);
}
ATerm while_not_2_0 (ATerm j_133 (ATerm), ATerm k_133 (ATerm), ATerm t)
{
  ATerm d_133 (ATerm t)
  {
    ATerm g_80 = t;
    int h_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_133(t);
        ;
        LocalPopChoice(h_80);
      }
    else
      {
        t = g_80;
        t = k_133(t);
        t = d_133(t);
      }
    return(t);
  }
  t = d_133(t);
  return(t);
}
ATerm for_3_0 (ATerm m_133 (ATerm), ATerm n_133 (ATerm), ATerm o_133 (ATerm), ATerm t)
{
  t = m_133(t);
  t = while_not_2_0(n_133, o_133, t);
  return(t);
}
ATerm d_46 (ATerm t)
{
  ATerm e_133 = NULL;
  e_133 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_133, (ATerm) ATempty);
  return(t);
}
ATerm e_46 (ATerm t)
{
  ATerm f_133 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_80 = ATgetArgument(t, 0);
      if(((ATgetType(i_80) != AT_LIST) || !(ATisEmpty(i_80))))
        _fail(t);
      f_133 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_133;
  return(t);
}
ATerm g_46 (ATerm t)
{
  ATerm p_133 = NULL,q_133 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm j_80 = ATgetFirst((ATermList) t);
      if(match_cons(j_80, sym__2))
        {
          p_133 = ATgetArgument(j_80, 0);
          if((p_133 != ATgetArgument(j_80, 1)))
            {
              _fail(ATgetArgument(j_80, 1));
            }
        }
      else
        _fail(t);
      q_133 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = q_133;
  return(t);
}
ATerm h_46 (ATerm t)
{
  ATerm r_133 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm k_80 = ATgetFirst((ATermList) t);
      if(match_cons(k_80, sym__2))
        {
          ATerm l_80 = ATgetArgument(k_80, 0);
          if(!(match_cons(l_80, sym_Wld_0)))
            _fail(t);
          {
            ATerm m_80 = ATgetArgument(k_80, 1);
          }
        }
      else
        _fail(t);
      r_133 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_133;
  return(t);
}
ATerm stratego_match_1_0 (ATerm u_162 (ATerm), ATerm t)
{
  ATerm f_46 (ATerm t)
  {
    ATerm n_80 = t;
    int o_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_133 = NULL,e_13 = NULL,f_13 = NULL,h_13 = NULL,i_13 = NULL,p_13 = NULL,q_13 = NULL,s_13 = NULL,t_13 = NULL;
        h_133 = t;
        t = term_q_54;
        h_13 = t;
        t = term_r_54;
        e_13 = t;
        t = h_13;
        i_13 = t;
        t = term_q_54;
        f_13 = t;
        t = SSL_table_get(e_13, f_13);
        {
          ATerm p_80 = t;
          int q_80 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_110 = NULL,j_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL;
              t = eval_config_0_0(t);
              w_110 = t;
              n_13 = t;
              t = term_r_54;
              j_13 = t;
              t = n_13;
              o_13 = t;
              t = term_q_54;
              m_13 = t;
              t = SSL_table_put(j_13, m_13, w_110);
              t = w_110;
              ;
              LocalPopChoice(q_80);
            }
          else
            {
              t = p_80;
            }
          t = term_r_80;
          s_13 = t;
          t = term_v_54;
          p_13 = t;
          t = s_13;
          t_13 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, h_133), term_r_80);
          q_13 = t;
          t = SSL_printnl(p_13, q_13);
          t = h_133;
        }
        ;
        LocalPopChoice(o_80);
      }
    else
      {
        t = n_80;
      }
    {
      ATerm s_80 = t;
      int t_80 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = _2_0(g_46, _id, t);
          ;
          LocalPopChoice(t_80);
        }
      else
        {
          t = s_80;
          {
            ATerm u_80 = t;
            int v_80 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = MatchVar_1_0(u_162, t);
                ;
                LocalPopChoice(v_80);
              }
            else
              {
                t = u_80;
                {
                  ATerm w_80 = t;
                  int x_80 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = _2_0(h_46, _id, t);
                      ;
                      LocalPopChoice(x_80);
                    }
                  else
                    {
                      t = w_80;
                      t = _2_0(PatDecompose_0_0, _id, t);
                    }
                }
              }
          }
        }
      {
        ATerm y_80 = t;
        int z_80 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_133 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL,d_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL;
            u_133 = t;
            t = term_q_54;
            w_13 = t;
            t = term_r_54;
            u_13 = t;
            t = w_13;
            x_13 = t;
            t = term_q_54;
            v_13 = t;
            t = SSL_table_get(u_13, v_13);
            {
              ATerm a_81 = t;
              int b_81 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_111 = NULL,z_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL;
                  t = eval_config_0_0(t);
                  d_111 = t;
                  b_14 = t;
                  t = term_r_54;
                  z_13 = t;
                  t = b_14;
                  c_14 = t;
                  t = term_q_54;
                  a_14 = t;
                  t = SSL_table_put(z_13, a_14, d_111);
                  t = d_111;
                  ;
                  LocalPopChoice(b_81);
                }
              else
                {
                  t = a_81;
                }
              t = term_c_81;
              g_14 = t;
              t = term_v_54;
              d_14 = t;
              t = g_14;
              h_14 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, u_133), term_c_81);
              f_14 = t;
              t = SSL_printnl(d_14, f_14);
              t = u_133;
            }
            ;
            LocalPopChoice(z_80);
          }
        else
          {
            t = y_80;
          }
      }
    }
    return(t);
  }
  t = for_3_0(d_46, e_46, f_46, t);
  return(t);
}
ATerm i_46 (ATerm t)
{
  t = Var_1_0(_id, t);
  return(t);
}
ATerm EvalMatch_0_0 (ATerm t)
{
  ATerm w_133 = NULL,x_133 = NULL;
  if(match_cons(t, sym_App_2))
    {
      ATerm d_81 = ATgetArgument(t, 0);
      if(match_cons(d_81, sym_Match_1))
        {
          w_133 = ATgetArgument(d_81, 0);
        }
      else
        _fail(t);
      x_133 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, w_133, x_133));
  t = stratego_match_1_0(i_46, t);
  {
    ATerm e_81 = t;
    int f_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_133 = NULL,l_14 = NULL,m_14 = NULL,r_14 = NULL,w_14 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL,c_16 = NULL;
        y_133 = t;
        t = term_q_54;
        r_14 = t;
        t = term_r_54;
        l_14 = t;
        t = r_14;
        w_14 = t;
        t = term_q_54;
        m_14 = t;
        t = SSL_table_get(l_14, m_14);
        {
          ATerm h_81 = t;
          int i_81 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_111 = NULL,c_15 = NULL,f_15 = NULL,k_15 = NULL,o_15 = NULL;
              t = eval_config_0_0(t);
              k_111 = t;
              k_15 = t;
              t = term_r_54;
              c_15 = t;
              t = k_15;
              o_15 = t;
              t = term_q_54;
              f_15 = t;
              t = SSL_table_put(c_15, f_15, k_111);
              t = k_111;
              ;
              LocalPopChoice(i_81);
            }
          else
            {
              t = h_81;
            }
          t = term_j_81;
          v_15 = t;
          t = term_v_54;
          t_15 = t;
          t = v_15;
          c_16 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, y_133), term_j_81);
          u_15 = t;
          t = SSL_printnl(t_15, u_15);
          t = y_133;
        }
        ;
        LocalPopChoice(f_81);
      }
    else
      {
        t = e_81;
      }
    t = map_1_0(BindVar_0_0, t);
    t = x_133;
  }
  return(t);
}
ATerm j_46 (ATerm t)
{
  ATerm e_134 = NULL;
  e_134 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_e_77, (ATerm)ATmakeAppl(sym_Var_1, e_134), term_k_81);
  t = table_push_0_0(t);
  return(t);
}
ATerm k_46 (ATerm t)
{
  ATerm f_134 = NULL;
  f_134 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_77, (ATerm) ATmakeAppl(sym_Var_1, f_134));
  t = table_pop_0_0(t);
  return(t);
}
ATerm EvalScope_1_0 (ATerm v_162 (ATerm), ATerm t)
{
  ATerm a_134 = NULL,b_134 = NULL,c_134 = NULL,d_134 = NULL;
  if(match_cons(t, sym_App_2))
    {
      ATerm l_81 = ATgetArgument(t, 0);
      if(match_cons(l_81, sym_Scope_2))
        {
          a_134 = ATgetArgument(l_81, 0);
          b_134 = ATgetArgument(l_81, 1);
        }
      else
        _fail(t);
      c_134 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_134;
  t = map_1_0(j_46, t);
  t = (ATerm) ATmakeAppl(sym_App_2, b_134, c_134);
  t = v_162(t);
  d_134 = t;
  t = a_134;
  t = map_1_0(k_46, t);
  t = d_134;
  return(t);
}
ATerm l_46 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_81 = ATgetArgument(t, 0);
      if(((ATgetType(m_81) != AT_LIST) || !(ATisEmpty(m_81))))
        _fail(t);
      {
        ATerm n_81 = ATgetArgument(t, 1);
        if(((ATgetType(n_81) != AT_LIST) || !(ATisEmpty(n_81))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm m_46 (ATerm t)
{
  ATerm m_134 = NULL,n_134 = NULL,o_134 = NULL,p_134 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_81 = ATgetArgument(t, 0);
      if(((ATgetType(o_81) == AT_LIST) && !(ATisEmpty(o_81))))
        {
          m_134 = ATgetFirst((ATermList) o_81);
          o_134 = (ATerm) ATgetNext((ATermList) o_81);
        }
      else
        _fail(t);
      {
        ATerm p_81 = ATgetArgument(t, 1);
        if(((ATgetType(p_81) == AT_LIST) && !(ATisEmpty(p_81))))
          {
            n_134 = ATgetFirst((ATermList) p_81);
            p_134 = (ATerm) ATgetNext((ATermList) p_81);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_134, n_134), (ATerm) ATmakeAppl(sym__2, o_134, p_134));
  return(t);
}
ATerm n_46 (ATerm t)
{
  ATerm q_134 = NULL,r_134 = NULL;
  if(match_cons(t, sym__2))
    {
      q_134 = ATgetArgument(t, 0);
      r_134 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_134), q_134);
  return(t);
}
ATerm EvalCong_1_0 (ATerm s_162 (ATerm), ATerm t)
{
  ATerm h_134 = NULL,i_134 = NULL,j_134 = NULL,k_134 = NULL,l_134 = NULL;
  if(match_cons(t, sym_App_2))
    {
      ATerm q_81 = ATgetArgument(t, 0);
      if(match_cons(q_81, sym_Cong_2))
        {
          h_134 = ATgetArgument(q_81, 0);
          i_134 = ATgetArgument(q_81, 1);
        }
      else
        _fail(t);
      j_134 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(j_134);
  if(match_cons(t, sym__2))
    {
      if((h_134 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      k_134 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_134, k_134);
  {
    ATerm o_46 (ATerm t)
    {
      ATerm s_134 = NULL,t_134 = NULL;
      if(match_cons(t, sym__2))
        {
          s_134 = ATgetArgument(t, 0);
          t_134 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_App_2, s_134, t_134);
      t = s_162(t);
      {
        ATerm r_81 = t;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_Fail_0)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = r_81;
          }
      }
      return(t);
    }
    t = genzip_4_0(l_46, m_46, n_46, o_46, t);
    l_134 = t;
    t = SSL_mkterm(h_134, l_134);
  }
  return(t);
}
ATerm EvalOne_1_0 (ATerm r_162 (ATerm), ATerm t)
{
  ATerm u_134 = NULL,v_134 = NULL,y_134 = NULL,z_134 = NULL,a_135 = NULL;
  if(match_cons(t, sym_App_2))
    {
      ATerm s_81 = ATgetArgument(t, 0);
      if(match_cons(s_81, sym_One_1))
        {
          u_134 = ATgetArgument(s_81, 0);
        }
      else
        _fail(t);
      v_134 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(v_134);
  if(match_cons(t, sym__2))
    {
      y_134 = ATgetArgument(t, 0);
      z_134 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_134;
  {
    ATerm p_46 (ATerm t)
    {
      ATerm b_135 = NULL;
      b_135 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, u_134, b_135);
      t = r_162(t);
      {
        ATerm t_81 = t;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_Fail_0)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = t_81;
          }
      }
      return(t);
    }
    t = fetch_1_0(p_46, t);
    a_135 = t;
    t = SSL_mkterm(y_134, a_135);
  }
  return(t);
}
ATerm EvalAll_1_0 (ATerm j_0 (ATerm), ATerm t)
{
  ATerm v_135 = NULL,w_135 = NULL,x_135 = NULL,z_135 = NULL;
  v_135 = t;
  if(match_cons(t, sym_App_2))
    {
      w_135 = ATgetArgument(t, 0);
      z_135 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_135;
  if(match_cons(t, sym_All_1))
    {
      x_135 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm u_81 = t;
    int v_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_is_string(z_135);
        t = z_135;
        ;
        LocalPopChoice(v_81);
      }
    else
      {
        t = u_81;
        {
          ATerm a_112 = NULL,b_112 = NULL,c_112 = NULL;
          t = SSL_explode_term(z_135);
          if(match_cons(t, sym__2))
            {
              a_112 = ATgetArgument(t, 0);
              b_112 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_135;
          {
            ATerm w_81 = t;
            if((PushChoice() == 0))
              {
                ATerm d_112 = NULL;
                d_112 = t;
                t = SSL_is_string(d_112);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = w_81;
              }
            t = b_112;
            {
              ATerm q_46 (ATerm t)
              {
                ATerm e_112 = NULL;
                e_112 = t;
                t = (ATerm) ATmakeAppl(sym_App_2, x_135, e_112);
                t = j_0(t);
                {
                  ATerm x_81 = t;
                  if((PushChoice() == 0))
                    {
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = x_81;
                    }
                }
                return(t);
              }
              t = map_1_0(q_46, t);
              c_112 = t;
              t = SSL_mkterm(a_112, c_112);
            }
          }
        }
      }
  }
  return(t);
}
ATerm r_46 (ATerm t)
{
  ATerm g_136 = NULL,h_136 = NULL,i_136 = NULL,j_136 = NULL;
  g_136 = t;
  if(match_cons(t, sym_SDef_3))
    {
      h_136 = ATgetArgument(t, 0);
      i_136 = ATgetArgument(t, 1);
      {
        ATerm y_81 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = i_136;
  t = foldr_3_0(s_46, x_46, y_46, t);
  j_136 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_e_55, (ATerm)ATmakeAppl(sym__2, h_136, j_136), g_136);
  t = table_push_0_0(t);
  return(t);
}
ATerm s_46 (ATerm t)
{
  t = term_f_55;
  return(t);
}
ATerm x_46 (ATerm t)
{
  ATerm k_136 = NULL,l_136 = NULL;
  if(match_cons(t, sym__2))
    {
      k_136 = ATgetArgument(t, 0);
      l_136 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_81 = t;
    int a_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(k_136, l_136);
        ;
        LocalPopChoice(a_82);
      }
    else
      {
        t = z_81;
        t = SSL_addr(k_136, l_136);
      }
  }
  return(t);
}
ATerm y_46 (ATerm t)
{
  t = term_i_55;
  return(t);
}
ATerm e_47 (ATerm t)
{
  ATerm m_136 = NULL,n_136 = NULL,o_136 = NULL;
  if(match_cons(t, sym_SDef_3))
    {
      m_136 = ATgetArgument(t, 0);
      n_136 = ATgetArgument(t, 1);
      {
        ATerm b_82 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = n_136;
  t = foldr_3_0(f_47, g_47, h_47, t);
  o_136 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_55, (ATerm) ATmakeAppl(sym__2, m_136, o_136));
  t = table_pop_0_0(t);
  return(t);
}
ATerm f_47 (ATerm t)
{
  t = term_f_55;
  return(t);
}
ATerm g_47 (ATerm t)
{
  ATerm p_136 = NULL,q_136 = NULL;
  if(match_cons(t, sym__2))
    {
      p_136 = ATgetArgument(t, 0);
      q_136 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_82 = t;
    int d_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(p_136, q_136);
        ;
        LocalPopChoice(d_82);
      }
    else
      {
        t = c_82;
        t = SSL_addr(p_136, q_136);
      }
  }
  return(t);
}
ATerm h_47 (ATerm t)
{
  t = term_i_55;
  return(t);
}
ATerm EvalLet_1_0 (ATerm b_163 (ATerm), ATerm t)
{
  ATerm c_136 = NULL,d_136 = NULL,e_136 = NULL,f_136 = NULL;
  if(match_cons(t, sym_App_2))
    {
      ATerm e_82 = ATgetArgument(t, 0);
      if(match_cons(e_82, sym_Let_2))
        {
          c_136 = ATgetArgument(e_82, 0);
          d_136 = ATgetArgument(e_82, 1);
        }
      else
        _fail(t);
      e_136 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_136;
  t = map_1_0(r_46, t);
  t = (ATerm) ATmakeAppl(sym_App_2, d_136, e_136);
  t = b_163(t);
  f_136 = t;
  t = c_136;
  t = map_1_0(e_47, t);
  t = f_136;
  return(t);
}
ATerm i_47 (ATerm t)
{
  t = term_f_55;
  return(t);
}
ATerm k_47 (ATerm t)
{
  ATerm u_136 = NULL,v_136 = NULL;
  if(match_cons(t, sym__2))
    {
      u_136 = ATgetArgument(t, 0);
      v_136 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_82 = t;
    int g_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(u_136, v_136);
        ;
        LocalPopChoice(g_82);
      }
    else
      {
        t = f_82;
        t = SSL_addr(u_136, v_136);
      }
  }
  return(t);
}
ATerm l_47 (ATerm t)
{
  t = term_i_55;
  return(t);
}
ATerm EvalCallFail_0_0 (ATerm t)
{
  ATerm r_136 = NULL,s_136 = NULL,t_136 = NULL,d_16 = NULL,m_16 = NULL,n_16 = NULL,w_16 = NULL,x_16 = NULL,e_17 = NULL;
  if(match_cons(t, sym_App_2))
    {
      ATerm h_82 = ATgetArgument(t, 0);
      if(match_cons(h_82, sym_Call_2))
        {
          ATerm j_82 = ATgetArgument(h_82, 0);
          if(match_cons(j_82, sym_SVar_1))
            {
              r_136 = ATgetArgument(j_82, 0);
            }
          else
            _fail(t);
          s_136 = ATgetArgument(h_82, 1);
        }
      else
        _fail(t);
      {
        ATerm i_82 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = s_136;
  t = foldr_3_0(i_47, k_47, l_47, t);
  t_136 = t;
  n_16 = t;
  t = term_v_54;
  d_16 = t;
  t = n_16;
  w_16 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_82), t_136), term_l_82), r_136), term_k_82);
  m_16 = t;
  t = SSL_printnl(d_16, m_16);
  e_17 = t;
  t = term_i_55;
  x_16 = t;
  t = SSL_exit(x_16);
  t = term_y_62;
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm y_136 = NULL,z_136 = NULL,a_137 = NULL;
  if(match_cons(t, sym__2))
    {
      y_136 = ATgetArgument(t, 0);
      z_136 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_136, z_136);
  {
    ATerm n_82 = t;
    int p_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_112 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm q_82 = ATgetArgument(t, 0);
            ATerm r_82 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(y_136, z_136);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm s_82 = ATgetFirst((ATermList) t);
            j_112 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = j_112;
        ;
        LocalPopChoice(p_82);
      }
    else
      {
        t = n_82;
        t = (ATerm) ATempty;
      }
    a_137 = t;
    t = SSL_table_put(y_136, z_136, a_137);
    t = (ATerm) ATmakeAppl(sym__2, y_136, z_136);
  }
  return(t);
}
ATerm genzip_4_0 (ATerm n_141 (ATerm), ATerm o_141 (ATerm), ATerm p_141 (ATerm), ATerm q_141 (ATerm), ATerm t)
{
  ATerm i_137 (ATerm t)
  {
    ATerm t_82 = t;
    int u_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_141(t);
        ;
        LocalPopChoice(u_82);
      }
    else
      {
        t = t_82;
        t = o_141(t);
        t = _2_0(q_141, i_137, t);
        t = p_141(t);
      }
    return(t);
  }
  t = i_137(t);
  return(t);
}
ATerm foldr_3_0 (ATerm n_145 (ATerm), ATerm o_145 (ATerm), ATerm p_145 (ATerm), ATerm t)
{
  ATerm v_82 = t;
  int w_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = n_145(t);
      ;
      LocalPopChoice(w_82);
    }
  else
    {
      t = v_82;
      {
        ATerm l_137 = NULL,m_137 = NULL,p_137 = NULL,q_137 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_137 = ATgetFirst((ATermList) t);
            m_137 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = l_137;
        t = p_145(t);
        p_137 = t;
        t = m_137;
        t = foldr_3_0(n_145, o_145, p_145, t);
        q_137 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_137, q_137);
        t = o_145(t);
      }
    }
  return(t);
}
ATerm m_47 (ATerm t)
{
  t = term_f_55;
  return(t);
}
ATerm p_47 (ATerm t)
{
  ATerm d_138 = NULL,e_138 = NULL;
  if(match_cons(t, sym__2))
    {
      d_138 = ATgetArgument(t, 0);
      e_138 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_82 = t;
    int y_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(d_138, e_138);
        ;
        LocalPopChoice(y_82);
      }
    else
      {
        t = x_82;
        t = SSL_addr(d_138, e_138);
      }
  }
  return(t);
}
ATerm b_48 (ATerm t)
{
  t = term_i_55;
  return(t);
}
ATerm g_48 (ATerm t)
{
  ATerm g_138 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      g_138 = ATgetArgument(t, 0);
      t = g_138;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_138 = ATgetArgument(t, 0);
          {
            ATerm z_82 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = g_138;
    }
  return(t);
}
ATerm h_48 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_83 = ATgetArgument(t, 0);
      if(((ATgetType(a_83) != AT_LIST) || !(ATisEmpty(a_83))))
        _fail(t);
      {
        ATerm b_83 = ATgetArgument(t, 1);
        if(((ATgetType(b_83) != AT_LIST) || !(ATisEmpty(b_83))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm i_48 (ATerm t)
{
  ATerm m_138 = NULL,n_138 = NULL,o_138 = NULL,p_138 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_83 = ATgetArgument(t, 0);
      if(((ATgetType(c_83) == AT_LIST) && !(ATisEmpty(c_83))))
        {
          m_138 = ATgetFirst((ATermList) c_83);
          o_138 = (ATerm) ATgetNext((ATermList) c_83);
        }
      else
        _fail(t);
      {
        ATerm d_83 = ATgetArgument(t, 1);
        if(((ATgetType(d_83) == AT_LIST) && !(ATisEmpty(d_83))))
          {
            n_138 = ATgetFirst((ATermList) d_83);
            p_138 = (ATerm) ATgetNext((ATermList) d_83);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_138, n_138), (ATerm) ATmakeAppl(sym__2, o_138, p_138));
  return(t);
}
ATerm k_48 (ATerm t)
{
  ATerm q_138 = NULL,r_138 = NULL;
  if(match_cons(t, sym__2))
    {
      q_138 = ATgetArgument(t, 0);
      r_138 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_138), q_138);
  return(t);
}
ATerm o_48 (ATerm t)
{
  ATerm s_138 = NULL,t_138 = NULL;
  if(match_cons(t, sym__2))
    {
      s_138 = ATgetArgument(t, 0);
      t_138 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, term_e_55, (ATerm)ATmakeAppl(sym__2, s_138, term_f_55), (ATerm) ATmakeAppl(sym_SDef_3, s_138, (ATerm)ATempty, t_138));
  t = table_push_0_0(t);
  return(t);
}
ATerm p_48 (ATerm t)
{
  ATerm u_138 = NULL;
  u_138 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_55, (ATerm) ATmakeAppl(sym__2, u_138, term_f_55));
  t = table_pop_0_0(t);
  return(t);
}
ATerm EvalCall_1_0 (ATerm a_163 (ATerm), ATerm t)
{
  ATerm s_137 = NULL,t_137 = NULL,u_137 = NULL,v_137 = NULL,w_137 = NULL,x_137 = NULL,a_138 = NULL,b_138 = NULL,c_138 = NULL,f_17 = NULL,g_17 = NULL,j_17 = NULL,o_17 = NULL;
  if(match_cons(t, sym_App_2))
    {
      ATerm e_83 = ATgetArgument(t, 0);
      if(match_cons(e_83, sym_Call_2))
        {
          ATerm f_83 = ATgetArgument(e_83, 0);
          if(match_cons(f_83, sym_SVar_1))
            {
              s_137 = ATgetArgument(f_83, 0);
            }
          else
            _fail(t);
          t_137 = ATgetArgument(e_83, 1);
        }
      else
        _fail(t);
      u_137 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_137;
  t = foldr_3_0(m_47, p_47, b_48, t);
  v_137 = t;
  j_17 = t;
  t = term_e_55;
  f_17 = t;
  t = j_17;
  o_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_137, v_137);
  g_17 = t;
  t = SSL_table_get(f_17, g_17);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_138 = ATgetFirst((ATermList) t);
      {
        ATerm h_83 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = a_138;
  if(match_cons(t, sym_SDef_3))
    {
      if((s_137 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      w_137 = ATgetArgument(t, 1);
      x_137 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = w_137;
  t = map_1_0(g_48, t);
  b_138 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_138, t_137);
  t = genzip_4_0(h_48, i_48, k_48, o_48, t);
  t = (ATerm) ATmakeAppl(sym_App_2, x_137, u_137);
  t = a_163(t);
  c_138 = t;
  t = b_138;
  t = map_1_0(p_48, t);
  t = c_138;
  return(t);
}
ATerm EvalLChoice_1_0 (ATerm z_162 (ATerm), ATerm t)
{
  ATerm v_138 = NULL,w_138 = NULL,x_138 = NULL;
  if(match_cons(t, sym_App_2))
    {
      ATerm i_83 = ATgetArgument(t, 0);
      if(match_cons(i_83, sym_LChoice_2))
        {
          v_138 = ATgetArgument(i_83, 0);
          w_138 = ATgetArgument(i_83, 1);
        }
      else
        _fail(t);
      x_138 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_83 = t;
    int l_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_App_2, v_138, x_138);
        t = z_162(t);
        {
          ATerm m_83 = t;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = m_83;
            }
        }
        ;
        LocalPopChoice(l_83);
      }
    else
      {
        t = k_83;
        {
          ATerm n_83 = t;
          int o_83 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_App_2, w_138, x_138);
              t = z_162(t);
              {
                ATerm p_83 = t;
                if((PushChoice() == 0))
                  {
                    if(!(match_cons(t, sym_Fail_0)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = p_83;
                  }
              }
              ;
              LocalPopChoice(o_83);
            }
          else
            {
              t = n_83;
              t = term_y_62;
            }
        }
      }
  }
  return(t);
}
ATerm EvalChoice_1_0 (ATerm y_162 (ATerm), ATerm t)
{
  ATerm z_138 = NULL,a_139 = NULL,b_139 = NULL;
  if(match_cons(t, sym_App_2))
    {
      ATerm q_83 = ATgetArgument(t, 0);
      if(match_cons(q_83, sym_Choice_2))
        {
          z_138 = ATgetArgument(q_83, 0);
          a_139 = ATgetArgument(q_83, 1);
        }
      else
        _fail(t);
      b_139 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_83 = t;
    int s_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_App_2, z_138, b_139);
        t = y_162(t);
        {
          ATerm t_83 = t;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = t_83;
            }
        }
        ;
        LocalPopChoice(s_83);
      }
    else
      {
        t = r_83;
        {
          ATerm u_83 = t;
          int v_83 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_App_2, a_139, b_139);
              t = y_162(t);
              {
                ATerm w_83 = t;
                if((PushChoice() == 0))
                  {
                    if(!(match_cons(t, sym_Fail_0)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = w_83;
                  }
              }
              ;
              LocalPopChoice(v_83);
            }
          else
            {
              t = u_83;
              t = term_y_62;
            }
        }
      }
  }
  return(t);
}
ATerm App_2_0 (ATerm o_125 (ATerm), ATerm p_125 (ATerm), ATerm t)
{
  ATerm e_139 = NULL,f_139 = NULL,g_139 = NULL,i_139 = NULL,l_139 = NULL,m_139 = NULL,s_17 = NULL,y_17 = NULL;
  m_139 = t;
  if(match_cons(t, sym_App_2))
    {
      f_139 = ATgetArgument(t, 0);
      g_139 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_139);
  e_139 = t;
  t = f_139;
  t = o_125(t);
  i_139 = t;
  t = g_139;
  t = p_125(t);
  l_139 = t;
  y_17 = t;
  t = (ATerm) ATmakeAppl(sym_App_2, i_139, l_139);
  s_17 = t;
  t = SSLsetAnnotations(s_17, e_139);
  return(t);
}
ATerm eval_0_0 (ATerm t)
{
  ATerm x_83 = t;
  int y_83 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = App_2_0(_id, eval_0_0, t);
      ;
      LocalPopChoice(y_83);
    }
  else
    {
      t = x_83;
    }
  {
    ATerm z_83 = t;
    int a_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_140 = NULL,a_18 = NULL,b_18 = NULL,d_18 = NULL,i_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL;
        q_140 = t;
        t = term_q_54;
        d_18 = t;
        t = term_r_54;
        a_18 = t;
        t = d_18;
        i_18 = t;
        t = term_q_54;
        b_18 = t;
        t = SSL_table_get(a_18, b_18);
        {
          ATerm b_84 = t;
          int c_84 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_112 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL;
              t = eval_config_0_0(t);
              n_112 = t;
              n_18 = t;
              t = term_r_54;
              l_18 = t;
              t = n_18;
              o_18 = t;
              t = term_q_54;
              m_18 = t;
              t = SSL_table_put(l_18, m_18, n_112);
              t = n_112;
              ;
              LocalPopChoice(c_84);
            }
          else
            {
              t = b_84;
            }
          t = term_d_84;
          r_18 = t;
          t = term_v_54;
          p_18 = t;
          t = r_18;
          s_18 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, q_140), term_d_84);
          q_18 = t;
          t = SSL_printnl(p_18, q_18);
          t = q_140;
        }
        ;
        LocalPopChoice(a_84);
      }
    else
      {
        t = z_83;
      }
    {
      ATerm e_84 = t;
      int f_84 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_84 = t;
          int h_84 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_140 = NULL,u_140 = NULL,v_140 = NULL;
              if(match_cons(t, sym_App_2))
                {
                  t_140 = ATgetArgument(t, 0);
                  v_140 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = v_140;
              if(match_cons(t, sym_Fail_0))
                {
                  t = t_140;
                  if(match_cons(t, sym_Id_0))
                    {
                      ATerm i_84 = t;
                      int j_84 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = v_140;
                          ;
                          LocalPopChoice(j_84);
                        }
                      else
                        {
                          t = i_84;
                          t = term_y_62;
                        }
                    }
                  else
                    {
                      if(match_cons(t, sym_Fail_0))
                        {
                          t = term_y_62;
                        }
                      else
                        {
                          if(match_cons(t, sym_Test_1))
                            {
                              u_140 = ATgetArgument(t, 0);
                              {
                                ATerm k_84 = t;
                                int l_84 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_y_62;
                                    ;
                                    LocalPopChoice(l_84);
                                  }
                                else
                                  {
                                    t = k_84;
                                    t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Seq_2, u_140, (ATerm) ATmakeAppl(sym_Build_1, v_140)), v_140);
                                    {
                                      ATerm m_84 = t;
                                      int n_84 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = eval_0_0(t);
                                          ;
                                          LocalPopChoice(n_84);
                                        }
                                      else
                                        {
                                          t = m_84;
                                        }
                                    }
                                  }
                              }
                            }
                          else
                            {
                              t = term_y_62;
                            }
                        }
                    }
                }
              else
                {
                  t = t_140;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = v_140;
                    }
                  else
                    {
                      if(match_cons(t, sym_Fail_0))
                        {
                          t = term_y_62;
                        }
                      else
                        {
                          if(match_cons(t, sym_Test_1))
                            {
                              u_140 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Seq_2, u_140, (ATerm) ATmakeAppl(sym_Build_1, v_140)), v_140);
                          {
                            ATerm o_84 = t;
                            int p_84 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = eval_0_0(t);
                                ;
                                LocalPopChoice(p_84);
                              }
                            else
                              {
                                t = o_84;
                              }
                          }
                        }
                    }
                }
              ;
              LocalPopChoice(h_84);
            }
          else
            {
              t = g_84;
              {
                ATerm t_84 = t;
                int u_84 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm t_112 = NULL,u_112 = NULL;
                    if(match_cons(t, sym_App_2))
                      {
                        ATerm v_84 = ATgetArgument(t, 0);
                        if(match_cons(v_84, sym_Not_1))
                          {
                            t_112 = ATgetArgument(v_84, 0);
                          }
                        else
                          _fail(t);
                        u_112 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    {
                      ATerm w_84 = t;
                      int x_84 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym_App_2, t_112, u_112);
                          t = eval_0_0(t);
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = u_112;
                          ;
                          LocalPopChoice(x_84);
                        }
                      else
                        {
                          t = w_84;
                          t = term_y_62;
                        }
                    }
                    ;
                    LocalPopChoice(u_84);
                  }
                else
                  {
                    t = t_84;
                    {
                      ATerm y_84 = t;
                      int z_84 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm d_141 = NULL,e_141 = NULL,f_141 = NULL,g_141 = NULL;
                          if(match_cons(t, sym_App_2))
                            {
                              d_141 = ATgetArgument(t, 0);
                              g_141 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = d_141;
                          if(match_cons(t, sym_Seq_2))
                            {
                              e_141 = ATgetArgument(t, 0);
                              f_141 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_App_2, f_141, (ATerm) ATmakeAppl(sym_App_2, e_141, g_141));
                          {
                            ATerm a_85 = t;
                            int b_85 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = eval_0_0(t);
                                ;
                                LocalPopChoice(b_85);
                              }
                            else
                              {
                                t = a_85;
                              }
                          }
                          ;
                          LocalPopChoice(z_84);
                        }
                      else
                        {
                          t = y_84;
                          {
                            ATerm c_85 = t;
                            int e_85 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = EvalChoice_1_0(eval_0_0, t);
                                ;
                                LocalPopChoice(e_85);
                              }
                            else
                              {
                                t = c_85;
                                {
                                  ATerm f_85 = t;
                                  int g_85 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = EvalLChoice_1_0(eval_0_0, t);
                                      ;
                                      LocalPopChoice(g_85);
                                    }
                                  else
                                    {
                                      t = f_85;
                                      {
                                        ATerm h_85 = t;
                                        int i_85 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm j_85 = t;
                                            int k_85 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = EvalCall_1_0(eval_0_0, t);
                                                ;
                                                LocalPopChoice(k_85);
                                              }
                                            else
                                              {
                                                t = j_85;
                                                t = EvalCallFail_0_0(t);
                                              }
                                            ;
                                            LocalPopChoice(i_85);
                                          }
                                        else
                                          {
                                            t = h_85;
                                            {
                                              ATerm l_85 = t;
                                              int m_85 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = EvalLet_1_0(eval_0_0, t);
                                                  ;
                                                  LocalPopChoice(m_85);
                                                }
                                              else
                                                {
                                                  t = l_85;
                                                  {
                                                    ATerm n_85 = t;
                                                    int o_85 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm l_141 = NULL,m_141 = NULL,s_141 = NULL,t_141 = NULL;
                                                        if(match_cons(t, sym_App_2))
                                                          {
                                                            l_141 = ATgetArgument(t, 0);
                                                            t_141 = ATgetArgument(t, 1);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = l_141;
                                                        if(match_cons(t, sym_Rec_2))
                                                          {
                                                            m_141 = ATgetArgument(t, 0);
                                                            s_141 = ATgetArgument(t, 1);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, m_141, (ATerm)ATempty, s_141)), s_141), t_141);
                                                        {
                                                          ATerm p_85 = t;
                                                          int q_85 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = eval_0_0(t);
                                                              ;
                                                              LocalPopChoice(q_85);
                                                            }
                                                          else
                                                            {
                                                              t = p_85;
                                                            }
                                                        }
                                                        ;
                                                        LocalPopChoice(o_85);
                                                      }
                                                    else
                                                      {
                                                        t = n_85;
                                                        {
                                                          ATerm r_85 = t;
                                                          int s_85 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm u_85 = t;
                                                              int v_85 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = EvalAll_1_0(eval_0_0, t);
                                                                  ;
                                                                  LocalPopChoice(v_85);
                                                                }
                                                              else
                                                                {
                                                                  t = u_85;
                                                                  {
                                                                    ATerm y_141 = NULL;
                                                                    if(match_cons(t, sym_App_2))
                                                                      {
                                                                        y_141 = ATgetArgument(t, 0);
                                                                        {
                                                                          ATerm w_85 = ATgetArgument(t, 1);
                                                                        }
                                                                      }
                                                                    else
                                                                      _fail(t);
                                                                    t = y_141;
                                                                    if(match_cons(t, sym_All_1))
                                                                      {
                                                                        ATerm x_85 = ATgetArgument(t, 0);
                                                                      }
                                                                    else
                                                                      _fail(t);
                                                                    t = term_y_62;
                                                                  }
                                                                }
                                                              ;
                                                              LocalPopChoice(s_85);
                                                            }
                                                          else
                                                            {
                                                              t = r_85;
                                                              {
                                                                ATerm y_85 = t;
                                                                int z_85 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm a_86 = t;
                                                                    int b_86 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = EvalOne_1_0(eval_0_0, t);
                                                                        ;
                                                                        LocalPopChoice(b_86);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = a_86;
                                                                        {
                                                                          ATerm c_142 = NULL;
                                                                          if(match_cons(t, sym_App_2))
                                                                            {
                                                                              c_142 = ATgetArgument(t, 0);
                                                                              {
                                                                                ATerm c_86 = ATgetArgument(t, 1);
                                                                              }
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          t = c_142;
                                                                          if(match_cons(t, sym_One_1))
                                                                            {
                                                                              ATerm d_86 = ATgetArgument(t, 0);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          t = term_y_62;
                                                                        }
                                                                      }
                                                                    ;
                                                                    LocalPopChoice(z_85);
                                                                  }
                                                                else
                                                                  {
                                                                    t = y_85;
                                                                    {
                                                                      ATerm e_86 = t;
                                                                      int h_86 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          ATerm i_86 = t;
                                                                          int j_86 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = EvalCong_1_0(eval_0_0, t);
                                                                              ;
                                                                              LocalPopChoice(j_86);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = i_86;
                                                                              {
                                                                                ATerm z_112 = NULL;
                                                                                if(match_cons(t, sym_App_2))
                                                                                  {
                                                                                    ATerm k_86 = ATgetArgument(t, 0);
                                                                                    if(match_cons(k_86, sym_Cong_2))
                                                                                      {
                                                                                        ATerm l_86 = ATgetArgument(k_86, 0);
                                                                                        ATerm m_86 = ATgetArgument(k_86, 1);
                                                                                      }
                                                                                    else
                                                                                      _fail(t);
                                                                                    z_112 = ATgetArgument(t, 1);
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                t = SSL_explode_term(z_112);
                                                                                if(match_cons(t, sym__2))
                                                                                  {
                                                                                    ATerm n_86 = ATgetArgument(t, 0);
                                                                                    ATerm o_86 = ATgetArgument(t, 1);
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                t = term_y_62;
                                                                              }
                                                                            }
                                                                          ;
                                                                          LocalPopChoice(h_86);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = e_86;
                                                                          {
                                                                            ATerm p_86 = t;
                                                                            int q_86 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                t = EvalScope_1_0(eval_0_0, t);
                                                                                ;
                                                                                LocalPopChoice(q_86);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = p_86;
                                                                                {
                                                                                  ATerm r_86 = t;
                                                                                  int s_86 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      ATerm t_86 = t;
                                                                                      int u_86 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = EvalMatch_0_0(t);
                                                                                          ;
                                                                                          LocalPopChoice(u_86);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = t_86;
                                                                                          {
                                                                                            ATerm g_142 = NULL;
                                                                                            if(match_cons(t, sym_App_2))
                                                                                              {
                                                                                                g_142 = ATgetArgument(t, 0);
                                                                                                {
                                                                                                  ATerm v_86 = ATgetArgument(t, 1);
                                                                                                }
                                                                                              }
                                                                                            else
                                                                                              _fail(t);
                                                                                            t = g_142;
                                                                                            if(match_cons(t, sym_Match_1))
                                                                                              {
                                                                                                ATerm w_86 = ATgetArgument(t, 0);
                                                                                              }
                                                                                            else
                                                                                              _fail(t);
                                                                                            t = term_y_62;
                                                                                          }
                                                                                        }
                                                                                      ;
                                                                                      LocalPopChoice(s_86);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = r_86;
                                                                                      {
                                                                                        ATerm x_86 = t;
                                                                                        int y_86 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm o_142 = NULL,p_142 = NULL,q_142 = NULL;
                                                                                            if(match_cons(t, sym_App_2))
                                                                                              {
                                                                                                o_142 = ATgetArgument(t, 0);
                                                                                                q_142 = ATgetArgument(t, 1);
                                                                                              }
                                                                                            else
                                                                                              _fail(t);
                                                                                            t = o_142;
                                                                                            if(match_cons(t, sym_Build_1))
                                                                                              {
                                                                                                p_142 = ATgetArgument(t, 0);
                                                                                                t = p_142;
                                                                                                t = EvalTerm_0_0(t);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_Where_1))
                                                                                                  {
                                                                                                    p_142 = ATgetArgument(t, 0);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                {
                                                                                                  ATerm z_86 = t;
                                                                                                  int c_87 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = (ATerm) ATmakeAppl(sym_App_2, p_142, q_142);
                                                                                                      t = eval_0_0(t);
                                                                                                      {
                                                                                                        ATerm d_87 = t;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            if(!(match_cons(t, sym_Fail_0)))
                                                                                                              _fail(t);
                                                                                                            PopChoice();
                                                                                                            _fail(t);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = d_87;
                                                                                                          }
                                                                                                        t = q_142;
                                                                                                      }
                                                                                                      ;
                                                                                                      LocalPopChoice(c_87);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = z_86;
                                                                                                      t = term_y_62;
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                            ;
                                                                                            LocalPopChoice(y_86);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = x_86;
                                                                                            {
                                                                                              ATerm e_87 = t;
                                                                                              int f_87 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  t = EvalPrim_0_0(t);
                                                                                                  ;
                                                                                                  LocalPopChoice(f_87);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = e_87;
                                                                                                  {
                                                                                                    ATerm t_142 = NULL;
                                                                                                    if(match_cons(t, sym_App_2))
                                                                                                      {
                                                                                                        t_142 = ATgetArgument(t, 0);
                                                                                                        {
                                                                                                          ATerm g_87 = ATgetArgument(t, 1);
                                                                                                        }
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    t = t_142;
                                                                                                    if(match_cons(t, sym_Prim_2))
                                                                                                      {
                                                                                                        ATerm h_87 = ATgetArgument(t, 0);
                                                                                                        ATerm i_87 = ATgetArgument(t, 1);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    t = term_y_62;
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
          ;
          LocalPopChoice(f_84);
        }
      else
        {
          t = e_84;
        }
    }
  }
  return(t);
}
ATerm eval_strategy_0_0 (ATerm t)
{
  ATerm z_142 = NULL,a_143 = NULL,b_143 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_87 = ATgetArgument(t, 0);
      if(match_cons(j_87, sym_Eval_1))
        {
          z_142 = ATgetArgument(j_87, 0);
        }
      else
        _fail(t);
      a_143 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_142;
  t = desugar_0_0(t);
  b_143 = t;
  t = (ATerm) ATmakeAppl(sym_App_2, b_143, a_143);
  {
    ATerm k_87 = t;
    int l_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_18 = NULL,u_18 = NULL,v_18 = NULL,w_18 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL;
        t = term_q_54;
        v_18 = t;
        t = term_r_54;
        t_18 = t;
        t = v_18;
        w_18 = t;
        t = term_q_54;
        u_18 = t;
        t = SSL_table_get(t_18, u_18);
        {
          ATerm m_87 = t;
          int p_87 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_113 = NULL,a_19 = NULL,c_19 = NULL,e_19 = NULL,f_19 = NULL;
              t = eval_config_0_0(t);
              k_113 = t;
              e_19 = t;
              t = term_r_54;
              a_19 = t;
              t = e_19;
              f_19 = t;
              t = term_q_54;
              c_19 = t;
              t = SSL_table_put(a_19, c_19, k_113);
              t = k_113;
              ;
              LocalPopChoice(p_87);
            }
          else
            {
              t = m_87;
            }
          t = term_q_87;
          i_19 = t;
          t = term_v_54;
          g_19 = t;
          t = i_19;
          j_19 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_App_2, b_143, a_143)), term_q_87);
          h_19 = t;
          t = SSL_printnl(g_19, h_19);
          t = (ATerm) ATmakeAppl(sym_App_2, b_143, a_143);
        }
        ;
        LocalPopChoice(l_87);
      }
    else
      {
        t = k_87;
      }
    t = eval_0_0(t);
    {
      ATerm r_87 = t;
      int s_87 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_143 = NULL,n_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL,z_19 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL;
          c_143 = t;
          t = term_s_75;
          q_19 = t;
          t = term_r_54;
          n_19 = t;
          t = q_19;
          r_19 = t;
          t = term_s_75;
          p_19 = t;
          t = SSL_table_get(n_19, p_19);
          {
            ATerm t_87 = t;
            int u_87 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_113 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL,y_19 = NULL;
                t = eval_config_0_0(t);
                w_113 = t;
                u_19 = t;
                t = term_r_54;
                s_19 = t;
                t = u_19;
                y_19 = t;
                t = term_s_75;
                t_19 = t;
                t = SSL_table_put(s_19, t_19, w_113);
                t = w_113;
                ;
                LocalPopChoice(u_87);
              }
            else
              {
                t = t_87;
              }
            t = term_v_87;
            c_20 = t;
            t = term_v_54;
            z_19 = t;
            t = c_20;
            d_20 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, c_143), term_v_87);
            b_20 = t;
            t = SSL_printnl(z_19, b_20);
            t = c_143;
          }
          ;
          LocalPopChoice(s_87);
        }
      else
        {
          t = r_87;
        }
      {
        ATerm w_87 = t;
        int x_87 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL;
            if(!(match_cons(t, sym_Fail_0)))
              _fail(t);
            g_20 = t;
            t = term_v_54;
            e_20 = t;
            t = g_20;
            h_20 = t;
            t = (ATerm) ATinsert(ATempty, term_y_87);
            f_20 = t;
            t = SSL_printnl(e_20, f_20);
            j_20 = t;
            t = term_i_55;
            i_20 = t;
            t = SSL_exit(i_20);
            t = (ATerm) ATinsert(ATempty, term_y_87);
            ;
            LocalPopChoice(x_87);
          }
        else
          {
            t = w_87;
          }
      }
    }
  }
  return(t);
}
ATerm q_48 (ATerm t)
{
  ATerm z_87 = t;
  int c_88 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_dump_0_0(t);
      ;
      LocalPopChoice(c_88);
    }
  else
    {
      t = z_87;
      {
        ATerm d_88 = t;
        int e_88 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_load_0_0(t);
            ;
            LocalPopChoice(e_88);
          }
        else
          {
            t = d_88;
            {
              ATerm f_88 = t;
              int g_88 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_import_0_0(t);
                  ;
                  LocalPopChoice(g_88);
                }
              else
                {
                  t = f_88;
                  {
                    ATerm h_88 = t;
                    int i_88 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm n_143 = NULL;
                        if(match_cons(t, sym_Strategies_1))
                          {
                            n_143 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = n_143;
                        t = map_1_0(r_48, t);
                        t = define_strategies_0_0(t);
                        ;
                        LocalPopChoice(i_88);
                      }
                    else
                      {
                        t = h_88;
                        t = eval_rules_0_0(t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm r_48 (ATerm t)
{
  t = bottomup_1_0(x_48, t);
  t = DeclareVariables_0_0(t);
  t = desugar_0_0(t);
  t = strename_0_0(t);
  return(t);
}
ATerm x_48 (ATerm t)
{
  ATerm j_88 = t;
  int k_88 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_88 = t;
      int n_88 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = DefLRule_0_0(t);
          ;
          LocalPopChoice(n_88);
        }
      else
        {
          t = m_88;
          {
            ATerm u_143 = NULL,w_143 = NULL;
            if(match_cons(t, sym_ScopeDefault_1))
              {
                u_143 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = u_143;
            t = free_vars_3_0(y_48, z_48, tboundin_3_0, t);
            w_143 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, w_143, u_143);
          }
        }
      ;
      LocalPopChoice(k_88);
    }
  else
    {
      t = j_88;
    }
  return(t);
}
ATerm y_48 (ATerm t)
{
  ATerm x_143 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_143 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, x_143);
  return(t);
}
ATerm z_48 (ATerm t)
{
  ATerm o_88 = t;
  int p_88 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(p_88);
    }
  else
    {
      t = o_88;
      {
        ATerm z_143 = NULL,b_144 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            z_143 = ATgetArgument(t, 0);
            t = z_143;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm q_88 = t;
            int r_88 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm s_88 = ATgetArgument(t, 0);
                    ATerm t_88 = ATgetArgument(t, 1);
                    b_144 = ATgetArgument(t, 2);
                    {
                      ATerm v_88 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(r_88);
                t = b_144;
                t = map_1_0(a_49, t);
              }
            else
              {
                t = q_88;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm w_88 = ATgetArgument(t, 0);
                    ATerm x_88 = ATgetArgument(t, 1);
                    b_144 = ATgetArgument(t, 2);
                    {
                      ATerm y_88 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = b_144;
                t = map_1_0(b_49, t);
              }
          }
      }
    }
  return(t);
}
ATerm a_49 (ATerm t)
{
  ATerm h_144 = NULL;
  ATerm z_88 = t;
  int a_89 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_144 = ATgetArgument(t, 0);
          {
            ATerm b_89 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_89);
      t = h_144;
    }
  else
    {
      t = z_88;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_144 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_144;
    }
  return(t);
}
ATerm b_49 (ATerm t)
{
  ATerm n_144 = NULL;
  ATerm c_89 = t;
  int e_89 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_144 = ATgetArgument(t, 0);
          {
            ATerm f_89 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_89);
      t = n_144;
    }
  else
    {
      t = c_89;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_144 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_144;
    }
  return(t);
}
ATerm eval_command_0_0 (ATerm t)
{
  ATerm g_89 = t;
  int h_89 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_89 = t;
      int j_89 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_143 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL,n_20 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,g_22 = NULL;
          l_143 = t;
          t = term_q_54;
          m_20 = t;
          t = term_r_54;
          k_20 = t;
          t = m_20;
          n_20 = t;
          t = term_q_54;
          l_20 = t;
          t = SSL_table_get(k_20, l_20);
          {
            ATerm k_89 = t;
            int l_89 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_115 = NULL,p_20 = NULL,h_21 = NULL,i_21 = NULL,k_21 = NULL;
                t = eval_config_0_0(t);
                t_115 = t;
                i_21 = t;
                t = term_r_54;
                p_20 = t;
                t = i_21;
                k_21 = t;
                t = term_q_54;
                h_21 = t;
                t = SSL_table_put(p_20, h_21, t_115);
                t = t_115;
                ;
                LocalPopChoice(l_89);
              }
            else
              {
                t = k_89;
              }
            t = term_m_89;
            q_21 = t;
            t = term_v_54;
            o_21 = t;
            t = q_21;
            g_22 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, l_143), term_m_89);
            p_21 = t;
            t = SSL_printnl(o_21, p_21);
            t = l_143;
          }
          ;
          LocalPopChoice(j_89);
        }
      else
        {
          t = i_89;
        }
      {
        ATerm n_89 = t;
        int o_89 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_strategy_0_0(t);
            ;
            LocalPopChoice(o_89);
          }
        else
          {
            t = n_89;
            {
              ATerm y_116 = NULL,z_116 = NULL;
              t = _2_0(q_48, _id, t);
              y_116 = t;
              t = SSL_explode_term(y_116);
              if(match_cons(t, sym__2))
                {
                  ATerm p_89 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) p_89) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm r_89 = ATgetArgument(t, 1);
                    if(((ATgetType(r_89) == AT_LIST) && !(ATisEmpty(r_89))))
                      {
                        ATerm t_89 = ATgetFirst((ATermList) r_89);
                        ATerm u_89 = (ATerm) ATgetNext((ATermList) r_89);
                        if(((ATgetType(u_89) == AT_LIST) && !(ATisEmpty(u_89))))
                          {
                            z_116 = ATgetFirst((ATermList) u_89);
                            {
                              ATerm v_89 = (ATerm) ATgetNext((ATermList) u_89);
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
              t = z_116;
            }
          }
      }
      ;
      LocalPopChoice(h_89);
    }
  else
    {
      t = g_89;
      {
        ATerm a_117 = NULL,m_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL,l_22 = NULL,n_22 = NULL;
        a_117 = t;
        t = term_w_89;
        k_22 = t;
        t = term_v_54;
        i_22 = t;
        t = k_22;
        l_22 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, a_117), term_w_89);
        j_22 = t;
        t = SSL_printnl(i_22, j_22);
        n_22 = t;
        t = term_i_55;
        m_22 = t;
        t = SSL_exit(m_22);
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm u_132 (ATerm), ATerm t)
{
  ATerm q_144 (ATerm t)
  {
    ATerm x_89 = t;
    int y_89 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_132(t);
        t = q_144(t);
        ;
        LocalPopChoice(y_89);
      }
    else
      {
        t = x_89;
      }
    return(t);
  }
  t = q_144(t);
  return(t);
}
ATerm c_49 (ATerm t)
{
  ATerm r_144 = NULL,s_144 = NULL,t_144 = NULL,u_144 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_89 = ATgetArgument(t, 0);
      if(((ATgetType(z_89) == AT_LIST) && !(ATisEmpty(z_89))))
        {
          r_144 = ATgetFirst((ATermList) z_89);
          s_144 = (ATerm) ATgetNext((ATermList) z_89);
        }
      else
        _fail(t);
      t_144 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_144, t_144);
  t = eval_command_0_0(t);
  u_144 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_144, u_144);
  return(t);
}
ATerm evaluate_commands_0_0 (ATerm t)
{
  t = repeat_1_0(c_49, t);
  return(t);
}
ATerm j_145 (ATerm d_145, ATerm t)
{
  t = SSL_fclose(d_145);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm g_145 = NULL,h_145 = NULL;
  h_145 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_145 = ATgetArgument(t, 0);
      {
        ATerm a_90 = t;
        int b_90 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(g_145);
            ;
            LocalPopChoice(b_90);
          }
        else
          {
            t = a_90;
            t = j_145(h_145, t);
          }
      }
    }
  else
    {
      t = j_145(h_145, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm k_145 = NULL;
  t = SSL_stdin_stream();
  k_145 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_145);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm l_145 = NULL;
  t = SSL_stdout_stream();
  l_145 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_145);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm m_145 = NULL;
  t = SSL_stderr_stream();
  m_145 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_145);
  return(t);
}
ATerm d_49 (ATerm t)
{
  ATerm x_145 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      x_145 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_145;
  return(t);
}
ATerm e_49 (ATerm t)
{
  ATerm b_146 = NULL;
  b_146 = t;
  t = SSL_is_string(b_146);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_90 = ATgetArgument(t, 0);
      ATerm d_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_90 = t;
    int f_90 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_128 = NULL,e_128 = NULL;
        d_128 = t;
        t = SSL_explode_term(d_128);
        if(match_cons(t, sym__2))
          {
            ATerm g_90 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) g_90) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm h_90 = ATgetArgument(t, 1);
              if(((ATgetType(h_90) == AT_LIST) && !(ATisEmpty(h_90))))
                {
                  e_128 = ATgetFirst((ATermList) h_90);
                  {
                    ATerm i_90 = (ATerm) ATgetNext((ATermList) h_90);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = e_128;
        if(match_cons(t, sym_stderr_0))
          {
            t = e_128;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = e_128;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = e_128;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(f_90);
      }
    else
      {
        t = e_90;
        {
          ATerm j_90 = t;
          int k_90 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_145 = NULL,v_145 = NULL,w_145 = NULL;
              t = _2_0(d_49, _id, t);
              if(match_cons(t, sym__2))
                {
                  u_145 = ATgetArgument(t, 0);
                  v_145 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(u_145, v_145);
              w_145 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, w_145);
              ;
              LocalPopChoice(k_90);
            }
          else
            {
              t = j_90;
              {
                ATerm y_145 = NULL,z_145 = NULL,a_146 = NULL;
                t = _2_0(e_49, _id, t);
                if(match_cons(t, sym__2))
                  {
                    y_145 = ATgetArgument(t, 0);
                    z_145 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(y_145, z_145);
                a_146 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, a_146);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm c_146 = NULL,d_146 = NULL,e_146 = NULL;
  ATerm l_90 = t;
  int m_90 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_146 = NULL;
      f_146 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_146, term_n_90);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(m_90);
    }
  else
    {
      t = l_90;
      {
        ATerm f_128 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL;
        f_128 = t;
        t = term_o_90;
        q_22 = t;
        t = term_v_54;
        o_22 = t;
        t = q_22;
        r_22 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, f_128), term_o_90);
        p_22 = t;
        t = SSL_printnl(o_22, p_22);
        t = f_128;
        _fail(t);
      }
    }
  c_146 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_146 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(e_146);
  d_146 = t;
  t = c_146;
  t = fclose_0_0(t);
  t = d_146;
  return(t);
}
ATerm copyright_0_0 (ATerm t)
{
  ATerm k_146 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL,m_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL,x_23 = NULL,y_23 = NULL,z_23 = NULL,b_24 = NULL,c_24 = NULL;
  k_146 = t;
  u_22 = t;
  t = term_v_54;
  s_22 = t;
  t = u_22;
  v_22 = t;
  t = (ATerm) ATinsert(ATempty, term_p_90);
  t_22 = t;
  t = SSL_printnl(s_22, t_22);
  y_22 = t;
  t = term_v_54;
  w_22 = t;
  t = y_22;
  z_22 = t;
  t = (ATerm) ATinsert(ATempty, term_q_90);
  x_22 = t;
  t = SSL_printnl(w_22, x_22);
  c_23 = t;
  t = term_v_54;
  a_23 = t;
  t = c_23;
  d_23 = t;
  t = (ATerm) ATinsert(ATempty, term_r_90);
  b_23 = t;
  t = SSL_printnl(a_23, b_23);
  g_23 = t;
  t = term_v_54;
  e_23 = t;
  t = g_23;
  h_23 = t;
  t = (ATerm) ATinsert(ATempty, term_s_90);
  f_23 = t;
  t = SSL_printnl(e_23, f_23);
  k_23 = t;
  t = term_v_54;
  i_23 = t;
  t = k_23;
  l_23 = t;
  t = (ATerm) ATinsert(ATempty, term_t_90);
  j_23 = t;
  t = SSL_printnl(i_23, j_23);
  q_23 = t;
  t = term_v_54;
  m_23 = t;
  t = q_23;
  r_23 = t;
  t = (ATerm) ATinsert(ATempty, term_u_90);
  p_23 = t;
  t = SSL_printnl(m_23, p_23);
  u_23 = t;
  t = term_v_54;
  s_23 = t;
  t = u_23;
  x_23 = t;
  t = (ATerm) ATinsert(ATempty, term_v_90);
  t_23 = t;
  t = SSL_printnl(s_23, t_23);
  b_24 = t;
  t = term_v_54;
  y_23 = t;
  t = b_24;
  c_24 = t;
  t = (ATerm) ATinsert(ATempty, term_p_90);
  z_23 = t;
  t = SSL_printnl(y_23, z_23);
  t = k_146;
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm t_146 = NULL,u_146 = NULL,v_146 = NULL;
  t_146 = t;
  if(match_cons(t, sym__2))
    {
      u_146 = ATgetArgument(t, 0);
      v_146 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_90 = t;
    int x_90 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_146;
        if((u_146 != t))
          {
            _fail(t);
          }
        t = t_146;
        ;
        LocalPopChoice(x_90);
      }
    else
      {
        t = w_90;
        t = t_146;
        {
          ATerm y_90 = t;
          int z_90 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(u_146, v_146);
              ;
              LocalPopChoice(z_90);
            }
          else
            {
              t = y_90;
              t = SSL_gtr(u_146, v_146);
            }
          t = (ATerm) ATmakeAppl(sym__2, u_146, v_146);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm j_153 (ATerm), ATerm t)
{
  ATerm a_91 = t;
  int b_91 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_146 = NULL,c_147 = NULL,f_24 = NULL,g_24 = NULL,j_24 = NULL,q_24 = NULL;
      y_146 = t;
      t = term_c_91;
      j_24 = t;
      t = term_r_54;
      f_24 = t;
      t = j_24;
      q_24 = t;
      t = term_c_91;
      g_24 = t;
      t = SSL_table_get(f_24, g_24);
      {
        ATerm d_91 = t;
        int e_91 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_130 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL;
            t = eval_config_0_0(t);
            w_130 = t;
            t_24 = t;
            t = term_r_54;
            r_24 = t;
            t = t_24;
            u_24 = t;
            t = term_c_91;
            s_24 = t;
            t = SSL_table_put(r_24, s_24, w_130);
            t = w_130;
            ;
            LocalPopChoice(e_91);
          }
        else
          {
            t = d_91;
          }
        c_147 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_147, term_i_55);
        t = geq_0_0(t);
        t = y_146;
        t = j_153(t);
      }
      ;
      LocalPopChoice(b_91);
    }
  else
    {
      t = a_91;
    }
  return(t);
}
ATerm extend_config_0_0 (ATerm t)
{
  ATerm g_147 = NULL,h_147 = NULL,i_147 = NULL,j_147 = NULL,k_25 = NULL,l_25 = NULL;
  if(match_cons(t, sym__2))
    {
      g_147 = ATgetArgument(t, 0);
      h_147 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_147;
  {
    ATerm f_91 = t;
    int g_91 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_24 = NULL,w_24 = NULL;
        w_24 = t;
        t = term_r_54;
        v_24 = t;
        t = SSL_table_get(v_24, g_147);
        {
          ATerm h_91 = t;
          int i_91 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_132 = NULL,x_24 = NULL,y_24 = NULL;
              t = eval_config_0_0(t);
              f_132 = t;
              y_24 = t;
              t = term_r_54;
              x_24 = t;
              t = SSL_table_put(x_24, g_147, f_132);
              t = f_132;
              ;
              LocalPopChoice(i_91);
            }
          else
            {
              t = h_91;
            }
        }
        ;
        LocalPopChoice(g_91);
      }
    else
      {
        t = f_91;
        t = (ATerm) ATempty;
      }
    i_147 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_147, i_147);
    {
      ATerm j_91 = t;
      int k_91 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm l_91 = ATgetArgument(t, 0);
              ATerm m_91 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = h_147;
          {
            ATerm h_49 (ATerm t)
            {
              t = i_147;
              return(t);
            }
            t = at_end_1_0(h_49, t);
          }
          ;
          LocalPopChoice(k_91);
        }
      else
        {
          t = j_91;
          {
            ATerm v_132 = NULL,z_24 = NULL,a_25 = NULL;
            a_25 = t;
            t = (ATerm) ATmakeAppl(sym__2, h_147, i_147);
            z_24 = t;
            t = SSL_explode_term(z_24);
            if(match_cons(t, sym__2))
              {
                ATerm n_91 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) n_91) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                v_132 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = v_132;
            t = concat_0_0(t);
          }
        }
      j_147 = t;
      l_25 = t;
      t = term_r_54;
      k_25 = t;
      t = SSL_table_put(k_25, g_147, j_147);
      t = (ATerm) ATmakeAppl(sym__3, term_r_54, g_147, j_147);
    }
  }
  return(t);
}
ATerm i_49 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-I", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_49 (ATerm t)
{
  ATerm n_147 = NULL;
  n_147 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_75, (ATerm) ATinsert(ATinsert(ATempty, n_147), term_w_75));
  t = extend_config_0_0(t);
  return(t);
}
ATerm k_49 (ATerm t)
{
  t = term_o_91;
  return(t);
}
ATerm l_49 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("@version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_49 (ATerm t)
{
  ATerm o_147 = NULL,p_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL;
  o_147 = t;
  s_25 = t;
  t = term_r_54;
  p_25 = t;
  t = s_25;
  t_25 = t;
  t = term_p_91;
  r_25 = t;
  t = SSL_table_put(p_25, r_25, o_147);
  t = (ATerm) ATmakeAppl(sym__3, term_r_54, term_p_91, o_147);
  return(t);
}
ATerm o_49 (ATerm t)
{
  t = term_q_91;
  return(t);
}
ATerm p_49 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-d", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_49 (ATerm t)
{
  ATerm w_25 = NULL,x_25 = NULL,y_25 = NULL,a_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL,t_26 = NULL,u_26 = NULL;
  a_26 = t;
  t = term_r_54;
  w_25 = t;
  t = a_26;
  d_26 = t;
  t = term_q_54;
  x_25 = t;
  t = d_26;
  e_26 = t;
  t = term_i_55;
  y_25 = t;
  t = SSL_table_put(w_25, x_25, y_25);
  p_26 = t;
  t = term_r_54;
  f_26 = t;
  t = p_26;
  t_26 = t;
  t = term_c_91;
  n_26 = t;
  t = t_26;
  u_26 = t;
  t = term_y_70;
  o_26 = t;
  t = SSL_table_put(f_26, n_26, o_26);
  t = term_r_91;
  return(t);
}
ATerm s_49 (ATerm t)
{
  t = term_s_91;
  return(t);
}
ATerm t_49 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-t", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_49 (ATerm t)
{
  ATerm v_26 = NULL,w_26 = NULL,x_26 = NULL,z_26 = NULL,a_27 = NULL,b_27 = NULL;
  z_26 = t;
  t = term_r_54;
  v_26 = t;
  t = z_26;
  a_27 = t;
  t = term_s_75;
  w_26 = t;
  t = a_27;
  b_27 = t;
  t = term_i_55;
  x_26 = t;
  t = SSL_table_put(v_26, w_26, x_26);
  t = term_t_91;
  return(t);
}
ATerm v_49 (ATerm t)
{
  t = term_u_91;
  return(t);
}
ATerm si_options_0_0 (ATerm t)
{
  ATerm v_91 = t;
  int w_91 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(i_49, j_49, k_49, t);
      ;
      LocalPopChoice(w_91);
    }
  else
    {
      t = v_91;
      {
        ATerm x_91 = t;
        int y_91 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(l_49, n_49, o_49, t);
            ;
            LocalPopChoice(y_91);
          }
        else
          {
            t = x_91;
            {
              ATerm z_91 = t;
              int a_92 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(p_49, r_49, s_49, t);
                  ;
                  LocalPopChoice(a_92);
                }
              else
                {
                  t = z_91;
                  t = Option_3_0(t_49, u_49, v_49, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm w_49 (ATerm t)
{
  ATerm q_147 = NULL;
  q_147 = t;
  if(match_string(t, "-k"))
    {
      t = q_147;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = q_147;
    }
  return(t);
}
ATerm x_49 (ATerm t)
{
  ATerm r_147 = NULL,s_147 = NULL,d_27 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL;
  r_147 = t;
  t = SSL_string_to_int(r_147);
  s_147 = t;
  f_27 = t;
  t = term_r_54;
  d_27 = t;
  t = f_27;
  g_27 = t;
  t = term_b_92;
  e_27 = t;
  t = SSL_table_put(d_27, e_27, s_147);
  t = r_147;
  return(t);
}
ATerm a_50 (ATerm t)
{
  t = term_c_92;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_49, x_49, a_50, t);
  return(t);
}
ATerm b_50 (ATerm t)
{
  ATerm u_147 = NULL;
  u_147 = t;
  if(match_string(t, "-S"))
    {
      t = u_147;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = u_147;
    }
  return(t);
}
ATerm c_50 (ATerm t)
{
  ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL,o_27 = NULL,q_27 = NULL;
  n_27 = t;
  t = term_r_54;
  k_27 = t;
  t = n_27;
  o_27 = t;
  t = term_c_91;
  l_27 = t;
  t = o_27;
  q_27 = t;
  t = term_f_55;
  m_27 = t;
  t = SSL_table_put(k_27, l_27, m_27);
  t = term_d_92;
  return(t);
}
ATerm d_50 (ATerm t)
{
  t = term_e_92;
  return(t);
}
ATerm e_50 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_50 (ATerm t)
{
  ATerm v_147 = NULL,w_147 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL;
  v_147 = t;
  t = SSL_string_to_int(v_147);
  w_147 = t;
  u_27 = t;
  t = term_r_54;
  s_27 = t;
  t = u_27;
  v_27 = t;
  t = term_c_91;
  t_27 = t;
  t = SSL_table_put(s_27, t_27, w_147);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, v_147);
  return(t);
}
ATerm g_50 (ATerm t)
{
  t = term_f_92;
  return(t);
}
ATerm h_50 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_50 (ATerm t)
{
  ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL;
  z_27 = t;
  t = term_r_54;
  w_27 = t;
  t = z_27;
  a_28 = t;
  t = term_g_92;
  x_27 = t;
  t = a_28;
  b_28 = t;
  t = term_h_92;
  y_27 = t;
  t = SSL_table_put(w_27, x_27, y_27);
  t = term_i_92;
  return(t);
}
ATerm j_50 (ATerm t)
{
  t = term_j_92;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm k_92 = t;
  int l_92 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_50, c_50, d_50, t);
      ;
      LocalPopChoice(l_92);
    }
  else
    {
      t = k_92;
      {
        ATerm m_92 = t;
        int n_92 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(e_50, f_50, g_50, t);
            ;
            LocalPopChoice(n_92);
          }
        else
          {
            t = m_92;
            t = Option_3_0(h_50, i_50, j_50, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm t)
{
  ATerm z_147 = NULL,a_148 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_148 = NULL;
      t = term_h_92;
      t = c_0(t);
      b_148 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_92, term_p_92, b_148);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm e_148 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_147 = ATgetFirst((ATermList) t);
          a_148 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_147;
      t = a_0(t);
      t = term_h_92;
      t = b_0(t);
      e_148 = t;
      t = (ATerm) ATinsert(CheckATermList(a_148), e_148);
    }
  return(t);
}
ATerm k_50 (ATerm t)
{
  ATerm g_148 = NULL;
  g_148 = t;
  if(match_string(t, "-o"))
    {
      t = g_148;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = g_148;
    }
  return(t);
}
ATerm n_50 (ATerm t)
{
  ATerm h_148 = NULL,c_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL;
  h_148 = t;
  f_28 = t;
  t = term_r_54;
  c_28 = t;
  t = f_28;
  g_28 = t;
  t = term_s_92;
  e_28 = t;
  t = SSL_table_put(c_28, e_28, h_148);
  t = (ATerm) ATmakeAppl(sym_Output_1, h_148);
  return(t);
}
ATerm o_50 (ATerm t)
{
  t = term_t_92;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_50, n_50, o_50, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm k_148 = NULL,l_148 = NULL,m_148 = NULL,n_148 = NULL,h_28 = NULL,i_28 = NULL;
  if(match_cons(t, sym__3))
    {
      k_148 = ATgetArgument(t, 0);
      l_148 = ATgetArgument(t, 1);
      m_148 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_148, l_148);
  {
    ATerm u_92 = t;
    int v_92 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_92 = ATgetArgument(t, 0);
            ATerm x_92 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(k_148, l_148);
        ;
        LocalPopChoice(v_92);
      }
    else
      {
        t = u_92;
        t = (ATerm) ATempty;
      }
    n_148 = t;
    i_28 = t;
    t = (ATerm) ATinsert(CheckATermList(n_148), m_148);
    h_28 = t;
    t = SSL_table_put(k_148, l_148, h_28);
    t = (ATerm) ATmakeAppl(sym__3, k_148, l_148, m_148);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm v_148 = NULL,w_148 = NULL,x_148 = NULL,y_148 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_148 = NULL;
      t = term_h_92;
      t = h_0(t);
      z_148 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_92, term_p_92, z_148);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm d_149 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_148 = ATgetFirst((ATermList) t);
          w_148 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_148;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_148 = ATgetFirst((ATermList) t);
          y_148 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_148;
      t = f_0(t);
      t = x_148;
      t = g_0(t);
      d_149 = t;
      t = (ATerm) ATinsert(CheckATermList(y_148), d_149);
    }
  return(t);
}
ATerm p_50 (ATerm t)
{
  ATerm f_149 = NULL;
  f_149 = t;
  if(match_string(t, "-i"))
    {
      t = f_149;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = f_149;
    }
  return(t);
}
ATerm q_50 (ATerm t)
{
  ATerm j_149 = NULL,l_28 = NULL,m_28 = NULL,o_28 = NULL,q_28 = NULL;
  j_149 = t;
  o_28 = t;
  t = term_r_54;
  l_28 = t;
  t = o_28;
  q_28 = t;
  t = term_a_76;
  m_28 = t;
  t = SSL_table_put(l_28, m_28, j_149);
  t = (ATerm) ATmakeAppl(sym_Input_1, j_149);
  return(t);
}
ATerm r_50 (ATerm t)
{
  t = term_y_92;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_50, q_50, r_50, t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm l_149 = NULL,m_149 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_149 = ATgetFirst((ATermList) t);
      m_149 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm q_149 = NULL,r_149 = NULL;
        t = m_149;
        t = e_0(t);
        q_149 = t;
        t = l_149;
        t = d_0(t);
        r_149 = t;
        t = m_149;
        {
          ATerm s_50 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(q_149), r_149);
            return(t);
          }
          t = reverse_acc_2_0(d_0, s_50, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_h_92;
      t = e_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm c_124 (ATerm), ATerm t)
{
  ATerm s_149 = NULL,t_149 = NULL,u_149 = NULL,v_149 = NULL,r_28 = NULL,s_28 = NULL;
  v_149 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_149 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_149);
  s_149 = t;
  t = t_149;
  t = c_124(t);
  u_149 = t;
  s_28 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, u_149);
  r_28 = t;
  t = SSLsetAnnotations(r_28, s_149);
  return(t);
}
ATerm t_50 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm u_50 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm v_50 (ATerm t)
{
  ATerm y_149 = NULL;
  y_149 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_149), term_z_92);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm l_29 = NULL,m_29 = NULL,o_29 = NULL,p_29 = NULL;
  ATerm a_93 = t;
  int b_93 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL;
      t = term_c_93;
      z_28 = t;
      t = term_r_54;
      u_28 = t;
      t = z_28;
      a_29 = t;
      t = term_c_93;
      y_28 = t;
      t = SSL_table_get(u_28, y_28);
      {
        ATerm d_93 = t;
        int e_93 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_134 = NULL,b_29 = NULL,c_29 = NULL,j_29 = NULL,k_29 = NULL;
            t = eval_config_0_0(t);
            x_134 = t;
            j_29 = t;
            t = term_r_54;
            b_29 = t;
            t = j_29;
            k_29 = t;
            t = term_c_93;
            c_29 = t;
            t = SSL_table_put(b_29, c_29, x_134);
            t = x_134;
            ;
            LocalPopChoice(e_93);
          }
        else
          {
            t = d_93;
          }
      }
      ;
      LocalPopChoice(b_93);
    }
  else
    {
      t = a_93;
      t = fetch_1_0(t_50, t);
    }
  t = term_f_93;
  t = echo_0_0(t);
  o_29 = t;
  t = term_o_92;
  l_29 = t;
  t = o_29;
  p_29 = t;
  t = term_p_92;
  m_29 = t;
  t = SSL_table_get(l_29, m_29);
  t = reverse_acc_2_0(_id, u_50, t);
  t = map_1_0(v_50, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm d_124 (ATerm), ATerm t)
{
  ATerm z_149 = NULL,a_150 = NULL,b_150 = NULL,c_150 = NULL,q_29 = NULL,r_29 = NULL;
  c_150 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      a_150 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_150);
  z_149 = t;
  t = a_150;
  t = d_124(t);
  b_150 = t;
  r_29 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, b_150);
  q_29 = t;
  t = SSLsetAnnotations(q_29, z_149);
  return(t);
}
ATerm fetch_1_0 (ATerm u_139 (ATerm), ATerm t)
{
  ATerm f_150 (ATerm t)
  {
    ATerm g_93 = t;
    int h_93 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(u_139, _id, t);
        ;
        LocalPopChoice(h_93);
      }
    else
      {
        t = g_93;
        t = Cons_2_0(_id, f_150, t);
      }
    return(t);
  }
  t = f_150(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm h_150 = NULL,i_150 = NULL,w_29 = NULL,x_29 = NULL;
  h_150 = t;
  {
    ATerm i_93 = t;
    int j_93 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = h_150;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm k_93 = ATgetFirst((ATermList) t);
                ATerm l_93 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = h_150;
          }
        ;
        LocalPopChoice(j_93);
      }
    else
      {
        t = i_93;
        t = (ATerm) ATinsert(ATempty, h_150);
      }
    i_150 = t;
    x_29 = t;
    t = term_m_93;
    w_29 = t;
    t = SSL_printnl(w_29, i_150);
    t = h_150;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL,e_30 = NULL;
  t = term_c_93;
  b_30 = t;
  t = term_r_54;
  z_29 = t;
  t = b_30;
  e_30 = t;
  t = term_c_93;
  a_30 = t;
  t = SSL_table_get(z_29, a_30);
  {
    ATerm n_93 = t;
    int o_93 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_135 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL,i_30 = NULL;
        t = eval_config_0_0(t);
        f_135 = t;
        h_30 = t;
        t = term_r_54;
        f_30 = t;
        t = h_30;
        i_30 = t;
        t = term_c_93;
        g_30 = t;
        t = SSL_table_put(f_30, g_30, f_135);
        t = f_135;
        ;
        LocalPopChoice(o_93);
      }
    else
      {
        t = n_93;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm p_93 = t;
  int q_93 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(q_93);
    }
  else
    {
      t = p_93;
      {
        ATerm o_150 = NULL,p_150 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_150 = ATgetFirst((ATermList) t);
            p_150 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = o_150;
        {
          ATerm w_50 (ATerm t)
          {
            t = p_150;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(w_50, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm a_140 (ATerm), ATerm t)
{
  ATerm v_150 (ATerm t)
  {
    ATerm r_93 = t;
    int s_93 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, v_150, t);
        ;
        LocalPopChoice(s_93);
      }
    else
      {
        t = r_93;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = a_140(t);
      }
    return(t);
  }
  t = v_150(t);
  return(t);
}
ATerm x_50 (ATerm t)
{
  ATerm y_150 = NULL;
  y_150 = t;
  t = SSL_explode_string(y_150);
  return(t);
}
ATerm a_51 (ATerm t)
{
  ATerm z_150 = NULL;
  z_150 = t;
  t = SSL_explode_string(z_150);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm x_150 = NULL;
  t = _2_0(x_50, a_51, t);
  {
    ATerm t_93 = t;
    int u_93 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_151 = NULL,c_151 = NULL;
        if(match_cons(t, sym__2))
          {
            b_151 = ATgetArgument(t, 0);
            c_151 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_151;
        {
          ATerm b_51 (ATerm t)
          {
            t = c_151;
            return(t);
          }
          t = at_end_1_0(b_51, t);
        }
        ;
        LocalPopChoice(u_93);
      }
    else
      {
        t = t_93;
        {
          ATerm x_136 = NULL,b_137 = NULL;
          x_136 = t;
          t = SSL_explode_term(x_136);
          if(match_cons(t, sym__2))
            {
              ATerm v_93 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) v_93) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              b_137 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_137;
          t = concat_0_0(t);
        }
      }
    x_150 = t;
    t = SSL_implode_string(x_150);
  }
  return(t);
}
ATerm map_1_0 (ATerm j_139 (ATerm), ATerm t)
{
  ATerm h_151 (ATerm t)
  {
    ATerm w_93 = t;
    int x_93 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(x_93);
      }
    else
      {
        t = w_93;
        t = Cons_2_0(j_139, h_151, t);
      }
    return(t);
  }
  t = h_151(t);
  return(t);
}
ATerm c_51 (ATerm t)
{
  ATerm y_93 = t;
  int z_93 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(z_93);
    }
  else
    {
      t = y_93;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm a_94 = t;
  int b_94 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_151 = NULL;
      n_151 = t;
      t = SSL_is_string(n_151);
      ;
      LocalPopChoice(b_94);
    }
  else
    {
      t = a_94;
      {
        ATerm c_94 = t;
        int d_94 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(c_51, t);
            ;
            LocalPopChoice(d_94);
          }
        else
          {
            t = c_94;
            {
              ATerm r_151 = NULL,s_151 = NULL,t_151 = NULL;
              r_151 = t;
              if(match_cons(t, sym_Path_1))
                {
                  s_151 = ATgetArgument(t, 0);
                  t = s_151;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      s_151 = ATgetArgument(t, 0);
                      t = s_151;
                      {
                        ATerm e_94 = t;
                        int f_94 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm j_30 = NULL,l_30 = NULL;
                            l_30 = t;
                            t = term_r_54;
                            j_30 = t;
                            t = SSL_table_get(j_30, s_151);
                            {
                              ATerm g_94 = t;
                              int h_94 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm d_140 = NULL,m_30 = NULL,n_30 = NULL;
                                  t = eval_config_0_0(t);
                                  d_140 = t;
                                  n_30 = t;
                                  t = term_r_54;
                                  m_30 = t;
                                  t = SSL_table_put(m_30, s_151, d_140);
                                  t = d_140;
                                  ;
                                  LocalPopChoice(h_94);
                                }
                              else
                                {
                                  t = g_94;
                                }
                            }
                            ;
                            LocalPopChoice(f_94);
                          }
                        else
                          {
                            t = e_94;
                            {
                              ATerm o_30 = NULL,q_30 = NULL,r_30 = NULL,s_30 = NULL;
                              t = term_i_94;
                              r_30 = t;
                              t = term_v_54;
                              o_30 = t;
                              t = r_30;
                              s_30 = t;
                              t = (ATerm) ATinsert(ATinsert(ATempty, s_151), term_i_94);
                              q_30 = t;
                              t = SSL_printnl(o_30, q_30);
                              t = s_151;
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm y_151 = NULL,a_152 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          s_151 = ATgetArgument(t, 0);
                          t_151 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = s_151;
                      t = eval_config_0_0(t);
                      y_151 = t;
                      t = t_151;
                      t = eval_config_0_0(t);
                      a_152 = t;
                      t = (ATerm) ATmakeAppl(sym__2, y_151, a_152);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm d_51 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_51 (ATerm t)
{
  ATerm t_30 = NULL,u_30 = NULL,w_30 = NULL,x_30 = NULL,y_30 = NULL,z_30 = NULL;
  x_30 = t;
  t = term_r_54;
  t_30 = t;
  t = x_30;
  y_30 = t;
  t = term_j_94;
  u_30 = t;
  t = y_30;
  z_30 = t;
  t = term_h_92;
  w_30 = t;
  t = SSL_table_put(t_30, u_30, w_30);
  t = term_k_94;
  return(t);
}
ATerm f_51 (ATerm t)
{
  t = term_l_94;
  return(t);
}
ATerm g_51 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_51 (ATerm t)
{
  ATerm a_31 = NULL,c_31 = NULL,d_31 = NULL,e_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL;
  e_31 = t;
  t = term_r_54;
  a_31 = t;
  t = e_31;
  g_31 = t;
  t = term_j_94;
  c_31 = t;
  t = g_31;
  h_31 = t;
  t = term_h_92;
  d_31 = t;
  t = SSL_table_put(a_31, c_31, d_31);
  l_31 = t;
  t = term_r_54;
  i_31 = t;
  t = l_31;
  m_31 = t;
  t = term_o_94;
  j_31 = t;
  t = m_31;
  n_31 = t;
  t = term_h_92;
  k_31 = t;
  t = SSL_table_put(i_31, j_31, k_31);
  t = term_p_94;
  return(t);
}
ATerm i_51 (ATerm t)
{
  t = term_q_94;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm r_94 = t;
  int s_94 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_51, e_51, f_51, t);
      ;
      LocalPopChoice(s_94);
    }
  else
    {
      t = r_94;
      t = Option_3_0(g_51, h_51, i_51, t);
    }
  return(t);
}
ATerm j_51 (ATerm t)
{
  ATerm h_152 = NULL,p_31 = NULL,r_31 = NULL,s_31 = NULL,t_31 = NULL;
  h_152 = t;
  s_31 = t;
  t = term_r_54;
  p_31 = t;
  t = s_31;
  t_31 = t;
  t = term_c_93;
  r_31 = t;
  t = SSL_table_put(p_31, r_31, h_152);
  t = (ATerm) ATmakeAppl(sym_Program_1, h_152);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm c_158 (ATerm), ATerm t)
{
  ATerm g_152 = NULL;
  g_152 = t;
  {
    ATerm t_94 = t;
    int u_94 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_94;
        t = c_158(t);
        ;
        LocalPopChoice(u_94);
      }
    else
      {
        t = t_94;
      }
    t = g_152;
    {
      ATerm k_51 (ATerm t)
      {
        ATerm w_94 = t;
        int y_94 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_94 = t;
            int a_95 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(a_95);
              }
            else
              {
                t = z_94;
                t = c_158(t);
                t = Cons_2_0(_id, k_51, t);
              }
            ;
            LocalPopChoice(y_94);
          }
        else
          {
            t = w_94;
            {
              ATerm j_152 = NULL,k_152 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  j_152 = ATgetFirst((ATermList) t);
                  k_152 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(k_152), (ATerm) ATmakeAppl(sym_Undefined_1, j_152));
            }
          }
        return(t);
      }
      t = Cons_2_0(j_51, k_51, t);
    }
  }
  return(t);
}
ATerm o_51 (ATerm t)
{
  ATerm u_152 = NULL;
  u_152 = t;
  if(match_string(t, "--help"))
    {
      t = u_152;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = u_152;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = u_152;
        }
    }
  return(t);
}
ATerm p_51 (ATerm t)
{
  ATerm b_32 = NULL,c_32 = NULL,d_32 = NULL,e_32 = NULL,f_32 = NULL,g_32 = NULL;
  e_32 = t;
  t = term_r_54;
  b_32 = t;
  t = e_32;
  f_32 = t;
  t = term_b_95;
  c_32 = t;
  t = f_32;
  g_32 = t;
  t = term_h_92;
  d_32 = t;
  t = SSL_table_put(b_32, c_32, d_32);
  t = term_c_95;
  return(t);
}
ATerm q_51 (ATerm t)
{
  t = term_d_95;
  return(t);
}
ATerm r_51 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm b_158 (ATerm), ATerm t)
{
  ATerm r_152 = NULL,s_152 = NULL,t_152 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL,x_31 = NULL,y_31 = NULL,z_31 = NULL,l_33 = NULL,m_33 = NULL;
  r_152 = t;
  x_31 = t;
  t = term_o_92;
  u_31 = t;
  t = x_31;
  y_31 = t;
  t = term_p_92;
  v_31 = t;
  t = y_31;
  z_31 = t;
  t = (ATerm) ATempty;
  w_31 = t;
  t = SSL_table_put(u_31, v_31, w_31);
  t = r_152;
  {
    ATerm n_51 (ATerm t)
    {
      ATerm e_95 = t;
      int f_95 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_158(t);
          ;
          LocalPopChoice(f_95);
        }
      else
        {
          t = e_95;
          {
            ATerm g_95 = t;
            int h_95 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(o_51, p_51, q_51, t);
                ;
                LocalPopChoice(h_95);
              }
            else
              {
                t = g_95;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(n_51, t);
    {
      ATerm i_95 = t;
      int j_95 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_152 = NULL;
          z_152 = t;
          {
            ATerm k_95 = t;
            int l_95 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_32 = NULL,r_32 = NULL;
                t = z_152;
                {
                  ATerm m_95 = t;
                  int n_95 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm h_32 = NULL,i_32 = NULL,j_32 = NULL,k_32 = NULL;
                      t = term_b_95;
                      j_32 = t;
                      t = term_r_54;
                      h_32 = t;
                      t = j_32;
                      k_32 = t;
                      t = term_b_95;
                      i_32 = t;
                      t = SSL_table_get(h_32, i_32);
                      {
                        ATerm o_95 = t;
                        int q_95 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm k_143 = NULL,l_32 = NULL,n_32 = NULL,o_32 = NULL,p_32 = NULL;
                            t = eval_config_0_0(t);
                            k_143 = t;
                            o_32 = t;
                            t = term_r_54;
                            l_32 = t;
                            t = o_32;
                            p_32 = t;
                            t = term_b_95;
                            n_32 = t;
                            t = SSL_table_put(l_32, n_32, k_143);
                            t = k_143;
                            ;
                            LocalPopChoice(q_95);
                          }
                        else
                          {
                            t = o_95;
                          }
                      }
                      ;
                      LocalPopChoice(n_95);
                    }
                  else
                    {
                      t = m_95;
                      t = fetch_1_0(r_51, t);
                    }
                  t = z_152;
                  t = default_system_usage_0_0(t);
                  r_32 = t;
                  t = term_f_55;
                  q_32 = t;
                  t = SSL_exit(q_32);
                }
                ;
                LocalPopChoice(l_95);
              }
            else
              {
                t = k_95;
                {
                  ATerm s_32 = NULL,t_32 = NULL,u_32 = NULL,v_32 = NULL,c_33 = NULL,d_33 = NULL;
                  t = term_j_94;
                  u_32 = t;
                  t = term_r_54;
                  s_32 = t;
                  t = u_32;
                  v_32 = t;
                  t = term_j_94;
                  t_32 = t;
                  t = SSL_table_get(s_32, t_32);
                  {
                    ATerm r_95 = t;
                    int s_95 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm l_146 = NULL,w_32 = NULL,z_32 = NULL,a_33 = NULL,b_33 = NULL;
                        t = eval_config_0_0(t);
                        l_146 = t;
                        a_33 = t;
                        t = term_r_54;
                        w_32 = t;
                        t = a_33;
                        b_33 = t;
                        t = term_j_94;
                        z_32 = t;
                        t = SSL_table_put(w_32, z_32, l_146);
                        t = l_146;
                        ;
                        LocalPopChoice(s_95);
                      }
                    else
                      {
                        t = r_95;
                      }
                    t = z_152;
                    t = default_system_about_0_0(t);
                    d_33 = t;
                    t = term_f_55;
                    c_33 = t;
                    t = SSL_exit(c_33);
                  }
                }
              }
          }
          ;
          LocalPopChoice(j_95);
        }
      else
        {
          t = i_95;
          {
            ATerm t_95 = t;
            int u_95 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_33 = NULL,f_33 = NULL,g_33 = NULL,h_33 = NULL,j_33 = NULL,k_33 = NULL;
                ATerm s_51 (ATerm t)
                {
                  ATerm t_51 (ATerm t)
                  {
                    if(((s_152 != NULL) && (s_152 != t)))
                      _fail(t);
                    else
                      s_152 = t;
                    return(t);
                  }
                  t = Undefined_1_0(t_51, t);
                  return(t);
                }
                t = fetch_1_0(s_51, t);
                g_33 = t;
                t = term_v_54;
                e_33 = t;
                t = g_33;
                h_33 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_152)), term_v_95);
                f_33 = t;
                t = SSL_printnl(e_33, f_33);
                t = (ATerm) ATmakeAppl(sym__2, term_v_54, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_152)), term_v_95));
                t = default_system_usage_0_0(t);
                k_33 = t;
                t = term_i_55;
                j_33 = t;
                t = SSL_exit(j_33);
                ;
                LocalPopChoice(u_95);
              }
            else
              {
                t = t_95;
              }
          }
        }
      t_152 = t;
      m_33 = t;
      t = term_o_92;
      l_33 = t;
      t = SSL_table_destroy(l_33);
      t = t_152;
    }
  }
  return(t);
}
ATerm u_51 (ATerm t)
{
  ATerm w_95 = t;
  int x_95 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_95 = t;
      int z_95 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = input_option_0_0(t);
          ;
          LocalPopChoice(z_95);
        }
      else
        {
          t = y_95;
          {
            ATerm a_96 = t;
            int b_96 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = output_option_0_0(t);
                ;
                LocalPopChoice(b_96);
              }
            else
              {
                t = a_96;
                {
                  ATerm c_96 = t;
                  int d_96 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Option_3_0(v_51, w_51, x_51, t);
                      ;
                      LocalPopChoice(d_96);
                    }
                  else
                    {
                      t = c_96;
                      {
                        ATerm e_96 = t;
                        int g_96 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = verbose_option_0_0(t);
                            ;
                            LocalPopChoice(g_96);
                          }
                        else
                          {
                            t = e_96;
                            t = keep_option_0_0(t);
                          }
                      }
                    }
                }
              }
          }
        }
      ;
      LocalPopChoice(x_95);
    }
  else
    {
      t = w_95;
      t = si_options_0_0(t);
    }
  return(t);
}
ATerm v_51 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_51 (ATerm t)
{
  ATerm v_33 = NULL,w_33 = NULL,x_33 = NULL,y_33 = NULL,z_33 = NULL,a_34 = NULL;
  y_33 = t;
  t = term_r_54;
  v_33 = t;
  t = y_33;
  z_33 = t;
  t = term_h_96;
  w_33 = t;
  t = z_33;
  a_34 = t;
  t = term_h_92;
  x_33 = t;
  t = SSL_table_put(v_33, w_33, x_33);
  t = term_i_96;
  return(t);
}
ATerm x_51 (ATerm t)
{
  t = term_j_96;
  return(t);
}
ATerm make_option_table_0_0 (ATerm t)
{
  ATerm c_153 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL,r_33 = NULL,s_33 = NULL;
  c_153 = t;
  q_33 = t;
  t = term_r_54;
  n_33 = t;
  t = q_33;
  r_33 = t;
  t = term_w_75;
  o_33 = t;
  t = r_33;
  s_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_k_96), term_w_75);
  p_33 = t;
  t = SSL_table_put(n_33, o_33, p_33);
  t = c_153;
  t = parse_options_1_0(u_51, t);
  return(t);
}
ATerm _2_0 (ATerm s_113 (ATerm), ATerm t_113 (ATerm), ATerm t)
{
  ATerm d_153 = NULL,e_153 = NULL,f_153 = NULL,g_153 = NULL,h_153 = NULL,i_153 = NULL,b_34 = NULL,c_34 = NULL;
  i_153 = t;
  if(match_cons(t, sym__2))
    {
      e_153 = ATgetArgument(t, 0);
      f_153 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_153);
  d_153 = t;
  t = e_153;
  t = s_113(t);
  g_153 = t;
  t = f_153;
  t = t_113(t);
  h_153 = t;
  c_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_153, h_153);
  b_34 = t;
  t = SSLsetAnnotations(b_34, d_153);
  return(t);
}
ATerm Cons_2_0 (ATerm h_118 (ATerm), ATerm i_118 (ATerm), ATerm t)
{
  ATerm m_153 = NULL,n_153 = NULL,o_153 = NULL,p_153 = NULL,q_153 = NULL,r_153 = NULL,d_34 = NULL,f_34 = NULL;
  r_153 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_153 = ATgetFirst((ATermList) t);
      o_153 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_153);
  m_153 = t;
  t = n_153;
  t = h_118(t);
  p_153 = t;
  t = o_153;
  t = i_118(t);
  q_153 = t;
  f_34 = t;
  t = (ATerm) ATinsert(CheckATermList(q_153), p_153);
  d_34 = t;
  t = SSLsetAnnotations(d_34, m_153);
  return(t);
}
ATerm at_suffix_1_0 (ATerm e_140 (ATerm), ATerm t)
{
  ATerm u_153 (ATerm t)
  {
    ATerm l_96 = t;
    int m_96 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_140(t);
        ;
        LocalPopChoice(m_96);
      }
    else
      {
        t = l_96;
        t = Cons_2_0(_id, u_153, t);
      }
    return(t);
  }
  t = u_153(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm x_139 (ATerm), ATerm t)
{
  ATerm v_153 = NULL,w_153 = NULL;
  ATerm a_52 (ATerm t)
  {
    t = Cons_2_0(x_139, _id, t);
    {
      ATerm b_52 (ATerm t)
      {
        if(((v_153 != NULL) && (v_153 != t)))
          _fail(t);
        else
          v_153 = t;
        return(t);
      }
      t = Cons_2_0(_id, b_52, t);
      t = (ATerm) ATempty;
    }
    return(t);
  }
  t = at_suffix_1_0(a_52, t);
  w_153 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_153, not_null(v_153));
  return(t);
}
ATerm c_52 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--args", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm process_options_0_0 (ATerm t)
{
  ATerm p_147 = NULL,t_147 = NULL;
  ATerm n_96 = t;
  int o_96 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(c_52, t);
      ;
      LocalPopChoice(o_96);
    }
  else
    {
      t = n_96;
      {
        ATerm x_153 = NULL;
        x_153 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_153, (ATerm) ATempty);
      }
    }
  t = _2_0(make_option_table_0_0, _id, t);
  p_147 = t;
  t = SSL_explode_term(p_147);
  if(match_cons(t, sym__2))
    {
      ATerm p_96 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_96) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_96 = ATgetArgument(t, 1);
        if(((ATgetType(q_96) == AT_LIST) && !(ATisEmpty(q_96))))
          {
            ATerm r_96 = ATgetFirst((ATermList) q_96);
            ATerm s_96 = (ATerm) ATgetNext((ATermList) q_96);
            if(((ATgetType(s_96) == AT_LIST) && !(ATisEmpty(s_96))))
              {
                t_147 = ATgetFirst((ATermList) s_96);
                {
                  ATerm t_96 = (ATerm) ATgetNext((ATermList) s_96);
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
  t = t_147;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm f_148 = NULL,i_148 = NULL,j_148 = NULL,g_34 = NULL,h_34 = NULL,i_34 = NULL,j_34 = NULL,k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL,p_34 = NULL,s_34 = NULL,v_34 = NULL,t_34 = NULL,u_34 = NULL,w_34 = NULL;
  f_148 = t;
  h_34 = t;
  t = term_u_96;
  g_34 = t;
  t = SSL_table_create(g_34);
  j_34 = t;
  t = term_e_55;
  i_34 = t;
  t = SSL_table_create(i_34);
  l_34 = t;
  t = term_e_77;
  k_34 = t;
  t = SSL_table_create(k_34);
  t = f_148;
  t = process_options_0_0(t);
  t = if_verbose1_1_0(copyright_0_0, t);
  i_148 = t;
  t = term_v_96;
  t = ReadFromFile_0_0(t);
  j_148 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_148, i_148);
  t = evaluate_commands_0_0(t);
  n_34 = t;
  t = term_u_96;
  m_34 = t;
  t = SSL_table_destroy(m_34);
  s_34 = t;
  t = term_e_55;
  p_34 = t;
  t = SSL_table_destroy(p_34);
  u_34 = t;
  t = term_e_77;
  t_34 = t;
  t = SSL_table_destroy(t_34);
  w_34 = t;
  t = term_f_55;
  v_34 = t;
  t = SSL_exit(v_34);
  return(t);
}
