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
Symbol sym_Sort_2;
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
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
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
ATerm term_m_65;
ATerm term_b_65;
ATerm term_a_65;
ATerm term_z_64;
ATerm term_y_64;
ATerm term_x_64;
ATerm term_f_64;
ATerm term_j_63;
ATerm term_h_63;
ATerm term_g_63;
ATerm term_f_63;
ATerm term_a_63;
ATerm term_p_62;
ATerm term_o_62;
ATerm term_n_62;
ATerm term_m_62;
ATerm term_l_62;
ATerm term_k_62;
ATerm term_i_62;
ATerm term_u_61;
ATerm term_r_61;
ATerm term_c_61;
ATerm term_y_60;
ATerm term_x_60;
ATerm term_t_60;
ATerm term_s_60;
ATerm term_f_60;
ATerm term_c_60;
ATerm term_b_60;
ATerm term_a_60;
ATerm term_u_59;
ATerm term_t_59;
ATerm term_s_59;
ATerm term_r_59;
ATerm term_p_59;
ATerm term_o_59;
ATerm term_n_59;
ATerm term_m_59;
ATerm term_l_59;
ATerm term_k_59;
ATerm term_j_59;
ATerm term_b_59;
ATerm term_a_59;
ATerm term_x_58;
ATerm term_w_58;
ATerm term_s_58;
ATerm term_r_58;
ATerm term_q_58;
ATerm term_m_58;
ATerm term_l_58;
ATerm term_f_58;
ATerm term_y_57;
ATerm term_x_57;
ATerm term_w_57;
ATerm term_v_57;
ATerm term_u_57;
ATerm term_t_57;
ATerm term_s_57;
ATerm term_q_57;
ATerm term_n_57;
ATerm term_b_56;
ATerm term_a_56;
ATerm term_o_55;
ATerm term_k_55;
ATerm term_j_55;
ATerm term_i_55;
ATerm term_a_55;
ATerm term_z_54;
ATerm term_y_54;
ATerm term_s_54;
ATerm term_p_54;
ATerm term_y_53;
ATerm term_x_53;
ATerm term_w_53;
ATerm term_v_53;
ATerm term_t_53;
ATerm term_s_53;
ATerm term_k_53;
ATerm term_b_53;
ATerm term_a_53;
ATerm term_z_52;
ATerm term_y_52;
ATerm term_x_52;
ATerm term_v_52;
ATerm term_u_52;
ATerm term_t_52;
ATerm term_r_52;
ATerm term_n_52;
ATerm term_l_52;
ATerm term_j_52;
ATerm term_i_52;
ATerm term_h_52;
ATerm term_g_52;
ATerm term_f_52;
ATerm term_e_52;
ATerm term_z_51;
ATerm term_x_51;
ATerm term_w_51;
ATerm term_u_51;
ATerm term_t_51;
ATerm term_s_51;
ATerm term_r_51;
ATerm term_q_51;
ATerm term_p_51;
ATerm term_o_51;
ATerm term_n_51;
ATerm term_m_51;
ATerm term_j_51;
ATerm term_i_51;
ATerm term_h_51;
ATerm term_g_51;
ATerm term_f_51;
ATerm term_e_51;
ATerm term_d_51;
ATerm term_c_51;
ATerm term_b_51;
ATerm term_a_51;
ATerm term_y_50;
ATerm term_x_50;
ATerm term_w_50;
ATerm term_v_50;
ATerm term_u_50;
ATerm term_t_50;
ATerm term_s_50;
ATerm term_q_50;
ATerm term_o_50;
ATerm term_n_50;
ATerm term_m_50;
ATerm term_l_50;
ATerm term_k_50;
ATerm term_j_50;
ATerm term_i_50;
ATerm term_h_50;
ATerm term_g_50;
ATerm term_f_50;
ATerm term_e_50;
ATerm term_d_50;
ATerm term_c_50;
ATerm term_b_50;
ATerm term_a_50;
ATerm term_z_49;
ATerm term_w_49;
ATerm term_u_49;
ATerm term_t_49;
ATerm term_s_49;
ATerm term_p_49;
ATerm term_o_49;
ATerm term_m_49;
ATerm term_f_49;
ATerm term_e_49;
ATerm term_d_49;
ATerm term_x_48;
ATerm term_v_48;
ATerm term_u_48;
ATerm term_q_48;
ATerm term_p_48;
ATerm term_o_48;
ATerm term_k_48;
ATerm term_j_48;
ATerm term_g_48;
ATerm term_f_48;
ATerm term_e_48;
ATerm term_d_48;
ATerm term_c_48;
ATerm term_v_47;
ATerm term_u_47;
ATerm term_s_47;
ATerm term_q_47;
ATerm term_p_47;
ATerm term_n_47;
ATerm term_k_47;
ATerm term_c_47;
ATerm term_a_47;
ATerm term_z_46;
ATerm term_x_46;
ATerm term_v_46;
ATerm term_u_46;
ATerm term_r_46;
ATerm term_q_46;
ATerm term_p_46;
ATerm term_o_46;
ATerm term_n_46;
ATerm term_m_46;
ATerm term_l_46;
ATerm term_k_46;
ATerm term_j_46;
ATerm term_h_46;
ATerm term_d_46;
ATerm term_y_45;
ATerm term_l_45;
ATerm term_k_45;
ATerm term_j_45;
ATerm term_i_45;
ATerm term_q_37;
ATerm term_k_37;
ATerm term_f_37;
ATerm term_e_37;
ATerm term_z_36;
ATerm term_s_36;
ATerm term_j_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_e_36;
ATerm term_v_31;
ATerm term_x_30;
ATerm term_r_29;
ATerm term_k_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_a_24;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_i_21;
ATerm term_f_21;
ATerm term_m_20;
ATerm term_g_20;
ATerm term_t_19;
ATerm term_p_19;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_a_17;
void init_constant_terms (void)
{
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("senv", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("tenv", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("BindVar: ", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-d", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("match1: ", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("match2: ", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("bindings: ", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_NULL_0);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("operator ", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" not defined", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("eval: ", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Evaluate strategy: ", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("> ", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("eval-rules: ", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("rules normalized: ", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(sym_Sort_2, term_z_36, (ATerm) ATempty);
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(sym_ConstType_1, term_e_37);
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_45));
  term_l_45 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_y_45));
  term_y_45 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_d_46));
  term_d_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_45, term_a_22, term_d_46);
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_k_46));
  term_k_46 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_m_46));
  term_m_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_46, term_k_46, term_l_46);
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_o_46));
  term_o_46 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_p_46));
  term_p_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_46, term_o_46, term_p_46);
  ATprotect(&(term_r_46));
  term_r_46 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_u_46));
  term_u_46 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_v_46));
  term_v_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_x_46));
  term_x_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_46, term_u_46, term_v_46);
  ATprotect(&(term_z_46));
  term_z_46 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_a_47));
  term_a_47 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_c_47));
  term_c_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_46, term_a_47, term_c_47);
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_p_47));
  term_p_47 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_q_47));
  term_q_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_47, term_p_47, term_q_47);
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_47, term_v_47, term_c_48);
  ATprotect(&(term_e_48));
  term_e_48 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_j_48));
  term_j_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_48, term_f_48, term_g_48);
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_o_48));
  term_o_48 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_p_48));
  term_p_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_q_48));
  term_q_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_48, term_o_48, term_p_48);
  ATprotect(&(term_u_48));
  term_u_48 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_v_48));
  term_v_48 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_d_49));
  term_d_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_48, term_v_48, term_x_48);
  ATprotect(&(term_e_49));
  term_e_49 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_f_49));
  term_f_49 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_m_49));
  term_m_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_o_49));
  term_o_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_49, term_f_49, term_m_49);
  ATprotect(&(term_p_49));
  term_p_49 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_s_49));
  term_s_49 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_t_49));
  term_t_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_u_49));
  term_u_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_49, term_s_49, term_t_49);
  ATprotect(&(term_w_49));
  term_w_49 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_z_49));
  term_z_49 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_a_50));
  term_a_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_b_50));
  term_b_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_49, term_z_49, term_a_50);
  ATprotect(&(term_c_50));
  term_c_50 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_d_50));
  term_d_50 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_e_50));
  term_e_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_f_50));
  term_f_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_50, term_d_50, term_e_50);
  ATprotect(&(term_g_50));
  term_g_50 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_h_50));
  term_h_50 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_i_50));
  term_i_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_j_50));
  term_j_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_50, term_h_50, term_i_50);
  ATprotect(&(term_k_50));
  term_k_50 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_l_50));
  term_l_50 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_m_50));
  term_m_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_n_50));
  term_n_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_50, term_l_50, term_m_50);
  ATprotect(&(term_o_50));
  term_o_50 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_q_50));
  term_q_50 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_s_50));
  term_s_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_t_50));
  term_t_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_50, term_q_50, term_s_50);
  ATprotect(&(term_u_50));
  term_u_50 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_v_50));
  term_v_50 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_w_50));
  term_w_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_x_50));
  term_x_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_50, term_v_50, term_w_50);
  ATprotect(&(term_y_50));
  term_y_50 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_a_51));
  term_a_51 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_b_51));
  term_b_51 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_c_51));
  term_c_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_50, term_a_51, term_b_51);
  ATprotect(&(term_d_51));
  term_d_51 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_e_51));
  term_e_51 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_f_51));
  term_f_51 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_g_51));
  term_g_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_51, term_e_51, term_f_51);
  ATprotect(&(term_h_51));
  term_h_51 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_i_51));
  term_i_51 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_j_51));
  term_j_51 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_m_51));
  term_m_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_51, term_i_51, term_j_51);
  ATprotect(&(term_n_51));
  term_n_51 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_o_51));
  term_o_51 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_p_51));
  term_p_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_q_51));
  term_q_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_51, term_o_51, term_p_51);
  ATprotect(&(term_r_51));
  term_r_51 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_s_51));
  term_s_51 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_t_51));
  term_t_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_u_51));
  term_u_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_51, term_s_51, term_t_51);
  ATprotect(&(term_w_51));
  term_w_51 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_x_51));
  term_x_51 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_z_51));
  term_z_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_e_52));
  term_e_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_51, term_x_51, term_z_51);
  ATprotect(&(term_f_52));
  term_f_52 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_g_52));
  term_g_52 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_h_52));
  term_h_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_i_52));
  term_i_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_52, term_g_52, term_h_52);
  ATprotect(&(term_j_52));
  term_j_52 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_l_52));
  term_l_52 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_n_52));
  term_n_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_r_52));
  term_r_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_52, term_l_52, term_n_52);
  ATprotect(&(term_t_52));
  term_t_52 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_u_52));
  term_u_52 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_v_52));
  term_v_52 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_x_52));
  term_x_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_52, term_u_52, term_v_52);
  ATprotect(&(term_y_52));
  term_y_52 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_z_52));
  term_z_52 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_b_53));
  term_b_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_52, term_z_52, term_a_53);
  ATprotect(&(term_k_53));
  term_k_53 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_s_53));
  term_s_53 = (ATerm) ATmakeAppl(ATmakeSymbol("importing module: ", 0, ATtrue));
  ATprotect(&(term_t_53));
  term_t_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_v_53));
  term_v_53 = (ATerm) ATmakeAppl(ATmakeSymbol("sc", 0, ATtrue));
  ATprotect(&(term_w_53));
  term_w_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_53));
  term_x_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_y_53));
  term_y_53 = (ATerm) ATmakeAppl(ATmakeSymbol(".sdefs", 0, ATtrue));
  ATprotect(&(term_p_54));
  term_p_54 = (ATerm) ATmakeAppl(ATmakeSymbol("error: import of multiple modules not supported yet", 0, ATtrue));
  ATprotect(&(term_s_54));
  term_s_54 = (ATerm) ATmakeAppl(ATmakeSymbol("loading image from file: ", 0, ATtrue));
  ATprotect(&(term_y_54));
  term_y_54 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_z_54));
  term_z_54 = (ATerm) ATmakeAppl(ATmakeSymbol("image: ", 0, ATtrue));
  ATprotect(&(term_a_55));
  term_a_55 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_i_55));
  term_i_55 = (ATerm) ATmakeAppl(ATmakeSymbol("image ", 0, ATtrue));
  ATprotect(&(term_j_55));
  term_j_55 = (ATerm) ATmakeAppl(ATmakeSymbol(" loaded", 0, ATtrue));
  ATprotect(&(term_k_55));
  term_k_55 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_55));
  term_o_55 = (ATerm) ATmakeAppl(ATmakeSymbol("image written to file: ", 0, ATtrue));
  ATprotect(&(term_a_56));
  term_a_56 = (ATerm) ATmakeAppl(ATmakeSymbol("Evaluating command: ", 0, ATtrue));
  ATprotect(&(term_b_56));
  term_b_56 = (ATerm) ATmakeAppl(ATmakeSymbol("unknown command: ", 0, ATtrue));
  ATprotect(&(term_n_57));
  term_n_57 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_q_57));
  term_q_57 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_57));
  term_s_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--------------------------------------------------------------------", 0, ATtrue));
  ATprotect(&(term_t_57));
  term_t_57 = (ATerm) ATmakeAppl(ATmakeSymbol("This is SI, the Stratego Interpreter ", 0, ATtrue));
  ATprotect(&(term_u_57));
  term_u_57 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (c) 2001, Eelco Visser <visser@acm.org>", 0, ATtrue));
  ATprotect(&(term_v_57));
  term_v_57 = (ATerm) ATmakeAppl(ATmakeSymbol("This program is free software; you can redistribute it and/or modify", 0, ATtrue));
  ATprotect(&(term_w_57));
  term_w_57 = (ATerm) ATmakeAppl(ATmakeSymbol("it under the terms of the GNU General Public License as published by", 0, ATtrue));
  ATprotect(&(term_x_57));
  term_x_57 = (ATerm) ATmakeAppl(ATmakeSymbol("the Free Software Foundation; either version 2, or (at your option)", 0, ATtrue));
  ATprotect(&(term_y_57));
  term_y_57 = (ATerm) ATmakeAppl(ATmakeSymbol("any later version.", 0, ATtrue));
  ATprotect(&(term_f_58));
  term_f_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_58));
  term_l_58 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_58));
  term_m_58 = (ATerm) ATmakeAppl(ATmakeSymbol("-I dir           include modules from directory dir", 0, ATtrue));
  ATprotect(&(term_q_58));
  term_q_58 = (ATerm) ATmakeAppl(ATmakeSymbol("@version", 0, ATtrue));
  ATprotect(&(term_r_58));
  term_r_58 = (ATerm) ATmakeAppl(ATmakeSymbol("@version v       declare version", 0, ATtrue));
  ATprotect(&(term_s_58));
  term_s_58 = (ATerm) ATmakeAppl(sym__2, term_t_19, term_a_22);
  ATprotect(&(term_w_58));
  term_w_58 = (ATerm) ATmakeAppl(sym__2, term_f_58, term_k_46);
  ATprotect(&(term_x_58));
  term_x_58 = (ATerm) ATmakeAppl(ATmakeSymbol("-d               debug mode", 0, ATtrue));
  ATprotect(&(term_a_59));
  term_a_59 = (ATerm) ATmakeAppl(sym__2, term_k_29, term_a_22);
  ATprotect(&(term_b_59));
  term_b_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-t               trace mode", 0, ATtrue));
  ATprotect(&(term_j_59));
  term_j_59 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_k_59));
  term_k_59 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_l_59));
  term_l_59 = (ATerm) ATmakeAppl(sym__2, term_f_58, term_z_21);
  ATprotect(&(term_m_59));
  term_m_59 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_21);
  ATprotect(&(term_n_59));
  term_n_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_o_59));
  term_o_59 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_59));
  term_p_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_r_59));
  term_r_59 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_59));
  term_s_59 = (ATerm) ATmakeAppl(sym__2, term_p_59, term_r_59);
  ATprotect(&(term_t_59));
  term_t_59 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_u_59));
  term_u_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_a_60));
  term_a_60 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_60));
  term_b_60 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_60));
  term_c_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_f_60));
  term_f_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_60));
  term_s_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_t_60));
  term_t_60 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_60));
  term_x_60 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_60));
  term_y_60 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_61));
  term_c_61 = (ATerm) ATmakeAppl(sym__2, term_a_60, term_b_60);
  ATprotect(&(term_r_61));
  term_r_61 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_61));
  term_u_61 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_i_62));
  term_i_62 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_k_62));
  term_k_62 = (ATerm) ATmakeAppl(sym__2, term_i_62, term_r_59);
  ATprotect(&(term_l_62));
  term_l_62 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_m_62));
  term_m_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_62));
  term_n_62 = (ATerm) ATmakeAppl(sym__2, term_m_62, term_r_59);
  ATprotect(&(term_o_62));
  term_o_62 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_62));
  term_p_62 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_a_63));
  term_a_63 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_63));
  term_f_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_63));
  term_g_63 = (ATerm) ATmakeAppl(sym__2, term_f_63, term_r_59);
  ATprotect(&(term_h_63));
  term_h_63 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_63));
  term_j_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_64));
  term_f_64 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_64));
  term_x_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_y_64));
  term_y_64 = (ATerm) ATmakeAppl(sym__2, term_x_64, term_r_59);
  ATprotect(&(term_z_64));
  term_z_64 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_65));
  term_a_65 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_b_65));
  term_b_65 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_m_65));
  term_m_65 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm destroy_runtime_environment_0_0 (ATerm);
ATerm EvalPrim_0_0 (ATerm);
ATerm b_26 (ATerm l_100, ATerm m_100, ATerm);
ATerm EvalTerm_0_0 (ATerm);
ATerm f_26 (ATerm k_79, ATerm l_79, ATerm m_79, ATerm);
ATerm p_0 (ATerm);
ATerm g_26 (ATerm f_101, ATerm g_101, ATerm);
ATerm i_26 (ATerm i_160 (ATerm), ATerm v_82, ATerm w_82, ATerm t_82, ATerm u_82, ATerm);
ATerm r_0 (ATerm);
ATerm t_0 (ATerm);
ATerm u_0 (ATerm);
ATerm PatDecompose_0_0 (ATerm);
ATerm x_0 (ATerm);
ATerm e_1 (ATerm);
ATerm l_1 (ATerm);
ATerm y_161 (ATerm v_158, ATerm w_158, ATerm x_158, ATerm);
ATerm a_162 (ATerm g_159, ATerm h_159, ATerm i_159, ATerm);
ATerm b_162 (ATerm z_159, ATerm a_160, ATerm b_160, ATerm);
ATerm m_1 (ATerm);
ATerm stratego_match_1_0 (ATerm g_163 (ATerm), ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm k_26 (ATerm d_101, ATerm e_101, ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm l_26 (ATerm h_163 (ATerm), ATerm m_101, ATerm j_101, ATerm k_101, ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm c_2 (ATerm);
ATerm n_26 (ATerm e_163 (ATerm), ATerm r_99, ATerm s_99, ATerm r_786, ATerm);
ATerm p_26 (ATerm d_163 (ATerm), ATerm m_99, ATerm t_783, ATerm);
ATerm EvalAll_1_0 (ATerm j_0 (ATerm), ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm s_26 (ATerm n_163 (ATerm), ATerm c_103, ATerm z_102, ATerm a_103, ATerm);
ATerm t_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm t_26 (ATerm x_102, ATerm y_102, ATerm w_102, ATerm);
ATerm v_26 (ATerm z_78, ATerm a_79, ATerm);
ATerm z_26 (ATerm i_79, ATerm j_79, ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm b_27 (ATerm m_163 (ATerm), ATerm m_102, ATerm o_102, ATerm q_102, ATerm);
ATerm c_27 (ATerm l_163 (ATerm), ATerm i_102, ATerm j_102, ATerm k_102, ATerm);
ATerm d_27 (ATerm k_163 (ATerm), ATerm e_102, ATerm f_102, ATerm g_102, ATerm);
ATerm h_3 (ATerm);
ATerm eval_0_0 (ATerm);
ATerm i_3 (ATerm);
ATerm l_3 (ATerm);
ATerm p_27 (ATerm g_49, ATerm h_49, ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm RDtoSD_0_0 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm s_24 (ATerm m_195, ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm g_5 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm spaste_1_0 (ATerm h_162 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm i_162 (ATerm), ATerm j_162 (ATerm), ATerm k_162 (ATerm), ATerm);
ATerm p_5 (ATerm);
ATerm x_24 (ATerm v_90, ATerm u_90, ATerm);
ATerm SVar_1_0 (ATerm u_128 (ATerm), ATerm);
ATerm y_24 (ATerm u_159 (ATerm), ATerm v_159 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm q_81, ATerm p_81, ATerm o_81, ATerm);
ATerm t_5 (ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm z_24 (ATerm o_159 (ATerm), ATerm p_159 (ATerm (ATerm), ATerm), ATerm i_81, ATerm l_81, ATerm);
ATerm lookup_0_0 (ATerm);
ATerm env_alltd_1_0 (ATerm t_138 (ATerm), ATerm);
ATerm rename_4_0 (ATerm j_159 (ATerm (ATerm), ATerm), ATerm k_159 (ATerm), ATerm l_159 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm m_159 (ATerm (ATerm), ATerm), ATerm);
ATerm a_6 (ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm g_6 (ATerm);
ATerm j_6 (ATerm);
ATerm o_6 (ATerm);
ATerm tpaste_1_0 (ATerm d_162 (ATerm), ATerm);
ATerm Var_1_0 (ATerm h_123 (ATerm), ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm u_6 (ATerm);
ATerm w_6 (ATerm);
ATerm strename_0_0 (ATerm);
ATerm Expl_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm pat_td_1_0 (ATerm j_161 (ATerm), ATerm);
ATerm Bapp_0_0 (ATerm);
ATerm map1_1_0 (ATerm i_0 (ATerm), ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm n_7 (ATerm);
ATerm q_7 (ATerm);
ATerm x_7 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm z_7 (ATerm);
ATerm a_8 (ATerm);
ATerm e_8 (ATerm);
ATerm f_8 (ATerm);
ATerm g_8 (ATerm);
ATerm i_8 (ATerm);
ATerm k_8 (ATerm);
ATerm l_27 (ATerm a_88, ATerm b_88, ATerm c_88, ATerm);
ATerm z_184 (ATerm q_184, ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm q_8 (ATerm);
ATerm r_8 (ATerm);
ATerm s_8 (ATerm);
ATerm t_8 (ATerm);
ATerm u_8 (ATerm);
ATerm z_8 (ATerm);
ATerm a_9 (ATerm);
ATerm b_9 (ATerm);
ATerm c_9 (ATerm);
ATerm e_9 (ATerm);
ATerm i_9 (ATerm);
ATerm j_9 (ATerm);
ATerm k_9 (ATerm);
ATerm m_9 (ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm t_9 (ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm u_9 (ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm h_135 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm o_27 (ATerm p_83, ATerm q_83, ATerm r_83, ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm topdown_1_0 (ATerm d_134 (ATerm), ATerm);
ATerm y_9 (ATerm);
ATerm c_10 (ATerm);
ATerm desugar_0_0 (ATerm);
ATerm i_10 (ATerm);
ATerm k_10 (ATerm);
ATerm p_10 (ATerm);
ATerm q_10 (ATerm);
ATerm r_10 (ATerm);
ATerm s_10 (ATerm);
ATerm u_10 (ATerm);
ATerm x_10 (ATerm);
ATerm y_10 (ATerm);
ATerm DeclareVariables_0_0 (ATerm);
ATerm tboundin_3_0 (ATerm e_162 (ATerm), ATerm f_162 (ATerm), ATerm g_162 (ATerm), ATerm);
ATerm a_11 (ATerm);
ATerm f_11 (ATerm);
ATerm g_11 (ATerm);
ATerm h_11 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm i_11 (ATerm);
ATerm k_11 (ATerm);
ATerm m_11 (ATerm);
ATerm o_11 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm j_25 (ATerm y_143 (ATerm), ATerm j_56, ATerm i_56, ATerm);
ATerm k_25 (ATerm b_144 (ATerm), ATerm c_144 (ATerm), ATerm n_56, ATerm m_56, ATerm);
ATerm l_25 (ATerm t_143 (ATerm), ATerm h_56, ATerm g_56, ATerm);
ATerm genzip_4_0 (ATerm x_141 (ATerm), ATerm y_141 (ATerm), ATerm z_141 (ATerm), ATerm a_142 (ATerm), ATerm);
ATerm x_11 (ATerm);
ATerm y_11 (ATerm);
ATerm a_12 (ATerm);
ATerm n_25 (ATerm o_650, ATerm t_650, ATerm j_83, ATerm);
ATerm while_not_2_0 (ATerm u_133 (ATerm), ATerm v_133 (ATerm), ATerm);
ATerm for_3_0 (ATerm x_133 (ATerm), ATerm y_133 (ATerm), ATerm z_133 (ATerm), ATerm);
ATerm c_12 (ATerm);
ATerm f_12 (ATerm);
ATerm g_12 (ATerm);
ATerm z_48 (ATerm g_47, ATerm h_47, ATerm i_47, ATerm);
ATerm i_12 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm r_12 (ATerm);
ATerm t_12 (ATerm);
ATerm v_12 (ATerm);
ATerm y_12 (ATerm);
ATerm z_12 (ATerm);
ATerm a_13 (ATerm);
ATerm d_13 (ATerm);
ATerm free_vars_3_0 (ATerm z_160 (ATerm), ATerm a_161 (ATerm), ATerm b_161 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm bottomup_1_0 (ATerm e_134 (ATerm), ATerm);
ATerm g_13 (ATerm);
ATerm h_13 (ATerm);
ATerm i_13 (ATerm);
ATerm j_13 (ATerm);
ATerm k_13 (ATerm);
ATerm l_13 (ATerm);
ATerm m_13 (ATerm);
ATerm n_13 (ATerm);
ATerm o_13 (ATerm);
ATerm p_13 (ATerm);
ATerm p_25 (ATerm u_193, ATerm);
ATerm a_27 (ATerm i_66, ATerm j_66, ATerm);
ATerm foldr_3_0 (ATerm z_145 (ATerm), ATerm a_146 (ATerm), ATerm b_146 (ATerm), ATerm);
ATerm q_13 (ATerm);
ATerm r_13 (ATerm);
ATerm s_13 (ATerm);
ATerm t_13 (ATerm);
ATerm define_strategies_0_0 (ATerm);
ATerm q_25 (ATerm b_75, ATerm c_75, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm g_140 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm i_155 (ATerm), ATerm);
ATerm call_sc_0_0 (ATerm);
ATerm eval_import_0_0 (ATerm);
ATerm s_25 (ATerm a_80, ATerm z_79, ATerm);
ATerm t_25 (ATerm c_69, ATerm d_69, ATerm);
ATerm u_25 (ATerm q_49, ATerm);
ATerm v_25 (ATerm s_72, ATerm t_72, ATerm);
ATerm w_25 (ATerm l_152 (ATerm), ATerm y_494, ATerm a_73, ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm z_13 (ATerm);
ATerm x_25 (ATerm n_49, ATerm);
ATerm g_194 (ATerm i_193, ATerm j_193, ATerm k_193, ATerm);
ATerm a_14 (ATerm);
ATerm b_14 (ATerm);
ATerm eval_command_0_0 (ATerm);
ATerm repeat_1_0 (ATerm f_133 (ATerm), ATerm);
ATerm c_14 (ATerm);
ATerm evaluate_commands_0_0 (ATerm);
ATerm d_195 (ATerm x_194, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm q_27 (ATerm y_72, ATerm);
ATerm r_27 (ATerm k_69, ATerm l_69, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm p_196 (ATerm o_195, ATerm);
ATerm q_196 (ATerm s_195, ATerm t_195, ATerm u_195, ATerm);
ATerm r_196 (ATerm c_196, ATerm d_196, ATerm e_196, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm d_14 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm copyright_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm v_153 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm k_140 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm o_199 (ATerm g_199, ATerm);
ATerm conc_0_0 (ATerm);
ATerm t_27 (ATerm f_74, ATerm e_74, ATerm);
ATerm g_14 (ATerm);
ATerm h_14 (ATerm);
ATerm i_14 (ATerm);
ATerm j_14 (ATerm);
ATerm k_14 (ATerm);
ATerm l_14 (ATerm);
ATerm m_14 (ATerm);
ATerm n_14 (ATerm);
ATerm o_14 (ATerm);
ATerm p_14 (ATerm);
ATerm q_14 (ATerm);
ATerm r_14 (ATerm);
ATerm si_options_0_0 (ATerm);
ATerm s_14 (ATerm);
ATerm t_14 (ATerm);
ATerm z_14 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm a_15 (ATerm);
ATerm b_15 (ATerm);
ATerm c_15 (ATerm);
ATerm d_15 (ATerm);
ATerm e_15 (ATerm);
ATerm g_15 (ATerm);
ATerm h_15 (ATerm);
ATerm i_15 (ATerm);
ATerm j_15 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm z_27 (ATerm z_73, ATerm a_74, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm);
ATerm k_15 (ATerm);
ATerm p_15 (ATerm);
ATerm s_15 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm x_27 (ATerm x_78, ATerm y_78, ATerm w_78, ATerm);
ATerm ArgOption_3_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm t_15 (ATerm);
ATerm y_15 (ATerm);
ATerm g_16 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm reverse_acc_2_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm);
ATerm i_16 (ATerm);
ATerm j_16 (ATerm);
ATerm r_16 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm e_140 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm v_27 (ATerm y_63, ATerm z_63, ATerm);
ATerm debug_1_0 (ATerm j_152 (ATerm), ATerm);
ATerm map_1_0 (ATerm u_139 (ATerm), ATerm);
ATerm s_16 (ATerm);
ATerm t_16 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm w_27 (ATerm o_80, ATerm p_80, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm u_16 (ATerm);
ATerm v_16 (ATerm);
ATerm w_16 (ATerm);
ATerm x_16 (ATerm);
ATerm y_16 (ATerm);
ATerm z_16 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm n_118 (ATerm), ATerm o_118 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm o_158 (ATerm), ATerm);
ATerm c_17 (ATerm);
ATerm d_17 (ATerm);
ATerm e_17 (ATerm);
ATerm f_17 (ATerm);
ATerm parse_options_1_0 (ATerm n_158 (ATerm), ATerm);
ATerm h_17 (ATerm);
ATerm i_17 (ATerm);
ATerm n_17 (ATerm);
ATerm o_17 (ATerm);
ATerm make_option_table_0_0 (ATerm);
ATerm at_suffix_1_0 (ATerm o_140 (ATerm), ATerm);
ATerm split_fetch_1_0 (ATerm h_140 (ATerm), ATerm);
ATerm s_17 (ATerm);
ATerm process_options_0_0 (ATerm);
ATerm create_runtime_environment_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm destroy_runtime_environment_0_0 (ATerm t)
{
  ATerm l_0 = NULL,m_0 = NULL,n_0 = NULL,o_0 = NULL;
  l_0 = t;
  t = term_a_17;
  o_0 = t;
  t = SSL_table_destroy(o_0);
  t = term_t_17;
  n_0 = t;
  t = SSL_table_destroy(n_0);
  t = term_u_17;
  m_0 = t;
  t = SSL_table_destroy(m_0);
  t = l_0;
  return(t);
}
ATerm EvalPrim_0_0 (ATerm t)
{
  ATerm f_146 = NULL,g_146 = NULL,h_146 = NULL,i_146 = NULL,j_146 = NULL,k_146 = NULL,l_146 = NULL,m_146 = NULL,n_146 = NULL,o_146 = NULL,p_146 = NULL;
  j_146 = t;
  if(match_cons(t, sym_App_2))
    {
      k_146 = ATgetArgument(t, 0);
      p_146 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_146;
  if(match_cons(t, sym_Prim_2))
    {
      l_146 = ATgetArgument(t, 0);
      m_146 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_146;
  if(match_string(t, "\"_cpl_loaded\""))
    {
      ATerm x_49 = NULL;
      t = m_146;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_146 = ATgetFirst((ATermList) t);
          o_146 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_146;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = n_146;
      t = EvalTerm_0_0(t);
      x_49 = t;
      t = _cpl_loaded(x_49);
    }
  else
    {
      if(match_string(t, "\"SSL_strlen\""))
        {
          ATerm p_50 = NULL;
          t = m_146;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              n_146 = ATgetFirst((ATermList) t);
              o_146 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = o_146;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = n_146;
          t = EvalTerm_0_0(t);
          p_50 = t;
          t = SSL_strlen(p_50);
        }
      else
        {
          if(match_string(t, "\"SSL_concat_strings\""))
            {
              ATerm z_50 = NULL;
              t = m_146;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_146 = ATgetFirst((ATermList) t);
                  o_146 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = o_146;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = n_146;
              t = EvalTerm_0_0(t);
              z_50 = t;
              t = SSL_concat_strings(z_50);
            }
          else
            {
              if(match_string(t, "\"SSL_strcat\""))
                {
                  ATerm k_51 = NULL,l_51 = NULL;
                  t = m_146;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      n_146 = ATgetFirst((ATermList) t);
                      o_146 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = o_146;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      f_146 = ATgetFirst((ATermList) t);
                      g_146 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = g_146;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = n_146;
                  t = EvalTerm_0_0(t);
                  l_51 = t;
                  t = f_146;
                  t = EvalTerm_0_0(t);
                  k_51 = t;
                  t = SSL_strcat(l_51, k_51);
                }
              else
                {
                  if(match_string(t, "\"SSL_explode_string\""))
                    {
                      ATerm v_51 = NULL;
                      t = m_146;
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          n_146 = ATgetFirst((ATermList) t);
                          o_146 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = o_146;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = n_146;
                      t = EvalTerm_0_0(t);
                      v_51 = t;
                      t = SSL_explode_string(v_51);
                    }
                  else
                    {
                      if(match_string(t, "\"SSL_implode_string\""))
                        {
                          ATerm s_52 = NULL;
                          t = m_146;
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              n_146 = ATgetFirst((ATermList) t);
                              o_146 = (ATerm) ATgetNext((ATermList) t);
                            }
                          else
                            _fail(t);
                          t = o_146;
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = n_146;
                          t = EvalTerm_0_0(t);
                          s_52 = t;
                          t = SSL_implode_string(s_52);
                        }
                      else
                        {
                          if(match_string(t, "\"SSL_is_string\""))
                            {
                              ATerm e_53 = NULL;
                              t = m_146;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  n_146 = ATgetFirst((ATermList) t);
                                  o_146 = (ATerm) ATgetNext((ATermList) t);
                                }
                              else
                                _fail(t);
                              t = o_146;
                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                _fail(t);
                              t = n_146;
                              t = EvalTerm_0_0(t);
                              e_53 = t;
                              t = SSL_is_string(e_53);
                            }
                          else
                            {
                              if(match_string(t, "SSL_new"))
                                {
                                  t = m_146;
                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                    _fail(t);
                                  t = SSL_new();
                                }
                              else
                                {
                                  if(match_string(t, "\"SSL_address\""))
                                    {
                                      ATerm g_54 = NULL;
                                      t = m_146;
                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                        {
                                          n_146 = ATgetFirst((ATermList) t);
                                          o_146 = (ATerm) ATgetNext((ATermList) t);
                                        }
                                      else
                                        _fail(t);
                                      t = o_146;
                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                        _fail(t);
                                      t = n_146;
                                      t = EvalTerm_0_0(t);
                                      g_54 = t;
                                      t = SSL_address(g_54);
                                    }
                                  else
                                    {
                                      if(match_string(t, "\"SSL_address_lt\""))
                                        {
                                          ATerm v_54 = NULL,w_54 = NULL;
                                          t = m_146;
                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                            {
                                              n_146 = ATgetFirst((ATermList) t);
                                              o_146 = (ATerm) ATgetNext((ATermList) t);
                                            }
                                          else
                                            _fail(t);
                                          t = o_146;
                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                            {
                                              f_146 = ATgetFirst((ATermList) t);
                                              g_146 = (ATerm) ATgetNext((ATermList) t);
                                            }
                                          else
                                            _fail(t);
                                          t = g_146;
                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                            _fail(t);
                                          t = n_146;
                                          t = EvalTerm_0_0(t);
                                          w_54 = t;
                                          t = f_146;
                                          t = EvalTerm_0_0(t);
                                          v_54 = t;
                                          t = SSL_address_lt(w_54, v_54);
                                        }
                                      else
                                        {
                                          if(match_string(t, "\"SSL_explode_term\""))
                                            {
                                              ATerm q_55 = NULL;
                                              t = m_146;
                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                {
                                                  n_146 = ATgetFirst((ATermList) t);
                                                  o_146 = (ATerm) ATgetNext((ATermList) t);
                                                }
                                              else
                                                _fail(t);
                                              t = o_146;
                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                _fail(t);
                                              t = n_146;
                                              t = EvalTerm_0_0(t);
                                              q_55 = t;
                                              t = SSL_explode_term(q_55);
                                            }
                                          else
                                            {
                                              if(match_string(t, "\"SSL_mkterm\""))
                                                {
                                                  ATerm a_57 = NULL,b_57 = NULL;
                                                  t = m_146;
                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                    {
                                                      n_146 = ATgetFirst((ATermList) t);
                                                      o_146 = (ATerm) ATgetNext((ATermList) t);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = o_146;
                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                    {
                                                      f_146 = ATgetFirst((ATermList) t);
                                                      g_146 = (ATerm) ATgetNext((ATermList) t);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = g_146;
                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                    _fail(t);
                                                  t = n_146;
                                                  t = EvalTerm_0_0(t);
                                                  b_57 = t;
                                                  t = f_146;
                                                  t = EvalTerm_0_0(t);
                                                  a_57 = t;
                                                  t = SSL_mkterm(b_57, a_57);
                                                }
                                              else
                                                {
                                                  if(match_string(t, "\"ATremoveAnnotations\""))
                                                    {
                                                      ATerm r_57 = NULL;
                                                      t = m_146;
                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                        {
                                                          n_146 = ATgetFirst((ATermList) t);
                                                          o_146 = (ATerm) ATgetNext((ATermList) t);
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = o_146;
                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                        _fail(t);
                                                      t = n_146;
                                                      t = EvalTerm_0_0(t);
                                                      r_57 = t;
                                                      t = ATremoveAnnotations(r_57);
                                                    }
                                                  else
                                                    {
                                                      if(match_string(t, "\"SSLsetAnnotations\""))
                                                        {
                                                          ATerm t_58 = NULL,u_58 = NULL;
                                                          t = m_146;
                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                            {
                                                              n_146 = ATgetFirst((ATermList) t);
                                                              o_146 = (ATerm) ATgetNext((ATermList) t);
                                                            }
                                                          else
                                                            _fail(t);
                                                          t = o_146;
                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                            {
                                                              f_146 = ATgetFirst((ATermList) t);
                                                              g_146 = (ATerm) ATgetNext((ATermList) t);
                                                            }
                                                          else
                                                            _fail(t);
                                                          t = g_146;
                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                            _fail(t);
                                                          t = n_146;
                                                          t = EvalTerm_0_0(t);
                                                          u_58 = t;
                                                          t = f_146;
                                                          t = EvalTerm_0_0(t);
                                                          t_58 = t;
                                                          t = SSLsetAnnotations(u_58, t_58);
                                                        }
                                                      else
                                                        {
                                                          if(match_string(t, "\"SSLgetAnnotations\""))
                                                            {
                                                              ATerm v_59 = NULL;
                                                              t = m_146;
                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                {
                                                                  n_146 = ATgetFirst((ATermList) t);
                                                                  o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                }
                                                              else
                                                                _fail(t);
                                                              t = o_146;
                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                _fail(t);
                                                              t = n_146;
                                                              t = EvalTerm_0_0(t);
                                                              v_59 = t;
                                                              t = SSLgetAnnotations(v_59);
                                                            }
                                                          else
                                                            {
                                                              if(match_string(t, "\"SSL_string_to_int\""))
                                                                {
                                                                  ATerm m_60 = NULL;
                                                                  t = m_146;
                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                    {
                                                                      n_146 = ATgetFirst((ATermList) t);
                                                                      o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  t = o_146;
                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                    _fail(t);
                                                                  t = n_146;
                                                                  t = EvalTerm_0_0(t);
                                                                  m_60 = t;
                                                                  t = SSL_string_to_int(m_60);
                                                                }
                                                              else
                                                                {
                                                                  if(match_string(t, "\"SSL_int_to_string\""))
                                                                    {
                                                                      ATerm k_61 = NULL;
                                                                      t = m_146;
                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                        {
                                                                          n_146 = ATgetFirst((ATermList) t);
                                                                          o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                        }
                                                                      else
                                                                        _fail(t);
                                                                      t = o_146;
                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                        _fail(t);
                                                                      t = n_146;
                                                                      t = EvalTerm_0_0(t);
                                                                      k_61 = t;
                                                                      t = SSL_int_to_string(k_61);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_string(t, "\"SSL_int\""))
                                                                        {
                                                                          ATerm z_61 = NULL;
                                                                          t = m_146;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              n_146 = ATgetFirst((ATermList) t);
                                                                              o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          t = o_146;
                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                            _fail(t);
                                                                          t = n_146;
                                                                          t = EvalTerm_0_0(t);
                                                                          z_61 = t;
                                                                          t = SSL_int(z_61);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_string(t, "\"SSL_gtr\""))
                                                                            {
                                                                              t = m_146;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  n_146 = ATgetFirst((ATermList) t);
                                                                                  o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              t = o_146;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  f_146 = ATgetFirst((ATermList) t);
                                                                                  g_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              t = g_146;
                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                _fail(t);
                                                                              {
                                                                                ATerm v_17 = t;
                                                                                int w_17 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm x_62 = NULL,y_62 = NULL;
                                                                                    t = n_146;
                                                                                    t = EvalTerm_0_0(t);
                                                                                    y_62 = t;
                                                                                    t = f_146;
                                                                                    t = EvalTerm_0_0(t);
                                                                                    x_62 = t;
                                                                                    t = SSL_gtr(y_62, x_62);
                                                                                    ;
                                                                                    LocalPopChoice(w_17);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = v_17;
                                                                                    {
                                                                                      ATerm a_64 = NULL,b_64 = NULL;
                                                                                      t = n_146;
                                                                                      t = EvalTerm_0_0(t);
                                                                                      b_64 = t;
                                                                                      t = f_146;
                                                                                      t = EvalTerm_0_0(t);
                                                                                      a_64 = t;
                                                                                      t = SSL_gtr(b_64, a_64);
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_string(t, "\"SSL_gti\""))
                                                                                {
                                                                                  t = m_146;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      n_146 = ATgetFirst((ATermList) t);
                                                                                      o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  t = o_146;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      f_146 = ATgetFirst((ATermList) t);
                                                                                      g_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  t = g_146;
                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                    _fail(t);
                                                                                  {
                                                                                    ATerm x_17 = t;
                                                                                    int y_17 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm s_64 = NULL,t_64 = NULL;
                                                                                        t = n_146;
                                                                                        t = EvalTerm_0_0(t);
                                                                                        t_64 = t;
                                                                                        t = f_146;
                                                                                        t = EvalTerm_0_0(t);
                                                                                        s_64 = t;
                                                                                        t = SSL_gti(t_64, s_64);
                                                                                        ;
                                                                                        LocalPopChoice(y_17);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = x_17;
                                                                                        {
                                                                                          ATerm o_65 = NULL,p_65 = NULL;
                                                                                          t = n_146;
                                                                                          t = EvalTerm_0_0(t);
                                                                                          p_65 = t;
                                                                                          t = f_146;
                                                                                          t = EvalTerm_0_0(t);
                                                                                          o_65 = t;
                                                                                          t = SSL_gti(p_65, o_65);
                                                                                        }
                                                                                      }
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_string(t, "\"SSL_mod\""))
                                                                                    {
                                                                                      ATerm b_66 = NULL,c_66 = NULL;
                                                                                      t = m_146;
                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                        {
                                                                                          n_146 = ATgetFirst((ATermList) t);
                                                                                          o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      t = o_146;
                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                        {
                                                                                          f_146 = ATgetFirst((ATermList) t);
                                                                                          g_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      t = g_146;
                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                        _fail(t);
                                                                                      t = n_146;
                                                                                      t = EvalTerm_0_0(t);
                                                                                      c_66 = t;
                                                                                      t = f_146;
                                                                                      t = EvalTerm_0_0(t);
                                                                                      b_66 = t;
                                                                                      t = SSL_mod(c_66, b_66);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_string(t, "\"SSL_divr\""))
                                                                                        {
                                                                                          t = m_146;
                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                            {
                                                                                              n_146 = ATgetFirst((ATermList) t);
                                                                                              o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = o_146;
                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                            {
                                                                                              f_146 = ATgetFirst((ATermList) t);
                                                                                              g_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = g_146;
                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                            _fail(t);
                                                                                          {
                                                                                            ATerm c_18 = t;
                                                                                            int d_18 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm q_66 = NULL,r_66 = NULL;
                                                                                                t = n_146;
                                                                                                t = EvalTerm_0_0(t);
                                                                                                r_66 = t;
                                                                                                t = f_146;
                                                                                                t = EvalTerm_0_0(t);
                                                                                                q_66 = t;
                                                                                                t = SSL_divr(r_66, q_66);
                                                                                                ;
                                                                                                LocalPopChoice(d_18);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = c_18;
                                                                                                {
                                                                                                  ATerm d_67 = NULL,e_67 = NULL;
                                                                                                  t = n_146;
                                                                                                  t = EvalTerm_0_0(t);
                                                                                                  e_67 = t;
                                                                                                  t = f_146;
                                                                                                  t = EvalTerm_0_0(t);
                                                                                                  d_67 = t;
                                                                                                  t = SSL_divr(e_67, d_67);
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_string(t, "\"SSL_divi\""))
                                                                                            {
                                                                                              t = m_146;
                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                {
                                                                                                  n_146 = ATgetFirst((ATermList) t);
                                                                                                  o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              t = o_146;
                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                {
                                                                                                  f_146 = ATgetFirst((ATermList) t);
                                                                                                  g_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              t = g_146;
                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                _fail(t);
                                                                                              {
                                                                                                ATerm g_18 = t;
                                                                                                int h_18 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm q_67 = NULL,r_67 = NULL;
                                                                                                    t = n_146;
                                                                                                    t = EvalTerm_0_0(t);
                                                                                                    r_67 = t;
                                                                                                    t = f_146;
                                                                                                    t = EvalTerm_0_0(t);
                                                                                                    q_67 = t;
                                                                                                    t = SSL_divi(r_67, q_67);
                                                                                                    ;
                                                                                                    LocalPopChoice(h_18);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = g_18;
                                                                                                    {
                                                                                                      ATerm d_68 = NULL,e_68 = NULL;
                                                                                                      t = n_146;
                                                                                                      t = EvalTerm_0_0(t);
                                                                                                      e_68 = t;
                                                                                                      t = f_146;
                                                                                                      t = EvalTerm_0_0(t);
                                                                                                      d_68 = t;
                                                                                                      t = SSL_divi(e_68, d_68);
                                                                                                    }
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_string(t, "\"SSL_mulr\""))
                                                                                                {
                                                                                                  t = m_146;
                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                    {
                                                                                                      n_146 = ATgetFirst((ATermList) t);
                                                                                                      o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  t = o_146;
                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                    {
                                                                                                      f_146 = ATgetFirst((ATermList) t);
                                                                                                      g_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  t = g_146;
                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                    _fail(t);
                                                                                                  {
                                                                                                    ATerm i_18 = t;
                                                                                                    int j_18 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm q_68 = NULL,r_68 = NULL;
                                                                                                        t = n_146;
                                                                                                        t = EvalTerm_0_0(t);
                                                                                                        r_68 = t;
                                                                                                        t = f_146;
                                                                                                        t = EvalTerm_0_0(t);
                                                                                                        q_68 = t;
                                                                                                        t = SSL_mulr(r_68, q_68);
                                                                                                        ;
                                                                                                        LocalPopChoice(j_18);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = i_18;
                                                                                                        {
                                                                                                          ATerm f_69 = NULL,g_69 = NULL;
                                                                                                          t = n_146;
                                                                                                          t = EvalTerm_0_0(t);
                                                                                                          g_69 = t;
                                                                                                          t = f_146;
                                                                                                          t = EvalTerm_0_0(t);
                                                                                                          f_69 = t;
                                                                                                          t = SSL_mulr(g_69, f_69);
                                                                                                        }
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(t, "\"SSL_muli\""))
                                                                                                    {
                                                                                                      t = m_146;
                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                        {
                                                                                                          n_146 = ATgetFirst((ATermList) t);
                                                                                                          o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      t = o_146;
                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                        {
                                                                                                          f_146 = ATgetFirst((ATermList) t);
                                                                                                          g_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      t = g_146;
                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                        _fail(t);
                                                                                                      {
                                                                                                        ATerm k_18 = t;
                                                                                                        int n_18 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm u_69 = NULL,v_69 = NULL;
                                                                                                            t = n_146;
                                                                                                            t = EvalTerm_0_0(t);
                                                                                                            v_69 = t;
                                                                                                            t = f_146;
                                                                                                            t = EvalTerm_0_0(t);
                                                                                                            u_69 = t;
                                                                                                            t = SSL_muli(v_69, u_69);
                                                                                                            ;
                                                                                                            LocalPopChoice(n_18);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = k_18;
                                                                                                            {
                                                                                                              ATerm h_70 = NULL,i_70 = NULL;
                                                                                                              t = n_146;
                                                                                                              t = EvalTerm_0_0(t);
                                                                                                              i_70 = t;
                                                                                                              t = f_146;
                                                                                                              t = EvalTerm_0_0(t);
                                                                                                              h_70 = t;
                                                                                                              t = SSL_muli(i_70, h_70);
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(t, "\"SSL_subtr\""))
                                                                                                        {
                                                                                                          t = m_146;
                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                            {
                                                                                                              n_146 = ATgetFirst((ATermList) t);
                                                                                                              o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          t = o_146;
                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                            {
                                                                                                              f_146 = ATgetFirst((ATermList) t);
                                                                                                              g_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          t = g_146;
                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                            _fail(t);
                                                                                                          {
                                                                                                            ATerm p_18 = t;
                                                                                                            int q_18 = stack_ptr;
                                                                                                            if((PushChoice() == 0))
                                                                                                              {
                                                                                                                ATerm u_70 = NULL,v_70 = NULL;
                                                                                                                t = n_146;
                                                                                                                t = EvalTerm_0_0(t);
                                                                                                                v_70 = t;
                                                                                                                t = f_146;
                                                                                                                t = EvalTerm_0_0(t);
                                                                                                                u_70 = t;
                                                                                                                t = SSL_subtr(v_70, u_70);
                                                                                                                ;
                                                                                                                LocalPopChoice(q_18);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                t = p_18;
                                                                                                                {
                                                                                                                  ATerm h_71 = NULL,i_71 = NULL;
                                                                                                                  t = n_146;
                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                  i_71 = t;
                                                                                                                  t = f_146;
                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                  h_71 = t;
                                                                                                                  t = SSL_subtr(i_71, h_71);
                                                                                                                }
                                                                                                              }
                                                                                                          }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(t, "\"SSL_subti\""))
                                                                                                            {
                                                                                                              t = m_146;
                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                {
                                                                                                                  n_146 = ATgetFirst((ATermList) t);
                                                                                                                  o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              t = o_146;
                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                {
                                                                                                                  f_146 = ATgetFirst((ATermList) t);
                                                                                                                  g_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              t = g_146;
                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                _fail(t);
                                                                                                              {
                                                                                                                ATerm r_18 = t;
                                                                                                                int s_18 = stack_ptr;
                                                                                                                if((PushChoice() == 0))
                                                                                                                  {
                                                                                                                    ATerm u_71 = NULL,v_71 = NULL;
                                                                                                                    t = n_146;
                                                                                                                    t = EvalTerm_0_0(t);
                                                                                                                    v_71 = t;
                                                                                                                    t = f_146;
                                                                                                                    t = EvalTerm_0_0(t);
                                                                                                                    u_71 = t;
                                                                                                                    t = SSL_subti(v_71, u_71);
                                                                                                                    ;
                                                                                                                    LocalPopChoice(s_18);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    t = r_18;
                                                                                                                    {
                                                                                                                      ATerm h_72 = NULL,i_72 = NULL;
                                                                                                                      t = n_146;
                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                      i_72 = t;
                                                                                                                      t = f_146;
                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                      h_72 = t;
                                                                                                                      t = SSL_subti(i_72, h_72);
                                                                                                                    }
                                                                                                                  }
                                                                                                              }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(t, "\"SSL_addr\""))
                                                                                                                {
                                                                                                                  t = m_146;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                    {
                                                                                                                      n_146 = ATgetFirst((ATermList) t);
                                                                                                                      o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  t = o_146;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                    {
                                                                                                                      f_146 = ATgetFirst((ATermList) t);
                                                                                                                      g_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  t = g_146;
                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                    _fail(t);
                                                                                                                  {
                                                                                                                    ATerm t_18 = t;
                                                                                                                    int u_18 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        ATerm w_72 = NULL,x_72 = NULL;
                                                                                                                        t = n_146;
                                                                                                                        t = EvalTerm_0_0(t);
                                                                                                                        x_72 = t;
                                                                                                                        t = f_146;
                                                                                                                        t = EvalTerm_0_0(t);
                                                                                                                        w_72 = t;
                                                                                                                        t = SSL_addr(x_72, w_72);
                                                                                                                        ;
                                                                                                                        LocalPopChoice(u_18);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = t_18;
                                                                                                                        {
                                                                                                                          ATerm l_73 = NULL,m_73 = NULL;
                                                                                                                          t = n_146;
                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                          m_73 = t;
                                                                                                                          t = f_146;
                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                          l_73 = t;
                                                                                                                          t = SSL_addr(m_73, l_73);
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(t, "\"SSL_addi\""))
                                                                                                                    {
                                                                                                                      t = m_146;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                        {
                                                                                                                          n_146 = ATgetFirst((ATermList) t);
                                                                                                                          o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        _fail(t);
                                                                                                                      t = o_146;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                        {
                                                                                                                          f_146 = ATgetFirst((ATermList) t);
                                                                                                                          g_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        _fail(t);
                                                                                                                      t = g_146;
                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                        _fail(t);
                                                                                                                      {
                                                                                                                        ATerm v_18 = t;
                                                                                                                        int w_18 = stack_ptr;
                                                                                                                        if((PushChoice() == 0))
                                                                                                                          {
                                                                                                                            ATerm y_73 = NULL,b_74 = NULL;
                                                                                                                            t = n_146;
                                                                                                                            t = EvalTerm_0_0(t);
                                                                                                                            b_74 = t;
                                                                                                                            t = f_146;
                                                                                                                            t = EvalTerm_0_0(t);
                                                                                                                            y_73 = t;
                                                                                                                            t = SSL_addi(b_74, y_73);
                                                                                                                            ;
                                                                                                                            LocalPopChoice(w_18);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            t = v_18;
                                                                                                                            {
                                                                                                                              ATerm p_74 = NULL,q_74 = NULL;
                                                                                                                              t = n_146;
                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                              q_74 = t;
                                                                                                                              t = f_146;
                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                              p_74 = t;
                                                                                                                              t = SSL_addi(q_74, p_74);
                                                                                                                            }
                                                                                                                          }
                                                                                                                      }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(t, "\"SSL_is_int\""))
                                                                                                                        {
                                                                                                                          ATerm a_75 = NULL;
                                                                                                                          t = m_146;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                            {
                                                                                                                              n_146 = ATgetFirst((ATermList) t);
                                                                                                                              o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            _fail(t);
                                                                                                                          t = o_146;
                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                            _fail(t);
                                                                                                                          t = n_146;
                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                          a_75 = t;
                                                                                                                          t = SSL_is_int(a_75);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(t, "\"SSL_real\""))
                                                                                                                            {
                                                                                                                              ATerm l_75 = NULL;
                                                                                                                              t = m_146;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                {
                                                                                                                                  n_146 = ATgetFirst((ATermList) t);
                                                                                                                                  o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                _fail(t);
                                                                                                                              t = o_146;
                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                _fail(t);
                                                                                                                              t = n_146;
                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                              l_75 = t;
                                                                                                                              t = SSL_real(l_75);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(t, "\"SSL_string_to_real\""))
                                                                                                                                {
                                                                                                                                  ATerm u_75 = NULL;
                                                                                                                                  t = m_146;
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                    {
                                                                                                                                      n_146 = ATgetFirst((ATermList) t);
                                                                                                                                      o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    _fail(t);
                                                                                                                                  t = o_146;
                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                    _fail(t);
                                                                                                                                  t = n_146;
                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                  u_75 = t;
                                                                                                                                  t = SSL_string_to_real(u_75);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(t, "\"SSL_real_to_string\""))
                                                                                                                                    {
                                                                                                                                      ATerm d_76 = NULL;
                                                                                                                                      t = m_146;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                        {
                                                                                                                                          n_146 = ATgetFirst((ATermList) t);
                                                                                                                                          o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        _fail(t);
                                                                                                                                      t = o_146;
                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                        _fail(t);
                                                                                                                                      t = n_146;
                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                      d_76 = t;
                                                                                                                                      t = SSL_real_to_string(d_76);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(t, "\"SSL_atan2\""))
                                                                                                                                        {
                                                                                                                                          ATerm o_76 = NULL,p_76 = NULL;
                                                                                                                                          t = m_146;
                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                            {
                                                                                                                                              n_146 = ATgetFirst((ATermList) t);
                                                                                                                                              o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            _fail(t);
                                                                                                                                          t = o_146;
                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                            {
                                                                                                                                              f_146 = ATgetFirst((ATermList) t);
                                                                                                                                              g_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            _fail(t);
                                                                                                                                          t = g_146;
                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                            _fail(t);
                                                                                                                                          t = n_146;
                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                          p_76 = t;
                                                                                                                                          t = f_146;
                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                          o_76 = t;
                                                                                                                                          t = SSL_atan2(p_76, o_76);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(t, "\"SSL_sqrt\""))
                                                                                                                                            {
                                                                                                                                              ATerm z_76 = NULL;
                                                                                                                                              t = m_146;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                {
                                                                                                                                                  n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                  o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                _fail(t);
                                                                                                                                              t = o_146;
                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                _fail(t);
                                                                                                                                              t = n_146;
                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                              z_76 = t;
                                                                                                                                              t = SSL_sqrt(z_76);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_string(t, "\"SSL_sin\""))
                                                                                                                                                {
                                                                                                                                                  ATerm i_77 = NULL;
                                                                                                                                                  t = m_146;
                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                    {
                                                                                                                                                      n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                      o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    _fail(t);
                                                                                                                                                  t = o_146;
                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                    _fail(t);
                                                                                                                                                  t = n_146;
                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                  i_77 = t;
                                                                                                                                                  t = SSL_sin(i_77);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  if(match_string(t, "\"SSL_cos\""))
                                                                                                                                                    {
                                                                                                                                                      ATerm r_77 = NULL;
                                                                                                                                                      t = m_146;
                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                        {
                                                                                                                                                          n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                          o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        _fail(t);
                                                                                                                                                      t = o_146;
                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                        _fail(t);
                                                                                                                                                      t = n_146;
                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                      r_77 = t;
                                                                                                                                                      t = SSL_cos(r_77);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      if(match_string(t, "\"SSL_is_real\""))
                                                                                                                                                        {
                                                                                                                                                          ATerm a_78 = NULL;
                                                                                                                                                          t = m_146;
                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                            {
                                                                                                                                                              n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                              o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            _fail(t);
                                                                                                                                                          t = o_146;
                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                            _fail(t);
                                                                                                                                                          t = n_146;
                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                          a_78 = t;
                                                                                                                                                          t = SSL_is_real(a_78);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          if(match_string(t, "\"SSL_open_file\""))
                                                                                                                                                            {
                                                                                                                                                              ATerm l_78 = NULL,m_78 = NULL;
                                                                                                                                                              t = m_146;
                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                {
                                                                                                                                                                  n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                  o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                _fail(t);
                                                                                                                                                              t = o_146;
                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                {
                                                                                                                                                                  f_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                  g_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                _fail(t);
                                                                                                                                                              t = g_146;
                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                _fail(t);
                                                                                                                                                              t = n_146;
                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                              m_78 = t;
                                                                                                                                                              t = f_146;
                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                              l_78 = t;
                                                                                                                                                              t = SSL_open_file(m_78, l_78);
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            {
                                                                                                                                                              if(match_string(t, "\"SSL_close_file\""))
                                                                                                                                                                {
                                                                                                                                                                  ATerm b_79 = NULL;
                                                                                                                                                                  t = m_146;
                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                    {
                                                                                                                                                                      n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                      o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                    }
                                                                                                                                                                  else
                                                                                                                                                                    _fail(t);
                                                                                                                                                                  t = o_146;
                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                    _fail(t);
                                                                                                                                                                  t = n_146;
                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                  b_79 = t;
                                                                                                                                                                  t = SSL_close_file(b_79);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                {
                                                                                                                                                                  if(match_string(t, "SSL_pipe"))
                                                                                                                                                                    {
                                                                                                                                                                      t = m_146;
                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                        _fail(t);
                                                                                                                                                                      t = SSL_pipe();
                                                                                                                                                                    }
                                                                                                                                                                  else
                                                                                                                                                                    {
                                                                                                                                                                      if(match_string(t, "\"SSL_fileno\""))
                                                                                                                                                                        {
                                                                                                                                                                          ATerm r_79 = NULL;
                                                                                                                                                                          t = m_146;
                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                            {
                                                                                                                                                                              n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                              o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                            }
                                                                                                                                                                          else
                                                                                                                                                                            _fail(t);
                                                                                                                                                                          t = o_146;
                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                            _fail(t);
                                                                                                                                                                          t = n_146;
                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                          r_79 = t;
                                                                                                                                                                          t = SSL_fileno(r_79);
                                                                                                                                                                        }
                                                                                                                                                                      else
                                                                                                                                                                        {
                                                                                                                                                                          if(match_string(t, "\"SSL_fdopen\""))
                                                                                                                                                                            {
                                                                                                                                                                              ATerm e_80 = NULL,f_80 = NULL;
                                                                                                                                                                              t = m_146;
                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                {
                                                                                                                                                                                  n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                  o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                }
                                                                                                                                                                              else
                                                                                                                                                                                _fail(t);
                                                                                                                                                                              t = o_146;
                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                {
                                                                                                                                                                                  f_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                  g_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                }
                                                                                                                                                                              else
                                                                                                                                                                                _fail(t);
                                                                                                                                                                              t = g_146;
                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                _fail(t);
                                                                                                                                                                              t = n_146;
                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                              f_80 = t;
                                                                                                                                                                              t = f_146;
                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                              e_80 = t;
                                                                                                                                                                              t = SSL_fdopen(f_80, e_80);
                                                                                                                                                                            }
                                                                                                                                                                          else
                                                                                                                                                                            {
                                                                                                                                                                              if(match_string(t, "\"SSL_access\""))
                                                                                                                                                                                {
                                                                                                                                                                                  ATerm t_80 = NULL,u_80 = NULL;
                                                                                                                                                                                  t = m_146;
                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                    {
                                                                                                                                                                                      n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                      o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                    }
                                                                                                                                                                                  else
                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                  t = o_146;
                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                    {
                                                                                                                                                                                      f_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                      g_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                    }
                                                                                                                                                                                  else
                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                  t = g_146;
                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                  t = n_146;
                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                  u_80 = t;
                                                                                                                                                                                  t = f_146;
                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                  t_80 = t;
                                                                                                                                                                                  t = SSL_access(u_80, t_80);
                                                                                                                                                                                }
                                                                                                                                                                              else
                                                                                                                                                                                {
                                                                                                                                                                                  if(match_string(t, "\"SSL_dup2\""))
                                                                                                                                                                                    {
                                                                                                                                                                                      ATerm g_81 = NULL,h_81 = NULL;
                                                                                                                                                                                      t = m_146;
                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                        {
                                                                                                                                                                                          n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                          o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                        }
                                                                                                                                                                                      else
                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                      t = o_146;
                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                        {
                                                                                                                                                                                          f_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                          g_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                        }
                                                                                                                                                                                      else
                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                      t = g_146;
                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                      t = n_146;
                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                      h_81 = t;
                                                                                                                                                                                      t = f_146;
                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                      g_81 = t;
                                                                                                                                                                                      t = SSL_dup2(h_81, g_81);
                                                                                                                                                                                    }
                                                                                                                                                                                  else
                                                                                                                                                                                    {
                                                                                                                                                                                      if(match_string(t, "\"SSL_dup\""))
                                                                                                                                                                                        {
                                                                                                                                                                                          ATerm w_81 = NULL;
                                                                                                                                                                                          t = m_146;
                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                            {
                                                                                                                                                                                              n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                              o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                            }
                                                                                                                                                                                          else
                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                          t = o_146;
                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                          t = n_146;
                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                          w_81 = t;
                                                                                                                                                                                          t = SSL_dup(w_81);
                                                                                                                                                                                        }
                                                                                                                                                                                      else
                                                                                                                                                                                        {
                                                                                                                                                                                          if(match_string(t, "\"SSL_close\""))
                                                                                                                                                                                            {
                                                                                                                                                                                              ATerm f_82 = NULL;
                                                                                                                                                                                              t = m_146;
                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                {
                                                                                                                                                                                                  n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                  o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                }
                                                                                                                                                                                              else
                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                              t = o_146;
                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                              t = n_146;
                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                              f_82 = t;
                                                                                                                                                                                              t = SSL_close(f_82);
                                                                                                                                                                                            }
                                                                                                                                                                                          else
                                                                                                                                                                                            {
                                                                                                                                                                                              if(match_string(t, "\"SSL_mkstemp\""))
                                                                                                                                                                                                {
                                                                                                                                                                                                  ATerm o_82 = NULL;
                                                                                                                                                                                                  t = m_146;
                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                    {
                                                                                                                                                                                                      n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                      o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                    }
                                                                                                                                                                                                  else
                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                  t = o_146;
                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                  t = n_146;
                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                  o_82 = t;
                                                                                                                                                                                                  t = SSL_mkstemp(o_82);
                                                                                                                                                                                                }
                                                                                                                                                                                              else
                                                                                                                                                                                                {
                                                                                                                                                                                                  if(match_string(t, "\"SSL_open\""))
                                                                                                                                                                                                    {
                                                                                                                                                                                                      ATerm b_83 = NULL;
                                                                                                                                                                                                      t = m_146;
                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                        {
                                                                                                                                                                                                          n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                          o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                        }
                                                                                                                                                                                                      else
                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                      t = o_146;
                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                      t = n_146;
                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                      b_83 = t;
                                                                                                                                                                                                      t = SSL_open(b_83);
                                                                                                                                                                                                    }
                                                                                                                                                                                                  else
                                                                                                                                                                                                    {
                                                                                                                                                                                                      if(match_string(t, "\"SSL_creat\""))
                                                                                                                                                                                                        {
                                                                                                                                                                                                          ATerm l_83 = NULL;
                                                                                                                                                                                                          t = m_146;
                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                            {
                                                                                                                                                                                                              n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                              o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                            }
                                                                                                                                                                                                          else
                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                          t = o_146;
                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                          t = n_146;
                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                          l_83 = t;
                                                                                                                                                                                                          t = SSL_creat(l_83);
                                                                                                                                                                                                        }
                                                                                                                                                                                                      else
                                                                                                                                                                                                        {
                                                                                                                                                                                                          if(match_string(t, "SSL_P_tmpdir"))
                                                                                                                                                                                                            {
                                                                                                                                                                                                              t = m_146;
                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                              t = SSL_P_tmpdir();
                                                                                                                                                                                                            }
                                                                                                                                                                                                          else
                                                                                                                                                                                                            {
                                                                                                                                                                                                              if(match_string(t, "SSL_STDERR_FILENO"))
                                                                                                                                                                                                                {
                                                                                                                                                                                                                  t = m_146;
                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                  t = SSL_STDERR_FILENO();
                                                                                                                                                                                                                }
                                                                                                                                                                                                              else
                                                                                                                                                                                                                {
                                                                                                                                                                                                                  if(match_string(t, "SSL_STDOUT_FILENO"))
                                                                                                                                                                                                                    {
                                                                                                                                                                                                                      t = m_146;
                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                      t = SSL_STDOUT_FILENO();
                                                                                                                                                                                                                    }
                                                                                                                                                                                                                  else
                                                                                                                                                                                                                    {
                                                                                                                                                                                                                      if(match_string(t, "SSL_STDIN_FILENO"))
                                                                                                                                                                                                                        {
                                                                                                                                                                                                                          t = m_146;
                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                          t = SSL_STDIN_FILENO();
                                                                                                                                                                                                                        }
                                                                                                                                                                                                                      else
                                                                                                                                                                                                                        {
                                                                                                                                                                                                                          if(match_string(t, "\"SSL_fgetc\""))
                                                                                                                                                                                                                            {
                                                                                                                                                                                                                              ATerm f_84 = NULL;
                                                                                                                                                                                                                              t = m_146;
                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                  n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                  o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                }
                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                              t = o_146;
                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                              t = n_146;
                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                              f_84 = t;
                                                                                                                                                                                                                              t = SSL_fgetc(f_84);
                                                                                                                                                                                                                            }
                                                                                                                                                                                                                          else
                                                                                                                                                                                                                            {
                                                                                                                                                                                                                              if(match_string(t, "\"SSL_fputc\""))
                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                  ATerm q_84 = NULL,r_84 = NULL;
                                                                                                                                                                                                                                  t = m_146;
                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                      n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                      o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                  t = o_146;
                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                      f_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                      g_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                  t = g_146;
                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                  t = n_146;
                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                  r_84 = t;
                                                                                                                                                                                                                                  t = f_146;
                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                  q_84 = t;
                                                                                                                                                                                                                                  t = SSL_fputc(r_84, q_84);
                                                                                                                                                                                                                                }
                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_puts\""))
                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                      ATerm b_85 = NULL;
                                                                                                                                                                                                                                      t = m_146;
                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                          n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                          o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                      t = o_146;
                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                      t = n_146;
                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                      b_85 = t;
                                                                                                                                                                                                                                      t = SSL_puts(b_85);
                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_fputs\""))
                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                          ATerm m_85 = NULL,n_85 = NULL;
                                                                                                                                                                                                                                          t = m_146;
                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                              n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                              o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                          t = o_146;
                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                              f_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                              g_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                          t = g_146;
                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                          t = n_146;
                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                          n_85 = t;
                                                                                                                                                                                                                                          t = f_146;
                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                          m_85 = t;
                                                                                                                                                                                                                                          t = SSL_fputs(n_85, m_85);
                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_fflush\""))
                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                              t = m_146;
                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                  n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                  o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                              t = o_146;
                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                                ATerm x_18 = t;
                                                                                                                                                                                                                                                int y_18 = stack_ptr;
                                                                                                                                                                                                                                                if((PushChoice() == 0))
                                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                                    ATerm x_85 = NULL;
                                                                                                                                                                                                                                                    t = n_146;
                                                                                                                                                                                                                                                    t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                    x_85 = t;
                                                                                                                                                                                                                                                    t = SSL_fflush(x_85);
                                                                                                                                                                                                                                                    ;
                                                                                                                                                                                                                                                    LocalPopChoice(y_18);
                                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                                else
                                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                                    t = x_18;
                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                      ATerm g_86 = NULL;
                                                                                                                                                                                                                                                      t = n_146;
                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                      g_86 = t;
                                                                                                                                                                                                                                                      t = SSL_fflush(g_86);
                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                              }
                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                              if(match_string(t, "\"SSL_fclose\""))
                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                  t = m_146;
                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                      n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                      o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                  t = o_146;
                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                                    ATerm z_18 = t;
                                                                                                                                                                                                                                                    int a_19 = stack_ptr;
                                                                                                                                                                                                                                                    if((PushChoice() == 0))
                                                                                                                                                                                                                                                      {
                                                                                                                                                                                                                                                        ATerm p_86 = NULL;
                                                                                                                                                                                                                                                        t = n_146;
                                                                                                                                                                                                                                                        t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                        p_86 = t;
                                                                                                                                                                                                                                                        t = SSL_fclose(p_86);
                                                                                                                                                                                                                                                        ;
                                                                                                                                                                                                                                                        LocalPopChoice(a_19);
                                                                                                                                                                                                                                                      }
                                                                                                                                                                                                                                                    else
                                                                                                                                                                                                                                                      {
                                                                                                                                                                                                                                                        t = z_18;
                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                          ATerm y_86 = NULL;
                                                                                                                                                                                                                                                          t = n_146;
                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                          y_86 = t;
                                                                                                                                                                                                                                                          t = SSL_fclose(y_86);
                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                      }
                                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_fopen\""))
                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                      ATerm j_87 = NULL,k_87 = NULL;
                                                                                                                                                                                                                                                      t = m_146;
                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                          n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                          o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                      t = o_146;
                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                          f_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                          g_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                      t = g_146;
                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                      t = n_146;
                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                      k_87 = t;
                                                                                                                                                                                                                                                      t = f_146;
                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                      j_87 = t;
                                                                                                                                                                                                                                                      t = SSL_fopen(k_87, j_87);
                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                      if(match_string(t, "SSL_stderr_stream"))
                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                          t = m_146;
                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                          t = SSL_stderr_stream();
                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                          if(match_string(t, "SSL_stdout_stream"))
                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                              t = m_146;
                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                              t = SSL_stdout_stream();
                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                              if(match_string(t, "SSL_stdin_stream"))
                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                  t = m_146;
                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                  t = SSL_stdin_stream();
                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_setenv\""))
                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                      ATerm h_88 = NULL,i_88 = NULL,j_88 = NULL;
                                                                                                                                                                                                                                                                      t = m_146;
                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                          n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                          o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                      t = o_146;
                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                          f_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                          g_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                      t = g_146;
                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                          h_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                          i_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                      t = i_146;
                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                      t = n_146;
                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                      j_88 = t;
                                                                                                                                                                                                                                                                      t = f_146;
                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                      i_88 = t;
                                                                                                                                                                                                                                                                      t = h_146;
                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                      h_88 = t;
                                                                                                                                                                                                                                                                      t = SSL_setenv(j_88, i_88, h_88);
                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_getenv\""))
                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                          ATerm u_88 = NULL;
                                                                                                                                                                                                                                                                          t = m_146;
                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                              n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                              o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                          t = o_146;
                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                          t = n_146;
                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                          u_88 = t;
                                                                                                                                                                                                                                                                          t = SSL_getenv(u_88);
                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_remove\""))
                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                              ATerm d_89 = NULL;
                                                                                                                                                                                                                                                                              t = m_146;
                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                  n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                  o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                              t = o_146;
                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                              t = n_146;
                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                              d_89 = t;
                                                                                                                                                                                                                                                                              t = SSL_remove(d_89);
                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                              if(match_string(t, "\"SSL_link\""))
                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                  ATerm o_89 = NULL,p_89 = NULL;
                                                                                                                                                                                                                                                                                  t = m_146;
                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                      n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                      o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                  t = o_146;
                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                      f_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                      g_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                  t = g_146;
                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                  t = n_146;
                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                  p_89 = t;
                                                                                                                                                                                                                                                                                  t = f_146;
                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                  o_89 = t;
                                                                                                                                                                                                                                                                                  t = SSL_link(p_89, o_89);
                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_fdcopy\""))
                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                      ATerm b_90 = NULL,c_90 = NULL;
                                                                                                                                                                                                                                                                                      t = m_146;
                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                          n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                          o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                      t = o_146;
                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                          f_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                          g_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                      t = g_146;
                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                      t = n_146;
                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                      c_90 = t;
                                                                                                                                                                                                                                                                                      t = f_146;
                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                      b_90 = t;
                                                                                                                                                                                                                                                                                      t = SSL_fdcopy(c_90, b_90);
                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_copy\""))
                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                          ATerm o_90 = NULL,p_90 = NULL;
                                                                                                                                                                                                                                                                                          t = m_146;
                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                              n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                              o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                          t = o_146;
                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                              f_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                              g_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                          t = g_146;
                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                          t = n_146;
                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                          p_90 = t;
                                                                                                                                                                                                                                                                                          t = f_146;
                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                          o_90 = t;
                                                                                                                                                                                                                                                                                          t = SSL_copy(p_90, o_90);
                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_rename\""))
                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                              ATerm d_91 = NULL,e_91 = NULL;
                                                                                                                                                                                                                                                                                              t = m_146;
                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                  n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                  o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                              t = o_146;
                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                  f_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                  g_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                              t = g_146;
                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                              t = n_146;
                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                              e_91 = t;
                                                                                                                                                                                                                                                                                              t = f_146;
                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                              d_91 = t;
                                                                                                                                                                                                                                                                                              t = SSL_rename(e_91, d_91);
                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                              if(match_string(t, "\"SSL_modification_time\""))
                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                  ATerm o_91 = NULL;
                                                                                                                                                                                                                                                                                                  t = m_146;
                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                      n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                      o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                  t = o_146;
                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                  t = n_146;
                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                  o_91 = t;
                                                                                                                                                                                                                                                                                                  t = SSL_modification_time(o_91);
                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_readdir\""))
                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                      ATerm x_91 = NULL;
                                                                                                                                                                                                                                                                                                      t = m_146;
                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                          n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                          o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                      t = o_146;
                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                      t = n_146;
                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                      x_91 = t;
                                                                                                                                                                                                                                                                                                      t = SSL_readdir(x_91);
                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_getchar\""))
                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                          ATerm x_93 = NULL;
                                                                                                                                                                                                                                                                                                          t = m_146;
                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                              n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                              o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                          t = o_146;
                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                          t = n_146;
                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                          x_93 = t;
                                                                                                                                                                                                                                                                                                          t = SSL_getchar(x_93);
                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_printascii\""))
                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                              ATerm v_94 = NULL,w_94 = NULL;
                                                                                                                                                                                                                                                                                                              t = m_146;
                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                  n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                  o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                              t = o_146;
                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                  f_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                  g_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                              t = g_146;
                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                              t = n_146;
                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                              w_94 = t;
                                                                                                                                                                                                                                                                                                              t = f_146;
                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                              v_94 = t;
                                                                                                                                                                                                                                                                                                              t = SSL_printascii(w_94, v_94);
                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                              if(match_string(t, "\"SSL_printnl\""))
                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                  ATerm i_95 = NULL,j_95 = NULL;
                                                                                                                                                                                                                                                                                                                  t = m_146;
                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                      n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                      o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                  t = o_146;
                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                      f_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                      g_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                  t = g_146;
                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                  t = n_146;
                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                  j_95 = t;
                                                                                                                                                                                                                                                                                                                  t = f_146;
                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                  i_95 = t;
                                                                                                                                                                                                                                                                                                                  t = SSL_printnl(j_95, i_95);
                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_print\""))
                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                      ATerm u_96 = NULL,z_96 = NULL;
                                                                                                                                                                                                                                                                                                                      t = m_146;
                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                          n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                          o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                      t = o_146;
                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                          f_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                          g_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                      t = g_146;
                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                      t = n_146;
                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                      z_96 = t;
                                                                                                                                                                                                                                                                                                                      t = f_146;
                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                      u_96 = t;
                                                                                                                                                                                                                                                                                                                      t = SSL_print(z_96, u_96);
                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_read_term_from_stream\""))
                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                          ATerm h_98 = NULL;
                                                                                                                                                                                                                                                                                                                          t = m_146;
                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                              n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                              o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                          t = o_146;
                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                          t = n_146;
                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                          h_98 = t;
                                                                                                                                                                                                                                                                                                                          t = SSL_read_term_from_stream(h_98);
                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_write_term_to_stream_text\""))
                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                              ATerm z_98 = NULL,a_99 = NULL;
                                                                                                                                                                                                                                                                                                                              t = m_146;
                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                  n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                  o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                              t = o_146;
                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                  f_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                  g_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                              t = g_146;
                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                              t = n_146;
                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                              a_99 = t;
                                                                                                                                                                                                                                                                                                                              t = f_146;
                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                              z_98 = t;
                                                                                                                                                                                                                                                                                                                              t = SSL_write_term_to_stream_text(a_99, z_98);
                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                              if(match_string(t, "\"SSL_write_term_to_stream_taf\""))
                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                  ATerm u_99 = NULL,r_100 = NULL;
                                                                                                                                                                                                                                                                                                                                  t = m_146;
                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                      n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                      o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                  t = o_146;
                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                      f_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                      g_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                  t = g_146;
                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                  t = n_146;
                                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                  r_100 = t;
                                                                                                                                                                                                                                                                                                                                  t = f_146;
                                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                  u_99 = t;
                                                                                                                                                                                                                                                                                                                                  t = SSL_write_term_to_stream_taf(r_100, u_99);
                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_write_term_to_stream_baf\""))
                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                      ATerm l_101 = NULL,n_101 = NULL;
                                                                                                                                                                                                                                                                                                                                      t = m_146;
                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                          n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                          o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                      t = o_146;
                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                          f_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                          g_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                      t = g_146;
                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                      t = n_146;
                                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                      n_101 = t;
                                                                                                                                                                                                                                                                                                                                      t = f_146;
                                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                      l_101 = t;
                                                                                                                                                                                                                                                                                                                                      t = SSL_write_term_to_stream_baf(n_101, l_101);
                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_pipe_term_to_child\""))
                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                          ATerm m_103 = NULL,n_103 = NULL,o_103 = NULL;
                                                                                                                                                                                                                                                                                                                                          t = m_146;
                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                              n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                              o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                          t = o_146;
                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                              f_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                              g_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                          t = g_146;
                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                              h_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                              i_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                          t = i_146;
                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                          t = n_146;
                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                          o_103 = t;
                                                                                                                                                                                                                                                                                                                                          t = f_146;
                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                          n_103 = t;
                                                                                                                                                                                                                                                                                                                                          t = h_146;
                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                          m_103 = t;
                                                                                                                                                                                                                                                                                                                                          t = SSL_pipe_term_to_child(o_103, n_103, m_103);
                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_kill\""))
                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                              ATerm b_104 = NULL,c_104 = NULL;
                                                                                                                                                                                                                                                                                                                                              t = m_146;
                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                  n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                  o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                              t = o_146;
                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                  f_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                  g_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                              t = g_146;
                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                              t = n_146;
                                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                              c_104 = t;
                                                                                                                                                                                                                                                                                                                                              t = f_146;
                                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                              b_104 = t;
                                                                                                                                                                                                                                                                                                                                              t = SSL_kill(c_104, b_104);
                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                              if(match_string(t, "\"SSL_exit\""))
                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                  ATerm r_104 = NULL;
                                                                                                                                                                                                                                                                                                                                                  t = m_146;
                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                      n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                      o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                  t = o_146;
                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                  t = n_146;
                                                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                  r_104 = t;
                                                                                                                                                                                                                                                                                                                                                  t = SSL_exit(r_104);
                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_waitpid\""))
                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                      ATerm c_105 = NULL;
                                                                                                                                                                                                                                                                                                                                                      t = m_146;
                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                          n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                          o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                      t = o_146;
                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                      t = n_146;
                                                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                      c_105 = t;
                                                                                                                                                                                                                                                                                                                                                      t = SSL_waitpid(c_105);
                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_execvp\""))
                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                          ATerm n_105 = NULL,o_105 = NULL;
                                                                                                                                                                                                                                                                                                                                                          t = m_146;
                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                              n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                              o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                          t = o_146;
                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                              f_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                              g_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                          t = g_146;
                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                          t = n_146;
                                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                          o_105 = t;
                                                                                                                                                                                                                                                                                                                                                          t = f_146;
                                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                          n_105 = t;
                                                                                                                                                                                                                                                                                                                                                          t = SSL_execvp(o_105, n_105);
                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                          if(match_string(t, "SSL_fork"))
                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                              t = m_146;
                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                              t = SSL_fork();
                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                              if(match_string(t, "SSL_get_pid"))
                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                  t = m_146;
                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                  t = SSL_get_pid();
                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_TicksToSeconds\""))
                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                      ATerm c_106 = NULL;
                                                                                                                                                                                                                                                                                                                                                                      t = m_146;
                                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                          n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                          o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                                      t = o_146;
                                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                                      t = n_146;
                                                                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                      c_106 = t;
                                                                                                                                                                                                                                                                                                                                                                      t = SSL_TicksToSeconds(c_106);
                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                      if(match_string(t, "SSL_times"))
                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                          t = m_146;
                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                          t = SSL_times();
                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                          if(match_string(t, "SSL_clock"))
                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                              t = m_146;
                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                              t = SSL_clock();
                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                              if(match_string(t, "\"SSL_ClockToSeconds\""))
                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                  ATerm p_106 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                  t = m_146;
                                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                      n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                      o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                  t = o_146;
                                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                  t = n_146;
                                                                                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                  p_106 = t;
                                                                                                                                                                                                                                                                                                                                                                                  t = SSL_ClockToSeconds(p_106);
                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                  if(match_string(t, "SSL_dtime"))
                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                      t = m_146;
                                                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                      t = SSL_dtime();
                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_epoch2UTC\""))
                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                          t = m_146;
                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                              n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                              o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                          t = o_146;
                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                          {
                                                                                                                                                                                                                                                                                                                                                                                            ATerm b_19 = t;
                                                                                                                                                                                                                                                                                                                                                                                            int c_19 = stack_ptr;
                                                                                                                                                                                                                                                                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                                                                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                                                                                                                                                                                ATerm a_107 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                t = n_146;
                                                                                                                                                                                                                                                                                                                                                                                                t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                a_107 = t;
                                                                                                                                                                                                                                                                                                                                                                                                t = SSL_epoch2UTC(a_107);
                                                                                                                                                                                                                                                                                                                                                                                                ;
                                                                                                                                                                                                                                                                                                                                                                                                LocalPopChoice(c_19);
                                                                                                                                                                                                                                                                                                                                                                                              }
                                                                                                                                                                                                                                                                                                                                                                                            else
                                                                                                                                                                                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                                                                                                                                                                                t = b_19;
                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                  ATerm m_107 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                  t = n_146;
                                                                                                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                  m_107 = t;
                                                                                                                                                                                                                                                                                                                                                                                                  t = SSL_epoch2UTC(m_107);
                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                              }
                                                                                                                                                                                                                                                                                                                                                                                          }
                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_epoch2localtime\""))
                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                              ATerm v_107 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                              t = m_146;
                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                  n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                  o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                              t = o_146;
                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                              t = n_146;
                                                                                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                              v_107 = t;
                                                                                                                                                                                                                                                                                                                                                                                              t = SSL_epoch2localtime(v_107);
                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                              if(match_string(t, "SSL_now_epoch_time"))
                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                  t = m_146;
                                                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                  t = SSL_now_epoch_time();
                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                  if(match_string(t, "SSL_time"))
                                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                                      t = m_146;
                                                                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                      t = SSL_time();
                                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_table_rename\""))
                                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                                          ATerm o_108 = NULL,p_108 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                          t = m_146;
                                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                              n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                              o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                          t = o_146;
                                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                              f_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                              g_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                          t = g_146;
                                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                          t = n_146;
                                                                                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                          p_108 = t;
                                                                                                                                                                                                                                                                                                                                                                                                          t = f_146;
                                                                                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                          o_108 = t;
                                                                                                                                                                                                                                                                                                                                                                                                          t = SSL_table_rename(p_108, o_108);
                                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_table_keys\""))
                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                              ATerm z_108 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                              t = m_146;
                                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                                  n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                  o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                              t = o_146;
                                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                              t = n_146;
                                                                                                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                              z_108 = t;
                                                                                                                                                                                                                                                                                                                                                                                                              t = SSL_table_keys(z_108);
                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                              if(match_string(t, "\"SSL_table_remove\""))
                                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                                  ATerm l_109 = NULL,m_109 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                                  t = m_146;
                                                                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                                                      n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                      o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                  t = o_146;
                                                                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                                                      f_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                      g_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                  t = g_146;
                                                                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                  t = n_146;
                                                                                                                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                  m_109 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                  t = f_146;
                                                                                                                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                  l_109 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                  t = SSL_table_remove(m_109, l_109);
                                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_table_get\""))
                                                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                                                      ATerm y_109 = NULL,z_109 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                                      t = m_146;
                                                                                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                                                          n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                          o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                      t = o_146;
                                                                                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                                                          f_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                          g_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                      t = g_146;
                                                                                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                      t = n_146;
                                                                                                                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                      z_109 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                      t = f_146;
                                                                                                                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                      y_109 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                      t = SSL_table_get(z_109, y_109);
                                                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_table_put\""))
                                                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                                                          ATerm n_110 = NULL,o_110 = NULL,p_110 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                                          t = m_146;
                                                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                                              n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                              o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                          t = o_146;
                                                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                                              f_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                              g_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                          t = g_146;
                                                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                                              h_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                              i_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                          t = i_146;
                                                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                          t = n_146;
                                                                                                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                          p_110 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                          t = f_146;
                                                                                                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                          o_110 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                          t = h_146;
                                                                                                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                          n_110 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                          t = SSL_table_put(p_110, o_110, n_110);
                                                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_table_destroy\""))
                                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                                              ATerm a_111 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                                              t = m_146;
                                                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                                                  n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                                  o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                              t = o_146;
                                                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                              t = n_146;
                                                                                                                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                              a_111 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                              t = SSL_table_destroy(a_111);
                                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                                              ATerm j_111 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                                              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("\"SSL_table_create\"", 0, ATtrue)))
                                                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                              t = m_146;
                                                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                                                  n_146 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                                  o_146 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                              t = o_146;
                                                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                              t = n_146;
                                                                                                                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                              j_111 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                              t = SSL_table_create(j_111);
                                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                }
                                                                                                                                                                                                                            }
                                                                                                                                                                                                                        }
                                                                                                                                                                                                                    }
                                                                                                                                                                                                                }
                                                                                                                                                                                                            }
                                                                                                                                                                                                        }
                                                                                                                                                                                                    }
                                                                                                                                                                                                }
                                                                                                                                                                                            }
                                                                                                                                                                                        }
                                                                                                                                                                                    }
                                                                                                                                                                                }
                                                                                                                                                                            }
                                                                                                                                                                        }
                                                                                                                                                                    }
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
ATerm b_26 (ATerm l_100, ATerm m_100, ATerm t)
{
  t = SSL_mkterm(l_100, m_100);
  return(t);
}
ATerm EvalTerm_0_0 (ATerm t)
{
  ATerm h_155 = NULL,k_155 = NULL,l_155 = NULL;
  k_155 = t;
  {
    ATerm i_19 = t;
    int j_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm k_19 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(j_19);
        {
          ATerm p_111 = NULL,q_111 = NULL;
          t = term_u_17;
          q_111 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_u_17, k_155);
          t = z_26(q_111, k_155, t);
          p_111 = t;
          {
            ATerm l_19 = t;
            if((PushChoice() == 0))
              {
                if(!(match_cons(t, sym_NULL_0)))
                  _fail(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = l_19;
              }
            t = p_111;
          }
        }
      }
    else
      {
        t = i_19;
        if(match_cons(t, sym_Op_2))
          {
            l_155 = ATgetArgument(t, 0);
            h_155 = ATgetArgument(t, 1);
            {
              ATerm v_111 = NULL,y_111 = NULL,z_111 = NULL,b_112 = NULL,c_112 = NULL,d_112 = NULL,e_112 = NULL,g_112 = NULL,h_112 = NULL,k_0 = NULL;
              t = SSLgetAnnotations(k_155);
              v_111 = t;
              t = h_155;
              t = map_1_0(EvalTerm_0_0, t);
              y_111 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, l_155, y_111);
              k_0 = t;
              t = SSLsetAnnotations(k_0, v_111);
              z_111 = t;
              if(match_cons(t, sym_Op_2))
                {
                  g_112 = ATgetArgument(t, 0);
                  h_112 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = h_112;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  b_112 = ATgetFirst((ATermList) t);
                  c_112 = (ATerm) ATgetNext((ATermList) t);
                  t = c_112;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      d_112 = ATgetFirst((ATermList) t);
                      e_112 = (ATerm) ATgetNext((ATermList) t);
                      t = e_112;
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = g_112;
                          if(match_string(t, "Cons"))
                            {
                              ATerm m_19 = t;
                              int n_19 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATinsert(CheckATermList(d_112), b_112);
                                  ;
                                  LocalPopChoice(n_19);
                                }
                              else
                                {
                                  t = m_19;
                                  t = z_111;
                                  t = b_26(g_112, h_112, t);
                                }
                            }
                          else
                            {
                              t = z_111;
                              t = b_26(g_112, h_112, t);
                            }
                        }
                      else
                        {
                          t = z_111;
                          t = b_26(g_112, h_112, t);
                        }
                    }
                  else
                    {
                      t = z_111;
                      t = b_26(g_112, h_112, t);
                    }
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = g_112;
                      if(match_string(t, "Nil"))
                        {
                          t = (ATerm) ATempty;
                        }
                      else
                        {
                          t = z_111;
                          t = b_26(g_112, h_112, t);
                        }
                    }
                  else
                    {
                      t = z_111;
                      t = b_26(g_112, h_112, t);
                    }
                }
            }
          }
        else
          {
            if(match_cons(t, sym_Real_1))
              {
                l_155 = ATgetArgument(t, 0);
                t = l_155;
              }
            else
              {
                if(match_cons(t, sym_Str_1))
                  {
                    l_155 = ATgetArgument(t, 0);
                    t = l_155;
                  }
                else
                  {
                    if(match_cons(t, sym_Int_1))
                      {
                        l_155 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = l_155;
                  }
              }
          }
      }
  }
  return(t);
}
ATerm f_26 (ATerm k_79, ATerm l_79, ATerm m_79, ATerm t)
{
  ATerm u_155 = NULL,v_155 = NULL,w_155 = NULL;
  v_155 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_79, l_79);
  t = w_27(k_79, l_79, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm o_19 = ATgetFirst((ATermList) t);
      u_155 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_155), m_79);
  w_155 = t;
  t = SSL_table_put(k_79, l_79, w_155);
  t = v_155;
  return(t);
}
ATerm p_0 (ATerm t)
{
  t = term_p_19;
  return(t);
}
ATerm g_26 (ATerm f_101, ATerm g_101, ATerm t)
{
  ATerm z_155 = NULL;
  z_155 = t;
  {
    ATerm q_19 = t;
    int s_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_19;
        t = get_config_0_0(t);
        t = z_155;
        t = debug_1_0(p_0, t);
        ;
        LocalPopChoice(s_19);
      }
    else
      {
        t = q_19;
      }
    {
      ATerm u_19 = t;
      int v_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_156 = NULL,f_156 = NULL;
          t = term_u_17;
          e_156 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_u_17, f_101);
          t = z_26(e_156, f_101, t);
          f_156 = t;
          if(match_cons(t, sym_NULL_0))
            {
              ATerm w_19 = t;
              int x_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_156;
                  if((g_101 != t))
                    {
                      _fail(t);
                    }
                  t = f_156;
                  ;
                  LocalPopChoice(x_19);
                }
              else
                {
                  t = w_19;
                  {
                    ATerm g_156 = NULL;
                    t = term_u_17;
                    g_156 = t;
                    t = (ATerm) ATmakeAppl(sym__3, term_u_17, f_101, g_101);
                    t = f_26(g_156, f_101, g_101, t);
                  }
                }
            }
          else
            {
              t = f_156;
              if((g_101 != t))
                {
                  _fail(t);
                }
              t = f_156;
            }
          ;
          LocalPopChoice(v_19);
        }
      else
        {
          t = u_19;
          {
            ATerm h_156 = NULL;
            t = term_u_17;
            h_156 = t;
            t = (ATerm) ATmakeAppl(sym__3, term_u_17, f_101, g_101);
            t = x_27(h_156, f_101, g_101, t);
          }
        }
      t = (ATerm) ATmakeAppl(sym__2, f_101, g_101);
    }
  }
  return(t);
}
ATerm i_26 (ATerm i_160 (ATerm), ATerm v_82, ATerm w_82, ATerm t_82, ATerm u_82, ATerm t)
{
  t = not_null(v_82);
  t = i_160(t);
  t = not_null(u_82);
  {
    ATerm z_19 = t;
    if((PushChoice() == 0))
      {
        ATerm q_0 (ATerm t)
        {
          ATerm b_158 = NULL;
          if(match_cons(t, sym__2))
            {
              if(((v_82 != NULL) && (v_82 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                v_82 = ATgetArgument(t, 0);
              b_158 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_82), b_158);
          {
            ATerm a_20 = t;
            if((PushChoice() == 0))
              {
                ATerm c_158 = NULL;
                if(match_cons(t, sym__2))
                  {
                    c_158 = ATgetArgument(t, 0);
                    if((c_158 != ATgetArgument(t, 1)))
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
                t = a_20;
              }
          }
          return(t);
        }
        t = fetch_1_0(q_0, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_19;
      }
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_82), (ATerm) ATinsert(CheckATermList(not_null(u_82)), (ATerm) ATmakeAppl(sym__2, not_null(v_82), not_null(w_82))));
  }
  return(t);
}
ATerm r_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_20 = ATgetArgument(t, 0);
      if(((ATgetType(b_20) != AT_LIST) || !(ATisEmpty(b_20))))
        _fail(t);
      {
        ATerm c_20 = ATgetArgument(t, 1);
        if(((ATgetType(c_20) != AT_LIST) || !(ATisEmpty(c_20))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_0 (ATerm t)
{
  ATerm l_113 = NULL,m_113 = NULL,n_113 = NULL,o_113 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_20 = ATgetArgument(t, 0);
      if(((ATgetType(d_20) == AT_LIST) && !(ATisEmpty(d_20))))
        {
          l_113 = ATgetFirst((ATermList) d_20);
          m_113 = (ATerm) ATgetNext((ATermList) d_20);
        }
      else
        _fail(t);
      {
        ATerm e_20 = ATgetArgument(t, 1);
        if(((ATgetType(e_20) == AT_LIST) && !(ATisEmpty(e_20))))
          {
            n_113 = ATgetFirst((ATermList) e_20);
            o_113 = (ATerm) ATgetNext((ATermList) e_20);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_113, n_113), (ATerm) ATmakeAppl(sym__2, m_113, o_113));
  return(t);
}
ATerm u_0 (ATerm t)
{
  ATerm p_113 = NULL,q_113 = NULL;
  if(match_cons(t, sym__2))
    {
      p_113 = ATgetArgument(t, 0);
      q_113 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(q_113), p_113);
  return(t);
}
ATerm PatDecompose_0_0 (ATerm t)
{
  ATerm j_157 = NULL,k_157 = NULL,l_157 = NULL,m_157 = NULL,p_157 = NULL,q_157 = NULL,r_157 = NULL;
  j_157 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_157 = ATgetFirst((ATermList) t);
      r_157 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = k_157;
  if(match_cons(t, sym__2))
    {
      l_157 = ATgetArgument(t, 0);
      q_157 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_157;
  if(match_cons(t, sym_Real_1))
    {
      m_157 = ATgetArgument(t, 0);
      t = q_157;
      if((m_157 != t))
        {
          _fail(t);
        }
      t = r_157;
    }
  else
    {
      if(match_cons(t, sym_Str_1))
        {
          m_157 = ATgetArgument(t, 0);
          t = q_157;
          if((m_157 != t))
            {
              _fail(t);
            }
          t = r_157;
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              m_157 = ATgetArgument(t, 0);
              t = q_157;
              if((m_157 != t))
                {
                  _fail(t);
                }
              t = r_157;
            }
          else
            {
              ATerm g_113 = NULL,j_113 = NULL;
              if(match_cons(t, sym_Op_2))
                {
                  m_157 = ATgetArgument(t, 0);
                  p_157 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_explode_term(q_157);
              if(match_cons(t, sym__2))
                {
                  if((m_157 != ATgetArgument(t, 0)))
                    {
                      _fail(ATgetArgument(t, 0));
                    }
                  g_113 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, p_157, g_113);
              t = genzip_4_0(r_0, t_0, u_0, _id, t);
              j_113 = t;
              t = (ATerm) ATmakeAppl(sym__2, j_113, r_157);
              t = conc_0_0(t);
            }
        }
    }
  return(t);
}
ATerm x_0 (ATerm t)
{
  ATerm m_158 = NULL;
  m_158 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_158, (ATerm) ATempty);
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm p_158 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_20 = ATgetArgument(t, 0);
      if(((ATgetType(f_20) != AT_LIST) || !(ATisEmpty(f_20))))
        _fail(t);
      p_158 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_158;
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = term_g_20;
  return(t);
}
ATerm y_161 (ATerm v_158, ATerm w_158, ATerm x_158, ATerm t)
{
  ATerm y_158 = NULL,b_159 = NULL,c_159 = NULL,b_8 = NULL;
  t = SSLgetAnnotations(v_158);
  y_158 = t;
  t = w_158;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm h_20 = ATgetFirst((ATermList) t);
      if(match_cons(h_20, sym__2))
        {
          b_159 = ATgetArgument(h_20, 0);
          if((b_159 != ATgetArgument(h_20, 1)))
            {
              _fail(ATgetArgument(h_20, 1));
            }
        }
      else
        _fail(t);
      c_159 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_159, x_158);
  b_8 = t;
  t = SSLsetAnnotations(b_8, y_158);
  return(t);
}
ATerm a_162 (ATerm g_159, ATerm h_159, ATerm i_159, ATerm t)
{
  ATerm q_159 = NULL,t_159 = NULL,c_8 = NULL;
  t = SSLgetAnnotations(g_159);
  q_159 = t;
  t = h_159;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm i_20 = ATgetFirst((ATermList) t);
      if(match_cons(i_20, sym__2))
        {
          ATerm k_20 = ATgetArgument(i_20, 0);
          if(!(match_cons(k_20, sym_Wld_0)))
            _fail(t);
          {
            ATerm l_20 = ATgetArgument(i_20, 1);
          }
        }
      else
        _fail(t);
      t_159 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_159, i_159);
  c_8 = t;
  t = SSLsetAnnotations(c_8, q_159);
  return(t);
}
ATerm b_162 (ATerm z_159, ATerm a_160, ATerm b_160, ATerm t)
{
  ATerm c_160 = NULL,h_160 = NULL,d_8 = NULL;
  t = SSLgetAnnotations(z_159);
  c_160 = t;
  t = a_160;
  t = PatDecompose_0_0(t);
  h_160 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_160, b_160);
  d_8 = t;
  t = SSLsetAnnotations(d_8, c_160);
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = term_m_20;
  return(t);
}
ATerm stratego_match_1_0 (ATerm g_163 (ATerm), ATerm t)
{
  ATerm j_1 (ATerm t)
  {
    ATerm s_161 = NULL,q_158 = NULL,k_160 = NULL,m_160 = NULL,n_160 = NULL,o_160 = NULL,s_160 = NULL,d_161 = NULL,f_161 = NULL;
    q_158 = t;
    {
      ATerm n_20 = t;
      int o_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_t_19;
          t = get_config_0_0(t);
          t = q_158;
          t = debug_1_0(l_1, t);
          ;
          LocalPopChoice(o_20);
        }
      else
        {
          t = n_20;
          t = q_158;
        }
      s_160 = t;
      if(match_cons(t, sym__2))
        {
          d_161 = ATgetArgument(t, 0);
          f_161 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = d_161;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_160 = ATgetFirst((ATermList) t);
          o_160 = (ATerm) ATgetNext((ATermList) t);
          t = k_160;
          if(match_cons(t, sym__2))
            {
              m_160 = ATgetArgument(t, 0);
              n_160 = ATgetArgument(t, 1);
              {
                ATerm p_20 = t;
                int q_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = y_161(s_160, d_161, f_161, t);
                    ;
                    LocalPopChoice(q_20);
                  }
                else
                  {
                    t = p_20;
                    {
                      ATerm r_20 = t;
                      int s_20 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = s_160;
                          t = i_26(g_163, m_160, n_160, o_160, f_161, t);
                          ;
                          LocalPopChoice(s_20);
                        }
                      else
                        {
                          t = r_20;
                          {
                            ATerm t_20 = t;
                            int u_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = a_162(s_160, d_161, f_161, t);
                                ;
                                LocalPopChoice(u_20);
                              }
                            else
                              {
                                t = t_20;
                                t = b_162(s_160, d_161, f_161, t);
                              }
                          }
                        }
                    }
                  }
              }
            }
          else
            {
              ATerm v_20 = t;
              int w_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_161(s_160, d_161, f_161, t);
                  ;
                  LocalPopChoice(w_20);
                }
              else
                {
                  t = v_20;
                  {
                    ATerm x_20 = t;
                    int y_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = a_162(s_160, d_161, f_161, t);
                        ;
                        LocalPopChoice(y_20);
                      }
                    else
                      {
                        t = x_20;
                        t = b_162(s_160, d_161, f_161, t);
                      }
                  }
                }
            }
        }
      else
        {
          ATerm z_20 = t;
          int a_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_161(s_160, d_161, f_161, t);
              ;
              LocalPopChoice(a_21);
            }
          else
            {
              t = z_20;
              {
                ATerm b_21 = t;
                int c_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = a_162(s_160, d_161, f_161, t);
                    ;
                    LocalPopChoice(c_21);
                  }
                else
                  {
                    t = b_21;
                    t = b_162(s_160, d_161, f_161, t);
                  }
              }
            }
        }
      s_161 = t;
      {
        ATerm d_21 = t;
        int e_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_t_19;
            t = get_config_0_0(t);
            t = s_161;
            t = debug_1_0(m_1, t);
            ;
            LocalPopChoice(e_21);
          }
        else
          {
            t = d_21;
            t = s_161;
          }
      }
    }
    return(t);
  }
  t = for_3_0(x_0, e_1, j_1, t);
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm l_162 = NULL,m_162 = NULL,n_162 = NULL,h_8 = NULL;
  n_162 = t;
  if(match_cons(t, sym_Var_1))
    {
      m_162 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_162);
  l_162 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, m_162);
  h_8 = t;
  t = SSLsetAnnotations(h_8, l_162);
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = term_f_21;
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm t_162 = NULL,u_162 = NULL;
  if(match_cons(t, sym__2))
    {
      t_162 = ATgetArgument(t, 0);
      u_162 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_26(t_162, u_162, t);
  return(t);
}
ATerm k_26 (ATerm d_101, ATerm e_101, ATerm t)
{
  ATerm o_162 = NULL;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, d_101, e_101));
  t = stratego_match_1_0(n_1, t);
  o_162 = t;
  {
    ATerm g_21 = t;
    int h_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_19;
        t = get_config_0_0(t);
        t = o_162;
        t = debug_1_0(o_1, t);
        ;
        LocalPopChoice(h_21);
      }
    else
      {
        t = g_21;
        t = o_162;
      }
    t = map_1_0(p_1, t);
    t = e_101;
  }
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm w_162 = NULL,x_162 = NULL,y_162 = NULL,z_162 = NULL;
  w_162 = t;
  t = term_u_17;
  x_162 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, w_162);
  y_162 = t;
  t = term_i_21;
  z_162 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_u_17, (ATerm)ATmakeAppl(sym_Var_1, w_162), term_i_21);
  t = x_27(x_162, y_162, z_162, t);
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm a_163 = NULL,b_163 = NULL,c_163 = NULL;
  a_163 = t;
  t = term_u_17;
  b_163 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, a_163);
  c_163 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_17, (ATerm) ATmakeAppl(sym_Var_1, a_163));
  t = v_26(b_163, c_163, t);
  return(t);
}
ATerm l_26 (ATerm h_163 (ATerm), ATerm m_101, ATerm j_101, ATerm k_101, ATerm t)
{
  ATerm v_162 = NULL;
  t = m_101;
  t = map_1_0(u_1, t);
  t = (ATerm) ATmakeAppl(sym_App_2, j_101, k_101);
  t = h_163(t);
  v_162 = t;
  t = m_101;
  t = map_1_0(v_1, t);
  t = v_162;
  return(t);
}
ATerm z_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_21 = ATgetArgument(t, 0);
      if(((ATgetType(j_21) != AT_LIST) || !(ATisEmpty(j_21))))
        _fail(t);
      {
        ATerm o_21 = ATgetArgument(t, 1);
        if(((ATgetType(o_21) != AT_LIST) || !(ATisEmpty(o_21))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm q_163 = NULL,r_163 = NULL,s_163 = NULL,u_163 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_21 = ATgetArgument(t, 0);
      if(((ATgetType(p_21) == AT_LIST) && !(ATisEmpty(p_21))))
        {
          q_163 = ATgetFirst((ATermList) p_21);
          r_163 = (ATerm) ATgetNext((ATermList) p_21);
        }
      else
        _fail(t);
      {
        ATerm q_21 = ATgetArgument(t, 1);
        if(((ATgetType(q_21) == AT_LIST) && !(ATisEmpty(q_21))))
          {
            s_163 = ATgetFirst((ATermList) q_21);
            u_163 = (ATerm) ATgetNext((ATermList) q_21);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_163, s_163), (ATerm) ATmakeAppl(sym__2, r_163, u_163));
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm v_163 = NULL,w_163 = NULL;
  if(match_cons(t, sym__2))
    {
      v_163 = ATgetArgument(t, 0);
      w_163 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_163), v_163);
  return(t);
}
ATerm n_26 (ATerm e_163 (ATerm), ATerm r_99, ATerm s_99, ATerm r_786, ATerm t)
{
  ATerm i_163 = NULL,j_163 = NULL;
  t = SSL_explode_term(not_null(r_786));
  if(match_cons(t, sym__2))
    {
      if(((r_99 != NULL) && (r_99 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_99 = ATgetArgument(t, 0);
      if(((i_163 != NULL) && (i_163 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_163 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(s_99), not_null(i_163));
  {
    ATerm i_2 (ATerm t)
    {
      ATerm x_163 = NULL,y_163 = NULL;
      if(match_cons(t, sym__2))
        {
          x_163 = ATgetArgument(t, 0);
          y_163 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_App_2, x_163, y_163);
      t = e_163(t);
      {
        ATerm r_21 = t;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_Fail_0)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = r_21;
          }
      }
      return(t);
    }
    t = genzip_4_0(z_1, a_2, c_2, i_2, t);
    if(((j_163 != NULL) && (j_163 != t)))
      _fail(t);
    else
      j_163 = t;
    t = SSL_mkterm(not_null(r_99), not_null(j_163));
  }
  return(t);
}
ATerm p_26 (ATerm d_163 (ATerm), ATerm m_99, ATerm t_783, ATerm t)
{
  ATerm z_163 = NULL,a_164 = NULL,b_164 = NULL;
  t = SSL_explode_term(not_null(t_783));
  if(match_cons(t, sym__2))
    {
      if(((z_163 != NULL) && (z_163 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_163 = ATgetArgument(t, 0);
      if(((a_164 != NULL) && (a_164 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        a_164 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(a_164);
  {
    ATerm j_2 (ATerm t)
    {
      ATerm f_164 = NULL;
      f_164 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(m_99), f_164);
      t = d_163(t);
      {
        ATerm s_21 = t;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_Fail_0)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = s_21;
          }
      }
      return(t);
    }
    t = fetch_1_0(j_2, t);
    if(((b_164 != NULL) && (b_164 != t)))
      _fail(t);
    else
      b_164 = t;
    t = SSL_mkterm(not_null(z_163), not_null(b_164));
  }
  return(t);
}
ATerm EvalAll_1_0 (ATerm j_0 (ATerm), ATerm t)
{
  ATerm k_165 = NULL,l_165 = NULL,n_165 = NULL,o_165 = NULL;
  k_165 = t;
  if(match_cons(t, sym_App_2))
    {
      l_165 = ATgetArgument(t, 0);
      o_165 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_165;
  if(match_cons(t, sym_All_1))
    {
      n_165 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm u_21 = t;
    int v_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_is_string(o_165);
        t = o_165;
        ;
        LocalPopChoice(v_21);
      }
    else
      {
        t = u_21;
        {
          ATerm p_116 = NULL,u_116 = NULL,x_116 = NULL;
          t = SSL_explode_term(not_null(o_165));
          if(match_cons(t, sym__2))
            {
              if(((p_116 != NULL) && (p_116 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                p_116 = ATgetArgument(t, 0);
              if(((u_116 != NULL) && (u_116 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                u_116 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = not_null(o_165);
          {
            ATerm w_21 = t;
            if((PushChoice() == 0))
              {
                ATerm j_117 = NULL;
                j_117 = t;
                t = SSL_is_string(j_117);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = w_21;
              }
            t = not_null(u_116);
            {
              ATerm k_2 (ATerm t)
              {
                ATerm t_117 = NULL;
                t_117 = t;
                t = (ATerm) ATmakeAppl(sym_App_2, not_null(n_165), t_117);
                t = j_0(t);
                {
                  ATerm x_21 = t;
                  if((PushChoice() == 0))
                    {
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = x_21;
                    }
                }
                return(t);
              }
              t = map_1_0(k_2, t);
              if(((x_116 != NULL) && (x_116 != t)))
                _fail(t);
              else
                x_116 = t;
              t = SSL_mkterm(not_null(p_116), not_null(x_116));
            }
          }
        }
      }
  }
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm x_165 = NULL,y_165 = NULL,z_165 = NULL,a_166 = NULL,b_166 = NULL,c_166 = NULL;
  x_165 = t;
  if(match_cons(t, sym_SDef_3))
    {
      y_165 = ATgetArgument(t, 0);
      z_165 = ATgetArgument(t, 1);
      {
        ATerm y_21 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = z_165;
  t = foldr_3_0(m_2, n_2, o_2, t);
  a_166 = t;
  t = term_t_17;
  b_166 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_165, a_166);
  c_166 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_t_17, (ATerm)ATmakeAppl(sym__2, y_165, a_166), x_165);
  t = x_27(b_166, c_166, x_165, t);
  return(t);
}
ATerm m_2 (ATerm t)
{
  t = term_z_21;
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm d_166 = NULL,e_166 = NULL;
  if(match_cons(t, sym__2))
    {
      d_166 = ATgetArgument(t, 0);
      e_166 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_27(d_166, e_166, t);
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = term_a_22;
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm f_166 = NULL,i_166 = NULL,l_166 = NULL,m_166 = NULL,n_166 = NULL;
  if(match_cons(t, sym_SDef_3))
    {
      f_166 = ATgetArgument(t, 0);
      i_166 = ATgetArgument(t, 1);
      {
        ATerm b_22 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = i_166;
  t = foldr_3_0(q_2, r_2, s_2, t);
  l_166 = t;
  t = term_t_17;
  m_166 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_166, l_166);
  n_166 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_17, (ATerm) ATmakeAppl(sym__2, f_166, l_166));
  t = v_26(m_166, n_166, t);
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = term_z_21;
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm o_166 = NULL,s_166 = NULL;
  if(match_cons(t, sym__2))
    {
      o_166 = ATgetArgument(t, 0);
      s_166 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_27(o_166, s_166, t);
  return(t);
}
ATerm s_2 (ATerm t)
{
  t = term_a_22;
  return(t);
}
ATerm s_26 (ATerm n_163 (ATerm), ATerm c_103, ATerm z_102, ATerm a_103, ATerm t)
{
  ATerm w_165 = NULL;
  t = c_103;
  t = map_1_0(l_2, t);
  t = (ATerm) ATmakeAppl(sym_App_2, z_102, a_103);
  t = n_163(t);
  w_165 = t;
  t = c_103;
  t = map_1_0(p_2, t);
  t = w_165;
  return(t);
}
ATerm t_2 (ATerm t)
{
  t = term_z_21;
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm d_167 = NULL,e_167 = NULL;
  if(match_cons(t, sym__2))
    {
      d_167 = ATgetArgument(t, 0);
      e_167 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_27(d_167, e_167, t);
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = term_a_22;
  return(t);
}
ATerm t_26 (ATerm x_102, ATerm y_102, ATerm w_102, ATerm t)
{
  ATerm v_166 = NULL,y_166 = NULL,b_167 = NULL,c_167 = NULL;
  t = y_102;
  t = foldr_3_0(t_2, v_2, w_2, t);
  v_166 = t;
  t = term_d_22;
  b_167 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_22), v_166), term_j_22), x_102), term_e_22);
  c_167 = t;
  t = SSL_printnl(b_167, c_167);
  t = term_a_22;
  y_166 = t;
  t = SSL_exit(y_166);
  t = term_l_22;
  return(t);
}
ATerm v_26 (ATerm z_78, ATerm a_79, ATerm t)
{
  ATerm j_167 = NULL,n_167 = NULL;
  j_167 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_78, a_79);
  {
    ATerm m_22 = t;
    int p_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_118 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm u_22 = ATgetArgument(t, 0);
            ATerm a_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, z_78, a_79);
        t = w_27(z_78, a_79, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm c_23 = ATgetFirst((ATermList) t);
            l_118 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = l_118;
        ;
        LocalPopChoice(p_22);
      }
    else
      {
        t = m_22;
        t = (ATerm) ATempty;
      }
    n_167 = t;
    t = SSL_table_put(z_78, a_79, n_167);
    t = j_167;
  }
  return(t);
}
ATerm z_26 (ATerm i_79, ATerm j_79, ATerm t)
{
  ATerm y_167 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, i_79, j_79);
  t = w_27(i_79, j_79, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_167 = ATgetFirst((ATermList) t);
      {
        ATerm d_23 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = y_167;
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = term_z_21;
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm v_168 = NULL,w_168 = NULL;
  if(match_cons(t, sym__2))
    {
      v_168 = ATgetArgument(t, 0);
      w_168 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_27(v_168, w_168, t);
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = term_a_22;
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm y_168 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      y_168 = ATgetArgument(t, 0);
      t = y_168;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_168 = ATgetArgument(t, 0);
          {
            ATerm e_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = y_168;
    }
  return(t);
}
ATerm b_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_23 = ATgetArgument(t, 0);
      if(((ATgetType(f_23) != AT_LIST) || !(ATisEmpty(f_23))))
        _fail(t);
      {
        ATerm g_23 = ATgetArgument(t, 1);
        if(((ATgetType(g_23) != AT_LIST) || !(ATisEmpty(g_23))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm c_169 = NULL,d_169 = NULL,e_169 = NULL,f_169 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_23 = ATgetArgument(t, 0);
      if(((ATgetType(i_23) == AT_LIST) && !(ATisEmpty(i_23))))
        {
          c_169 = ATgetFirst((ATermList) i_23);
          d_169 = (ATerm) ATgetNext((ATermList) i_23);
        }
      else
        _fail(t);
      {
        ATerm k_23 = ATgetArgument(t, 1);
        if(((ATgetType(k_23) == AT_LIST) && !(ATisEmpty(k_23))))
          {
            e_169 = ATgetFirst((ATermList) k_23);
            f_169 = (ATerm) ATgetNext((ATermList) k_23);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_169, e_169), (ATerm) ATmakeAppl(sym__2, d_169, f_169));
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm g_169 = NULL,h_169 = NULL;
  if(match_cons(t, sym__2))
    {
      g_169 = ATgetArgument(t, 0);
      h_169 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_169), g_169);
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm i_169 = NULL,j_169 = NULL,k_169 = NULL,l_169 = NULL,m_169 = NULL;
  if(match_cons(t, sym__2))
    {
      i_169 = ATgetArgument(t, 0);
      j_169 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_t_17;
  k_169 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_169, term_z_21);
  l_169 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, i_169, (ATerm)ATempty, j_169);
  m_169 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_t_17, (ATerm)ATmakeAppl(sym__2, i_169, term_z_21), (ATerm) ATmakeAppl(sym_SDef_3, i_169, (ATerm)ATempty, j_169));
  t = x_27(k_169, l_169, m_169, t);
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm n_169 = NULL,o_169 = NULL,p_169 = NULL;
  n_169 = t;
  t = term_t_17;
  o_169 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_169, term_z_21);
  p_169 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_17, (ATerm) ATmakeAppl(sym__2, n_169, term_z_21));
  t = v_26(o_169, p_169, t);
  return(t);
}
ATerm b_27 (ATerm m_163 (ATerm), ATerm m_102, ATerm o_102, ATerm q_102, ATerm t)
{
  ATerm o_168 = NULL,p_168 = NULL,q_168 = NULL,r_168 = NULL,s_168 = NULL,t_168 = NULL,u_168 = NULL;
  t = o_102;
  t = foldr_3_0(x_2, y_2, z_2, t);
  s_168 = t;
  t = term_t_17;
  t_168 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_102, s_168);
  u_168 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_17, (ATerm) ATmakeAppl(sym__2, m_102, s_168));
  t = z_26(t_168, u_168, t);
  if(match_cons(t, sym_SDef_3))
    {
      if((m_102 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      o_168 = ATgetArgument(t, 1);
      p_168 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = o_168;
  t = map_1_0(a_3, t);
  r_168 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_168, o_102);
  t = genzip_4_0(b_3, c_3, e_3, f_3, t);
  t = (ATerm) ATmakeAppl(sym_App_2, p_168, q_102);
  t = m_163(t);
  q_168 = t;
  t = r_168;
  t = map_1_0(g_3, t);
  t = q_168;
  return(t);
}
ATerm c_27 (ATerm l_163 (ATerm), ATerm i_102, ATerm j_102, ATerm k_102, ATerm t)
{
  ATerm l_23 = t;
  int m_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_App_2, i_102, k_102);
      t = l_163(t);
      {
        ATerm n_23 = t;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_Fail_0)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = n_23;
          }
      }
      ;
      LocalPopChoice(m_23);
    }
  else
    {
      t = l_23;
      {
        ATerm o_23 = t;
        int p_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_App_2, j_102, k_102);
            t = l_163(t);
            {
              ATerm r_23 = t;
              if((PushChoice() == 0))
                {
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = r_23;
                }
            }
            ;
            LocalPopChoice(p_23);
          }
        else
          {
            t = o_23;
            t = term_l_22;
          }
      }
    }
  return(t);
}
ATerm d_27 (ATerm k_163 (ATerm), ATerm e_102, ATerm f_102, ATerm g_102, ATerm t)
{
  ATerm s_23 = t;
  int t_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_App_2, e_102, g_102);
      t = k_163(t);
      {
        ATerm w_23 = t;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_Fail_0)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = w_23;
          }
      }
      ;
      LocalPopChoice(t_23);
    }
  else
    {
      t = s_23;
      {
        ATerm x_23 = t;
        int y_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_App_2, f_102, g_102);
            t = k_163(t);
            {
              ATerm z_23 = t;
              if((PushChoice() == 0))
                {
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = z_23;
                }
            }
            ;
            LocalPopChoice(y_23);
          }
        else
          {
            t = x_23;
            t = term_l_22;
          }
      }
    }
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = term_a_24;
  return(t);
}
ATerm eval_0_0 (ATerm t)
{
  ATerm x_170 = NULL,s_170 = NULL,t_170 = NULL,u_170 = NULL;
  u_170 = t;
  if(match_cons(t, sym_App_2))
    {
      s_170 = ATgetArgument(t, 0);
      t_170 = ATgetArgument(t, 1);
      {
        ATerm d_24 = t;
        int g_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_119 = NULL,l_119 = NULL,j_8 = NULL;
            t = SSLgetAnnotations(u_170);
            c_119 = t;
            t = t_170;
            t = eval_0_0(t);
            l_119 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, s_170, l_119);
            j_8 = t;
            t = SSLsetAnnotations(j_8, c_119);
            ;
            LocalPopChoice(g_24);
          }
        else
          {
            t = d_24;
            t = u_170;
          }
      }
    }
  else
    {
      t = u_170;
    }
  x_170 = t;
  {
    ATerm h_24 = t;
    int j_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_19;
        t = get_config_0_0(t);
        t = x_170;
        t = debug_1_0(h_3, t);
        ;
        LocalPopChoice(j_24);
      }
    else
      {
        t = h_24;
        t = x_170;
      }
    {
      ATerm k_24 = t;
      int l_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_24 = t;
          int n_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_171 = NULL,f_171 = NULL,g_171 = NULL,h_171 = NULL,i_171 = NULL,j_171 = NULL;
              f_171 = t;
              if(match_cons(t, sym_App_2))
                {
                  g_171 = ATgetArgument(t, 0);
                  j_171 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = j_171;
              if(match_cons(t, sym_Fail_0))
                {
                  t = g_171;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = j_171;
                    }
                  else
                    {
                      if(match_cons(t, sym_Fail_0))
                        {
                          t = term_l_22;
                        }
                      else
                        {
                          ATerm o_24 = t;
                          int p_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Test_1))
                                {
                                  ATerm q_24 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(p_24);
                              t = term_l_22;
                            }
                          else
                            {
                              t = o_24;
                              {
                                ATerm r_24 = t;
                                int t_24 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_Not_1))
                                      {
                                        ATerm u_24 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(t_24);
                                    t = term_l_22;
                                  }
                                else
                                  {
                                    t = r_24;
                                    {
                                      ATerm v_24 = t;
                                      int a_25 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_Seq_2))
                                            {
                                              ATerm b_25 = ATgetArgument(t, 0);
                                              ATerm c_25 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(a_25);
                                          t = term_l_22;
                                        }
                                      else
                                        {
                                          t = v_24;
                                          {
                                            ATerm d_25 = t;
                                            int f_25 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_Choice_2))
                                                  {
                                                    ATerm g_25 = ATgetArgument(t, 0);
                                                    ATerm i_25 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(f_25);
                                                t = term_l_22;
                                              }
                                            else
                                              {
                                                t = d_25;
                                                {
                                                  ATerm m_25 = t;
                                                  int o_25 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      if(match_cons(t, sym_LChoice_2))
                                                        {
                                                          ATerm r_25 = ATgetArgument(t, 0);
                                                          ATerm y_25 = ATgetArgument(t, 1);
                                                        }
                                                      else
                                                        _fail(t);
                                                      LocalPopChoice(o_25);
                                                      t = term_l_22;
                                                    }
                                                  else
                                                    {
                                                      t = m_25;
                                                      {
                                                        ATerm z_25 = t;
                                                        int a_26 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            if(match_cons(t, sym_Call_2))
                                                              {
                                                                h_171 = ATgetArgument(t, 0);
                                                                {
                                                                  ATerm c_26 = ATgetArgument(t, 1);
                                                                }
                                                              }
                                                            else
                                                              _fail(t);
                                                            LocalPopChoice(a_26);
                                                            t = h_171;
                                                            {
                                                              ATerm e_26 = t;
                                                              int h_26 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  if(match_cons(t, sym_SVar_1))
                                                                    {
                                                                      ATerm j_26 = ATgetArgument(t, 0);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  LocalPopChoice(h_26);
                                                                  t = term_l_22;
                                                                }
                                                              else
                                                                {
                                                                  t = e_26;
                                                                  t = term_l_22;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = z_25;
                                                            {
                                                              ATerm q_26 = t;
                                                              int r_26 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  if(match_cons(t, sym_Let_2))
                                                                    {
                                                                      ATerm u_26 = ATgetArgument(t, 0);
                                                                      ATerm w_26 = ATgetArgument(t, 1);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  LocalPopChoice(r_26);
                                                                  t = term_l_22;
                                                                }
                                                              else
                                                                {
                                                                  t = q_26;
                                                                  {
                                                                    ATerm x_26 = t;
                                                                    int y_26 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_Rec_2))
                                                                          {
                                                                            ATerm e_27 = ATgetArgument(t, 0);
                                                                            ATerm f_27 = ATgetArgument(t, 1);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(y_26);
                                                                        t = term_l_22;
                                                                      }
                                                                    else
                                                                      {
                                                                        t = x_26;
                                                                        t = term_l_22;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
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
                  t = g_171;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = j_171;
                    }
                  else
                    {
                      if(match_cons(t, sym_Fail_0))
                        {
                          t = term_l_22;
                        }
                      else
                        {
                          if(match_cons(t, sym_Test_1))
                            {
                              h_171 = ATgetArgument(t, 0);
                              t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Seq_2, h_171, (ATerm) ATmakeAppl(sym_Build_1, j_171)), j_171);
                              {
                                ATerm g_27 = t;
                                int i_27 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = eval_0_0(t);
                                    ;
                                    LocalPopChoice(i_27);
                                  }
                                else
                                  {
                                    t = g_27;
                                  }
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_Not_1))
                                {
                                  h_171 = ATgetArgument(t, 0);
                                  t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Not_1, h_171), j_171);
                                  {
                                    ATerm j_27 = t;
                                    int k_27 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = (ATerm) ATmakeAppl(sym_App_2, h_171, j_171);
                                        t = eval_0_0(t);
                                        if(!(match_cons(t, sym_Fail_0)))
                                          _fail(t);
                                        t = j_171;
                                        ;
                                        LocalPopChoice(k_27);
                                      }
                                    else
                                      {
                                        t = j_27;
                                        t = term_l_22;
                                      }
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Seq_2))
                                    {
                                      h_171 = ATgetArgument(t, 0);
                                      i_171 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_App_2, i_171, (ATerm) ATmakeAppl(sym_App_2, h_171, j_171));
                                      {
                                        ATerm s_27 = t;
                                        int u_27 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = eval_0_0(t);
                                            ;
                                            LocalPopChoice(u_27);
                                          }
                                        else
                                          {
                                            t = s_27;
                                          }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          h_171 = ATgetArgument(t, 0);
                                          i_171 = ATgetArgument(t, 1);
                                          t = f_171;
                                          t = d_27(eval_0_0, h_171, i_171, j_171, t);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              h_171 = ATgetArgument(t, 0);
                                              i_171 = ATgetArgument(t, 1);
                                              t = f_171;
                                              t = c_27(eval_0_0, h_171, i_171, j_171, t);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Call_2))
                                                {
                                                  h_171 = ATgetArgument(t, 0);
                                                  i_171 = ATgetArgument(t, 1);
                                                  t = h_171;
                                                  if(match_cons(t, sym_SVar_1))
                                                    {
                                                      e_171 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  {
                                                    ATerm y_27 = t;
                                                    int b_28 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = f_171;
                                                        t = b_27(eval_0_0, e_171, i_171, j_171, t);
                                                        ;
                                                        LocalPopChoice(b_28);
                                                      }
                                                    else
                                                      {
                                                        t = y_27;
                                                        t = f_171;
                                                        t = t_26(e_171, i_171, j_171, t);
                                                      }
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Let_2))
                                                    {
                                                      h_171 = ATgetArgument(t, 0);
                                                      i_171 = ATgetArgument(t, 1);
                                                      t = f_171;
                                                      t = s_26(eval_0_0, h_171, i_171, j_171, t);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Rec_2))
                                                        {
                                                          h_171 = ATgetArgument(t, 0);
                                                          i_171 = ATgetArgument(t, 1);
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, h_171, (ATerm)ATempty, i_171)), i_171), j_171);
                                                      {
                                                        ATerm c_28 = t;
                                                        int d_28 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = eval_0_0(t);
                                                            ;
                                                            LocalPopChoice(d_28);
                                                          }
                                                        else
                                                          {
                                                            t = c_28;
                                                          }
                                                      }
                                                    }
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
              LocalPopChoice(n_24);
            }
          else
            {
              t = m_24;
              {
                ATerm e_28 = t;
                int f_28 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm h_28 = t;
                    int i_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = EvalAll_1_0(eval_0_0, t);
                        ;
                        LocalPopChoice(i_28);
                      }
                    else
                      {
                        t = h_28;
                        {
                          ATerm k_172 = NULL,l_172 = NULL,m_172 = NULL;
                          if(match_cons(t, sym_App_2))
                            {
                              k_172 = ATgetArgument(t, 0);
                              m_172 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = k_172;
                          if(match_cons(t, sym_All_1))
                            {
                              l_172 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = term_l_22;
                        }
                      }
                    ;
                    LocalPopChoice(f_28);
                  }
                else
                  {
                    t = e_28;
                    {
                      ATerm j_28 = t;
                      int k_28 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm a_173 = NULL,b_173 = NULL,c_173 = NULL,d_173 = NULL,e_173 = NULL;
                          b_173 = t;
                          if(match_cons(t, sym_App_2))
                            {
                              c_173 = ATgetArgument(t, 0);
                              e_173 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = c_173;
                          if(match_cons(t, sym_One_1))
                            {
                              d_173 = ATgetArgument(t, 0);
                              {
                                ATerm l_28 = t;
                                int m_28 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = b_173;
                                    t = p_26(eval_0_0, d_173, e_173, t);
                                    ;
                                    LocalPopChoice(m_28);
                                  }
                                else
                                  {
                                    t = l_28;
                                    t = term_l_22;
                                  }
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_Cong_2))
                                {
                                  d_173 = ATgetArgument(t, 0);
                                  a_173 = ATgetArgument(t, 1);
                                  {
                                    ATerm n_28 = t;
                                    int o_28 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = b_173;
                                        t = n_26(eval_0_0, d_173, a_173, e_173, t);
                                        ;
                                        LocalPopChoice(o_28);
                                      }
                                    else
                                      {
                                        t = n_28;
                                        t = SSL_explode_term(e_173);
                                        if(match_cons(t, sym__2))
                                          {
                                            ATerm p_28 = ATgetArgument(t, 0);
                                            ATerm q_28 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = term_l_22;
                                      }
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Scope_2))
                                    {
                                      d_173 = ATgetArgument(t, 0);
                                      a_173 = ATgetArgument(t, 1);
                                      t = b_173;
                                      t = l_26(eval_0_0, d_173, a_173, e_173, t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          d_173 = ATgetArgument(t, 0);
                                          {
                                            ATerm r_28 = t;
                                            int s_28 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = b_173;
                                                t = k_26(d_173, e_173, t);
                                                ;
                                                LocalPopChoice(s_28);
                                              }
                                            else
                                              {
                                                t = r_28;
                                                t = term_l_22;
                                              }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Build_1))
                                            {
                                              d_173 = ATgetArgument(t, 0);
                                              t = d_173;
                                              t = EvalTerm_0_0(t);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  d_173 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              {
                                                ATerm t_28 = t;
                                                int v_28 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = (ATerm) ATmakeAppl(sym_App_2, d_173, e_173);
                                                    t = eval_0_0(t);
                                                    {
                                                      ATerm w_28 = t;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(!(match_cons(t, sym_Fail_0)))
                                                            _fail(t);
                                                          PopChoice();
                                                          _fail(t);
                                                        }
                                                      else
                                                        {
                                                          t = w_28;
                                                        }
                                                      t = e_173;
                                                    }
                                                    ;
                                                    LocalPopChoice(v_28);
                                                  }
                                                else
                                                  {
                                                    t = t_28;
                                                    t = term_l_22;
                                                  }
                                              }
                                            }
                                        }
                                    }
                                }
                            }
                          ;
                          LocalPopChoice(k_28);
                        }
                      else
                        {
                          t = j_28;
                          {
                            ATerm y_28 = t;
                            int z_28 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = EvalPrim_0_0(t);
                                ;
                                LocalPopChoice(z_28);
                              }
                            else
                              {
                                t = y_28;
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
                                  t = term_l_22;
                                }
                              }
                          }
                        }
                    }
                  }
              }
            }
          ;
          LocalPopChoice(l_24);
        }
      else
        {
          t = k_24;
        }
    }
  }
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = term_a_29;
  return(t);
}
ATerm l_3 (ATerm t)
{
  t = term_b_29;
  return(t);
}
ATerm p_27 (ATerm g_49, ATerm h_49, ATerm t)
{
  ATerm m_192 = NULL,w_192 = NULL,p_192 = NULL;
  t = g_49;
  t = desugar_0_0(t);
  m_192 = t;
  t = (ATerm) ATmakeAppl(sym_App_2, m_192, h_49);
  {
    ATerm g_29 = t;
    int h_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_19;
        t = get_config_0_0(t);
        t = (ATerm) ATmakeAppl(sym_App_2, m_192, h_49);
        t = debug_1_0(i_3, t);
        ;
        LocalPopChoice(h_29);
      }
    else
      {
        t = g_29;
      }
    t = eval_0_0(t);
    p_192 = t;
    {
      ATerm i_29 = t;
      int j_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_k_29;
          t = get_config_0_0(t);
          t = p_192;
          t = debug_1_0(l_3, t);
          ;
          LocalPopChoice(j_29);
        }
      else
        {
          t = i_29;
          t = p_192;
        }
      w_192 = t;
      if(match_cons(t, sym_Fail_0))
        {
          ATerm m_29 = t;
          int q_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_156 = NULL,m_156 = NULL,o_156 = NULL;
              t = term_d_22;
              m_156 = t;
              t = (ATerm) ATinsert(ATempty, term_r_29);
              o_156 = t;
              t = SSL_printnl(m_156, o_156);
              t = term_a_22;
              l_156 = t;
              t = SSL_exit(l_156);
              t = (ATerm) ATinsert(ATempty, term_r_29);
              ;
              LocalPopChoice(q_29);
            }
          else
            {
              t = m_29;
              t = w_192;
            }
        }
      else
        {
          t = w_192;
        }
    }
  }
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm w_1 = NULL;
  ATerm s_29 = t;
  int t_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_1 = ATgetArgument(t, 0);
          {
            ATerm u_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_29);
      t = w_1;
    }
  else
    {
      t = s_29;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_1 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_1;
    }
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm b_2 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      b_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, b_2);
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm v_29 = t;
  int w_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(w_29);
    }
  else
    {
      t = v_29;
      {
        ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL,h_2 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            d_2 = ATgetArgument(t, 0);
            t = d_2;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                d_2 = ATgetArgument(t, 0);
                e_2 = ATgetArgument(t, 1);
                f_2 = ATgetArgument(t, 2);
                h_2 = ATgetArgument(t, 3);
                t = f_2;
                t = map_1_0(t_3, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    d_2 = ATgetArgument(t, 0);
                    e_2 = ATgetArgument(t, 1);
                    f_2 = ATgetArgument(t, 2);
                    h_2 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = f_2;
                t = map_1_0(u_3, t);
              }
          }
      }
    }
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm u_2 = NULL;
  ATerm x_29 = t;
  int c_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_2 = ATgetArgument(t, 0);
          {
            ATerm d_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_30);
      t = u_2;
    }
  else
    {
      t = x_29;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_2 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_2;
    }
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm d_3 = NULL;
  ATerm f_30 = t;
  int g_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_3 = ATgetArgument(t, 0);
          {
            ATerm i_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_30);
      t = d_3;
    }
  else
    {
      t = f_30;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_3;
    }
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm k_3 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_3);
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm j_30 = t;
  int l_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(l_30);
    }
  else
    {
      t = j_30;
      {
        ATerm m_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            m_3 = ATgetArgument(t, 0);
            t = m_3;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                m_3 = ATgetArgument(t, 0);
                n_3 = ATgetArgument(t, 1);
                o_3 = ATgetArgument(t, 2);
                p_3 = ATgetArgument(t, 3);
                t = o_3;
                t = map_1_0(y_3, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    m_3 = ATgetArgument(t, 0);
                    n_3 = ATgetArgument(t, 1);
                    o_3 = ATgetArgument(t, 2);
                    p_3 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = o_3;
                t = map_1_0(z_3, t);
              }
          }
      }
    }
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm x_3 = NULL;
  ATerm q_30 = t;
  int r_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_3 = ATgetArgument(t, 0);
          {
            ATerm s_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_30);
      t = x_3;
    }
  else
    {
      t = q_30;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_3;
    }
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm g_4 = NULL;
  ATerm t_30 = t;
  int u_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_4 = ATgetArgument(t, 0);
          {
            ATerm w_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_30);
      t = g_4;
    }
  else
    {
      t = t_30;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_4;
    }
  return(t);
}
ATerm RDtoSD_0_0 (ATerm t)
{
  ATerm c_1 = NULL,g_1 = NULL,h_1 = NULL,i_1 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      g_1 = ATgetArgument(t, 0);
      h_1 = ATgetArgument(t, 1);
      i_1 = ATgetArgument(t, 2);
      c_1 = ATgetArgument(t, 3);
      {
        ATerm q_1 = NULL,r_1 = NULL,s_1 = NULL;
        t = i_1;
        t = map_1_0(q_3, t);
        q_1 = t;
        t = c_1;
        t = free_vars_3_0(r_3, s_3, tboundin_3_0, t);
        s_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_1, q_1);
        t = diff_0_0(t);
        r_1 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, g_1, h_1, i_1, (ATerm) ATmakeAppl(sym_Scope_2, r_1, (ATerm) ATmakeAppl(sym_SRule_1, c_1)));
      }
    }
  else
    {
      ATerm j_3 = NULL;
      if(match_cons(t, sym_RDef_3))
        {
          g_1 = ATgetArgument(t, 0);
          h_1 = ATgetArgument(t, 1);
          i_1 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = i_1;
      t = free_vars_3_0(v_3, w_3, tboundin_3_0, t);
      j_3 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, g_1, h_1, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, j_3, (ATerm) ATmakeAppl(sym_SRule_1, i_1)));
    }
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_x_30;
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = bottomup_1_0(c_4, t);
  t = RDtoSD_0_0(t);
  t = desugar_0_0(t);
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm w_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL,a_5 = NULL;
  a_5 = t;
  if(match_cons(t, sym_LRule_1))
    {
      z_4 = ATgetArgument(t, 0);
      t = z_4;
      if(match_cons(t, sym_Rule_3))
        {
          w_4 = ATgetArgument(t, 0);
          x_4 = ATgetArgument(t, 1);
          y_4 = ATgetArgument(t, 2);
          {
            ATerm y_30 = t;
            int z_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_5 = NULL;
                t = w_4;
                t = free_vars_3_0(d_4, e_4, tboundin_3_0, t);
                e_5 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, e_5, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, w_4, x_4, y_4)));
                ;
                LocalPopChoice(z_30);
              }
            else
              {
                t = y_30;
                t = a_5;
              }
          }
        }
      else
        {
          t = a_5;
        }
    }
  else
    {
      if(match_cons(t, sym_ScopeDefault_1))
        {
          z_4 = ATgetArgument(t, 0);
          {
            ATerm a_31 = t;
            int b_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_6 = NULL;
                t = z_4;
                t = free_vars_3_0(i_4, j_4, tboundin_3_0, t);
                h_6 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, h_6, z_4);
                ;
                LocalPopChoice(b_31);
              }
            else
              {
                t = a_31;
                t = a_5;
              }
          }
        }
      else
        {
          t = a_5;
        }
    }
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm f_5 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_5);
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm c_31 = t;
  int e_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(e_31);
    }
  else
    {
      t = c_31;
      {
        ATerm h_5 = NULL,i_5 = NULL,j_5 = NULL,k_5 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            h_5 = ATgetArgument(t, 0);
            t = h_5;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                h_5 = ATgetArgument(t, 0);
                i_5 = ATgetArgument(t, 1);
                j_5 = ATgetArgument(t, 2);
                k_5 = ATgetArgument(t, 3);
                t = j_5;
                t = map_1_0(f_4, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    h_5 = ATgetArgument(t, 0);
                    i_5 = ATgetArgument(t, 1);
                    j_5 = ATgetArgument(t, 2);
                    k_5 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = j_5;
                t = map_1_0(h_4, t);
              }
          }
      }
    }
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm s_5 = NULL;
  ATerm f_31 = t;
  int g_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_5 = ATgetArgument(t, 0);
          {
            ATerm h_31 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_31);
      t = s_5;
    }
  else
    {
      t = f_31;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_5;
    }
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm b_6 = NULL;
  ATerm i_31 = t;
  int j_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_6 = ATgetArgument(t, 0);
          {
            ATerm k_31 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_31);
      t = b_6;
    }
  else
    {
      t = i_31;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_6;
    }
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm i_6 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_6);
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm l_31 = t;
  int m_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(m_31);
    }
  else
    {
      t = l_31;
      {
        ATerm k_6 = NULL,l_6 = NULL,m_6 = NULL,n_6 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            k_6 = ATgetArgument(t, 0);
            t = k_6;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                k_6 = ATgetArgument(t, 0);
                l_6 = ATgetArgument(t, 1);
                m_6 = ATgetArgument(t, 2);
                n_6 = ATgetArgument(t, 3);
                t = m_6;
                t = map_1_0(k_4, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    k_6 = ATgetArgument(t, 0);
                    l_6 = ATgetArgument(t, 1);
                    m_6 = ATgetArgument(t, 2);
                    n_6 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = m_6;
                t = map_1_0(l_4, t);
              }
          }
      }
    }
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm v_6 = NULL;
  ATerm n_31 = t;
  int p_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_6 = ATgetArgument(t, 0);
          {
            ATerm q_31 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_31);
      t = v_6;
    }
  else
    {
      t = n_31;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_6;
    }
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm e_7 = NULL;
  ATerm s_31 = t;
  int t_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_7 = ATgetArgument(t, 0);
          {
            ATerm u_31 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_31);
      t = e_7;
    }
  else
    {
      t = s_31;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_7;
    }
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_v_31;
  return(t);
}
ATerm s_24 (ATerm m_195, ATerm t)
{
  ATerm j_7 = NULL;
  t = m_195;
  {
    ATerm w_31 = t;
    int x_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_19;
        t = get_config_0_0(t);
        t = m_195;
        t = debug_1_0(a_4, t);
        ;
        LocalPopChoice(x_31);
      }
    else
      {
        t = w_31;
      }
    t = map_1_0(b_4, t);
    j_7 = t;
    {
      ATerm y_31 = t;
      int a_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_t_19;
          t = get_config_0_0(t);
          t = j_7;
          t = debug_1_0(m_4, t);
          ;
          LocalPopChoice(a_32);
        }
      else
        {
          t = y_31;
          t = j_7;
        }
      t = define_strategies_0_0(t);
    }
  }
  return(t);
}
ATerm n_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_32 = ATgetArgument(t, 0);
      if(((ATgetType(c_32) != AT_LIST) || !(ATisEmpty(c_32))))
        _fail(t);
      {
        ATerm f_32 = ATgetArgument(t, 1);
        if(((ATgetType(f_32) != AT_LIST) || !(ATisEmpty(f_32))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm y_0 = NULL,z_0 = NULL,a_1 = NULL,b_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_32 = ATgetArgument(t, 0);
      if(((ATgetType(g_32) == AT_LIST) && !(ATisEmpty(g_32))))
        {
          y_0 = ATgetFirst((ATermList) g_32);
          z_0 = (ATerm) ATgetNext((ATermList) g_32);
        }
      else
        _fail(t);
      {
        ATerm h_32 = ATgetArgument(t, 1);
        if(((ATgetType(h_32) == AT_LIST) && !(ATisEmpty(h_32))))
          {
            a_1 = ATgetFirst((ATermList) h_32);
            b_1 = (ATerm) ATgetNext((ATermList) h_32);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_0, a_1), (ATerm) ATmakeAppl(sym__2, z_0, b_1));
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm d_1 = NULL,f_1 = NULL;
  if(match_cons(t, sym__2))
    {
      d_1 = ATgetArgument(t, 0);
      f_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_1), d_1);
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm k_1 = NULL,t_1 = NULL,x_1 = NULL,y_1 = NULL,g_2 = NULL;
  if(match_cons(t, sym__2))
    {
      k_1 = ATgetArgument(t, 0);
      g_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_1;
  {
    ATerm l_32 = t;
    int m_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm n_32 = ATgetArgument(t, 0);
            t_1 = ATgetArgument(t, 1);
            x_1 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(m_32);
        t = (ATerm) ATmakeAppl(sym_SDef_3, g_2, t_1, x_1);
      }
    else
      {
        t = l_32;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm o_32 = ATgetArgument(t, 0);
            t_1 = ATgetArgument(t, 1);
            x_1 = ATgetArgument(t, 2);
            y_1 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, g_2, t_1, x_1, y_1);
      }
  }
  return(t);
}
ATerm r_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_32 = ATgetArgument(t, 0);
      if(((ATgetType(p_32) != AT_LIST) || !(ATisEmpty(p_32))))
        _fail(t);
      {
        ATerm q_32 = ATgetArgument(t, 1);
        if(((ATgetType(q_32) != AT_LIST) || !(ATisEmpty(q_32))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm r_7 = NULL,s_7 = NULL,t_7 = NULL,u_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_32 = ATgetArgument(t, 0);
      if(((ATgetType(r_32) == AT_LIST) && !(ATisEmpty(r_32))))
        {
          r_7 = ATgetFirst((ATermList) r_32);
          s_7 = (ATerm) ATgetNext((ATermList) r_32);
        }
      else
        _fail(t);
      {
        ATerm v_32 = ATgetArgument(t, 1);
        if(((ATgetType(v_32) == AT_LIST) && !(ATisEmpty(v_32))))
          {
            t_7 = ATgetFirst((ATermList) v_32);
            u_7 = (ATerm) ATgetNext((ATermList) v_32);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_7, t_7), (ATerm) ATmakeAppl(sym__2, s_7, u_7));
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm v_7 = NULL,w_7 = NULL;
  if(match_cons(t, sym__2))
    {
      v_7 = ATgetArgument(t, 0);
      w_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_7), v_7);
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm y_7 = NULL,w_12 = NULL,x_12 = NULL;
  if(match_cons(t, sym__2))
    {
      y_7 = ATgetArgument(t, 0);
      x_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_7;
  {
    ATerm w_32 = t;
    int x_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm y_32 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(x_32);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, x_12);
      }
    else
      {
        t = w_32;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm z_32 = ATgetArgument(t, 0);
            w_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, x_12, w_12);
      }
  }
  return(t);
}
ATerm b_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_33 = ATgetArgument(t, 0);
      if(((ATgetType(a_33) != AT_LIST) || !(ATisEmpty(a_33))))
        _fail(t);
      {
        ATerm b_33 = ATgetArgument(t, 1);
        if(((ATgetType(b_33) != AT_LIST) || !(ATisEmpty(b_33))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm o_18 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_33 = ATgetArgument(t, 0);
      if(((ATgetType(c_33) == AT_LIST) && !(ATisEmpty(c_33))))
        {
          o_18 = ATgetFirst((ATermList) c_33);
          d_19 = (ATerm) ATgetNext((ATermList) c_33);
        }
      else
        _fail(t);
      {
        ATerm d_33 = ATgetArgument(t, 1);
        if(((ATgetType(d_33) == AT_LIST) && !(ATisEmpty(d_33))))
          {
            e_19 = ATgetFirst((ATermList) d_33);
            f_19 = (ATerm) ATgetNext((ATermList) d_33);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_18, e_19), (ATerm) ATmakeAppl(sym__2, d_19, f_19));
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm g_19 = NULL,h_19 = NULL;
  if(match_cons(t, sym__2))
    {
      g_19 = ATgetArgument(t, 0);
      h_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_19), g_19);
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm r_19 = NULL,y_19 = NULL,j_20 = NULL;
  if(match_cons(t, sym__2))
    {
      r_19 = ATgetArgument(t, 0);
      j_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_19;
  {
    ATerm e_33 = t;
    int f_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm g_33 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(f_33);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, j_20);
      }
    else
      {
        t = e_33;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm i_33 = ATgetArgument(t, 0);
            y_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, j_20, y_19);
      }
  }
  return(t);
}
ATerm l_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_33 = ATgetArgument(t, 0);
      if(((ATgetType(j_33) != AT_LIST) || !(ATisEmpty(j_33))))
        _fail(t);
      {
        ATerm k_33 = ATgetArgument(t, 1);
        if(((ATgetType(k_33) != AT_LIST) || !(ATisEmpty(k_33))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_33 = ATgetArgument(t, 0);
      if(((ATgetType(l_33) == AT_LIST) && !(ATisEmpty(l_33))))
        {
          q_22 = ATgetFirst((ATermList) l_33);
          r_22 = (ATerm) ATgetNext((ATermList) l_33);
        }
      else
        _fail(t);
      {
        ATerm m_33 = ATgetArgument(t, 1);
        if(((ATgetType(m_33) == AT_LIST) && !(ATisEmpty(m_33))))
          {
            s_22 = ATgetFirst((ATermList) m_33);
            t_22 = (ATerm) ATgetNext((ATermList) m_33);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_22, s_22), (ATerm) ATmakeAppl(sym__2, r_22, t_22));
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm v_22 = NULL,b_23 = NULL;
  if(match_cons(t, sym__2))
    {
      v_22 = ATgetArgument(t, 0);
      b_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_23), v_22);
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm j_23 = NULL,q_23 = NULL,v_23 = NULL;
  if(match_cons(t, sym__2))
    {
      j_23 = ATgetArgument(t, 0);
      v_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_23;
  {
    ATerm n_33 = t;
    int p_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm q_33 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(p_33);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, v_23);
      }
    else
      {
        t = n_33;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm s_33 = ATgetArgument(t, 0);
            q_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, v_23, q_23);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm h_162 (ATerm), ATerm t)
{
  ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL;
  o_12 = t;
  if(match_cons(t, sym_Let_2))
    {
      p_12 = ATgetArgument(t, 0);
      q_12 = ATgetArgument(t, 1);
      {
        ATerm s_0 = NULL,v_0 = NULL,w_0 = NULL,l_8 = NULL;
        t = SSLgetAnnotations(o_12);
        s_0 = t;
        t = p_12;
        t = h_162(t);
        w_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_12, w_0);
        t = genzip_4_0(n_4, o_4, p_4, q_4, t);
        v_0 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, v_0, q_12);
        l_8 = t;
        t = SSLsetAnnotations(l_8, s_0);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          p_12 = ATgetArgument(t, 0);
          q_12 = ATgetArgument(t, 1);
          m_12 = ATgetArgument(t, 2);
          {
            ATerm s_4 = NULL,o_7 = NULL,p_7 = NULL,m_8 = NULL;
            t = SSLgetAnnotations(o_12);
            s_4 = t;
            t = q_12;
            t = h_162(t);
            p_7 = t;
            t = (ATerm) ATmakeAppl(sym__2, q_12, p_7);
            t = genzip_4_0(r_4, t_4, u_4, v_4, t);
            o_7 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, p_12, o_7, m_12);
            m_8 = t;
            t = SSLsetAnnotations(m_8, s_4);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              p_12 = ATgetArgument(t, 0);
              q_12 = ATgetArgument(t, 1);
              m_12 = ATgetArgument(t, 2);
              n_12 = ATgetArgument(t, 3);
              {
                ATerm p_17 = NULL,l_18 = NULL,m_18 = NULL,n_8 = NULL;
                t = SSLgetAnnotations(o_12);
                p_17 = t;
                t = q_12;
                t = h_162(t);
                m_18 = t;
                t = (ATerm) ATmakeAppl(sym__2, q_12, m_18);
                t = genzip_4_0(b_5, c_5, d_5, g_5, t);
                l_18 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, p_12, l_18, m_12, n_12);
                n_8 = t;
                t = SSLsetAnnotations(n_8, p_17);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  p_12 = ATgetArgument(t, 0);
                  q_12 = ATgetArgument(t, 1);
                  m_12 = ATgetArgument(t, 2);
                  n_12 = ATgetArgument(t, 3);
                  {
                    ATerm c_22 = NULL,n_22 = NULL,o_22 = NULL,o_8 = NULL;
                    t = SSLgetAnnotations(o_12);
                    c_22 = t;
                    t = q_12;
                    t = h_162(t);
                    o_22 = t;
                    t = (ATerm) ATmakeAppl(sym__2, q_12, o_22);
                    t = genzip_4_0(l_5, m_5, n_5, o_5, t);
                    n_22 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, p_12, n_22, m_12, n_12);
                    o_8 = t;
                    t = SSLsetAnnotations(o_8, c_22);
                  }
                }
              else
                {
                  ATerm e_25 = NULL,h_25 = NULL,p_8 = NULL;
                  if(match_cons(t, sym_Rec_2))
                    {
                      p_12 = ATgetArgument(t, 0);
                      q_12 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(o_12);
                  e_25 = t;
                  t = p_12;
                  t = h_162(t);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      h_25 = ATgetFirst((ATermList) t);
                      {
                        ATerm t_33 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Rec_2, h_25, q_12);
                  p_8 = t;
                  t = SSLsetAnnotations(p_8, e_25);
                }
            }
        }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm i_162 (ATerm), ATerm j_162 (ATerm), ATerm k_162 (ATerm), ATerm t)
{
  ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL,y_14 = NULL;
  w_14 = t;
  if(match_cons(t, sym_Let_2))
    {
      x_14 = ATgetArgument(t, 0);
      y_14 = ATgetArgument(t, 1);
      {
        ATerm d_26 = NULL,m_26 = NULL,o_26 = NULL,v_8 = NULL;
        t = SSLgetAnnotations(w_14);
        d_26 = t;
        t = x_14;
        t = i_162(t);
        m_26 = t;
        t = y_14;
        t = i_162(t);
        o_26 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, m_26, o_26);
        v_8 = t;
        t = SSLsetAnnotations(v_8, d_26);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          x_14 = ATgetArgument(t, 0);
          y_14 = ATgetArgument(t, 1);
          u_14 = ATgetArgument(t, 2);
          {
            ATerm h_27 = NULL,m_27 = NULL,n_27 = NULL,a_28 = NULL,w_8 = NULL;
            t = SSLgetAnnotations(w_14);
            h_27 = t;
            t = x_14;
            t = k_162(t);
            m_27 = t;
            t = y_14;
            t = k_162(t);
            n_27 = t;
            t = u_14;
            t = i_162(t);
            a_28 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, m_27, n_27, a_28);
            w_8 = t;
            t = SSLsetAnnotations(w_8, h_27);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              x_14 = ATgetArgument(t, 0);
              y_14 = ATgetArgument(t, 1);
              u_14 = ATgetArgument(t, 2);
              v_14 = ATgetArgument(t, 3);
              {
                ATerm x_28 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL,x_8 = NULL;
                t = SSLgetAnnotations(w_14);
                x_28 = t;
                t = x_14;
                t = k_162(t);
                c_29 = t;
                t = y_14;
                t = k_162(t);
                d_29 = t;
                t = u_14;
                t = k_162(t);
                e_29 = t;
                t = v_14;
                t = i_162(t);
                f_29 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, c_29, d_29, e_29, f_29);
                x_8 = t;
                t = SSLsetAnnotations(x_8, x_28);
              }
            }
          else
            {
              ATerm b_30 = NULL,e_30 = NULL,p_30 = NULL,y_8 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  x_14 = ATgetArgument(t, 0);
                  y_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(w_14);
              b_30 = t;
              t = x_14;
              t = k_162(t);
              e_30 = t;
              t = y_14;
              t = i_162(t);
              p_30 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, e_30, p_30);
              y_8 = t;
              t = SSLsetAnnotations(y_8, b_30);
            }
        }
    }
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm f_15 = NULL;
  ATerm u_33 = t;
  int v_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          f_15 = ATgetArgument(t, 0);
          {
            ATerm w_33 = ATgetArgument(t, 1);
          }
          {
            ATerm x_33 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_33);
      t = f_15;
    }
  else
    {
      t = u_33;
      if(match_cons(t, sym_SDefT_4))
        {
          f_15 = ATgetArgument(t, 0);
          {
            ATerm y_33 = ATgetArgument(t, 1);
          }
          {
            ATerm z_33 = ATgetArgument(t, 2);
          }
          {
            ATerm a_34 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = f_15;
    }
  return(t);
}
ATerm x_24 (ATerm v_90, ATerm u_90, ATerm t)
{
  t = v_90;
  t = map_1_0(p_5, t);
  return(t);
}
ATerm SVar_1_0 (ATerm u_128 (ATerm), ATerm t)
{
  ATerm l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL,d_9 = NULL;
  o_15 = t;
  if(match_cons(t, sym_SVar_1))
    {
      m_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_15);
  l_15 = t;
  t = m_15;
  t = u_128(t);
  n_15 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, n_15);
  d_9 = t;
  t = SSLsetAnnotations(d_9, l_15);
  return(t);
}
ATerm y_24 (ATerm u_159 (ATerm), ATerm v_159 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm q_81, ATerm p_81, ATerm o_81, ATerm t)
{
  ATerm q_5 (ATerm t)
  {
    ATerm q_15 = NULL;
    q_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_15, not_null(o_81));
    t = u_159(t);
    return(t);
  }
  ATerm r_5 (ATerm t)
  {
    ATerm r_15 = NULL;
    r_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_15, not_null(p_81));
    t = u_159(t);
    return(t);
  }
  t = not_null(q_81);
  t = v_159(q_5, r_5, _id, t);
  return(t);
}
ATerm t_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_34 = ATgetArgument(t, 0);
      if(((ATgetType(b_34) != AT_LIST) || !(ATisEmpty(b_34))))
        _fail(t);
      {
        ATerm c_34 = ATgetArgument(t, 1);
        if(((ATgetType(c_34) != AT_LIST) || !(ATisEmpty(c_34))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_34 = ATgetArgument(t, 0);
      if(((ATgetType(d_34) == AT_LIST) && !(ATisEmpty(d_34))))
        {
          a_16 = ATgetFirst((ATermList) d_34);
          b_16 = (ATerm) ATgetNext((ATermList) d_34);
        }
      else
        _fail(t);
      {
        ATerm e_34 = ATgetArgument(t, 1);
        if(((ATgetType(e_34) == AT_LIST) && !(ATisEmpty(e_34))))
          {
            c_16 = ATgetFirst((ATermList) e_34);
            d_16 = (ATerm) ATgetNext((ATermList) e_34);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_16, c_16), (ATerm) ATmakeAppl(sym__2, b_16, d_16));
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm e_16 = NULL,f_16 = NULL;
  if(match_cons(t, sym__2))
    {
      e_16 = ATgetArgument(t, 0);
      f_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_16), e_16);
  return(t);
}
ATerm z_24 (ATerm o_159 (ATerm), ATerm p_159 (ATerm (ATerm), ATerm), ATerm i_81, ATerm l_81, ATerm t)
{
  ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL,z_15 = NULL;
  t = not_null(i_81);
  t = o_159(t);
  if(((u_15 != NULL) && (u_15 != t)))
    _fail(t);
  else
    u_15 = t;
  t = map_1_0(new_0_0, t);
  if(((v_15 != NULL) && (v_15 != t)))
    _fail(t);
  else
    v_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(u_15), not_null(v_15));
  t = genzip_4_0(t_5, u_5, v_5, _id, t);
  if(((z_15 != NULL) && (z_15 != t)))
    _fail(t);
  else
    z_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(z_15), not_null(l_81));
  t = conc_0_0(t);
  if(((w_15 != NULL) && (w_15 != t)))
    _fail(t);
  else
    w_15 = t;
  t = not_null(i_81);
  {
    ATerm w_5 (ATerm t)
    {
      t = not_null(v_15);
      return(t);
    }
    t = p_159(w_5, t);
    if(((x_15 != NULL) && (x_15 != t)))
      _fail(t);
    else
      x_15 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(x_15), not_null(l_81), not_null(w_15));
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL;
  m_16 = t;
  if(match_cons(t, sym__2))
    {
      n_16 = ATgetArgument(t, 0);
      o_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_16;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_16 = ATgetFirst((ATermList) t);
      q_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_16;
  if(match_cons(t, sym__2))
    {
      k_16 = ATgetArgument(t, 0);
      l_16 = ATgetArgument(t, 1);
      {
        ATerm f_34 = t;
        int g_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_16;
            if((n_16 != t))
              {
                _fail(t);
              }
            t = l_16;
            ;
            LocalPopChoice(g_34);
          }
        else
          {
            t = f_34;
            t = (ATerm) ATmakeAppl(sym__2, n_16, q_16);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, n_16, q_16);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm t_138 (ATerm), ATerm t)
{
  ATerm m_17 (ATerm t)
  {
    ATerm h_34 = t;
    int i_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_138(t);
        ;
        LocalPopChoice(i_34);
      }
    else
      {
        t = h_34;
        {
          ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL;
          ATerm x_5 (ATerm t)
          {
            ATerm o_31 = NULL;
            o_31 = t;
            t = (ATerm) ATmakeAppl(sym__2, o_31, not_null(l_17));
            t = m_17(t);
            return(t);
          }
          if(((j_17 != NULL) && (j_17 != t)))
            _fail(t);
          else
            j_17 = t;
          if(match_cons(t, sym__2))
            {
              if(((k_17 != NULL) && (k_17 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                k_17 = ATgetArgument(t, 0);
              if(((l_17 != NULL) && (l_17 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                l_17 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = not_null(k_17);
          t = SRTS_all(x_5, t);
        }
      }
    return(t);
  }
  t = m_17(t);
  return(t);
}
ATerm rename_4_0 (ATerm j_159 (ATerm (ATerm), ATerm), ATerm k_159 (ATerm), ATerm l_159 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm m_159 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm q_17 = NULL;
  ATerm f_18 (ATerm t)
  {
    ATerm y_5 (ATerm t)
    {
      ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL;
      if(((z_17 != NULL) && (z_17 != t)))
        _fail(t);
      else
        z_17 = t;
      if(match_cons(t, sym__2))
        {
          if(((a_18 != NULL) && (a_18 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            a_18 = ATgetArgument(t, 0);
          if(((b_18 != NULL) && (b_18 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            b_18 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm j_34 = t;
        int k_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_5 (ATerm t)
            {
              ATerm e_18 = NULL;
              e_18 = t;
              t = (ATerm) ATmakeAppl(sym__2, e_18, not_null(b_18));
              t = lookup_0_0(t);
              return(t);
            }
            t = not_null(a_18);
            t = j_159(z_5, t);
            ;
            LocalPopChoice(k_34);
          }
        else
          {
            t = j_34;
            {
              ATerm i_32 = NULL,t_32 = NULL,u_32 = NULL;
              t = not_null(z_17);
              t = z_24(k_159, m_159, not_null(a_18), not_null(b_18), t);
              if(match_cons(t, sym__3))
                {
                  i_32 = ATgetArgument(t, 0);
                  t_32 = ATgetArgument(t, 1);
                  u_32 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = y_24(f_18, l_159, i_32, t_32, u_32, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(y_5, t);
    return(t);
  }
  if(((q_17 != NULL) && (q_17 != t)))
    _fail(t);
  else
    q_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(q_17), (ATerm) ATempty);
  t = f_18(t);
  return(t);
}
ATerm a_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_34 = ATgetArgument(t, 0);
      if(((ATgetType(l_34) != AT_LIST) || !(ATisEmpty(l_34))))
        _fail(t);
      {
        ATerm m_34 = ATgetArgument(t, 1);
        if(((ATgetType(m_34) != AT_LIST) || !(ATisEmpty(m_34))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm i_35 = NULL,j_35 = NULL,k_35 = NULL,o_35 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_34 = ATgetArgument(t, 0);
      if(((ATgetType(n_34) == AT_LIST) && !(ATisEmpty(n_34))))
        {
          i_35 = ATgetFirst((ATermList) n_34);
          j_35 = (ATerm) ATgetNext((ATermList) n_34);
        }
      else
        _fail(t);
      {
        ATerm p_34 = ATgetArgument(t, 1);
        if(((ATgetType(p_34) == AT_LIST) && !(ATisEmpty(p_34))))
          {
            k_35 = ATgetFirst((ATermList) p_34);
            o_35 = (ATerm) ATgetNext((ATermList) p_34);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_35, k_35), (ATerm) ATmakeAppl(sym__2, j_35, o_35));
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm p_35 = NULL,q_35 = NULL;
  if(match_cons(t, sym__2))
    {
      p_35 = ATgetArgument(t, 0);
      q_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(q_35), p_35);
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm v_35 = NULL,y_35 = NULL,z_35 = NULL;
  if(match_cons(t, sym__2))
    {
      v_35 = ATgetArgument(t, 0);
      z_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_35;
  {
    ATerm q_34 = t;
    int r_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm s_34 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(r_34);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, z_35);
      }
    else
      {
        t = q_34;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm t_34 = ATgetArgument(t, 0);
            y_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, z_35, y_35);
      }
  }
  return(t);
}
ATerm f_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm u_34 = ATgetArgument(t, 0);
      if(((ATgetType(u_34) != AT_LIST) || !(ATisEmpty(u_34))))
        _fail(t);
      {
        ATerm v_34 = ATgetArgument(t, 1);
        if(((ATgetType(v_34) != AT_LIST) || !(ATisEmpty(v_34))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_6 (ATerm t)
{
  ATerm r_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_34 = ATgetArgument(t, 0);
      if(((ATgetType(w_34) == AT_LIST) && !(ATisEmpty(w_34))))
        {
          r_37 = ATgetFirst((ATermList) w_34);
          s_37 = (ATerm) ATgetNext((ATermList) w_34);
        }
      else
        _fail(t);
      {
        ATerm x_34 = ATgetArgument(t, 1);
        if(((ATgetType(x_34) == AT_LIST) && !(ATisEmpty(x_34))))
          {
            t_37 = ATgetFirst((ATermList) x_34);
            u_37 = (ATerm) ATgetNext((ATermList) x_34);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_37, t_37), (ATerm) ATmakeAppl(sym__2, s_37, u_37));
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm v_37 = NULL,a_38 = NULL;
  if(match_cons(t, sym__2))
    {
      v_37 = ATgetArgument(t, 0);
      a_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_38), v_37);
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm d_38 = NULL,j_38 = NULL,m_38 = NULL;
  if(match_cons(t, sym__2))
    {
      d_38 = ATgetArgument(t, 0);
      m_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_38;
  {
    ATerm y_34 = t;
    int z_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm a_35 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(z_34);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, m_38);
      }
    else
      {
        t = y_34;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm b_35 = ATgetArgument(t, 0);
            j_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, m_38, j_38);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm d_162 (ATerm), ATerm t)
{
  ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL,t_21 = NULL;
  k_21 = t;
  if(match_cons(t, sym_Scope_2))
    {
      l_21 = ATgetArgument(t, 0);
      m_21 = ATgetArgument(t, 1);
      {
        ATerm o_33 = NULL,r_33 = NULL,f_9 = NULL;
        t = SSLgetAnnotations(k_21);
        o_33 = t;
        t = l_21;
        t = d_162(t);
        r_33 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, r_33, m_21);
        f_9 = t;
        t = SSLsetAnnotations(f_9, o_33);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          l_21 = ATgetArgument(t, 0);
          m_21 = ATgetArgument(t, 1);
          n_21 = ATgetArgument(t, 2);
          t_21 = ATgetArgument(t, 3);
          {
            ATerm o_34 = NULL,d_35 = NULL,g_35 = NULL,g_9 = NULL;
            t = SSLgetAnnotations(k_21);
            o_34 = t;
            t = n_21;
            t = d_162(t);
            g_35 = t;
            t = (ATerm) ATmakeAppl(sym__2, n_21, g_35);
            t = genzip_4_0(a_6, c_6, d_6, e_6, t);
            d_35 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, l_21, m_21, d_35, t_21);
            g_9 = t;
            t = SSLsetAnnotations(g_9, o_34);
          }
        }
      else
        {
          ATerm b_37 = NULL,i_37 = NULL,j_37 = NULL,h_9 = NULL;
          if(match_cons(t, sym_RDefT_4))
            {
              l_21 = ATgetArgument(t, 0);
              m_21 = ATgetArgument(t, 1);
              n_21 = ATgetArgument(t, 2);
              t_21 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(k_21);
          b_37 = t;
          t = n_21;
          t = d_162(t);
          j_37 = t;
          t = (ATerm) ATmakeAppl(sym__2, n_21, j_37);
          t = genzip_4_0(f_6, g_6, j_6, o_6, t);
          i_37 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, l_21, m_21, i_37, t_21);
          h_9 = t;
          t = SSLsetAnnotations(h_9, b_37);
        }
    }
  return(t);
}
ATerm Var_1_0 (ATerm h_123 (ATerm), ATerm t)
{
  ATerm f_22 = NULL,g_22 = NULL,h_22 = NULL,i_22 = NULL,l_9 = NULL;
  i_22 = t;
  if(match_cons(t, sym_Var_1))
    {
      g_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_22);
  f_22 = t;
  t = g_22;
  t = h_123(t);
  h_22 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, h_22);
  l_9 = t;
  t = SSLsetAnnotations(l_9, f_22);
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm c_35 = t;
  int e_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(e_35);
    }
  else
    {
      t = c_35;
      {
        ATerm w_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL;
        if(match_cons(t, sym_SDefT_4))
          {
            w_22 = ATgetArgument(t, 0);
            x_22 = ATgetArgument(t, 1);
            y_22 = ATgetArgument(t, 2);
            z_22 = ATgetArgument(t, 3);
            t = y_22;
            t = map_1_0(q_6, t);
          }
        else
          {
            if(match_cons(t, sym_RDefT_4))
              {
                w_22 = ATgetArgument(t, 0);
                x_22 = ATgetArgument(t, 1);
                y_22 = ATgetArgument(t, 2);
                z_22 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = y_22;
            t = map_1_0(r_6, t);
          }
      }
    }
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm h_23 = NULL;
  ATerm f_35 = t;
  int h_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_23 = ATgetArgument(t, 0);
          {
            ATerm l_35 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_35);
      t = h_23;
    }
  else
    {
      t = f_35;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_23;
    }
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm u_23 = NULL;
  ATerm m_35 = t;
  int n_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_23 = ATgetArgument(t, 0);
          {
            ATerm r_35 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_35);
      t = u_23;
    }
  else
    {
      t = m_35;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_23;
    }
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm b_24 = NULL,c_24 = NULL,e_24 = NULL,f_24 = NULL,i_24 = NULL;
  b_24 = t;
  if(match_cons(t, sym_Let_2))
    {
      c_24 = ATgetArgument(t, 0);
      e_24 = ATgetArgument(t, 1);
      t = b_24;
      t = x_24(c_24, e_24, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          c_24 = ATgetArgument(t, 0);
          e_24 = ATgetArgument(t, 1);
          f_24 = ATgetArgument(t, 2);
          t = e_24;
          t = map_1_0(t_6, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              c_24 = ATgetArgument(t, 0);
              e_24 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, c_24);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  c_24 = ATgetArgument(t, 0);
                  e_24 = ATgetArgument(t, 1);
                  f_24 = ATgetArgument(t, 2);
                  i_24 = ATgetArgument(t, 3);
                  t = e_24;
                  t = map_1_0(u_6, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      c_24 = ATgetArgument(t, 0);
                      e_24 = ATgetArgument(t, 1);
                      f_24 = ATgetArgument(t, 2);
                      i_24 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = e_24;
                  t = map_1_0(w_6, t);
                }
            }
        }
    }
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm w_24 = NULL;
  ATerm s_35 = t;
  int t_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_24 = ATgetArgument(t, 0);
          {
            ATerm u_35 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_35);
      t = w_24;
    }
  else
    {
      t = s_35;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_24;
    }
  return(t);
}
ATerm u_6 (ATerm t)
{
  ATerm g_28 = NULL;
  ATerm w_35 = t;
  int x_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_28 = ATgetArgument(t, 0);
          {
            ATerm a_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_35);
      t = g_28;
    }
  else
    {
      t = w_35;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_28;
    }
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm u_28 = NULL;
  ATerm b_36 = t;
  int c_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_28 = ATgetArgument(t, 0);
          {
            ATerm d_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_36);
      t = u_28;
    }
  else
    {
      t = b_36;
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
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, p_6, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, s_6, sboundin_3_0, spaste_1_0, t);
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_174), u_174), t_174), s_174), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, s_174), (ATerm) ATmakeAppl(sym_Var_1, u_174))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, p_174, (ATerm)ATmakeAppl(sym_Var_1, s_174), (ATerm) ATmakeAppl(sym_Var_1, t_174)), (ATerm) ATmakeAppl(sym_BAM_3, n_174, (ATerm)ATmakeAppl(sym_Var_1, u_174), (ATerm) ATmakeAppl(sym_Var_1, v_174)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_e_36, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, v_174)), (ATerm) ATmakeAppl(sym_Var_1, t_174))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          p_174 = ATgetArgument(t, 0);
          {
            ATerm w_174 = NULL,x_174 = NULL,z_174 = NULL,a_175 = NULL;
            t = not_null(o_174);
            t = new_0_0(t);
            if(((z_174 != NULL) && (z_174 != t)))
              _fail(t);
            else
              z_174 = t;
            t = not_null(p_174);
            {
              ATerm x_6 (ATerm t)
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
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_174));
                return(t);
              }
              t = oncetd_1_0(x_6, t);
              if(((a_175 != NULL) && (a_175 != t)))
                _fail(t);
              else
                a_175 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(z_174)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_e_36, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_174)), not_null(w_174))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_174))), (ATerm) ATmakeAppl(sym_Build_1, not_null(a_175)))));
            }
          }
        }
      else
        {
          ATerm c_175 = NULL,d_175 = NULL,e_175 = NULL,f_175 = NULL,g_175 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              if(((p_174 != NULL) && (p_174 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                p_174 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(o_174);
          t = new_0_0(t);
          if(((e_175 != NULL) && (e_175 != t)))
            _fail(t);
          else
            e_175 = t;
          t = new_0_0(t);
          if(((f_175 != NULL) && (f_175 != t)))
            _fail(t);
          else
            f_175 = t;
          t = not_null(p_174);
          {
            ATerm y_6 (ATerm t)
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
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_175));
              return(t);
            }
            t = oncetd_1_0(y_6, t);
            if(((g_175 != NULL) && (g_175 != t)))
              _fail(t);
            else
              g_175 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(e_175)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(g_175)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(f_175)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_175))), (ATerm) ATmakeAppl(sym_PrimT_3, term_f_36, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_175)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(e_175)), (ATerm) ATmakeAppl(sym_Op_2, term_g_36, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_175)), not_null(c_175)))))));
          }
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm i_175 = NULL,j_175 = NULL;
  if(((i_175 != NULL) && (i_175 != t)))
    _fail(t);
  else
    i_175 = t;
  if(match_cons(t, sym_Match_1))
    {
      if(((j_175 != NULL) && (j_175 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_175 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm h_36 = t;
    int i_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_175 = NULL,m_175 = NULL,n_175 = NULL,o_175 = NULL;
        t = not_null(i_175);
        t = new_0_0(t);
        if(((n_175 != NULL) && (n_175 != t)))
          _fail(t);
        else
          n_175 = t;
        t = not_null(j_175);
        {
          ATerm z_6 (ATerm t)
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
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(n_175)), not_null(l_175));
            return(t);
          }
          t = pat_td_1_0(z_6, t);
          if(((o_175 != NULL) && (o_175 != t)))
            _fail(t);
          else
            o_175 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(n_175)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(o_175)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_j_36, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_175)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(m_175))))));
        }
        ;
        LocalPopChoice(i_36);
      }
    else
      {
        t = h_36;
        {
          ATerm k_36 = t;
          int l_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_175 = NULL,r_175 = NULL,s_175 = NULL;
              t = not_null(i_175);
              t = new_0_0(t);
              if(((r_175 != NULL) && (r_175 != t)))
                _fail(t);
              else
                r_175 = t;
              t = not_null(j_175);
              {
                ATerm a_7 (ATerm t)
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
                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_175));
                  return(t);
                }
                t = pat_td_1_0(a_7, t);
                if(((s_175 != NULL) && (s_175 != t)))
                  _fail(t);
                else
                  s_175 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(r_175)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(s_175)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_175))), not_null(q_175))));
              }
              ;
              LocalPopChoice(l_36);
            }
          else
            {
              t = k_36;
              {
                ATerm u_175 = NULL,v_175 = NULL,w_175 = NULL,x_175 = NULL;
                t = not_null(i_175);
                t = new_0_0(t);
                if(((w_175 != NULL) && (w_175 != t)))
                  _fail(t);
                else
                  w_175 = t;
                t = not_null(j_175);
                {
                  ATerm b_7 (ATerm t)
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
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_175));
                    return(t);
                  }
                  t = pat_td_1_0(b_7, t);
                  if(((x_175 != NULL) && (x_175 != t)))
                    _fail(t);
                  else
                    x_175 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(w_175)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(x_175)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_175))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(u_175)), not_null(v_175)))));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm j_161 (ATerm), ATerm t)
{
  ATerm m_36 = t;
  int n_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_161(t);
      ;
      LocalPopChoice(n_36);
    }
  else
    {
      t = m_36;
      {
        ATerm f_178 = NULL,g_178 = NULL,h_178 = NULL,i_178 = NULL;
        if(((g_178 != NULL) && (g_178 != t)))
          _fail(t);
        else
          g_178 = t;
        if(match_cons(t, sym_Op_2))
          {
            h_178 = ATgetArgument(t, 0);
            i_178 = ATgetArgument(t, 1);
            {
              ATerm h_127 = NULL,o_127 = NULL,n_9 = NULL;
              t = SSLgetAnnotations(not_null(g_178));
              if(((h_127 != NULL) && (h_127 != t)))
                _fail(t);
              else
                h_127 = t;
              t = not_null(i_178);
              {
                ATerm c_7 (ATerm t)
                {
                  t = pat_td_1_0(j_161, t);
                  return(t);
                }
                t = fetch_1_0(c_7, t);
                if(((o_127 != NULL) && (o_127 != t)))
                  _fail(t);
                else
                  o_127 = t;
                t = (ATerm) ATmakeAppl(sym_Op_2, not_null(h_178), not_null(o_127));
                if(((n_9 != NULL) && (n_9 != t)))
                  _fail(t);
                else
                  n_9 = t;
                t = SSLsetAnnotations(not_null(n_9), not_null(h_127));
              }
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                h_178 = ATgetArgument(t, 0);
                i_178 = ATgetArgument(t, 1);
                {
                  ATerm o_36 = t;
                  int p_36 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm o_128 = NULL,r_128 = NULL,o_9 = NULL;
                      t = SSLgetAnnotations(not_null(g_178));
                      o_128 = t;
                      t = not_null(i_178);
                      t = pat_td_1_0(j_161, t);
                      r_128 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, not_null(h_178), r_128);
                      o_9 = t;
                      t = SSLsetAnnotations(o_9, o_128);
                      ;
                      LocalPopChoice(p_36);
                    }
                  else
                    {
                      t = o_36;
                      {
                        ATerm o_130 = NULL,r_130 = NULL,p_9 = NULL;
                        t = SSLgetAnnotations(not_null(g_178));
                        o_130 = t;
                        t = not_null(h_178);
                        t = pat_td_1_0(j_161, t);
                        r_130 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, r_130, not_null(i_178));
                        p_9 = t;
                        t = SSLsetAnnotations(p_9, o_130);
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
                      ATerm q_133 = NULL,w_133 = NULL,q_9 = NULL;
                      t = SSLgetAnnotations(not_null(g_178));
                      if(((q_133 != NULL) && (q_133 != t)))
                        _fail(t);
                      else
                        q_133 = t;
                      t = not_null(f_178);
                      {
                        ATerm d_7 (ATerm t)
                        {
                          t = pat_td_1_0(j_161, t);
                          return(t);
                        }
                        t = fetch_1_0(d_7, t);
                        if(((w_133 != NULL) && (w_133 != t)))
                          _fail(t);
                        else
                          w_133 = t;
                        t = (ATerm) ATmakeAppl(sym_PrimT_3, not_null(h_178), not_null(i_178), not_null(w_133));
                        if(((q_9 != NULL) && (q_9 != t)))
                          _fail(t);
                        else
                          q_9 = t;
                        t = SSLsetAnnotations(not_null(q_9), not_null(q_133));
                      }
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
                          ATerm a_135 = NULL,i_135 = NULL,r_9 = NULL;
                          t = SSLgetAnnotations(not_null(g_178));
                          if(((a_135 != NULL) && (a_135 != t)))
                            _fail(t);
                          else
                            a_135 = t;
                          t = not_null(f_178);
                          {
                            ATerm f_7 (ATerm t)
                            {
                              t = pat_td_1_0(j_161, t);
                              return(t);
                            }
                            t = fetch_1_0(f_7, t);
                            if(((i_135 != NULL) && (i_135 != t)))
                              _fail(t);
                            else
                              i_135 = t;
                            t = (ATerm) ATmakeAppl(sym_CallT_3, not_null(h_178), not_null(i_178), not_null(i_135));
                            if(((r_9 != NULL) && (r_9 != t)))
                              _fail(t);
                            else
                              r_9 = t;
                            t = SSLsetAnnotations(not_null(r_9), not_null(a_135));
                          }
                        }
                      }
                    else
                      {
                        ATerm e_137 = NULL,n_137 = NULL,s_9 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            if(((h_178 != NULL) && (h_178 != ATgetArgument(t, 0))))
                              _fail(ATgetArgument(t, 0));
                            else
                              h_178 = ATgetArgument(t, 0);
                            if(((i_178 != NULL) && (i_178 != ATgetArgument(t, 1))))
                              _fail(ATgetArgument(t, 1));
                            else
                              i_178 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(not_null(g_178));
                        e_137 = t;
                        t = not_null(i_178);
                        t = pat_td_1_0(j_161, t);
                        n_137 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, not_null(h_178), n_137);
                        s_9 = t;
                        t = SSLsetAnnotations(s_9, e_137);
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
  ATerm q_178 = NULL,r_178 = NULL;
  if(((q_178 != NULL) && (q_178 != t)))
    _fail(t);
  else
    q_178 = t;
  if(match_cons(t, sym_Build_1))
    {
      if(((r_178 != NULL) && (r_178 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_178 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm q_36 = t;
    int r_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_178 = NULL,t_178 = NULL,v_178 = NULL,w_178 = NULL;
        t = not_null(q_178);
        t = new_0_0(t);
        if(((v_178 != NULL) && (v_178 != t)))
          _fail(t);
        else
          v_178 = t;
        t = not_null(r_178);
        {
          ATerm g_7 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((s_178 != NULL) && (s_178 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  s_178 = ATgetArgument(t, 0);
                if(((t_178 != NULL) && (t_178 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  t_178 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(v_178));
            return(t);
          }
          t = pat_td_1_0(g_7, t);
          if(((w_178 != NULL) && (w_178 != t)))
            _fail(t);
          else
            w_178 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(v_178)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_s_36, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_178)), not_null(s_178))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_178))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(w_178))));
        }
        ;
        LocalPopChoice(r_36);
      }
    else
      {
        t = q_36;
        {
          ATerm t_36 = t;
          int u_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_178 = NULL,z_178 = NULL,a_179 = NULL;
              t = not_null(q_178);
              t = new_0_0(t);
              if(((z_178 != NULL) && (z_178 != t)))
                _fail(t);
              else
                z_178 = t;
              t = not_null(r_178);
              {
                ATerm h_7 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((x_178 != NULL) && (x_178 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        x_178 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_178));
                  return(t);
                }
                t = pat_td_1_0(h_7, t);
                if(((a_179 != NULL) && (a_179 != t)))
                  _fail(t);
                else
                  a_179 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(z_178)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_178), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_178))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(a_179))));
              }
              ;
              LocalPopChoice(u_36);
            }
          else
            {
              t = t_36;
              {
                ATerm b_179 = NULL,c_179 = NULL,e_179 = NULL,f_179 = NULL;
                t = not_null(q_178);
                t = new_0_0(t);
                if(((e_179 != NULL) && (e_179 != t)))
                  _fail(t);
                else
                  e_179 = t;
                t = not_null(r_178);
                {
                  ATerm i_7 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((b_179 != NULL) && (b_179 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          b_179 = ATgetArgument(t, 0);
                        if(((c_179 != NULL) && (c_179 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          c_179 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_179));
                    return(t);
                  }
                  t = pat_td_1_0(i_7, t);
                  if(((f_179 != NULL) && (f_179 != t)))
                    _fail(t);
                  else
                    f_179 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(e_179)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(b_179), not_null(c_179), (ATerm) ATmakeAppl(sym_Var_1, not_null(e_179)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(f_179))));
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
  ATerm h_180 = NULL,i_180 = NULL,j_180 = NULL;
  h_180 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_180 = ATgetFirst((ATermList) t);
      j_180 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm v_36 = t;
    int w_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_137 = NULL,z_137 = NULL,a_138 = NULL,b_138 = NULL,c_138 = NULL,g_138 = NULL,n_138 = NULL,a_10 = NULL,z_9 = NULL;
        t = SSLgetAnnotations(h_180);
        c_138 = t;
        t = i_180;
        t = i_0(t);
        g_138 = t;
        t = (ATerm) ATinsert(CheckATermList(j_180), g_138);
        z_9 = t;
        t = SSLsetAnnotations(z_9, c_138);
        n_138 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_137 = ATgetFirst((ATermList) t);
            a_138 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_138);
        y_137 = t;
        t = a_138;
        {
          ATerm x_36 = t;
          int y_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(i_0, t);
              ;
              LocalPopChoice(y_36);
            }
          else
            {
              t = x_36;
            }
          b_138 = t;
          t = (ATerm) ATinsert(CheckATermList(b_138), z_137);
          a_10 = t;
          t = SSLsetAnnotations(a_10, y_137);
        }
        ;
        LocalPopChoice(w_36);
      }
    else
      {
        t = v_36;
        {
          ATerm i_139 = NULL,s_139 = NULL,b_10 = NULL;
          t = SSLgetAnnotations(h_180);
          i_139 = t;
          t = j_180;
          t = map1_1_0(i_0, t);
          s_139 = t;
          t = (ATerm) ATinsert(CheckATermList(s_139), i_180);
          b_10 = t;
          t = SSLsetAnnotations(b_10, i_139);
        }
      }
  }
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm r_181 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      r_181 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, r_181, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_f_37), term_f_37));
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm s_181 = NULL,t_181 = NULL;
  t_181 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      s_181 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, s_181, term_f_37);
    }
  else
    {
      t = t_181;
    }
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm d_182 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      d_182 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, d_182, term_f_37);
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm e_182 = NULL,f_182 = NULL;
  f_182 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      e_182 = ATgetArgument(t, 0);
      {
        ATerm g_37 = t;
        int h_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_VarDec_2, e_182, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_f_37), term_f_37));
            ;
            LocalPopChoice(h_37);
          }
        else
          {
            t = g_37;
            t = f_182;
          }
      }
    }
  else
    {
      t = f_182;
    }
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm p_182 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      p_182 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, p_182, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_f_37), term_f_37));
  return(t);
}
ATerm x_7 (ATerm t)
{
  ATerm q_182 = NULL,r_182 = NULL;
  r_182 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      q_182 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, q_182, term_f_37);
    }
  else
    {
      t = r_182;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm w_180 = NULL,x_180 = NULL,y_180 = NULL,z_180 = NULL,b_181 = NULL,c_181 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      b_181 = ATgetArgument(t, 0);
      c_181 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, b_181, c_181);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          b_181 = ATgetArgument(t, 0);
          t = b_181;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              w_180 = ATgetFirst((ATermList) t);
              x_180 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, w_180, (ATerm) ATmakeAppl(sym_LChoices_1, x_180));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_l_22;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              b_181 = ATgetArgument(t, 0);
              t = b_181;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  w_180 = ATgetFirst((ATermList) t);
                  x_180 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, w_180, (ATerm) ATmakeAppl(sym_Choices_1, x_180));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_l_22;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  b_181 = ATgetArgument(t, 0);
                  t = b_181;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      w_180 = ATgetFirst((ATermList) t);
                      x_180 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_180, (ATerm) ATmakeAppl(sym_Seqs_1, x_180));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_k_37;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      b_181 = ATgetArgument(t, 0);
                      c_181 = ATgetArgument(t, 1);
                      z_180 = ATgetArgument(t, 2);
                      y_180 = ATgetArgument(t, 3);
                      {
                        ATerm o_181 = NULL,q_181 = NULL;
                        t = c_181;
                        t = map1_1_0(k_7, t);
                        o_181 = t;
                        t = z_180;
                        t = map1_1_0(l_7, t);
                        q_181 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, b_181, o_181, q_181, y_180);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          b_181 = ATgetArgument(t, 0);
                          c_181 = ATgetArgument(t, 1);
                          z_180 = ATgetArgument(t, 2);
                          y_180 = ATgetArgument(t, 3);
                          {
                            ATerm n_37 = t;
                            int o_37 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm a_182 = NULL,c_182 = NULL;
                                t = z_180;
                                t = map1_1_0(m_7, t);
                                a_182 = t;
                                t = c_181;
                                t = map_1_0(n_7, t);
                                c_182 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, b_181, c_182, a_182, y_180);
                                ;
                                LocalPopChoice(o_37);
                              }
                            else
                              {
                                t = n_37;
                                {
                                  ATerm m_182 = NULL,o_182 = NULL;
                                  t = c_181;
                                  t = map1_1_0(q_7, t);
                                  m_182 = t;
                                  t = z_180;
                                  t = map_1_0(x_7, t);
                                  o_182 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, b_181, m_182, o_182, y_180);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              b_181 = ATgetArgument(t, 0);
                              c_181 = ATgetArgument(t, 1);
                              z_180 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, c_181, (ATerm) ATmakeAppl(sym_Op_2, term_g_36, (ATerm) ATinsert(ATinsert(ATempty, z_180), b_181)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  b_181 = ATgetArgument(t, 0);
                                  c_181 = ATgetArgument(t, 1);
                                  z_180 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, z_180)), b_181), (ATerm) ATmakeAppl(sym_Build_1, c_181)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      b_181 = ATgetArgument(t, 0);
                                      c_181 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, b_181, (ATerm) ATmakeAppl(sym_Match_1, c_181));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          b_181 = ATgetArgument(t, 0);
                                          c_181 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, b_181), c_181);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              b_181 = ATgetArgument(t, 0);
                                              c_181 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, c_181), b_181);
                                        }
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
ATerm z_7 (ATerm t)
{
  ATerm p_37 = t;
  if((PushChoice() == 0))
    {
      ATerm r_183 = NULL,s_183 = NULL,t_183 = NULL,f_10 = NULL;
      t_183 = t;
      if(match_cons(t, sym_Var_1))
        {
          s_183 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_183);
      r_183 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, s_183);
      f_10 = t;
      t = SSLsetAnnotations(f_10, r_183);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_37;
    }
  return(t);
}
ATerm a_8 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_q_37;
  return(t);
}
ATerm e_8 (ATerm t)
{
  ATerm u_183 = NULL,v_183 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_183 = ATgetFirst((ATermList) t);
      v_183 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_183, v_183);
  return(t);
}
ATerm f_8 (ATerm t)
{
  ATerm w_183 = NULL,x_183 = NULL,y_183 = NULL,z_183 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_37 = ATgetArgument(t, 0);
      if(match_cons(x_37, sym__2))
        {
          w_183 = ATgetArgument(x_37, 0);
          x_183 = ATgetArgument(x_37, 1);
        }
      else
        _fail(t);
      {
        ATerm c_38 = ATgetArgument(t, 1);
        if(match_cons(c_38, sym__2))
          {
            y_183 = ATgetArgument(c_38, 0);
            z_183 = ATgetArgument(c_38, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_183), w_183), (ATerm) ATinsert(CheckATermList(z_183), x_183));
  return(t);
}
ATerm g_8 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_q_37;
  return(t);
}
ATerm i_8 (ATerm t)
{
  ATerm a_184 = NULL,b_184 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_184 = ATgetFirst((ATermList) t);
      b_184 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_184, b_184);
  return(t);
}
ATerm k_8 (ATerm t)
{
  ATerm c_184 = NULL,d_184 = NULL,e_184 = NULL,f_184 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_38 = ATgetArgument(t, 0);
      if(match_cons(f_38, sym__2))
        {
          c_184 = ATgetArgument(f_38, 0);
          d_184 = ATgetArgument(f_38, 1);
        }
      else
        _fail(t);
      {
        ATerm g_38 = ATgetArgument(t, 1);
        if(match_cons(g_38, sym__2))
          {
            e_184 = ATgetArgument(g_38, 0);
            f_184 = ATgetArgument(g_38, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_184), c_184), (ATerm) ATinsert(CheckATermList(f_184), d_184));
  return(t);
}
ATerm l_27 (ATerm a_88, ATerm b_88, ATerm c_88, ATerm t)
{
  ATerm i_183 = NULL,j_183 = NULL,k_183 = NULL,l_183 = NULL,m_183 = NULL,n_183 = NULL,o_183 = NULL,p_183 = NULL,q_183 = NULL,g_10 = NULL;
  t = c_88;
  t = fetch_1_0(z_7, t);
  t = c_88;
  t = genzip_4_0(a_8, e_8, f_8, LiftPrimArg_0_0, t);
  q_183 = t;
  if(match_cons(t, sym__2))
    {
      m_183 = ATgetArgument(t, 0);
      n_183 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_183);
  l_183 = t;
  t = m_183;
  t = concat_0_0(t);
  o_183 = t;
  t = n_183;
  t = genzip_4_0(g_8, i_8, k_8, _id, t);
  p_183 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_183, p_183);
  g_10 = t;
  t = SSLsetAnnotations(g_10, l_183);
  if(match_cons(t, sym__2))
    {
      i_183 = ATgetArgument(t, 0);
      {
        ATerm h_38 = ATgetArgument(t, 1);
        if(match_cons(h_38, sym__2))
          {
            j_183 = ATgetArgument(h_38, 0);
            k_183 = ATgetArgument(h_38, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, i_183, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, j_183), (ATerm) ATmakeAppl(sym_CallT_3, a_88, b_88, k_183)));
  return(t);
}
ATerm z_184 (ATerm q_184, ATerm t)
{
  ATerm s_184 = NULL;
  t = q_184;
  {
    ATerm i_38 = t;
    if((PushChoice() == 0))
      {
        ATerm t_184 = NULL,u_184 = NULL,v_184 = NULL,j_10 = NULL;
        v_184 = t;
        if(match_cons(t, sym_Var_1))
          {
            u_184 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_184);
        t_184 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, u_184);
        j_10 = t;
        t = SSLsetAnnotations(j_10, t_184);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = i_38;
      }
    t = new_0_0(t);
    s_184 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, s_184), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, q_184), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, s_184)))), (ATerm) ATmakeAppl(sym_Var_1, s_184)));
  }
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm w_184 = NULL,x_184 = NULL;
  w_184 = t;
  if(match_cons(t, sym_Var_1))
    {
      x_184 = ATgetArgument(t, 0);
      {
        ATerm k_38 = t;
        int l_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_184(w_184, t);
            ;
            LocalPopChoice(l_38);
          }
        else
          {
            t = k_38;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_k_37, (ATerm) ATmakeAppl(sym_Var_1, x_184)));
          }
      }
    }
  else
    {
      t = z_184(w_184, t);
    }
  return(t);
}
ATerm q_8 (ATerm t)
{
  ATerm n_38 = t;
  if((PushChoice() == 0))
    {
      ATerm b_142 = NULL,u_143 = NULL,v_143 = NULL,l_10 = NULL;
      v_143 = t;
      if(match_cons(t, sym_Var_1))
        {
          u_143 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_143);
      b_142 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, u_143);
      l_10 = t;
      t = SSLsetAnnotations(l_10, b_142);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_38;
    }
  return(t);
}
ATerm r_8 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_q_37;
  return(t);
}
ATerm s_8 (ATerm t)
{
  ATerm z_143 = NULL,d_144 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_143 = ATgetFirst((ATermList) t);
      d_144 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_143, d_144);
  return(t);
}
ATerm t_8 (ATerm t)
{
  ATerm g_144 = NULL,k_144 = NULL,n_144 = NULL,r_144 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_38 = ATgetArgument(t, 0);
      if(match_cons(o_38, sym__2))
        {
          g_144 = ATgetArgument(o_38, 0);
          k_144 = ATgetArgument(o_38, 1);
        }
      else
        _fail(t);
      {
        ATerm p_38 = ATgetArgument(t, 1);
        if(match_cons(p_38, sym__2))
          {
            n_144 = ATgetArgument(p_38, 0);
            r_144 = ATgetArgument(p_38, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_144), g_144), (ATerm) ATinsert(CheckATermList(r_144), k_144));
  return(t);
}
ATerm u_8 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_q_37;
  return(t);
}
ATerm z_8 (ATerm t)
{
  ATerm w_144 = NULL,x_144 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_144 = ATgetFirst((ATermList) t);
      x_144 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_144, x_144);
  return(t);
}
ATerm a_9 (ATerm t)
{
  ATerm c_145 = NULL,d_145 = NULL,e_145 = NULL,f_145 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_38 = ATgetArgument(t, 0);
      if(match_cons(q_38, sym__2))
        {
          c_145 = ATgetArgument(q_38, 0);
          d_145 = ATgetArgument(q_38, 1);
        }
      else
        _fail(t);
      {
        ATerm r_38 = ATgetArgument(t, 1);
        if(match_cons(r_38, sym__2))
          {
            e_145 = ATgetArgument(r_38, 0);
            f_145 = ATgetArgument(r_38, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_145), c_145), (ATerm) ATinsert(CheckATermList(f_145), d_145));
  return(t);
}
ATerm b_9 (ATerm t)
{
  ATerm s_38 = t;
  if((PushChoice() == 0))
    {
      ATerm n_149 = NULL,o_149 = NULL,w_149 = NULL,n_10 = NULL;
      w_149 = t;
      if(match_cons(t, sym_Var_1))
        {
          o_149 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(w_149);
      n_149 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, o_149);
      n_10 = t;
      t = SSLsetAnnotations(n_10, n_149);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = s_38;
    }
  return(t);
}
ATerm c_9 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_q_37;
  return(t);
}
ATerm e_9 (ATerm t)
{
  ATerm x_149 = NULL,y_149 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_149 = ATgetFirst((ATermList) t);
      y_149 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_149, y_149);
  return(t);
}
ATerm i_9 (ATerm t)
{
  ATerm z_149 = NULL,l_150 = NULL,m_150 = NULL,r_150 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_38 = ATgetArgument(t, 0);
      if(match_cons(t_38, sym__2))
        {
          z_149 = ATgetArgument(t_38, 0);
          l_150 = ATgetArgument(t_38, 1);
        }
      else
        _fail(t);
      {
        ATerm v_38 = ATgetArgument(t, 1);
        if(match_cons(v_38, sym__2))
          {
            m_150 = ATgetArgument(v_38, 0);
            r_150 = ATgetArgument(v_38, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_150), z_149), (ATerm) ATinsert(CheckATermList(r_150), l_150));
  return(t);
}
ATerm j_9 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_q_37;
  return(t);
}
ATerm k_9 (ATerm t)
{
  ATerm s_150 = NULL,t_150 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_150 = ATgetFirst((ATermList) t);
      t_150 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_150, t_150);
  return(t);
}
ATerm m_9 (ATerm t)
{
  ATerm u_150 = NULL,m_151 = NULL,n_151 = NULL,o_151 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_38 = ATgetArgument(t, 0);
      if(match_cons(w_38, sym__2))
        {
          u_150 = ATgetArgument(w_38, 0);
          m_151 = ATgetArgument(w_38, 1);
        }
      else
        _fail(t);
      {
        ATerm x_38 = ATgetArgument(t, 1);
        if(match_cons(x_38, sym__2))
          {
            n_151 = ATgetArgument(x_38, 0);
            o_151 = ATgetArgument(x_38, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_151), u_150), (ATerm) ATinsert(CheckATermList(o_151), m_151));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm p_187 = NULL,q_187 = NULL,r_187 = NULL,s_187 = NULL;
  q_187 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      r_187 = ATgetArgument(t, 0);
      s_187 = ATgetArgument(t, 1);
      p_187 = ATgetArgument(t, 2);
      {
        ATerm t_140 = NULL,u_140 = NULL,b_141 = NULL,c_141 = NULL,k_141 = NULL,l_141 = NULL,q_141 = NULL,r_141 = NULL,s_141 = NULL,m_10 = NULL;
        t = p_187;
        t = fetch_1_0(q_8, t);
        t = p_187;
        t = genzip_4_0(r_8, s_8, t_8, LiftPrimArg_0_0, t);
        s_141 = t;
        if(match_cons(t, sym__2))
          {
            k_141 = ATgetArgument(t, 0);
            l_141 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_141);
        c_141 = t;
        t = k_141;
        t = concat_0_0(t);
        q_141 = t;
        t = l_141;
        t = genzip_4_0(u_8, z_8, a_9, _id, t);
        r_141 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_141, r_141);
        m_10 = t;
        t = SSLsetAnnotations(m_10, c_141);
        if(match_cons(t, sym__2))
          {
            t_140 = ATgetArgument(t, 0);
            {
              ATerm y_38 = ATgetArgument(t, 1);
              if(match_cons(y_38, sym__2))
                {
                  u_140 = ATgetArgument(y_38, 0);
                  b_141 = ATgetArgument(y_38, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, t_140, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, u_140), (ATerm) ATmakeAppl(sym_PrimT_3, r_187, s_187, b_141)));
      }
    }
  else
    {
      ATerm f_148 = NULL,g_148 = NULL,h_148 = NULL,t_148 = NULL,u_148 = NULL,z_148 = NULL,a_149 = NULL,b_149 = NULL,c_149 = NULL,o_10 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          r_187 = ATgetArgument(t, 0);
          s_187 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = s_187;
      t = fetch_1_0(b_9, t);
      t = s_187;
      t = genzip_4_0(c_9, e_9, i_9, LiftPrimArg_0_0, t);
      c_149 = t;
      if(match_cons(t, sym__2))
        {
          u_148 = ATgetArgument(t, 0);
          z_148 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(c_149);
      t_148 = t;
      t = u_148;
      t = concat_0_0(t);
      a_149 = t;
      t = z_148;
      t = genzip_4_0(j_9, k_9, m_9, _id, t);
      b_149 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_149, b_149);
      o_10 = t;
      t = SSLsetAnnotations(o_10, t_148);
      if(match_cons(t, sym__2))
        {
          f_148 = ATgetArgument(t, 0);
          {
            ATerm z_38 = ATgetArgument(t, 1);
            if(match_cons(z_38, sym__2))
              {
                g_148 = ATgetArgument(z_38, 0);
                h_148 = ATgetArgument(z_38, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, f_148, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, g_148), (ATerm) ATmakeAppl(sym_PrimT_3, r_187, (ATerm)ATempty, h_148)));
    }
  return(t);
}
ATerm t_9 (ATerm t)
{
  ATerm g_188 = NULL,h_188 = NULL,i_188 = NULL,j_188 = NULL;
  j_188 = t;
  if(match_cons(t, sym_Con_3))
    {
      g_188 = ATgetArgument(t, 0);
      h_188 = ATgetArgument(t, 1);
      i_188 = ATgetArgument(t, 2);
      {
        ATerm e_152 = NULL,t_10 = NULL;
        t = SSLgetAnnotations(j_188);
        e_152 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, g_188, h_188, i_188);
        t_10 = t;
        t = SSLsetAnnotations(t_10, e_152);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = j_188;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm a_39 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(t_9, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = a_39;
    }
  return(t);
}
ATerm u_9 (ATerm t)
{
  ATerm e_189 = NULL,f_189 = NULL,g_189 = NULL,h_189 = NULL;
  f_189 = t;
  if(match_cons(t, sym_Con_3))
    {
      g_189 = ATgetArgument(t, 0);
      h_189 = ATgetArgument(t, 1);
      e_189 = ATgetArgument(t, 2);
      {
        ATerm e_153 = NULL,v_10 = NULL;
        t = SSLgetAnnotations(f_189);
        e_153 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, g_189, h_189, e_189);
        v_10 = t;
        t = SSLsetAnnotations(v_10, e_153);
      }
    }
  else
    {
      ATerm t_153 = NULL,w_10 = NULL;
      if(match_cons(t, sym_App_2))
        {
          g_189 = ATgetArgument(t, 0);
          h_189 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_189);
      t_153 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, g_189, h_189);
      w_10 = t;
      t = SSLsetAnnotations(w_10, t_153);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm b_39 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(u_9, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = b_39;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm n_189 = NULL,o_189 = NULL,p_189 = NULL,q_189 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      n_189 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_189;
  if(match_cons(t, sym_StratRule_3))
    {
      o_189 = ATgetArgument(t, 0);
      p_189 = ATgetArgument(t, 1);
      q_189 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, p_189), (ATerm) ATmakeAppl(sym_Where_1, q_189)), o_189));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          o_189 = ATgetArgument(t, 0);
          p_189 = ATgetArgument(t, 1);
          q_189 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = o_189;
      t = pureterm_0_0(t);
      t = p_189;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, p_189)), (ATerm) ATmakeAppl(sym_Where_1, q_189)), (ATerm) ATmakeAppl(sym_Match_1, o_189)));
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm h_135 (ATerm), ATerm t)
{
  ATerm x_189 (ATerm t)
  {
    ATerm c_39 = t;
    int d_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_135(t);
        ;
        LocalPopChoice(d_39);
      }
    else
      {
        t = c_39;
        t = SRTS_one(x_189, t);
      }
    return(t);
  }
  t = x_189(t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm o_27 (ATerm p_83, ATerm q_83, ATerm r_83, ATerm t)
{
  ATerm y_189 = NULL,z_189 = NULL,a_190 = NULL,b_190 = NULL,c_190 = NULL,d_190 = NULL,e_190 = NULL;
  t = new_0_0(t);
  if(((c_190 != NULL) && (c_190 != t)))
    _fail(t);
  else
    c_190 = t;
  t = not_null(p_83);
  {
    ATerm v_9 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm e_39 = ATgetArgument(t, 0);
          if(match_cons(e_39, sym_Var_1))
            {
              if(((b_190 != NULL) && (b_190 != ATgetArgument(e_39, 0))))
                _fail(ATgetArgument(e_39, 0));
              else
                b_190 = ATgetArgument(e_39, 0);
            }
          else
            _fail(t);
          if(((z_189 != NULL) && (z_189 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            z_189 = ATgetArgument(t, 1);
          {
            ATerm g_39 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(b_190));
      return(t);
    }
    t = oncetd_1_0(v_9, t);
    if(((d_190 != NULL) && (d_190 != t)))
      _fail(t);
    else
      d_190 = t;
    t = not_null(q_83);
    {
      ATerm w_9 (ATerm t)
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm h_39 = ATgetArgument(t, 0);
            if(match_cons(h_39, sym_Var_1))
              {
                if(((b_190 != NULL) && (b_190 != ATgetArgument(h_39, 0))))
                  _fail(ATgetArgument(h_39, 0));
                else
                  b_190 = ATgetArgument(h_39, 0);
              }
            else
              _fail(t);
            if(((a_190 != NULL) && (a_190 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              a_190 = ATgetArgument(t, 1);
            {
              ATerm i_39 = ATgetArgument(t, 2);
              if(match_cons(i_39, sym_CallT_3))
                {
                  if(((y_189 != NULL) && (y_189 != ATgetArgument(i_39, 0))))
                    _fail(ATgetArgument(i_39, 0));
                  else
                    y_189 = ATgetArgument(i_39, 0);
                  {
                    ATerm j_39 = ATgetArgument(i_39, 1);
                    if(((ATgetType(j_39) != AT_LIST) || !(ATisEmpty(j_39))))
                      _fail(t);
                  }
                  {
                    ATerm k_39 = ATgetArgument(i_39, 2);
                    if(((ATgetType(k_39) != AT_LIST) || !(ATisEmpty(k_39))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_190));
        return(t);
      }
      t = oncetd_1_0(w_9, t);
      if(((e_190 != NULL) && (e_190 != t)))
        _fail(t);
      else
        e_190 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(c_190)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(d_190), not_null(e_190), (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_83), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(y_189), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(z_189), not_null(a_190), term_k_37))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(b_190)), (ATerm) ATmakeAppl(sym_Var_1, not_null(c_190)))))));
    }
  }
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm l_39 = t;
  int n_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_39 = t;
      int r_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_190 = NULL,s_190 = NULL,t_190 = NULL,u_190 = NULL,v_190 = NULL,w_190 = NULL;
          u_190 = t;
          if(match_cons(t, sym_SRule_1))
            {
              v_190 = ATgetArgument(t, 0);
              t = v_190;
              if(match_cons(t, sym_Rule_3))
                {
                  r_190 = ATgetArgument(t, 0);
                  s_190 = ATgetArgument(t, 1);
                  t_190 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = u_190;
              t = o_27(r_190, s_190, t_190, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm r_155 = NULL,c_156 = NULL,z_10 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  v_190 = ATgetArgument(t, 0);
                  w_190 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(u_190);
              r_155 = t;
              t = w_190;
              t = desugarRule_0_0(t);
              c_156 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, v_190, c_156);
              z_10 = t;
              t = SSLsetAnnotations(z_10, r_155);
            }
          ;
          LocalPopChoice(r_39);
        }
      else
        {
          t = o_39;
          t = RtoS_0_0(t);
        }
      ;
      LocalPopChoice(n_39);
    }
  else
    {
      t = l_39;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm d_134 (ATerm), ATerm t)
{
  ATerm x_9 (ATerm t)
  {
    t = topdown_1_0(d_134, t);
    return(t);
  }
  t = d_134(t);
  t = SRTS_all(x_9, t);
  return(t);
}
ATerm y_9 (ATerm t)
{
  ATerm s_39 = t;
  int t_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      ;
      LocalPopChoice(t_39);
    }
  else
    {
      t = s_39;
    }
  t = repeat_1_0(c_10, t);
  return(t);
}
ATerm c_10 (ATerm t)
{
  ATerm u_39 = t;
  int w_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      ;
      LocalPopChoice(w_39);
    }
  else
    {
      t = u_39;
      {
        ATerm x_39 = t;
        int y_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_191 = NULL,l_191 = NULL,m_191 = NULL,n_191 = NULL;
            k_191 = t;
            if(match_cons(t, sym_CallT_3))
              {
                l_191 = ATgetArgument(t, 0);
                m_191 = ATgetArgument(t, 1);
                n_191 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = k_191;
            t = l_27(l_191, m_191, n_191, t);
            ;
            LocalPopChoice(y_39);
          }
        else
          {
            t = x_39;
            {
              ATerm z_39 = t;
              int a_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(a_40);
                }
              else
                {
                  t = z_39;
                  {
                    ATerm b_40 = t;
                    int c_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        ;
                        LocalPopChoice(c_40);
                      }
                    else
                      {
                        t = b_40;
                        {
                          ATerm d_40 = t;
                          int f_40 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm g_40 = t;
                              int i_40 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm s_191 = NULL,t_191 = NULL,u_191 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      if(((s_191 != NULL) && (s_191 != ATgetArgument(t, 0))))
                                        _fail(ATgetArgument(t, 0));
                                      else
                                        s_191 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = not_null(s_191);
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      t_191 = ATgetArgument(t, 0);
                                      {
                                        ATerm k_40 = t;
                                        int p_40 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm w_191 = NULL,x_191 = NULL;
                                            t = not_null(s_191);
                                            {
                                              ATerm d_10 (ATerm t)
                                              {
                                                if(match_cons(t, sym_RootApp_1))
                                                  {
                                                    ATerm q_40 = ATgetArgument(t, 0);
                                                    if(match_cons(q_40, sym_Match_1))
                                                      {
                                                        if(((w_191 != NULL) && (w_191 != ATgetArgument(q_40, 0))))
                                                          _fail(ATgetArgument(q_40, 0));
                                                        else
                                                          w_191 = ATgetArgument(q_40, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                  }
                                                else
                                                  _fail(t);
                                                t = not_null(w_191);
                                                return(t);
                                              }
                                              t = pat_td_1_0(d_10, t);
                                              if(((x_191 != NULL) && (x_191 != t)))
                                                _fail(t);
                                              else
                                                x_191 = t;
                                              t = (ATerm) ATmakeAppl(sym_Match_1, not_null(x_191));
                                            }
                                            ;
                                            LocalPopChoice(p_40);
                                          }
                                        else
                                          {
                                            t = k_40;
                                            t = not_null(t_191);
                                          }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          t_191 = ATgetArgument(t, 0);
                                          u_191 = ATgetArgument(t, 1);
                                          {
                                            ATerm r_40 = t;
                                            int s_40 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm a_192 = NULL,b_192 = NULL;
                                                t = not_null(s_191);
                                                {
                                                  ATerm e_10 (ATerm t)
                                                  {
                                                    if(match_cons(t, sym_RootApp_1))
                                                      {
                                                        ATerm t_40 = ATgetArgument(t, 0);
                                                        if(match_cons(t_40, sym_Match_1))
                                                          {
                                                            if(((a_192 != NULL) && (a_192 != ATgetArgument(t_40, 0))))
                                                              _fail(ATgetArgument(t_40, 0));
                                                            else
                                                              a_192 = ATgetArgument(t_40, 0);
                                                          }
                                                        else
                                                          _fail(t);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = not_null(a_192);
                                                    return(t);
                                                  }
                                                  t = pat_td_1_0(e_10, t);
                                                  if(((b_192 != NULL) && (b_192 != t)))
                                                    _fail(t);
                                                  else
                                                    b_192 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, not_null(b_192));
                                                }
                                                ;
                                                LocalPopChoice(s_40);
                                              }
                                            else
                                              {
                                                t = r_40;
                                                t = (ATerm) ATmakeAppl(sym_BA_2, not_null(t_191), not_null(u_191));
                                              }
                                          }
                                        }
                                      else
                                        {
                                          ATerm f_192 = NULL,g_192 = NULL;
                                          t = not_null(s_191);
                                          {
                                            ATerm h_10 (ATerm t)
                                            {
                                              if(match_cons(t, sym_RootApp_1))
                                                {
                                                  ATerm u_40 = ATgetArgument(t, 0);
                                                  if(match_cons(u_40, sym_Match_1))
                                                    {
                                                      if(((f_192 != NULL) && (f_192 != ATgetArgument(u_40, 0))))
                                                        _fail(ATgetArgument(u_40, 0));
                                                      else
                                                        f_192 = ATgetArgument(u_40, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                }
                                              else
                                                _fail(t);
                                              t = not_null(f_192);
                                              return(t);
                                            }
                                            t = pat_td_1_0(h_10, t);
                                            if(((g_192 != NULL) && (g_192 != t)))
                                              _fail(t);
                                            else
                                              g_192 = t;
                                            t = (ATerm) ATmakeAppl(sym_Match_1, not_null(g_192));
                                          }
                                        }
                                    }
                                  ;
                                  LocalPopChoice(i_40);
                                }
                              else
                                {
                                  t = g_40;
                                  t = Mapp2_0_0(t);
                                }
                              ;
                              LocalPopChoice(f_40);
                            }
                          else
                            {
                              t = d_40;
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
  t = topdown_1_0(y_9, t);
  return(t);
}
ATerm i_10 (ATerm t)
{
  ATerm h_30 = NULL;
  ATerm x_40 = t;
  int y_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_30 = ATgetArgument(t, 0);
          {
            ATerm z_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_40);
      t = h_30;
    }
  else
    {
      t = x_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_30;
    }
  return(t);
}
ATerm k_10 (ATerm t)
{
  ATerm k_30 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_30);
  return(t);
}
ATerm p_10 (ATerm t)
{
  ATerm a_41 = t;
  int c_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(c_41);
    }
  else
    {
      t = a_41;
      {
        ATerm m_30 = NULL,n_30 = NULL,o_30 = NULL,v_30 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            m_30 = ATgetArgument(t, 0);
            t = m_30;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                m_30 = ATgetArgument(t, 0);
                n_30 = ATgetArgument(t, 1);
                o_30 = ATgetArgument(t, 2);
                v_30 = ATgetArgument(t, 3);
                t = o_30;
                t = map_1_0(q_10, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    m_30 = ATgetArgument(t, 0);
                    n_30 = ATgetArgument(t, 1);
                    o_30 = ATgetArgument(t, 2);
                    v_30 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = o_30;
                t = map_1_0(r_10, t);
              }
          }
      }
    }
  return(t);
}
ATerm q_10 (ATerm t)
{
  ATerm d_31 = NULL;
  ATerm d_41 = t;
  int e_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_31 = ATgetArgument(t, 0);
          {
            ATerm f_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_41);
      t = d_31;
    }
  else
    {
      t = d_41;
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
ATerm r_10 (ATerm t)
{
  ATerm r_31 = NULL;
  ATerm i_41 = t;
  int j_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_31 = ATgetArgument(t, 0);
          {
            ATerm k_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_41);
      t = r_31;
    }
  else
    {
      t = i_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_31;
    }
  return(t);
}
ATerm s_10 (ATerm t)
{
  ATerm b_32 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      b_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, b_32);
  return(t);
}
ATerm u_10 (ATerm t)
{
  ATerm l_41 = t;
  int m_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(m_41);
    }
  else
    {
      t = l_41;
      {
        ATerm d_32 = NULL,e_32 = NULL,j_32 = NULL,k_32 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            d_32 = ATgetArgument(t, 0);
            t = d_32;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                d_32 = ATgetArgument(t, 0);
                e_32 = ATgetArgument(t, 1);
                j_32 = ATgetArgument(t, 2);
                k_32 = ATgetArgument(t, 3);
                t = j_32;
                t = map_1_0(x_10, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    d_32 = ATgetArgument(t, 0);
                    e_32 = ATgetArgument(t, 1);
                    j_32 = ATgetArgument(t, 2);
                    k_32 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = j_32;
                t = map_1_0(y_10, t);
              }
          }
      }
    }
  return(t);
}
ATerm x_10 (ATerm t)
{
  ATerm s_32 = NULL;
  ATerm n_41 = t;
  int o_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_32 = ATgetArgument(t, 0);
          {
            ATerm p_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_41);
      t = s_32;
    }
  else
    {
      t = n_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_32;
    }
  return(t);
}
ATerm y_10 (ATerm t)
{
  ATerm h_33 = NULL;
  ATerm q_41 = t;
  int r_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_33 = ATgetArgument(t, 0);
          {
            ATerm s_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_41);
      t = h_33;
    }
  else
    {
      t = q_41;
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
ATerm DeclareVariables_0_0 (ATerm t)
{
  ATerm l_29 = NULL,n_29 = NULL,o_29 = NULL,p_29 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      n_29 = ATgetArgument(t, 0);
      o_29 = ATgetArgument(t, 1);
      p_29 = ATgetArgument(t, 2);
      l_29 = ATgetArgument(t, 3);
      {
        ATerm y_29 = NULL,z_29 = NULL,a_30 = NULL;
        t = p_29;
        t = map_1_0(i_10, t);
        y_29 = t;
        t = l_29;
        t = free_vars_3_0(k_10, p_10, tboundin_3_0, t);
        a_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_30, y_29);
        t = diff_0_0(t);
        z_29 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, n_29, o_29, p_29, (ATerm) ATmakeAppl(sym_Scope_2, z_29, l_29));
      }
    }
  else
    {
      ATerm z_31 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          n_29 = ATgetArgument(t, 0);
          o_29 = ATgetArgument(t, 1);
          p_29 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = p_29;
      t = free_vars_3_0(s_10, u_10, tboundin_3_0, t);
      z_31 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, n_29, o_29, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, z_31, p_29));
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm e_162 (ATerm), ATerm f_162 (ATerm), ATerm g_162 (ATerm), ATerm t)
{
  ATerm a_37 = NULL,c_37 = NULL,d_37 = NULL,l_37 = NULL,m_37 = NULL;
  l_37 = t;
  if(match_cons(t, sym_Scope_2))
    {
      m_37 = ATgetArgument(t, 0);
      a_37 = ATgetArgument(t, 1);
      {
        ATerm m_39 = NULL,p_39 = NULL,q_39 = NULL,b_11 = NULL;
        t = SSLgetAnnotations(l_37);
        m_39 = t;
        t = m_37;
        t = g_162(t);
        p_39 = t;
        t = a_37;
        t = e_162(t);
        q_39 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, p_39, q_39);
        b_11 = t;
        t = SSLsetAnnotations(b_11, m_39);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          m_37 = ATgetArgument(t, 0);
          a_37 = ATgetArgument(t, 1);
          c_37 = ATgetArgument(t, 2);
          d_37 = ATgetArgument(t, 3);
          {
            ATerm j_40 = NULL,v_40 = NULL,w_40 = NULL,g_41 = NULL,h_41 = NULL,c_11 = NULL;
            t = SSLgetAnnotations(l_37);
            j_40 = t;
            t = m_37;
            t = g_162(t);
            v_40 = t;
            t = a_37;
            t = g_162(t);
            w_40 = t;
            t = c_37;
            t = g_162(t);
            g_41 = t;
            t = d_37;
            t = e_162(t);
            h_41 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, v_40, w_40, g_41, h_41);
            c_11 = t;
            t = SSLsetAnnotations(c_11, j_40);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              m_37 = ATgetArgument(t, 0);
              a_37 = ATgetArgument(t, 1);
              c_37 = ATgetArgument(t, 2);
              d_37 = ATgetArgument(t, 3);
              {
                ATerm x_41 = NULL,c_42 = NULL,d_42 = NULL,f_42 = NULL,g_42 = NULL,d_11 = NULL;
                t = SSLgetAnnotations(l_37);
                x_41 = t;
                t = m_37;
                t = g_162(t);
                c_42 = t;
                t = a_37;
                t = g_162(t);
                d_42 = t;
                t = c_37;
                t = g_162(t);
                f_42 = t;
                t = d_37;
                t = e_162(t);
                g_42 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, c_42, d_42, f_42, g_42);
                d_11 = t;
                t = SSLsetAnnotations(d_11, x_41);
              }
            }
          else
            {
              ATerm q_42 = NULL,s_42 = NULL,e_11 = NULL;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  m_37 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(l_37);
              q_42 = t;
              t = m_37;
              t = e_162(t);
              s_42 = t;
              t = (ATerm) ATmakeAppl(sym_DynamicRules_1, s_42);
              e_11 = t;
              t = SSLsetAnnotations(e_11, q_42);
            }
        }
    }
  return(t);
}
ATerm a_11 (ATerm t)
{
  ATerm w_37 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_37);
  return(t);
}
ATerm f_11 (ATerm t)
{
  ATerm t_41 = t;
  int u_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(u_41);
    }
  else
    {
      t = t_41;
      {
        ATerm y_37 = NULL,z_37 = NULL,b_38 = NULL,e_38 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            y_37 = ATgetArgument(t, 0);
            t = y_37;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                y_37 = ATgetArgument(t, 0);
                z_37 = ATgetArgument(t, 1);
                b_38 = ATgetArgument(t, 2);
                e_38 = ATgetArgument(t, 3);
                t = b_38;
                t = map_1_0(g_11, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    y_37 = ATgetArgument(t, 0);
                    z_37 = ATgetArgument(t, 1);
                    b_38 = ATgetArgument(t, 2);
                    e_38 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = b_38;
                t = map_1_0(h_11, t);
              }
          }
      }
    }
  return(t);
}
ATerm g_11 (ATerm t)
{
  ATerm u_38 = NULL;
  ATerm v_41 = t;
  int w_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_38 = ATgetArgument(t, 0);
          {
            ATerm y_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_41);
      t = u_38;
    }
  else
    {
      t = v_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_38;
    }
  return(t);
}
ATerm h_11 (ATerm t)
{
  ATerm f_39 = NULL;
  ATerm z_41 = t;
  int a_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_39 = ATgetArgument(t, 0);
          {
            ATerm b_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_42);
      t = f_39;
    }
  else
    {
      t = z_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_39;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(a_11, f_11, tboundin_3_0, t);
  return(t);
}
ATerm i_11 (ATerm t)
{
  ATerm h_40 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_40);
  return(t);
}
ATerm k_11 (ATerm t)
{
  ATerm h_42 = t;
  int i_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(i_42);
    }
  else
    {
      t = h_42;
      {
        ATerm l_40 = NULL,m_40 = NULL,n_40 = NULL,o_40 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            l_40 = ATgetArgument(t, 0);
            t = l_40;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                l_40 = ATgetArgument(t, 0);
                m_40 = ATgetArgument(t, 1);
                n_40 = ATgetArgument(t, 2);
                o_40 = ATgetArgument(t, 3);
                t = n_40;
                t = map_1_0(m_11, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    l_40 = ATgetArgument(t, 0);
                    m_40 = ATgetArgument(t, 1);
                    n_40 = ATgetArgument(t, 2);
                    o_40 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = n_40;
                t = map_1_0(o_11, t);
              }
          }
      }
    }
  return(t);
}
ATerm m_11 (ATerm t)
{
  ATerm b_41 = NULL;
  ATerm j_42 = t;
  int k_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_41 = ATgetArgument(t, 0);
          {
            ATerm l_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_42);
      t = b_41;
    }
  else
    {
      t = j_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_41;
    }
  return(t);
}
ATerm o_11 (ATerm t)
{
  ATerm e_42 = NULL;
  ATerm m_42 = t;
  int n_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_42 = ATgetArgument(t, 0);
          {
            ATerm o_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_42);
      t = e_42;
    }
  else
    {
      t = m_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_42;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm v_39 = NULL,e_40 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      e_40 = ATgetArgument(t, 0);
      t = e_40;
      if(match_cons(t, sym_Rule_3))
        {
          v_39 = ATgetArgument(t, 0);
          {
            ATerm p_42 = ATgetArgument(t, 1);
          }
          {
            ATerm r_42 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = v_39;
      t = free_vars_3_0(i_11, k_11, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          e_40 = ATgetArgument(t, 0);
          {
            ATerm t_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = e_40;
    }
  return(t);
}
ATerm j_25 (ATerm y_143 (ATerm), ATerm j_56, ATerm i_56, ATerm t)
{
  ATerm v_43 (ATerm t)
  {
    ATerm l_43 = NULL,p_43 = NULL,s_43 = NULL;
    l_43 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = not_null(i_56);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_43 = ATgetFirst((ATermList) t);
            s_43 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm u_42 = t;
          int v_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_43;
              {
                ATerm r_11 (ATerm t)
                {
                  t = not_null(i_56);
                  return(t);
                }
                t = k_25(y_143, r_11, not_null(p_43), not_null(s_43), t);
                t = v_43(t);
              }
              ;
              LocalPopChoice(v_42);
            }
          else
            {
              t = u_42;
              {
                ATerm h_43 = NULL,n_43 = NULL,j_11 = NULL;
                t = SSLgetAnnotations(l_43);
                h_43 = t;
                t = s_43;
                t = v_43(t);
                n_43 = t;
                t = (ATerm) ATinsert(CheckATermList(n_43), p_43);
                j_11 = t;
                t = SSLsetAnnotations(j_11, h_43);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(j_56);
  t = v_43(t);
  return(t);
}
ATerm k_25 (ATerm b_144 (ATerm), ATerm c_144 (ATerm), ATerm n_56, ATerm m_56, ATerm t)
{
  t = c_144(t);
  {
    ATerm s_11 (ATerm t)
    {
      ATerm c_44 = NULL;
      c_44 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(n_56), c_44);
      t = b_144(t);
      return(t);
    }
    t = fetch_1_0(s_11, t);
    t = not_null(m_56);
  }
  return(t);
}
ATerm l_25 (ATerm t_143 (ATerm), ATerm h_56, ATerm g_56, ATerm t)
{
  ATerm m_45 (ATerm t)
  {
    ATerm c_45 = NULL,d_45 = NULL,f_45 = NULL;
    c_45 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_45;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_45 = ATgetFirst((ATermList) t);
            f_45 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm w_42 = t;
          int x_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_45;
              {
                ATerm u_11 (ATerm t)
                {
                  t = not_null(g_56);
                  return(t);
                }
                t = k_25(t_143, u_11, not_null(d_45), not_null(f_45), t);
                t = m_45(t);
              }
              ;
              LocalPopChoice(x_42);
            }
          else
            {
              t = w_42;
              {
                ATerm e_44 = NULL,h_44 = NULL,l_11 = NULL;
                t = SSLgetAnnotations(c_45);
                e_44 = t;
                t = f_45;
                t = m_45(t);
                h_44 = t;
                t = (ATerm) ATinsert(CheckATermList(h_44), d_45);
                l_11 = t;
                t = SSLsetAnnotations(l_11, e_44);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(h_56);
  t = m_45(t);
  return(t);
}
ATerm genzip_4_0 (ATerm x_141 (ATerm), ATerm y_141 (ATerm), ATerm z_141 (ATerm), ATerm a_142 (ATerm), ATerm t)
{
  ATerm n_184 (ATerm t)
  {
    ATerm y_42 = t;
    int z_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_141(t);
        ;
        LocalPopChoice(z_42);
      }
    else
      {
        t = y_42;
        {
          ATerm h_184 = NULL,i_184 = NULL,j_184 = NULL,k_184 = NULL,l_184 = NULL,m_184 = NULL,n_11 = NULL;
          t = y_141(t);
          m_184 = t;
          if(match_cons(t, sym__2))
            {
              i_184 = ATgetArgument(t, 0);
              j_184 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(m_184);
          h_184 = t;
          t = i_184;
          t = a_142(t);
          k_184 = t;
          t = j_184;
          t = n_184(t);
          l_184 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_184, l_184);
          n_11 = t;
          t = SSLsetAnnotations(n_11, h_184);
          t = z_141(t);
        }
      }
    return(t);
  }
  t = n_184(t);
  return(t);
}
ATerm x_11 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_43 = ATgetArgument(t, 0);
      if(((ATgetType(a_43) != AT_LIST) || !(ATisEmpty(a_43))))
        _fail(t);
      {
        ATerm b_43 = ATgetArgument(t, 1);
        if(((ATgetType(b_43) != AT_LIST) || !(ATisEmpty(b_43))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_11 (ATerm t)
{
  ATerm z_45 = NULL,a_46 = NULL,b_46 = NULL,c_46 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_43 = ATgetArgument(t, 0);
      if(((ATgetType(c_43) == AT_LIST) && !(ATisEmpty(c_43))))
        {
          z_45 = ATgetFirst((ATermList) c_43);
          a_46 = (ATerm) ATgetNext((ATermList) c_43);
        }
      else
        _fail(t);
      {
        ATerm d_43 = ATgetArgument(t, 1);
        if(((ATgetType(d_43) == AT_LIST) && !(ATisEmpty(d_43))))
          {
            b_46 = ATgetFirst((ATermList) d_43);
            c_46 = (ATerm) ATgetNext((ATermList) d_43);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_45, b_46), (ATerm) ATmakeAppl(sym__2, a_46, c_46));
  return(t);
}
ATerm a_12 (ATerm t)
{
  ATerm f_46 = NULL,g_46 = NULL;
  if(match_cons(t, sym__2))
    {
      f_46 = ATgetArgument(t, 0);
      g_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_46), f_46);
  return(t);
}
ATerm n_25 (ATerm o_650, ATerm t_650, ATerm j_83, ATerm t)
{
  ATerm q_45 = NULL,v_45 = NULL,w_45 = NULL,x_45 = NULL;
  t = SSL_explode_term(t_650);
  if(match_cons(t, sym__2))
    {
      q_45 = ATgetArgument(t, 0);
      w_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(o_650);
  if(match_cons(t, sym__2))
    {
      if((q_45 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      v_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_45, w_45);
  t = genzip_4_0(x_11, y_11, a_12, _id, t);
  x_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_45, j_83);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm u_133 (ATerm), ATerm v_133 (ATerm), ATerm t)
{
  ATerm d_158 (ATerm t)
  {
    ATerm e_43 = t;
    int f_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_133(t);
        ;
        LocalPopChoice(f_43);
      }
    else
      {
        t = e_43;
        t = v_133(t);
        t = d_158(t);
      }
    return(t);
  }
  t = d_158(t);
  return(t);
}
ATerm for_3_0 (ATerm x_133 (ATerm), ATerm y_133 (ATerm), ATerm z_133 (ATerm), ATerm t)
{
  t = x_133(t);
  t = while_not_2_0(y_133, z_133, t);
  return(t);
}
ATerm c_12 (ATerm t)
{
  ATerm w_46 = NULL;
  w_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, w_46);
  return(t);
}
ATerm f_12 (ATerm t)
{
  ATerm y_46 = NULL,d_47 = NULL,e_47 = NULL,f_47 = NULL,p_11 = NULL;
  f_47 = t;
  if(match_cons(t, sym__2))
    {
      d_47 = ATgetArgument(t, 0);
      e_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_47);
  y_46 = t;
  t = e_47;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_47, e_47);
  p_11 = t;
  t = SSLsetAnnotations(p_11, y_46);
  return(t);
}
ATerm g_12 (ATerm t)
{
  ATerm h_48 = NULL,i_48 = NULL,l_48 = NULL,m_48 = NULL,n_48 = NULL;
  h_48 = t;
  if(match_cons(t, sym__2))
    {
      i_48 = ATgetArgument(t, 0);
      l_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_48;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_48 = ATgetFirst((ATermList) t);
      n_48 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_43 = t;
        int i_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_48(i_48, l_48, h_48, t);
            ;
            LocalPopChoice(i_43);
          }
        else
          {
            t = g_43;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_48), m_48), n_48);
          }
      }
    }
  else
    {
      t = z_48(i_48, l_48, h_48, t);
    }
  return(t);
}
ATerm z_48 (ATerm g_47, ATerm h_47, ATerm i_47, ATerm t)
{
  ATerm j_47 = NULL,o_47 = NULL,q_11 = NULL,r_47 = NULL,t_47 = NULL,w_47 = NULL,b_48 = NULL;
  t = SSLgetAnnotations(i_47);
  j_47 = t;
  t = h_47;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_47 = ATgetFirst((ATermList) t);
      b_48 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_47;
  if(match_cons(t, sym__2))
    {
      t_47 = ATgetArgument(t, 0);
      w_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_43 = t;
    int k_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_47;
        if((t_47 != t))
          {
            _fail(t);
          }
        t = b_48;
        ;
        LocalPopChoice(k_43);
      }
    else
      {
        t = j_43;
        t = h_47;
        t = n_25(t_47, w_47, b_48, t);
      }
    o_47 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_47, o_47);
    q_11 = t;
    t = SSLsetAnnotations(q_11, j_47);
  }
  return(t);
}
ATerm i_12 (ATerm t)
{
  ATerm w_48 = NULL;
  if(match_cons(t, sym__2))
    {
      w_48 = ATgetArgument(t, 0);
      if((w_48 != ATgetArgument(t, 1)))
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
  ATerm m_43 = t;
  int o_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(c_12, f_12, g_12, t);
      ;
      LocalPopChoice(o_43);
    }
  else
    {
      t = m_43;
      {
        ATerm r_48 = NULL,s_48 = NULL,t_48 = NULL;
        r_48 = t;
        if(match_cons(t, sym__2))
          {
            s_48 = ATgetArgument(t, 0);
            t_48 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_48;
        t = l_25(i_12, s_48, t_48, t);
      }
    }
  return(t);
}
ATerm r_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm v_12 (ATerm t)
{
  ATerm z_44 = NULL,a_45 = NULL;
  if(match_cons(t, sym__2))
    {
      z_44 = ATgetArgument(t, 0);
      a_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_25(y_12, z_44, a_45, t);
  return(t);
}
ATerm y_12 (ATerm t)
{
  ATerm b_45 = NULL;
  if(match_cons(t, sym__2))
    {
      b_45 = ATgetArgument(t, 0);
      if((b_45 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm z_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm a_13 (ATerm t)
{
  ATerm p_45 = NULL,r_45 = NULL;
  if(match_cons(t, sym__2))
    {
      p_45 = ATgetArgument(t, 0);
      r_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_25(d_13, p_45, r_45, t);
  return(t);
}
ATerm d_13 (ATerm t)
{
  ATerm s_45 = NULL;
  if(match_cons(t, sym__2))
    {
      s_45 = ATgetArgument(t, 0);
      if((s_45 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm z_160 (ATerm), ATerm a_161 (ATerm), ATerm b_161 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm r_50 (ATerm t)
  {
    ATerm q_43 = t;
    int r_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_160(t);
        ;
        LocalPopChoice(r_43);
      }
    else
      {
        t = q_43;
        {
          ATerm t_43 = t;
          int u_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_49 = NULL,v_49 = NULL,r_44 = NULL,s_44 = NULL;
              if(((r_49 != NULL) && (r_49 != t)))
                _fail(t);
              else
                r_49 = t;
              t = a_161(t);
              if(((v_49 != NULL) && (v_49 != t)))
                _fail(t);
              else
                v_49 = t;
              t = not_null(r_49);
              {
                ATerm k_12 (ATerm t)
                {
                  ATerm y_49 = NULL;
                  t = r_50(t);
                  y_49 = t;
                  t = (ATerm) ATmakeAppl(sym__2, y_49, not_null(v_49));
                  t = diff_0_0(t);
                  return(t);
                }
                t = b_161(k_12, r_50, r_12, t);
                if(((s_44 != NULL) && (s_44 != t)))
                  _fail(t);
                else
                  s_44 = t;
                t = SSL_explode_term(not_null(s_44));
                if(match_cons(t, sym__2))
                  {
                    ATerm w_43 = ATgetArgument(t, 0);
                    if(((r_44 != NULL) && (r_44 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      r_44 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = not_null(r_44);
                t = foldr_3_0(t_12, v_12, _id, t);
              }
              ;
              LocalPopChoice(u_43);
            }
          else
            {
              t = t_43;
              {
                ATerm g_45 = NULL,h_45 = NULL;
                h_45 = t;
                t = SSL_explode_term(h_45);
                if(match_cons(t, sym__2))
                  {
                    ATerm x_43 = ATgetArgument(t, 0);
                    g_45 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = g_45;
                t = foldr_3_0(z_12, a_13, r_50, t);
              }
            }
        }
      }
    return(t);
  }
  t = r_50(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm e_134 (ATerm), ATerm t)
{
  ATerm e_13 (ATerm t)
  {
    t = bottomup_1_0(e_134, t);
    return(t);
  }
  t = SRTS_all(e_13, t);
  t = e_134(t);
  return(t);
}
ATerm g_13 (ATerm t)
{
  t = bottomup_1_0(h_13, t);
  t = DeclareVariables_0_0(t);
  t = desugar_0_0(t);
  t = strename_0_0(t);
  return(t);
}
ATerm h_13 (ATerm t)
{
  ATerm y_51 = NULL,a_52 = NULL,b_52 = NULL,c_52 = NULL,d_52 = NULL;
  d_52 = t;
  if(match_cons(t, sym_LRule_1))
    {
      c_52 = ATgetArgument(t, 0);
      t = c_52;
      if(match_cons(t, sym_Rule_3))
        {
          y_51 = ATgetArgument(t, 0);
          a_52 = ATgetArgument(t, 1);
          b_52 = ATgetArgument(t, 2);
          {
            ATerm y_43 = t;
            int z_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_52 = NULL;
                t = y_51;
                t = free_vars_3_0(i_13, j_13, tboundin_3_0, t);
                k_52 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, k_52, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, y_51, a_52, b_52)));
                ;
                LocalPopChoice(z_43);
              }
            else
              {
                t = y_43;
                t = d_52;
              }
          }
        }
      else
        {
          t = d_52;
        }
    }
  else
    {
      if(match_cons(t, sym_ScopeDefault_1))
        {
          c_52 = ATgetArgument(t, 0);
          {
            ATerm a_44 = t;
            int b_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_54 = NULL;
                t = c_52;
                t = free_vars_3_0(m_13, n_13, tboundin_3_0, t);
                t_54 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, t_54, c_52);
                ;
                LocalPopChoice(b_44);
              }
            else
              {
                t = a_44;
                t = d_52;
              }
          }
        }
      else
        {
          t = d_52;
        }
    }
  return(t);
}
ATerm i_13 (ATerm t)
{
  ATerm m_52 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_52);
  return(t);
}
ATerm j_13 (ATerm t)
{
  ATerm d_44 = t;
  int f_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(f_44);
    }
  else
    {
      t = d_44;
      {
        ATerm o_52 = NULL,p_52 = NULL,q_52 = NULL,w_52 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            o_52 = ATgetArgument(t, 0);
            t = o_52;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                o_52 = ATgetArgument(t, 0);
                p_52 = ATgetArgument(t, 1);
                q_52 = ATgetArgument(t, 2);
                w_52 = ATgetArgument(t, 3);
                t = q_52;
                t = map_1_0(k_13, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    o_52 = ATgetArgument(t, 0);
                    p_52 = ATgetArgument(t, 1);
                    q_52 = ATgetArgument(t, 2);
                    w_52 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = q_52;
                t = map_1_0(l_13, t);
              }
          }
      }
    }
  return(t);
}
ATerm k_13 (ATerm t)
{
  ATerm u_53 = NULL;
  ATerm g_44 = t;
  int i_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_53 = ATgetArgument(t, 0);
          {
            ATerm j_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_44);
      t = u_53;
    }
  else
    {
      t = g_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_53;
    }
  return(t);
}
ATerm l_13 (ATerm t)
{
  ATerm d_54 = NULL;
  ATerm k_44 = t;
  int l_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_54 = ATgetArgument(t, 0);
          {
            ATerm m_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_44);
      t = d_54;
    }
  else
    {
      t = k_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_54 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_54;
    }
  return(t);
}
ATerm m_13 (ATerm t)
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
ATerm n_13 (ATerm t)
{
  ATerm n_44 = t;
  int o_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(o_44);
    }
  else
    {
      t = n_44;
      {
        ATerm d_55 = NULL,e_55 = NULL,f_55 = NULL,g_55 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            d_55 = ATgetArgument(t, 0);
            t = d_55;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                d_55 = ATgetArgument(t, 0);
                e_55 = ATgetArgument(t, 1);
                f_55 = ATgetArgument(t, 2);
                g_55 = ATgetArgument(t, 3);
                t = f_55;
                t = map_1_0(o_13, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    d_55 = ATgetArgument(t, 0);
                    e_55 = ATgetArgument(t, 1);
                    f_55 = ATgetArgument(t, 2);
                    g_55 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = f_55;
                t = map_1_0(p_13, t);
              }
          }
      }
    }
  return(t);
}
ATerm o_13 (ATerm t)
{
  ATerm u_55 = NULL;
  ATerm p_44 = t;
  int q_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_55 = ATgetArgument(t, 0);
          {
            ATerm t_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_44);
      t = u_55;
    }
  else
    {
      t = p_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_55;
    }
  return(t);
}
ATerm p_13 (ATerm t)
{
  ATerm r_56 = NULL;
  ATerm u_44 = t;
  int v_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_56 = ATgetArgument(t, 0);
          {
            ATerm w_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_44);
      t = r_56;
    }
  else
    {
      t = u_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_56;
    }
  return(t);
}
ATerm p_25 (ATerm u_193, ATerm t)
{
  t = u_193;
  t = map_1_0(g_13, t);
  t = define_strategies_0_0(t);
  return(t);
}
ATerm a_27 (ATerm i_66, ATerm j_66, ATerm t)
{
  ATerm x_44 = t;
  int y_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(i_66, j_66);
      ;
      LocalPopChoice(y_44);
    }
  else
    {
      t = x_44;
      t = SSL_addr(i_66, j_66);
    }
  return(t);
}
ATerm foldr_3_0 (ATerm z_145 (ATerm), ATerm a_146 (ATerm), ATerm b_146 (ATerm), ATerm t)
{
  ATerm a_168 = NULL,b_168 = NULL,c_168 = NULL;
  a_168 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_168;
      t = z_145(t);
    }
  else
    {
      ATerm k_168 = NULL,l_168 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_168 = ATgetFirst((ATermList) t);
          c_168 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_168;
      t = b_146(t);
      k_168 = t;
      t = c_168;
      t = foldr_3_0(z_145, a_146, b_146, t);
      l_168 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_168, l_168);
      t = a_146(t);
    }
  return(t);
}
ATerm q_13 (ATerm t)
{
  ATerm w_56 = NULL,x_56 = NULL,c_57 = NULL,d_57 = NULL,g_57 = NULL,h_57 = NULL;
  w_56 = t;
  if(match_cons(t, sym_SDef_3))
    {
      x_56 = ATgetArgument(t, 0);
      c_57 = ATgetArgument(t, 1);
      {
        ATerm e_45 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = c_57;
  t = foldr_3_0(r_13, s_13, t_13, t);
  d_57 = t;
  t = term_t_17;
  g_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_56, d_57);
  h_57 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_t_17, (ATerm)ATmakeAppl(sym__2, x_56, d_57), w_56);
  t = x_27(g_57, h_57, w_56, t);
  return(t);
}
ATerm r_13 (ATerm t)
{
  t = term_z_21;
  return(t);
}
ATerm s_13 (ATerm t)
{
  ATerm i_57 = NULL,j_57 = NULL;
  if(match_cons(t, sym__2))
    {
      i_57 = ATgetArgument(t, 0);
      j_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_27(i_57, j_57, t);
  return(t);
}
ATerm t_13 (ATerm t)
{
  t = term_a_22;
  return(t);
}
ATerm define_strategies_0_0 (ATerm t)
{
  t = map_1_0(q_13, t);
  return(t);
}
ATerm q_25 (ATerm b_75, ATerm c_75, ATerm t)
{
  t = SSL_execvp(b_75, c_75);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm n_58 = NULL,o_58 = NULL,p_58 = NULL,v_58 = NULL;
  n_58 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      o_58 = ATgetArgument(t, 0);
      {
        ATerm e_46 = NULL,i_46 = NULL;
        t = SSL_int_to_string(o_58);
        e_46 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_45), e_46), term_i_45);
        i_46 = t;
        t = SSL_concat_strings(i_46);
      }
    }
  else
    {
      ATerm s_46 = NULL,t_46 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          o_58 = ATgetArgument(t, 0);
          p_58 = ATgetArgument(t, 1);
          v_58 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(p_58);
      s_46 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_58), term_l_45), s_46), term_k_45), o_58);
      t_46 = t;
      t = SSL_concat_strings(t_46);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm g_140 (ATerm), ATerm t)
{
  ATerm y_58 = NULL;
  ATerm u_13 (ATerm t)
  {
    t = g_140(t);
    if(((y_58 != NULL) && (y_58 != t)))
      _fail(t);
    else
      y_58 = t;
    return(t);
  }
  t = fetch_1_0(u_13, t);
  t = not_null(y_58);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm z_58 = NULL;
  if(((z_58 != NULL) && (z_58 != t)))
    _fail(t);
  else
    z_58 = t;
  {
    ATerm n_45 = t;
    int o_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_13 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm t_45 = ATgetArgument(t, 0);
              if(((z_58 != NULL) && (z_58 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                z_58 = ATgetArgument(t, 1);
              {
                ATerm u_45 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_53), term_x_52), term_r_52), term_i_52), term_e_52), term_u_51), term_q_51), term_m_51), term_g_51), term_c_51), term_x_50), term_t_50), term_n_50), term_j_50), term_f_50), term_b_50), term_u_49), term_o_49), term_d_49), term_q_48), term_j_48), term_d_48), term_s_47), term_k_47), term_x_46), term_q_46), term_m_46), term_h_46);
        t = fetch_elem_1_0(v_13, t);
        ;
        LocalPopChoice(o_45);
      }
    else
      {
        t = n_45;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(z_58));
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm f_59 = NULL,q_59 = NULL;
  f_59 = t;
  {
    ATerm c_53 = t;
    int d_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm f_53 = ATgetArgument(t, 0);
            q_59 = ATgetArgument(t, 1);
            {
              ATerm g_53 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(d_53);
        {
          ATerm h_53 = t;
          int i_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_47 = NULL,l_47 = NULL,m_47 = NULL;
              t = q_59;
              {
                ATerm j_53 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = j_53;
                  }
                t = signal_from_number_0_0(t);
                t = signal_to_descr_0_0(t);
                b_47 = t;
                t = term_d_22;
                l_47 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, b_47), term_k_53);
                m_47 = t;
                t = SSL_printnl(l_47, m_47);
                t = (ATerm) ATmakeAppl(sym__2, term_d_22, (ATerm) ATinsert(ATinsert(ATempty, b_47), term_k_53));
              }
              ;
              LocalPopChoice(i_53);
            }
          else
            {
              t = h_53;
              t = f_59;
            }
        }
      }
    else
      {
        t = c_53;
        t = f_59;
      }
    t = f_59;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm i_155 (ATerm), ATerm t)
{
  ATerm d_60 = NULL,e_60 = NULL;
  e_60 = t;
  t = fork_0_0(t);
  d_60 = t;
  {
    ATerm l_53 = t;
    int m_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = e_60;
        t = i_155(t);
        ;
        LocalPopChoice(m_53);
      }
    else
      {
        t = l_53;
        t = SSL_waitpid(d_60);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm n_53 = ATgetArgument(t, 0);
            if(((ATgetType(n_53) != AT_INT) || (ATgetInt((ATermInt) n_53) != 0)))
              _fail(t);
            {
              ATerm o_53 = ATgetArgument(t, 1);
            }
            {
              ATerm p_53 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = e_60;
      }
  }
  return(t);
}
ATerm call_sc_0_0 (ATerm t)
{
  ATerm h_60 = NULL,i_60 = NULL,j_60 = NULL;
  if(((h_60 != NULL) && (h_60 != t)))
    _fail(t);
  else
    h_60 = t;
  {
    ATerm q_53 = t;
    int r_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_60 = NULL,o_60 = NULL,p_60 = NULL,r_60 = NULL;
        t = term_k_29;
        t = get_config_0_0(t);
        t = term_s_53;
        r_60 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_s_53, not_null(h_60));
        t = v_27(r_60, not_null(h_60), t);
        k_60 = t;
        t = term_d_22;
        o_60 = t;
        t = (ATerm) ATinsert(ATempty, k_60);
        p_60 = t;
        t = SSL_printnl(o_60, p_60);
        t = not_null(h_60);
        ;
        LocalPopChoice(r_53);
      }
    else
      {
        t = q_53;
      }
    t = term_t_53;
    t = get_config_0_0(t);
    if(((i_60 != NULL) && (i_60 != t)))
      _fail(t);
    else
      i_60 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_v_53, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(i_60)), term_x_53), not_null(h_60)), term_w_53));
    {
      ATerm w_13 (ATerm t)
      {
        ATerm u_60 = NULL,z_60 = NULL,a_61 = NULL,b_61 = NULL;
        t = term_d_22;
        a_61 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_v_53, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(i_60)), term_x_53), not_null(h_60)), term_w_53)));
        b_61 = t;
        t = SSL_printnl(a_61, b_61);
        t = term_v_53;
        u_60 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(i_60)), term_x_53), not_null(h_60)), term_w_53);
        z_60 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_v_53, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(i_60)), term_x_53), not_null(h_60)), term_w_53));
        t = q_25(u_60, z_60, t);
        return(t);
      }
      t = fork_and_wait_1_0(w_13, t);
      t = term_y_53;
      if(((j_60 != NULL) && (j_60 != t)))
        _fail(t);
      else
        j_60 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(h_60), term_y_53);
      t = v_27(not_null(h_60), not_null(j_60), t);
      t = ReadFromFile_0_0(t);
    }
  }
  return(t);
}
ATerm eval_import_0_0 (ATerm t)
{
  ATerm d_61 = NULL;
  ATerm z_53 = t;
  int a_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Imports_1))
        {
          ATerm b_54 = ATgetArgument(t, 0);
          if(((ATgetType(b_54) != AT_LIST) || !(ATisEmpty(b_54))))
            _fail(t);
        }
      else
        _fail(t);
      LocalPopChoice(a_54);
    }
  else
    {
      t = z_53;
      {
        ATerm c_54 = t;
        int e_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Imports_1))
              {
                ATerm f_54 = ATgetArgument(t, 0);
                if(((ATgetType(f_54) == AT_LIST) && !(ATisEmpty(f_54))))
                  {
                    d_61 = ATgetFirst((ATermList) f_54);
                    {
                      ATerm h_54 = (ATerm) ATgetNext((ATermList) f_54);
                      if(((ATgetType(h_54) != AT_LIST) || !(ATisEmpty(h_54))))
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            LocalPopChoice(e_54);
            {
              ATerm f_61 = NULL;
              t = d_61;
              t = call_sc_0_0(t);
              if(match_cons(t, sym_Specification_1))
                {
                  ATerm i_54 = ATgetArgument(t, 0);
                  if(((ATgetType(i_54) == AT_LIST) && !(ATisEmpty(i_54))))
                    {
                      ATerm j_54 = ATgetFirst((ATermList) i_54);
                      if(match_cons(j_54, sym_Signature_1))
                        {
                          ATerm l_54 = ATgetArgument(j_54, 0);
                        }
                      else
                        _fail(t);
                      {
                        ATerm k_54 = (ATerm) ATgetNext((ATermList) i_54);
                        if(((ATgetType(k_54) == AT_LIST) && !(ATisEmpty(k_54))))
                          {
                            ATerm m_54 = ATgetFirst((ATermList) k_54);
                            if(match_cons(m_54, sym_Strategies_1))
                              {
                                f_61 = ATgetArgument(m_54, 0);
                              }
                            else
                              _fail(t);
                            {
                              ATerm n_54 = (ATerm) ATgetNext((ATermList) k_54);
                              if(((ATgetType(n_54) != AT_LIST) || !(ATisEmpty(n_54))))
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
              t = f_61;
              t = define_strategies_0_0(t);
            }
          }
        else
          {
            t = c_54;
            {
              ATerm g_61 = NULL,h_61 = NULL,i_61 = NULL;
              if(match_cons(t, sym_Imports_1))
                {
                  ATerm o_54 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = term_d_22;
              h_61 = t;
              t = (ATerm) ATinsert(ATempty, term_p_54);
              i_61 = t;
              t = SSL_printnl(h_61, i_61);
              t = term_a_22;
              g_61 = t;
              t = SSL_exit(g_61);
              t = (ATerm) ATinsert(ATempty, term_p_54);
            }
          }
      }
    }
  return(t);
}
ATerm s_25 (ATerm a_80, ATerm z_79, ATerm t)
{
  ATerm x_13 (ATerm t)
  {
    ATerm p_61 = NULL,q_61 = NULL;
    if(match_cons(t, sym__2))
      {
        p_61 = ATgetArgument(t, 0);
        q_61 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_table_put(not_null(a_80), p_61, q_61);
    t = (ATerm) ATmakeAppl(sym__3, not_null(a_80), p_61, q_61);
    return(t);
  }
  t = not_null(z_79);
  t = map_1_0(x_13, t);
  return(t);
}
ATerm t_25 (ATerm c_69, ATerm d_69, ATerm t)
{
  t = SSL_access(c_69, d_69);
  return(t);
}
ATerm u_25 (ATerm q_49, ATerm t)
{
  ATerm v_61 = NULL,w_61 = NULL,x_61 = NULL,y_61 = NULL,i_63 = NULL,j_62 = NULL;
  j_62 = t;
  {
    ATerm q_54 = t;
    int r_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_47 = NULL,y_47 = NULL,z_47 = NULL,a_48 = NULL;
        t = term_k_29;
        t = get_config_0_0(t);
        t = term_s_54;
        a_48 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_s_54, q_49);
        t = v_27(a_48, q_49, t);
        x_47 = t;
        t = term_d_22;
        y_47 = t;
        t = (ATerm) ATinsert(ATempty, x_47);
        z_47 = t;
        t = SSL_printnl(y_47, z_47);
        t = j_62;
        ;
        LocalPopChoice(r_54);
      }
    else
      {
        t = q_54;
        t = j_62;
      }
    t = q_49;
    {
      ATerm u_54 = t;
      int x_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_62 = NULL;
          t = (ATerm) ATinsert(ATempty, term_y_54);
          s_62 = t;
          t = (ATerm) ATmakeAppl(sym__2, q_49, (ATerm) ATinsert(ATempty, term_y_54));
          t = t_25(q_49, s_62, t);
          ;
          LocalPopChoice(x_54);
        }
      else
        {
          t = u_54;
          {
            ATerm t_62 = NULL,u_62 = NULL,v_62 = NULL;
            t = term_d_22;
            u_62 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_55), q_49), term_z_54);
            v_62 = t;
            t = SSL_printnl(u_62, v_62);
            t = term_a_22;
            t_62 = t;
            t = SSL_exit(t_62);
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_55), q_49), term_z_54);
          }
        }
      t = q_49;
      t = ReadFromFile_0_0(t);
      if(match_cons(t, sym_StrategoDump_2))
        {
          v_61 = ATgetArgument(t, 0);
          w_61 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = term_u_17;
      y_61 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_u_17, v_61);
      t = s_25(y_61, v_61, t);
      t = term_t_17;
      x_61 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_t_17, w_61);
      t = s_25(x_61, w_61, t);
      i_63 = t;
      {
        ATerm c_55 = t;
        int h_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_48 = NULL,a_49 = NULL,b_49 = NULL,c_49 = NULL;
            t = term_k_29;
            t = get_config_0_0(t);
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_55), q_49), term_i_55);
            c_49 = t;
            t = SSL_concat_strings(c_49);
            y_48 = t;
            t = term_d_22;
            a_49 = t;
            t = (ATerm) ATinsert(ATempty, y_48);
            b_49 = t;
            t = SSL_printnl(a_49, b_49);
            t = i_63;
            ;
            LocalPopChoice(h_55);
          }
        else
          {
            t = c_55;
            t = i_63;
          }
      }
    }
  }
  return(t);
}
ATerm v_25 (ATerm s_72, ATerm t_72, ATerm t)
{
  ATerm p_63 = NULL;
  t = SSL_write_term_to_stream_baf(s_72, t_72);
  p_63 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_63);
  return(t);
}
ATerm w_25 (ATerm l_152 (ATerm), ATerm y_494, ATerm a_73, ATerm t)
{
  ATerm q_63 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, y_494, term_k_55);
  t = open_stream_0_0(t);
  q_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_63, a_73);
  t = l_152(t);
  t = fclose_0_0(t);
  t = a_73;
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm r_63 = NULL;
  ATerm y_13 (ATerm t)
  {
    ATerm s_63 = NULL,v_63 = NULL;
    s_63 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_63), s_63);
    t = w_27(not_null(r_63), s_63, t);
    v_63 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_63, v_63);
    return(t);
  }
  if(((r_63 != NULL) && (r_63 != t)))
    _fail(t);
  else
    r_63 = t;
  t = SSL_table_keys(not_null(r_63));
  t = map_1_0(y_13, t);
  return(t);
}
ATerm z_13 (ATerm t)
{
  ATerm n_64 = NULL,p_64 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_55 = ATgetArgument(t, 0);
      if(match_cons(l_55, sym_Stream_1))
        {
          n_64 = ATgetArgument(l_55, 0);
        }
      else
        _fail(t);
      p_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_25(n_64, p_64, t);
  return(t);
}
ATerm x_25 (ATerm n_49, ATerm t)
{
  ATerm i_64 = NULL,j_64 = NULL,k_64 = NULL,c_65 = NULL;
  t = term_u_17;
  t = table_getlist_0_0(t);
  i_64 = t;
  t = term_t_17;
  t = table_getlist_0_0(t);
  j_64 = t;
  t = (ATerm) ATmakeAppl(sym_StrategoDump_2, i_64, j_64);
  k_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_49, (ATerm) ATmakeAppl(sym_StrategoDump_2, i_64, j_64));
  t = w_25(z_13, n_49, k_64, t);
  c_65 = t;
  {
    ATerm m_55 = t;
    int n_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_49 = NULL,j_49 = NULL,k_49 = NULL,l_49 = NULL;
        t = term_k_29;
        t = get_config_0_0(t);
        t = term_o_55;
        l_49 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_o_55, n_49);
        t = v_27(l_49, n_49, t);
        i_49 = t;
        t = term_d_22;
        j_49 = t;
        t = (ATerm) ATinsert(ATempty, i_49);
        k_49 = t;
        t = SSL_printnl(j_49, k_49);
        t = c_65;
        ;
        LocalPopChoice(n_55);
      }
    else
      {
        t = m_55;
        t = c_65;
      }
  }
  return(t);
}
ATerm g_194 (ATerm i_193, ATerm j_193, ATerm k_193, ATerm t)
{
  ATerm l_193 = NULL,o_193 = NULL,p_156 = NULL,a_157 = NULL,t_11 = NULL;
  t = SSLgetAnnotations(k_193);
  l_193 = t;
  t = i_193;
  {
    ATerm p_55 = t;
    int r_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_193 = NULL;
        if(match_cons(t, sym_Dump_1))
          {
            r_193 = ATgetArgument(t, 0);
            t = i_193;
            t = x_25(r_193, t);
          }
        else
          {
            if(match_cons(t, sym_Load_1))
              {
                r_193 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = i_193;
            t = u_25(r_193, t);
          }
        ;
        LocalPopChoice(r_55);
      }
    else
      {
        t = p_55;
        {
          ATerm s_55 = t;
          int t_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = eval_import_0_0(t);
              ;
              LocalPopChoice(t_55);
            }
          else
            {
              t = s_55;
              {
                ATerm w_193 = NULL;
                if(match_cons(t, sym_Strategies_1))
                  {
                    w_193 = ATgetArgument(t, 0);
                    t = i_193;
                    t = p_25(w_193, t);
                  }
                else
                  {
                    if(match_cons(t, sym_Rules_1))
                      {
                        w_193 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = i_193;
                    t = s_24(w_193, t);
                  }
              }
            }
        }
      }
    o_193 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_193, j_193);
    t_11 = t;
    t = SSLsetAnnotations(t_11, l_193);
    a_157 = t;
    t = SSL_explode_term(a_157);
    if(match_cons(t, sym__2))
      {
        ATerm v_55 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) v_55) != ATmakeSymbol("", 0, ATtrue)))
          _fail(t);
        {
          ATerm w_55 = ATgetArgument(t, 1);
          if(((ATgetType(w_55) == AT_LIST) && !(ATisEmpty(w_55))))
            {
              ATerm x_55 = ATgetFirst((ATermList) w_55);
              ATerm y_55 = (ATerm) ATgetNext((ATermList) w_55);
              if(((ATgetType(y_55) == AT_LIST) && !(ATisEmpty(y_55))))
                {
                  p_156 = ATgetFirst((ATermList) y_55);
                  {
                    ATerm z_55 = (ATerm) ATgetNext((ATermList) y_55);
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
    t = p_156;
  }
  return(t);
}
ATerm a_14 (ATerm t)
{
  t = term_a_56;
  return(t);
}
ATerm b_14 (ATerm t)
{
  t = term_b_56;
  return(t);
}
ATerm eval_command_0_0 (ATerm t)
{
  ATerm c_56 = t;
  int d_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_193 = NULL,a_194 = NULL,b_194 = NULL,c_194 = NULL;
      ATerm e_56 = t;
      int f_56 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_193 = NULL;
          g_193 = t;
          t = term_t_19;
          t = get_config_0_0(t);
          t = g_193;
          t = debug_1_0(a_14, t);
          ;
          LocalPopChoice(f_56);
        }
      else
        {
          t = e_56;
        }
      a_194 = t;
      if(match_cons(t, sym__2))
        {
          b_194 = ATgetArgument(t, 0);
          c_194 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = b_194;
      if(match_cons(t, sym_Eval_1))
        {
          z_193 = ATgetArgument(t, 0);
          {
            ATerm k_56 = t;
            int l_56 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = a_194;
                t = p_27(z_193, c_194, t);
                ;
                LocalPopChoice(l_56);
              }
            else
              {
                t = k_56;
                t = g_194(b_194, c_194, a_194, t);
              }
          }
        }
      else
        {
          t = g_194(b_194, c_194, a_194, t);
        }
      ;
      LocalPopChoice(d_56);
    }
  else
    {
      t = c_56;
      {
        ATerm f_194 = NULL;
        t = debug_1_0(b_14, t);
        t = term_a_22;
        f_194 = t;
        t = SSL_exit(f_194);
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm f_133 (ATerm), ATerm t)
{
  ATerm k_194 (ATerm t)
  {
    ATerm o_56 = t;
    int p_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_133(t);
        t = k_194(t);
        ;
        LocalPopChoice(p_56);
      }
    else
      {
        t = o_56;
      }
    return(t);
  }
  t = k_194(t);
  return(t);
}
ATerm c_14 (ATerm t)
{
  ATerm l_194 = NULL,m_194 = NULL,n_194 = NULL,p_194 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_56 = ATgetArgument(t, 0);
      if(((ATgetType(q_56) == AT_LIST) && !(ATisEmpty(q_56))))
        {
          l_194 = ATgetFirst((ATermList) q_56);
          m_194 = (ATerm) ATgetNext((ATermList) q_56);
        }
      else
        _fail(t);
      n_194 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_194, n_194);
  t = eval_command_0_0(t);
  p_194 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_194, p_194);
  return(t);
}
ATerm evaluate_commands_0_0 (ATerm t)
{
  t = repeat_1_0(c_14, t);
  return(t);
}
ATerm d_195 (ATerm x_194, ATerm t)
{
  t = SSL_fclose(x_194);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm a_195 = NULL,b_195 = NULL;
  b_195 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_195 = ATgetArgument(t, 0);
      {
        ATerm s_56 = t;
        int t_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(a_195);
            ;
            LocalPopChoice(t_56);
          }
        else
          {
            t = s_56;
            t = d_195(b_195, t);
          }
      }
    }
  else
    {
      t = d_195(b_195, t);
    }
  return(t);
}
ATerm q_27 (ATerm y_72, ATerm t)
{
  t = SSL_read_term_from_stream(y_72);
  return(t);
}
ATerm r_27 (ATerm k_69, ATerm l_69, ATerm t)
{
  ATerm e_195 = NULL;
  t = SSL_fopen(k_69, l_69);
  e_195 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_195);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm f_195 = NULL;
  t = SSL_stdin_stream();
  f_195 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_195);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm g_195 = NULL;
  t = SSL_stdout_stream();
  g_195 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_195);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm h_195 = NULL;
  t = SSL_stderr_stream();
  h_195 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_195);
  return(t);
}
ATerm p_196 (ATerm o_195, ATerm t)
{
  ATerm p_195 = NULL;
  t = SSL_explode_term(o_195);
  if(match_cons(t, sym__2))
    {
      ATerm u_56 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_56) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_56 = ATgetArgument(t, 1);
        if(((ATgetType(v_56) == AT_LIST) && !(ATisEmpty(v_56))))
          {
            p_195 = ATgetFirst((ATermList) v_56);
            {
              ATerm y_56 = (ATerm) ATgetNext((ATermList) v_56);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = p_195;
  if(match_cons(t, sym_stderr_0))
    {
      t = p_195;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = p_195;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = p_195;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm q_196 (ATerm s_195, ATerm t_195, ATerm u_195, ATerm t)
{
  ATerm v_195 = NULL,w_195 = NULL,x_195 = NULL,a_196 = NULL,v_11 = NULL;
  t = SSLgetAnnotations(u_195);
  x_195 = t;
  t = s_195;
  if(match_cons(t, sym_Path_1))
    {
      a_196 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_196, t_195);
  v_11 = t;
  t = SSLsetAnnotations(v_11, x_195);
  if(match_cons(t, sym__2))
    {
      v_195 = ATgetArgument(t, 0);
      w_195 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_27(v_195, w_195, t);
  return(t);
}
ATerm r_196 (ATerm c_196, ATerm d_196, ATerm e_196, ATerm t)
{
  ATerm f_196 = NULL,g_196 = NULL,h_196 = NULL,k_196 = NULL,w_11 = NULL;
  t = SSLgetAnnotations(e_196);
  h_196 = t;
  t = SSL_is_string(c_196);
  k_196 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_196, d_196);
  w_11 = t;
  t = SSLsetAnnotations(w_11, h_196);
  if(match_cons(t, sym__2))
    {
      f_196 = ATgetArgument(t, 0);
      g_196 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_27(f_196, g_196, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm m_196 = NULL,n_196 = NULL,o_196 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_56 = ATgetArgument(t, 0);
      ATerm e_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  m_196 = t;
  if(match_cons(t, sym__2))
    {
      n_196 = ATgetArgument(t, 0);
      o_196 = ATgetArgument(t, 1);
      {
        ATerm f_57 = t;
        int k_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_196(m_196, t);
            ;
            LocalPopChoice(k_57);
          }
        else
          {
            t = f_57;
            {
              ATerm l_57 = t;
              int m_57 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = q_196(n_196, o_196, m_196, t);
                  ;
                  LocalPopChoice(m_57);
                }
              else
                {
                  t = l_57;
                  t = r_196(n_196, o_196, m_196, t);
                }
            }
          }
      }
    }
  else
    {
      t = p_196(m_196, t);
    }
  return(t);
}
ATerm d_14 (ATerm t)
{
  t = term_n_57;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm s_196 = NULL,t_196 = NULL,u_196 = NULL;
  ATerm o_57 = t;
  int p_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_196 = NULL;
      v_196 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_196, term_q_57);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(p_57);
    }
  else
    {
      t = o_57;
      t = debug_1_0(d_14, t);
      _fail(t);
    }
  t_196 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_196 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_27(u_196, t);
  s_196 = t;
  t = t_196;
  t = fclose_0_0(t);
  t = s_196;
  return(t);
}
ATerm copyright_0_0 (ATerm t)
{
  ATerm x_196 = NULL,y_196 = NULL,z_196 = NULL,a_197 = NULL,b_197 = NULL,c_197 = NULL,d_197 = NULL,e_197 = NULL,f_197 = NULL,g_197 = NULL,h_197 = NULL,i_197 = NULL,j_197 = NULL,k_197 = NULL,l_197 = NULL,m_197 = NULL,n_197 = NULL;
  l_197 = t;
  t = term_d_22;
  m_197 = t;
  t = (ATerm) ATinsert(ATempty, term_s_57);
  n_197 = t;
  t = SSL_printnl(m_197, n_197);
  t = term_d_22;
  j_197 = t;
  t = (ATerm) ATinsert(ATempty, term_t_57);
  k_197 = t;
  t = SSL_printnl(j_197, k_197);
  t = term_d_22;
  h_197 = t;
  t = (ATerm) ATinsert(ATempty, term_u_57);
  i_197 = t;
  t = SSL_printnl(h_197, i_197);
  t = term_d_22;
  f_197 = t;
  t = (ATerm) ATinsert(ATempty, term_v_57);
  g_197 = t;
  t = SSL_printnl(f_197, g_197);
  t = term_d_22;
  d_197 = t;
  t = (ATerm) ATinsert(ATempty, term_w_57);
  e_197 = t;
  t = SSL_printnl(d_197, e_197);
  t = term_d_22;
  b_197 = t;
  t = (ATerm) ATinsert(ATempty, term_x_57);
  c_197 = t;
  t = SSL_printnl(b_197, c_197);
  t = term_d_22;
  z_196 = t;
  t = (ATerm) ATinsert(ATempty, term_y_57);
  a_197 = t;
  t = SSL_printnl(z_196, a_197);
  t = term_d_22;
  x_196 = t;
  t = (ATerm) ATinsert(ATempty, term_s_57);
  y_196 = t;
  t = SSL_printnl(x_196, y_196);
  t = l_197;
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm w_197 = NULL,x_197 = NULL,y_197 = NULL;
  w_197 = t;
  if(match_cons(t, sym__2))
    {
      x_197 = ATgetArgument(t, 0);
      y_197 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_57 = t;
    int a_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_197;
        if((x_197 != t))
          {
            _fail(t);
          }
        t = w_197;
        ;
        LocalPopChoice(a_58);
      }
    else
      {
        t = z_57;
        t = (ATerm) ATmakeAppl(sym__2, x_197, y_197);
        {
          ATerm b_58 = t;
          int c_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_197, y_197);
              ;
              LocalPopChoice(c_58);
            }
          else
            {
              t = b_58;
              t = SSL_gtr(x_197, y_197);
            }
          t = (ATerm) ATmakeAppl(sym__2, x_197, y_197);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm v_153 (ATerm), ATerm t)
{
  ATerm c_198 = NULL;
  c_198 = t;
  {
    ATerm d_58 = t;
    int e_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_198 = NULL;
        t = term_f_58;
        t = get_config_0_0(t);
        e_198 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_198, term_a_22);
        t = geq_0_0(t);
        t = c_198;
        t = v_153(t);
        ;
        LocalPopChoice(e_58);
      }
    else
      {
        t = d_58;
        t = c_198;
      }
  }
  return(t);
}
ATerm at_end_1_0 (ATerm k_140 (ATerm), ATerm t)
{
  ATerm c_199 (ATerm t)
  {
    ATerm z_198 = NULL,a_199 = NULL,b_199 = NULL;
    b_199 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_198 = ATgetFirst((ATermList) t);
        a_199 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm w_159 = NULL,g_160 = NULL,z_11 = NULL;
          t = SSLgetAnnotations(b_199);
          w_159 = t;
          t = a_199;
          t = c_199(t);
          g_160 = t;
          t = (ATerm) ATinsert(CheckATermList(g_160), z_198);
          z_11 = t;
          t = SSLsetAnnotations(z_11, w_159);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = b_199;
        t = k_140(t);
      }
    return(t);
  }
  t = c_199(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm j_198 = NULL,k_198 = NULL,l_198 = NULL;
  j_198 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_198;
    }
  else
    {
      ATerm e_14 (ATerm t)
      {
        t = not_null(l_198);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((k_198 != NULL) && (k_198 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            k_198 = ATgetFirst((ATermList) t);
          if(((l_198 != NULL) && (l_198 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            l_198 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(k_198);
      t = at_end_1_0(e_14, t);
    }
  return(t);
}
ATerm o_199 (ATerm g_199, ATerm t)
{
  ATerm h_199 = NULL;
  t = SSL_explode_term(g_199);
  if(match_cons(t, sym__2))
    {
      ATerm g_58 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_58) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      h_199 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_199;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm j_199 = NULL,k_199 = NULL,l_199 = NULL;
  if(((l_199 != NULL) && (l_199 != t)))
    _fail(t);
  else
    l_199 = t;
  if(match_cons(t, sym__2))
    {
      j_199 = ATgetArgument(t, 0);
      k_199 = ATgetArgument(t, 1);
      {
        ATerm h_58 = t;
        int i_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_14 (ATerm t)
            {
              t = not_null(k_199);
              return(t);
            }
            t = not_null(j_199);
            t = at_end_1_0(f_14, t);
            ;
            LocalPopChoice(i_58);
          }
        else
          {
            t = h_58;
            t = o_199(not_null(l_199), t);
          }
      }
    }
  else
    {
      t = o_199(not_null(l_199), t);
    }
  return(t);
}
ATerm t_27 (ATerm f_74, ATerm e_74, ATerm t)
{
  ATerm p_199 = NULL,q_199 = NULL,r_199 = NULL;
  t = f_74;
  {
    ATerm j_58 = t;
    int k_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(k_58);
      }
    else
      {
        t = j_58;
        t = (ATerm) ATempty;
      }
    q_199 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_74, q_199);
    t = conc_0_0(t);
    p_199 = t;
    t = term_l_58;
    r_199 = t;
    t = SSL_table_put(r_199, f_74, p_199);
    t = (ATerm) ATmakeAppl(sym__3, term_l_58, f_74, p_199);
  }
  return(t);
}
ATerm g_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-I", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_14 (ATerm t)
{
  ATerm s_199 = NULL,t_199 = NULL,u_199 = NULL;
  s_199 = t;
  t = term_t_53;
  t_199 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_199), term_t_53);
  u_199 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_53, (ATerm) ATinsert(ATinsert(ATempty, s_199), term_t_53));
  t = t_27(t_199, u_199, t);
  return(t);
}
ATerm i_14 (ATerm t)
{
  t = term_m_58;
  return(t);
}
ATerm j_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("@version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_14 (ATerm t)
{
  ATerm v_199 = NULL,w_199 = NULL;
  v_199 = t;
  t = term_q_58;
  w_199 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_58, v_199);
  t = z_27(w_199, v_199, t);
  return(t);
}
ATerm l_14 (ATerm t)
{
  t = term_r_58;
  return(t);
}
ATerm m_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-d", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_14 (ATerm t)
{
  ATerm x_199 = NULL,y_199 = NULL,z_199 = NULL,a_200 = NULL;
  t = term_t_19;
  z_199 = t;
  t = term_a_22;
  a_200 = t;
  t = term_s_58;
  t = z_27(z_199, a_200, t);
  t = term_f_58;
  x_199 = t;
  t = term_k_46;
  y_199 = t;
  t = term_w_58;
  t = z_27(x_199, y_199, t);
  return(t);
}
ATerm o_14 (ATerm t)
{
  t = term_x_58;
  return(t);
}
ATerm p_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-t", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_14 (ATerm t)
{
  ATerm b_200 = NULL,c_200 = NULL;
  t = term_k_29;
  b_200 = t;
  t = term_a_22;
  c_200 = t;
  t = term_a_59;
  t = z_27(b_200, c_200, t);
  return(t);
}
ATerm r_14 (ATerm t)
{
  t = term_b_59;
  return(t);
}
ATerm si_options_0_0 (ATerm t)
{
  ATerm c_59 = t;
  int d_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(g_14, h_14, i_14, t);
      ;
      LocalPopChoice(d_59);
    }
  else
    {
      t = c_59;
      {
        ATerm e_59 = t;
        int g_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(j_14, k_14, l_14, t);
            ;
            LocalPopChoice(g_59);
          }
        else
          {
            t = e_59;
            {
              ATerm h_59 = t;
              int i_59 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(m_14, n_14, o_14, t);
                  ;
                  LocalPopChoice(i_59);
                }
              else
                {
                  t = h_59;
                  t = Option_3_0(p_14, q_14, r_14, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm s_14 (ATerm t)
{
  ATerm e_200 = NULL;
  e_200 = t;
  if(match_string(t, "-k"))
    {
      t = e_200;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = e_200;
    }
  return(t);
}
ATerm t_14 (ATerm t)
{
  ATerm f_200 = NULL,g_200 = NULL,h_200 = NULL;
  f_200 = t;
  t = SSL_string_to_int(f_200);
  g_200 = t;
  t = term_j_59;
  h_200 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_59, g_200);
  t = z_27(h_200, g_200, t);
  t = f_200;
  return(t);
}
ATerm z_14 (ATerm t)
{
  t = term_k_59;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_14, t_14, z_14, t);
  return(t);
}
ATerm a_15 (ATerm t)
{
  ATerm j_200 = NULL;
  j_200 = t;
  if(match_string(t, "-S"))
    {
      t = j_200;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = j_200;
    }
  return(t);
}
ATerm b_15 (ATerm t)
{
  ATerm k_200 = NULL,l_200 = NULL;
  t = term_f_58;
  k_200 = t;
  t = term_z_21;
  l_200 = t;
  t = term_l_59;
  t = z_27(k_200, l_200, t);
  t = term_m_59;
  return(t);
}
ATerm c_15 (ATerm t)
{
  t = term_n_59;
  return(t);
}
ATerm d_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_15 (ATerm t)
{
  ATerm m_200 = NULL,n_200 = NULL,o_200 = NULL;
  m_200 = t;
  t = SSL_string_to_int(m_200);
  n_200 = t;
  t = term_f_58;
  o_200 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_58, n_200);
  t = z_27(o_200, n_200, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, m_200);
  return(t);
}
ATerm g_15 (ATerm t)
{
  t = term_o_59;
  return(t);
}
ATerm h_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_15 (ATerm t)
{
  ATerm p_200 = NULL,q_200 = NULL;
  t = term_p_59;
  p_200 = t;
  t = term_r_59;
  q_200 = t;
  t = term_s_59;
  t = z_27(p_200, q_200, t);
  t = term_t_59;
  return(t);
}
ATerm j_15 (ATerm t)
{
  t = term_u_59;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm w_59 = t;
  int x_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_15, b_15, c_15, t);
      ;
      LocalPopChoice(x_59);
    }
  else
    {
      t = w_59;
      {
        ATerm y_59 = t;
        int z_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(d_15, e_15, g_15, t);
            ;
            LocalPopChoice(z_59);
          }
        else
          {
            t = y_59;
            t = Option_3_0(h_15, i_15, j_15, t);
          }
      }
    }
  return(t);
}
ATerm z_27 (ATerm z_73, ATerm a_74, ATerm t)
{
  ATerm r_200 = NULL;
  t = term_l_58;
  r_200 = t;
  t = SSL_table_put(r_200, z_73, a_74);
  t = (ATerm) ATmakeAppl(sym__3, term_l_58, z_73, a_74);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm t)
{
  ATerm u_200 = NULL,v_200 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_200 = NULL,x_200 = NULL,y_200 = NULL;
      t = term_r_59;
      t = c_0(t);
      w_200 = t;
      t = term_a_60;
      x_200 = t;
      t = term_b_60;
      y_200 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_60, term_b_60, w_200);
      t = x_27(x_200, y_200, w_200, t);
      _fail(t);
    }
  else
    {
      ATerm b_201 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_200 = ATgetFirst((ATermList) t);
          v_200 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_200;
      t = a_0(t);
      t = term_r_59;
      t = b_0(t);
      b_201 = t;
      t = (ATerm) ATinsert(CheckATermList(v_200), b_201);
    }
  return(t);
}
ATerm k_15 (ATerm t)
{
  ATerm d_201 = NULL;
  d_201 = t;
  if(match_string(t, "-o"))
    {
      t = d_201;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = d_201;
    }
  return(t);
}
ATerm p_15 (ATerm t)
{
  ATerm e_201 = NULL,f_201 = NULL;
  e_201 = t;
  t = term_c_60;
  f_201 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_60, e_201);
  t = z_27(f_201, e_201, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, e_201);
  return(t);
}
ATerm s_15 (ATerm t)
{
  t = term_f_60;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_15, p_15, s_15, t);
  return(t);
}
ATerm x_27 (ATerm x_78, ATerm y_78, ATerm w_78, ATerm t)
{
  ATerm h_201 = NULL,i_201 = NULL,j_201 = NULL;
  h_201 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_78, y_78);
  {
    ATerm g_60 = t;
    int l_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_60 = ATgetArgument(t, 0);
            ATerm q_60 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, x_78, y_78);
        t = w_27(x_78, y_78, t);
        ;
        LocalPopChoice(l_60);
      }
    else
      {
        t = g_60;
        t = (ATerm) ATempty;
      }
    i_201 = t;
    t = (ATerm) ATinsert(CheckATermList(i_201), w_78);
    j_201 = t;
    t = SSL_table_put(x_78, y_78, j_201);
    t = h_201;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm q_201 = NULL,r_201 = NULL,s_201 = NULL,t_201 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_201 = NULL,v_201 = NULL,w_201 = NULL;
      t = term_r_59;
      t = h_0(t);
      u_201 = t;
      t = term_a_60;
      v_201 = t;
      t = term_b_60;
      w_201 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_60, term_b_60, u_201);
      t = x_27(v_201, w_201, u_201, t);
      _fail(t);
    }
  else
    {
      ATerm a_202 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_201 = ATgetFirst((ATermList) t);
          r_201 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_201;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_201 = ATgetFirst((ATermList) t);
          t_201 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_201;
      t = f_0(t);
      t = s_201;
      t = g_0(t);
      a_202 = t;
      t = (ATerm) ATinsert(CheckATermList(t_201), a_202);
    }
  return(t);
}
ATerm t_15 (ATerm t)
{
  ATerm c_202 = NULL;
  c_202 = t;
  if(match_string(t, "-i"))
    {
      t = c_202;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = c_202;
    }
  return(t);
}
ATerm y_15 (ATerm t)
{
  ATerm d_202 = NULL,e_202 = NULL;
  d_202 = t;
  t = term_w_53;
  e_202 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_53, d_202);
  t = z_27(e_202, d_202, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, d_202);
  return(t);
}
ATerm g_16 (ATerm t)
{
  t = term_s_60;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_15, y_15, g_16, t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm g_202 = NULL,h_202 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_202 = ATgetFirst((ATermList) t);
      h_202 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm l_202 = NULL,m_202 = NULL;
        ATerm h_16 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(l_202)), not_null(m_202));
          return(t);
        }
        t = not_null(h_202);
        t = e_0(t);
        if(((l_202 != NULL) && (l_202 != t)))
          _fail(t);
        else
          l_202 = t;
        t = not_null(g_202);
        t = d_0(t);
        if(((m_202 != NULL) && (m_202 != t)))
          _fail(t);
        else
          m_202 = t;
        t = not_null(h_202);
        t = reverse_acc_2_0(d_0, h_16, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_r_59;
      t = e_0(t);
    }
  return(t);
}
ATerm i_16 (ATerm t)
{
  ATerm q_202 = NULL,r_202 = NULL,s_202 = NULL,b_12 = NULL;
  s_202 = t;
  if(match_cons(t, sym_Program_1))
    {
      r_202 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_202);
  q_202 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, r_202);
  b_12 = t;
  t = SSLsetAnnotations(b_12, q_202);
  return(t);
}
ATerm j_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_16 (ATerm t)
{
  ATerm u_202 = NULL;
  u_202 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_202), term_t_60);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm o_202 = NULL,p_202 = NULL;
  ATerm v_60 = t;
  int w_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_60;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(w_60);
    }
  else
    {
      t = v_60;
      t = fetch_1_0(i_16, t);
    }
  t = term_y_60;
  t = echo_0_0(t);
  t = term_a_60;
  o_202 = t;
  t = term_b_60;
  p_202 = t;
  t = term_c_61;
  t = w_27(o_202, p_202, t);
  t = reverse_acc_2_0(_id, j_16, t);
  t = map_1_0(r_16, t);
  return(t);
}
ATerm fetch_1_0 (ATerm e_140 (ATerm), ATerm t)
{
  ATerm r_203 (ATerm t)
  {
    ATerm o_203 = NULL,p_203 = NULL,q_203 = NULL;
    o_203 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_203 = ATgetFirst((ATermList) t);
        q_203 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm e_61 = t;
      int j_61 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_160 = NULL,c_161 = NULL,d_12 = NULL;
          t = SSLgetAnnotations(o_203);
          w_160 = t;
          t = p_203;
          t = e_140(t);
          c_161 = t;
          t = (ATerm) ATinsert(CheckATermList(q_203), c_161);
          d_12 = t;
          t = SSLsetAnnotations(d_12, w_160);
          ;
          LocalPopChoice(j_61);
        }
      else
        {
          t = e_61;
          {
            ATerm p_161 = NULL,x_161 = NULL,e_12 = NULL;
            t = SSLgetAnnotations(o_203);
            p_161 = t;
            t = q_203;
            t = r_203(t);
            x_161 = t;
            t = (ATerm) ATinsert(CheckATermList(x_161), p_203);
            e_12 = t;
            t = SSLsetAnnotations(e_12, p_161);
          }
        }
    }
    return(t);
  }
  t = r_203(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm v_203 = NULL,w_203 = NULL,x_203 = NULL;
  v_203 = t;
  {
    ATerm l_61 = t;
    int m_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = v_203;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm n_61 = ATgetFirst((ATermList) t);
                ATerm o_61 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = v_203;
          }
        ;
        LocalPopChoice(m_61);
      }
    else
      {
        t = l_61;
        t = (ATerm) ATinsert(ATempty, v_203);
      }
    w_203 = t;
    t = term_r_61;
    x_203 = t;
    t = SSL_printnl(x_203, w_203);
    t = v_203;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_x_60;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm v_27 (ATerm y_63, ATerm z_63, ATerm t)
{
  t = SSL_strcat(y_63, z_63);
  return(t);
}
ATerm debug_1_0 (ATerm j_152 (ATerm), ATerm t)
{
  ATerm b_204 = NULL,c_204 = NULL,d_204 = NULL,e_204 = NULL;
  b_204 = t;
  t = j_152(t);
  c_204 = t;
  t = term_d_22;
  d_204 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_204), c_204);
  e_204 = t;
  t = SSL_printnl(d_204, e_204);
  t = b_204;
  return(t);
}
ATerm map_1_0 (ATerm u_139 (ATerm), ATerm t)
{
  ATerm t_204 (ATerm t)
  {
    ATerm q_204 = NULL,r_204 = NULL,s_204 = NULL;
    q_204 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_204;
      }
    else
      {
        ATerm c_164 = NULL,h_164 = NULL,i_164 = NULL,h_12 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_204 = ATgetFirst((ATermList) t);
            s_204 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_204);
        c_164 = t;
        t = r_204;
        t = u_139(t);
        h_164 = t;
        t = s_204;
        t = t_204(t);
        i_164 = t;
        t = (ATerm) ATinsert(CheckATermList(i_164), h_164);
        h_12 = t;
        t = SSLsetAnnotations(h_12, c_164);
      }
    return(t);
  }
  t = t_204(t);
  return(t);
}
ATerm s_16 (ATerm t)
{
  ATerm s_61 = t;
  int t_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(t_61);
    }
  else
    {
      t = s_61;
    }
  return(t);
}
ATerm t_16 (ATerm t)
{
  t = term_u_61;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm a_62 = t;
  int b_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_205 = NULL;
      b_205 = t;
      t = SSL_is_string(b_205);
      ;
      LocalPopChoice(b_62);
    }
  else
    {
      t = a_62;
      {
        ATerm c_62 = t;
        int d_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(s_16, t);
            ;
            LocalPopChoice(d_62);
          }
        else
          {
            t = c_62;
            {
              ATerm h_205 = NULL,i_205 = NULL,j_205 = NULL;
              h_205 = t;
              if(match_cons(t, sym_Path_1))
                {
                  i_205 = ATgetArgument(t, 0);
                  t = i_205;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      i_205 = ATgetArgument(t, 0);
                      t = i_205;
                      {
                        ATerm e_62 = t;
                        int f_62 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(f_62);
                          }
                        else
                          {
                            t = e_62;
                            t = debug_1_0(t_16, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm n_205 = NULL,o_205 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          i_205 = ATgetArgument(t, 0);
                          j_205 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = i_205;
                      t = eval_config_0_0(t);
                      n_205 = t;
                      t = j_205;
                      t = eval_config_0_0(t);
                      o_205 = t;
                      t = (ATerm) ATmakeAppl(sym__2, n_205, o_205);
                      t = v_27(n_205, o_205, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm w_27 (ATerm o_80, ATerm p_80, ATerm t)
{
  t = SSL_table_get(o_80, p_80);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm s_205 = NULL,t_205 = NULL;
  s_205 = t;
  t = term_l_58;
  t_205 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_58, s_205);
  t = w_27(t_205, s_205, t);
  {
    ATerm g_62 = t;
    int h_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_205 = NULL,v_205 = NULL;
        t = eval_config_0_0(t);
        u_205 = t;
        t = term_l_58;
        v_205 = t;
        t = SSL_table_put(v_205, s_205, u_205);
        t = u_205;
        ;
        LocalPopChoice(h_62);
      }
    else
      {
        t = g_62;
      }
  }
  return(t);
}
ATerm u_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_16 (ATerm t)
{
  ATerm y_205 = NULL,z_205 = NULL;
  t = term_i_62;
  y_205 = t;
  t = term_r_59;
  z_205 = t;
  t = term_k_62;
  t = z_27(y_205, z_205, t);
  return(t);
}
ATerm w_16 (ATerm t)
{
  t = term_l_62;
  return(t);
}
ATerm x_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_16 (ATerm t)
{
  ATerm a_206 = NULL,b_206 = NULL,c_206 = NULL,d_206 = NULL;
  t = term_i_62;
  c_206 = t;
  t = term_r_59;
  d_206 = t;
  t = term_k_62;
  t = z_27(c_206, d_206, t);
  t = term_m_62;
  a_206 = t;
  t = term_r_59;
  b_206 = t;
  t = term_n_62;
  t = z_27(a_206, b_206, t);
  t = term_o_62;
  return(t);
}
ATerm z_16 (ATerm t)
{
  t = term_p_62;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm q_62 = t;
  int r_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_16, v_16, w_16, t);
      ;
      LocalPopChoice(r_62);
    }
  else
    {
      t = q_62;
      t = Option_3_0(x_16, y_16, z_16, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_118 (ATerm), ATerm o_118 (ATerm), ATerm t)
{
  ATerm e_206 = NULL,f_206 = NULL,g_206 = NULL,h_206 = NULL,i_206 = NULL,j_206 = NULL,j_12 = NULL;
  j_206 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_206 = ATgetFirst((ATermList) t);
      g_206 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_206);
  e_206 = t;
  t = f_206;
  t = n_118(t);
  h_206 = t;
  t = g_206;
  t = o_118(t);
  i_206 = t;
  t = (ATerm) ATinsert(CheckATermList(i_206), h_206);
  j_12 = t;
  t = SSLsetAnnotations(j_12, e_206);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm o_158 (ATerm), ATerm t)
{
  ATerm o_206 = NULL,p_206 = NULL,q_206 = NULL,r_206 = NULL,t_206 = NULL,u_206 = NULL,l_12 = NULL;
  if(((o_206 != NULL) && (o_206 != t)))
    _fail(t);
  else
    o_206 = t;
  {
    ATerm w_62 = t;
    int z_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_63;
        t = o_158(t);
        ;
        LocalPopChoice(z_62);
      }
    else
      {
        t = w_62;
      }
    t = not_null(o_206);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((q_206 != NULL) && (q_206 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          q_206 = ATgetFirst((ATermList) t);
        if(((r_206 != NULL) && (r_206 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          r_206 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(o_206));
    if(((p_206 != NULL) && (p_206 != t)))
      _fail(t);
    else
      p_206 = t;
    t = term_x_60;
    if(((u_206 != NULL) && (u_206 != t)))
      _fail(t);
    else
      u_206 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_x_60, not_null(q_206));
    t = z_27(not_null(u_206), not_null(q_206), t);
    t = not_null(r_206);
    {
      ATerm e_207 (ATerm t)
      {
        ATerm b_63 = t;
        int c_63 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_63 = t;
            int e_63 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_206 = NULL;
                x_206 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = x_206;
                ;
                LocalPopChoice(e_63);
              }
            else
              {
                t = d_63;
                t = o_158(t);
                t = Cons_2_0(_id, e_207, t);
              }
            ;
            LocalPopChoice(c_63);
          }
        else
          {
            t = b_63;
            {
              ATerm a_207 = NULL,b_207 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  a_207 = ATgetFirst((ATermList) t);
                  b_207 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(b_207), (ATerm) ATmakeAppl(sym_Undefined_1, a_207));
            }
          }
        return(t);
      }
      t = e_207(t);
      if(((t_206 != NULL) && (t_206 != t)))
        _fail(t);
      else
        t_206 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(t_206)), (ATerm) ATmakeAppl(sym_Program_1, not_null(q_206)));
      if(((l_12 != NULL) && (l_12 != t)))
        _fail(t);
      else
        l_12 = t;
      t = SSLsetAnnotations(not_null(l_12), not_null(p_206));
    }
  }
  return(t);
}
ATerm c_17 (ATerm t)
{
  ATerm q_207 = NULL;
  q_207 = t;
  if(match_string(t, "--help"))
    {
      t = q_207;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = q_207;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = q_207;
        }
    }
  return(t);
}
ATerm d_17 (ATerm t)
{
  ATerm r_207 = NULL,s_207 = NULL;
  t = term_f_63;
  r_207 = t;
  t = term_r_59;
  s_207 = t;
  t = term_g_63;
  t = z_27(r_207, s_207, t);
  t = term_h_63;
  return(t);
}
ATerm e_17 (ATerm t)
{
  t = term_j_63;
  return(t);
}
ATerm f_17 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm n_158 (ATerm), ATerm t)
{
  ATerm j_207 = NULL,k_207 = NULL,l_207 = NULL,m_207 = NULL,n_207 = NULL,o_207 = NULL,p_207 = NULL;
  if(((l_207 != NULL) && (l_207 != t)))
    _fail(t);
  else
    l_207 = t;
  t = term_a_60;
  if(((n_207 != NULL) && (n_207 != t)))
    _fail(t);
  else
    n_207 = t;
  t = term_b_60;
  if(((o_207 != NULL) && (o_207 != t)))
    _fail(t);
  else
    o_207 = t;
  t = (ATerm) ATempty;
  if(((p_207 != NULL) && (p_207 != t)))
    _fail(t);
  else
    p_207 = t;
  t = SSL_table_put(not_null(n_207), not_null(o_207), not_null(p_207));
  t = not_null(l_207);
  {
    ATerm b_17 (ATerm t)
    {
      ATerm k_63 = t;
      int l_63 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_158(t);
          ;
          LocalPopChoice(l_63);
        }
      else
        {
          t = k_63;
          {
            ATerm m_63 = t;
            int n_63 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(c_17, d_17, e_17, t);
                ;
                LocalPopChoice(n_63);
              }
            else
              {
                t = m_63;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(b_17, t);
    {
      ATerm o_63 = t;
      int t_63 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_207 = NULL;
          z_207 = t;
          {
            ATerm u_63 = t;
            int w_63 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_165 = NULL;
                t = z_207;
                {
                  ATerm x_63 = t;
                  int c_64 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_f_63;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(c_64);
                    }
                  else
                    {
                      t = x_63;
                      t = fetch_1_0(f_17, t);
                    }
                  t = z_207;
                  t = default_system_usage_0_0(t);
                  t = term_z_21;
                  q_165 = t;
                  t = SSL_exit(q_165);
                }
                ;
                LocalPopChoice(w_63);
              }
            else
              {
                t = u_63;
                {
                  ATerm j_166 = NULL;
                  t = term_i_62;
                  t = get_config_0_0(t);
                  t = z_207;
                  t = default_system_about_0_0(t);
                  t = term_z_21;
                  j_166 = t;
                  t = SSL_exit(j_166);
                }
              }
          }
          ;
          LocalPopChoice(t_63);
        }
      else
        {
          t = o_63;
          {
            ATerm d_64 = t;
            int e_64 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_208 = NULL,b_208 = NULL,c_208 = NULL;
                ATerm g_17 (ATerm t)
                {
                  ATerm d_208 = NULL,e_208 = NULL,f_208 = NULL,s_12 = NULL;
                  f_208 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      e_208 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(f_208);
                  d_208 = t;
                  t = e_208;
                  if(((j_207 != NULL) && (j_207 != t)))
                    _fail(t);
                  else
                    j_207 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, e_208);
                  s_12 = t;
                  t = SSLsetAnnotations(s_12, d_208);
                  return(t);
                }
                t = fetch_1_0(g_17, t);
                t = term_d_22;
                if(((b_208 != NULL) && (b_208 != t)))
                  _fail(t);
                else
                  b_208 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_207)), term_f_64);
                if(((c_208 != NULL) && (c_208 != t)))
                  _fail(t);
                else
                  c_208 = t;
                t = SSL_printnl(not_null(b_208), not_null(c_208));
                t = (ATerm) ATmakeAppl(sym__2, term_d_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_207)), term_f_64));
                t = default_system_usage_0_0(t);
                t = term_a_22;
                if(((a_208 != NULL) && (a_208 != t)))
                  _fail(t);
                else
                  a_208 = t;
                t = SSL_exit(not_null(a_208));
                ;
                LocalPopChoice(e_64);
              }
            else
              {
                t = d_64;
              }
          }
        }
      if(((k_207 != NULL) && (k_207 != t)))
        _fail(t);
      else
        k_207 = t;
      t = term_a_60;
      if(((m_207 != NULL) && (m_207 != t)))
        _fail(t);
      else
        m_207 = t;
      t = SSL_table_destroy(not_null(m_207));
      t = not_null(k_207);
    }
  }
  return(t);
}
ATerm h_17 (ATerm t)
{
  ATerm g_64 = t;
  int h_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_64 = t;
      int m_64 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = input_option_0_0(t);
          ;
          LocalPopChoice(m_64);
        }
      else
        {
          t = l_64;
          {
            ATerm o_64 = t;
            int q_64 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = output_option_0_0(t);
                ;
                LocalPopChoice(q_64);
              }
            else
              {
                t = o_64;
                {
                  ATerm r_64 = t;
                  int u_64 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Option_3_0(i_17, n_17, o_17, t);
                      ;
                      LocalPopChoice(u_64);
                    }
                  else
                    {
                      t = r_64;
                      {
                        ATerm v_64 = t;
                        int w_64 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = verbose_option_0_0(t);
                            ;
                            LocalPopChoice(w_64);
                          }
                        else
                          {
                            t = v_64;
                            t = keep_option_0_0(t);
                          }
                      }
                    }
                }
              }
          }
        }
      ;
      LocalPopChoice(h_64);
    }
  else
    {
      t = g_64;
      t = si_options_0_0(t);
    }
  return(t);
}
ATerm i_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_17 (ATerm t)
{
  ATerm n_208 = NULL,o_208 = NULL;
  t = term_x_64;
  n_208 = t;
  t = term_r_59;
  o_208 = t;
  t = term_y_64;
  t = z_27(n_208, o_208, t);
  t = term_z_64;
  return(t);
}
ATerm o_17 (ATerm t)
{
  t = term_a_65;
  return(t);
}
ATerm make_option_table_0_0 (ATerm t)
{
  ATerm k_208 = NULL,l_208 = NULL,m_208 = NULL;
  k_208 = t;
  t = term_t_53;
  l_208 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_b_65), term_t_53);
  m_208 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_53, (ATerm) ATinsert(ATinsert(ATempty, term_b_65), term_t_53));
  t = z_27(l_208, m_208, t);
  t = k_208;
  t = parse_options_1_0(h_17, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm o_140 (ATerm), ATerm t)
{
  ATerm c_209 (ATerm t)
  {
    ATerm d_65 = t;
    int e_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_140(t);
        ;
        LocalPopChoice(e_65);
      }
    else
      {
        t = d_65;
        {
          ATerm z_208 = NULL,a_209 = NULL,b_209 = NULL,t_166 = NULL,x_166 = NULL,u_12 = NULL;
          z_208 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              a_209 = ATgetFirst((ATermList) t);
              b_209 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(z_208);
          t_166 = t;
          t = b_209;
          t = c_209(t);
          x_166 = t;
          t = (ATerm) ATinsert(CheckATermList(x_166), a_209);
          u_12 = t;
          t = SSLsetAnnotations(u_12, t_166);
        }
      }
    return(t);
  }
  t = c_209(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm h_140 (ATerm), ATerm t)
{
  ATerm e_209 = NULL,f_209 = NULL;
  ATerm r_17 (ATerm t)
  {
    ATerm g_209 = NULL,h_209 = NULL,i_209 = NULL,j_209 = NULL,k_209 = NULL,l_209 = NULL,m_209 = NULL,n_209 = NULL,o_209 = NULL,c_13 = NULL,b_13 = NULL;
    o_209 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_209 = ATgetFirst((ATermList) t);
        l_209 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(o_209);
    j_209 = t;
    t = k_209;
    t = h_140(t);
    m_209 = t;
    t = (ATerm) ATinsert(CheckATermList(l_209), m_209);
    b_13 = t;
    t = SSLsetAnnotations(b_13, j_209);
    n_209 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_209 = ATgetFirst((ATermList) t);
        i_209 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(n_209);
    g_209 = t;
    t = i_209;
    if(((e_209 != NULL) && (e_209 != t)))
      _fail(t);
    else
      e_209 = t;
    t = (ATerm) ATinsert(CheckATermList(i_209), h_209);
    c_13 = t;
    t = SSLsetAnnotations(c_13, g_209);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(r_17, t);
  if(((f_209 != NULL) && (f_209 != t)))
    _fail(t);
  else
    f_209 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(f_209), not_null(e_209));
  return(t);
}
ATerm s_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--args", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm process_options_0_0 (ATerm t)
{
  ATerm p_209 = NULL,q_209 = NULL,r_209 = NULL,s_209 = NULL,t_209 = NULL,h_167 = NULL,i_167 = NULL,f_13 = NULL;
  ATerm f_65 = t;
  int g_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(s_17, t);
      ;
      LocalPopChoice(g_65);
    }
  else
    {
      t = f_65;
      {
        ATerm u_209 = NULL;
        u_209 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_209, (ATerm) ATempty);
      }
    }
  t_209 = t;
  if(match_cons(t, sym__2))
    {
      q_209 = ATgetArgument(t, 0);
      r_209 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_209);
  p_209 = t;
  t = q_209;
  t = make_option_table_0_0(t);
  s_209 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_209, r_209);
  f_13 = t;
  t = SSLsetAnnotations(f_13, p_209);
  i_167 = t;
  t = SSL_explode_term(i_167);
  if(match_cons(t, sym__2))
    {
      ATerm h_65 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_65) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_65 = ATgetArgument(t, 1);
        if(((ATgetType(i_65) == AT_LIST) && !(ATisEmpty(i_65))))
          {
            ATerm j_65 = ATgetFirst((ATermList) i_65);
            ATerm k_65 = (ATerm) ATgetNext((ATermList) i_65);
            if(((ATgetType(k_65) == AT_LIST) && !(ATisEmpty(k_65))))
              {
                h_167 = ATgetFirst((ATermList) k_65);
                {
                  ATerm l_65 = (ATerm) ATgetNext((ATermList) k_65);
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
  t = h_167;
  return(t);
}
ATerm create_runtime_environment_0_0 (ATerm t)
{
  ATerm w_209 = NULL,x_209 = NULL,y_209 = NULL,z_209 = NULL;
  w_209 = t;
  t = term_a_17;
  z_209 = t;
  t = SSL_table_create(z_209);
  t = term_t_17;
  y_209 = t;
  t = SSL_table_create(y_209);
  t = term_u_17;
  x_209 = t;
  t = SSL_table_create(x_209);
  t = w_209;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm a_210 = NULL,b_210 = NULL,c_210 = NULL;
  t = create_runtime_environment_0_0(t);
  t = process_options_0_0(t);
  t = if_verbose1_1_0(copyright_0_0, t);
  c_210 = t;
  t = term_m_65;
  t = ReadFromFile_0_0(t);
  b_210 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_210, c_210);
  t = evaluate_commands_0_0(t);
  t = destroy_runtime_environment_0_0(t);
  t = term_z_21;
  a_210 = t;
  t = SSL_exit(a_210);
  return(t);
}
