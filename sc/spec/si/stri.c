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
ATerm term_v_65;
ATerm term_j_65;
ATerm term_i_65;
ATerm term_h_65;
ATerm term_g_65;
ATerm term_f_65;
ATerm term_s_64;
ATerm term_a_64;
ATerm term_z_63;
ATerm term_y_63;
ATerm term_v_63;
ATerm term_n_63;
ATerm term_i_63;
ATerm term_f_63;
ATerm term_e_63;
ATerm term_d_63;
ATerm term_c_63;
ATerm term_b_63;
ATerm term_a_63;
ATerm term_o_62;
ATerm term_l_62;
ATerm term_e_62;
ATerm term_d_62;
ATerm term_c_62;
ATerm term_z_61;
ATerm term_y_61;
ATerm term_t_61;
ATerm term_q_61;
ATerm term_p_61;
ATerm term_o_61;
ATerm term_j_61;
ATerm term_i_61;
ATerm term_h_61;
ATerm term_f_61;
ATerm term_e_61;
ATerm term_d_61;
ATerm term_c_61;
ATerm term_b_61;
ATerm term_a_61;
ATerm term_z_60;
ATerm term_y_60;
ATerm term_i_60;
ATerm term_h_60;
ATerm term_d_60;
ATerm term_b_60;
ATerm term_a_60;
ATerm term_z_59;
ATerm term_x_59;
ATerm term_w_59;
ATerm term_v_59;
ATerm term_o_59;
ATerm term_c_59;
ATerm term_b_59;
ATerm term_a_59;
ATerm term_x_58;
ATerm term_w_58;
ATerm term_v_58;
ATerm term_u_58;
ATerm term_t_58;
ATerm term_q_58;
ATerm term_o_57;
ATerm term_m_57;
ATerm term_x_56;
ATerm term_r_56;
ATerm term_n_56;
ATerm term_m_56;
ATerm term_h_56;
ATerm term_g_56;
ATerm term_f_56;
ATerm term_w_55;
ATerm term_t_55;
ATerm term_w_54;
ATerm term_v_54;
ATerm term_u_54;
ATerm term_t_54;
ATerm term_s_54;
ATerm term_n_54;
ATerm term_d_54;
ATerm term_t_53;
ATerm term_s_53;
ATerm term_r_53;
ATerm term_p_53;
ATerm term_m_53;
ATerm term_j_53;
ATerm term_i_53;
ATerm term_h_53;
ATerm term_g_53;
ATerm term_f_53;
ATerm term_e_53;
ATerm term_d_53;
ATerm term_c_53;
ATerm term_a_53;
ATerm term_z_52;
ATerm term_y_52;
ATerm term_x_52;
ATerm term_w_52;
ATerm term_v_52;
ATerm term_u_52;
ATerm term_t_52;
ATerm term_r_52;
ATerm term_q_52;
ATerm term_o_52;
ATerm term_n_52;
ATerm term_m_52;
ATerm term_l_52;
ATerm term_k_52;
ATerm term_j_52;
ATerm term_i_52;
ATerm term_h_52;
ATerm term_g_52;
ATerm term_f_52;
ATerm term_e_52;
ATerm term_d_52;
ATerm term_c_52;
ATerm term_b_52;
ATerm term_a_52;
ATerm term_w_51;
ATerm term_v_51;
ATerm term_u_51;
ATerm term_s_51;
ATerm term_p_51;
ATerm term_o_51;
ATerm term_m_51;
ATerm term_j_51;
ATerm term_i_51;
ATerm term_h_51;
ATerm term_g_51;
ATerm term_e_51;
ATerm term_d_51;
ATerm term_b_51;
ATerm term_a_51;
ATerm term_z_50;
ATerm term_y_50;
ATerm term_x_50;
ATerm term_s_50;
ATerm term_r_50;
ATerm term_q_50;
ATerm term_n_50;
ATerm term_m_50;
ATerm term_l_50;
ATerm term_i_50;
ATerm term_h_50;
ATerm term_e_50;
ATerm term_b_50;
ATerm term_a_50;
ATerm term_z_49;
ATerm term_y_49;
ATerm term_x_49;
ATerm term_w_49;
ATerm term_u_49;
ATerm term_t_49;
ATerm term_s_49;
ATerm term_r_49;
ATerm term_o_49;
ATerm term_m_49;
ATerm term_l_49;
ATerm term_f_49;
ATerm term_e_49;
ATerm term_c_49;
ATerm term_b_49;
ATerm term_y_48;
ATerm term_x_48;
ATerm term_w_48;
ATerm term_m_48;
ATerm term_l_48;
ATerm term_k_48;
ATerm term_d_48;
ATerm term_c_48;
ATerm term_b_48;
ATerm term_y_47;
ATerm term_p_47;
ATerm term_o_47;
ATerm term_n_47;
ATerm term_m_47;
ATerm term_h_47;
ATerm term_e_47;
ATerm term_c_47;
ATerm term_b_47;
ATerm term_a_47;
ATerm term_z_46;
ATerm term_y_46;
ATerm term_u_46;
ATerm term_t_46;
ATerm term_s_46;
ATerm term_r_46;
ATerm term_q_46;
ATerm term_p_46;
ATerm term_l_46;
ATerm term_k_46;
ATerm term_f_46;
ATerm term_e_46;
ATerm term_b_46;
ATerm term_y_45;
ATerm term_e_38;
ATerm term_a_38;
ATerm term_v_37;
ATerm term_t_37;
ATerm term_s_37;
ATerm term_i_37;
ATerm term_u_36;
ATerm term_r_36;
ATerm term_q_36;
ATerm term_p_36;
ATerm term_a_32;
ATerm term_v_30;
ATerm term_r_29;
ATerm term_o_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_f_24;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_i_22;
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
ATerm term_z_16;
void init_constant_terms (void)
{
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
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
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("operator ", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" not defined", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("eval: ", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Evaluate strategy: ", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("> ", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("eval-rules: ", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("rules normalized: ", 0, ATtrue));
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(sym_Sort_2, term_s_37, (ATerm) ATempty);
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(sym_ConstType_1, term_t_37);
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_y_45));
  term_y_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_k_46));
  term_k_46 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_p_46));
  term_p_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_46, term_a_22, term_l_46);
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_r_46));
  term_r_46 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_s_46));
  term_s_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_t_46));
  term_t_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_46, term_r_46, term_s_46);
  ATprotect(&(term_u_46));
  term_u_46 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_y_46));
  term_y_46 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_z_46));
  term_z_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_a_47));
  term_a_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_46, term_y_46, term_z_46);
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_c_47));
  term_c_47 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_e_47));
  term_e_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_47, term_c_47, term_e_47);
  ATprotect(&(term_m_47));
  term_m_47 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_o_47));
  term_o_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_p_47));
  term_p_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_47, term_n_47, term_o_47);
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_47, term_b_48, term_c_48);
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_l_48));
  term_l_48 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_m_48));
  term_m_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_w_48));
  term_w_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_48, term_l_48, term_m_48);
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_b_49));
  term_b_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_c_49));
  term_c_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_48, term_y_48, term_b_49);
  ATprotect(&(term_e_49));
  term_e_49 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_f_49));
  term_f_49 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_l_49));
  term_l_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_m_49));
  term_m_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_49, term_f_49, term_l_49);
  ATprotect(&(term_o_49));
  term_o_49 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_r_49));
  term_r_49 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_s_49));
  term_s_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_t_49));
  term_t_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_49, term_r_49, term_s_49);
  ATprotect(&(term_u_49));
  term_u_49 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_w_49));
  term_w_49 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_x_49));
  term_x_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_y_49));
  term_y_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_49, term_w_49, term_x_49);
  ATprotect(&(term_z_49));
  term_z_49 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_a_50));
  term_a_50 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_b_50));
  term_b_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_e_50));
  term_e_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_49, term_a_50, term_b_50);
  ATprotect(&(term_h_50));
  term_h_50 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_i_50));
  term_i_50 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_l_50));
  term_l_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_m_50));
  term_m_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_50, term_i_50, term_l_50);
  ATprotect(&(term_n_50));
  term_n_50 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_q_50));
  term_q_50 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_r_50));
  term_r_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_s_50));
  term_s_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_50, term_q_50, term_r_50);
  ATprotect(&(term_x_50));
  term_x_50 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_y_50));
  term_y_50 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_z_50));
  term_z_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_a_51));
  term_a_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_50, term_y_50, term_z_50);
  ATprotect(&(term_b_51));
  term_b_51 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_d_51));
  term_d_51 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_e_51));
  term_e_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_g_51));
  term_g_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_51, term_d_51, term_e_51);
  ATprotect(&(term_h_51));
  term_h_51 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_i_51));
  term_i_51 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_j_51));
  term_j_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_m_51));
  term_m_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_51, term_i_51, term_j_51);
  ATprotect(&(term_o_51));
  term_o_51 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_p_51));
  term_p_51 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_s_51));
  term_s_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_u_51));
  term_u_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_51, term_p_51, term_s_51);
  ATprotect(&(term_v_51));
  term_v_51 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_w_51));
  term_w_51 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_a_52));
  term_a_52 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_b_52));
  term_b_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_51, term_w_51, term_a_52);
  ATprotect(&(term_c_52));
  term_c_52 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_d_52));
  term_d_52 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_e_52));
  term_e_52 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_f_52));
  term_f_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_52, term_d_52, term_e_52);
  ATprotect(&(term_g_52));
  term_g_52 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_h_52));
  term_h_52 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_i_52));
  term_i_52 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_j_52));
  term_j_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_52, term_h_52, term_i_52);
  ATprotect(&(term_k_52));
  term_k_52 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_l_52));
  term_l_52 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_n_52));
  term_n_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_52, term_l_52, term_m_52);
  ATprotect(&(term_o_52));
  term_o_52 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_q_52));
  term_q_52 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_r_52));
  term_r_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_t_52));
  term_t_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_52, term_q_52, term_r_52);
  ATprotect(&(term_u_52));
  term_u_52 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_v_52));
  term_v_52 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_w_52));
  term_w_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_x_52));
  term_x_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_52, term_v_52, term_w_52);
  ATprotect(&(term_y_52));
  term_y_52 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_z_52));
  term_z_52 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_c_53));
  term_c_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_52, term_z_52, term_a_53);
  ATprotect(&(term_d_53));
  term_d_53 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_e_53));
  term_e_53 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_f_53));
  term_f_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_g_53));
  term_g_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_53, term_e_53, term_f_53);
  ATprotect(&(term_h_53));
  term_h_53 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_i_53));
  term_i_53 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_j_53));
  term_j_53 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_53, term_i_53, term_j_53);
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_r_53));
  term_r_53 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_s_53));
  term_s_53 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_t_53));
  term_t_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_53, term_r_53, term_s_53);
  ATprotect(&(term_d_54));
  term_d_54 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_n_54));
  term_n_54 = (ATerm) ATmakeAppl(ATmakeSymbol("importing module: ", 0, ATtrue));
  ATprotect(&(term_s_54));
  term_s_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_t_54));
  term_t_54 = (ATerm) ATmakeAppl(ATmakeSymbol("sc", 0, ATtrue));
  ATprotect(&(term_u_54));
  term_u_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_v_54));
  term_v_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_w_54));
  term_w_54 = (ATerm) ATmakeAppl(ATmakeSymbol(".sdefs", 0, ATtrue));
  ATprotect(&(term_t_55));
  term_t_55 = (ATerm) ATmakeAppl(ATmakeSymbol("error: import of multiple modules not supported yet", 0, ATtrue));
  ATprotect(&(term_w_55));
  term_w_55 = (ATerm) ATmakeAppl(ATmakeSymbol("loading image from file: ", 0, ATtrue));
  ATprotect(&(term_f_56));
  term_f_56 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_g_56));
  term_g_56 = (ATerm) ATmakeAppl(ATmakeSymbol("image: ", 0, ATtrue));
  ATprotect(&(term_h_56));
  term_h_56 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_m_56));
  term_m_56 = (ATerm) ATmakeAppl(ATmakeSymbol("image ", 0, ATtrue));
  ATprotect(&(term_n_56));
  term_n_56 = (ATerm) ATmakeAppl(ATmakeSymbol(" loaded", 0, ATtrue));
  ATprotect(&(term_r_56));
  term_r_56 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_x_56));
  term_x_56 = (ATerm) ATmakeAppl(ATmakeSymbol("image written to file: ", 0, ATtrue));
  ATprotect(&(term_m_57));
  term_m_57 = (ATerm) ATmakeAppl(ATmakeSymbol("Evaluating command: ", 0, ATtrue));
  ATprotect(&(term_o_57));
  term_o_57 = (ATerm) ATmakeAppl(ATmakeSymbol("unknown command: ", 0, ATtrue));
  ATprotect(&(term_q_58));
  term_q_58 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_t_58));
  term_t_58 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_58));
  term_u_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--------------------------------------------------------------------", 0, ATtrue));
  ATprotect(&(term_v_58));
  term_v_58 = (ATerm) ATmakeAppl(ATmakeSymbol("This is SI, the Stratego Interpreter ", 0, ATtrue));
  ATprotect(&(term_w_58));
  term_w_58 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (c) 2001, Eelco Visser <visser@acm.org>", 0, ATtrue));
  ATprotect(&(term_x_58));
  term_x_58 = (ATerm) ATmakeAppl(ATmakeSymbol("This program is free software; you can redistribute it and/or modify", 0, ATtrue));
  ATprotect(&(term_a_59));
  term_a_59 = (ATerm) ATmakeAppl(ATmakeSymbol("it under the terms of the GNU General Public License as published by", 0, ATtrue));
  ATprotect(&(term_b_59));
  term_b_59 = (ATerm) ATmakeAppl(ATmakeSymbol("the Free Software Foundation; either version 2, or (at your option)", 0, ATtrue));
  ATprotect(&(term_c_59));
  term_c_59 = (ATerm) ATmakeAppl(ATmakeSymbol("any later version.", 0, ATtrue));
  ATprotect(&(term_o_59));
  term_o_59 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_59));
  term_v_59 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_59));
  term_w_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-I dir           include modules from directory dir", 0, ATtrue));
  ATprotect(&(term_x_59));
  term_x_59 = (ATerm) ATmakeAppl(ATmakeSymbol("@version", 0, ATtrue));
  ATprotect(&(term_z_59));
  term_z_59 = (ATerm) ATmakeAppl(ATmakeSymbol("@version v       declare version", 0, ATtrue));
  ATprotect(&(term_a_60));
  term_a_60 = (ATerm) ATmakeAppl(sym__2, term_t_19, term_a_22);
  ATprotect(&(term_b_60));
  term_b_60 = (ATerm) ATmakeAppl(sym__2, term_o_59, term_r_46);
  ATprotect(&(term_d_60));
  term_d_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-d               debug mode", 0, ATtrue));
  ATprotect(&(term_h_60));
  term_h_60 = (ATerm) ATmakeAppl(sym__2, term_o_29, term_a_22);
  ATprotect(&(term_i_60));
  term_i_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-t               trace mode", 0, ATtrue));
  ATprotect(&(term_y_60));
  term_y_60 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_z_60));
  term_z_60 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_61));
  term_a_61 = (ATerm) ATmakeAppl(sym__2, term_o_59, term_z_21);
  ATprotect(&(term_b_61));
  term_b_61 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_21);
  ATprotect(&(term_c_61));
  term_c_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_d_61));
  term_d_61 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_61));
  term_e_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_f_61));
  term_f_61 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_61));
  term_h_61 = (ATerm) ATmakeAppl(sym__2, term_e_61, term_f_61);
  ATprotect(&(term_i_61));
  term_i_61 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_61));
  term_j_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_o_61));
  term_o_61 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_61));
  term_p_61 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_61));
  term_q_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_61));
  term_t_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_61));
  term_y_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_61));
  term_z_61 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_62));
  term_c_62 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_62));
  term_d_62 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_62));
  term_e_62 = (ATerm) ATmakeAppl(sym__2, term_o_61, term_p_61);
  ATprotect(&(term_l_62));
  term_l_62 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_62));
  term_o_62 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_a_63));
  term_a_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_b_63));
  term_b_63 = (ATerm) ATmakeAppl(sym__2, term_a_63, term_f_61);
  ATprotect(&(term_c_63));
  term_c_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_63));
  term_d_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_63));
  term_e_63 = (ATerm) ATmakeAppl(sym__2, term_d_63, term_f_61);
  ATprotect(&(term_f_63));
  term_f_63 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_i_63));
  term_i_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_n_63));
  term_n_63 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_63));
  term_v_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_y_63));
  term_y_63 = (ATerm) ATmakeAppl(sym__2, term_v_63, term_f_61);
  ATprotect(&(term_z_63));
  term_z_63 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_64));
  term_a_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_64));
  term_s_64 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_f_65));
  term_f_65 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_g_65));
  term_g_65 = (ATerm) ATmakeAppl(sym__2, term_f_65, term_f_61);
  ATprotect(&(term_h_65));
  term_h_65 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_65));
  term_i_65 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_j_65));
  term_j_65 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_v_65));
  term_v_65 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm destroy_runtime_environment_0_0 (ATerm);
ATerm EvalPrim_0_0 (ATerm);
ATerm c_27 (ATerm t_74, ATerm u_74, ATerm);
ATerm EvalTerm_0_0 (ATerm);
ATerm g_27 (ATerm z_55, ATerm a_56, ATerm b_56, ATerm);
ATerm a_0 (ATerm);
ATerm h_27 (ATerm n_75, ATerm o_75, ATerm);
ATerm l_27 (ATerm w_134 (ATerm), ATerm k_59, ATerm l_59, ATerm i_59, ATerm j_59, ATerm);
ATerm q_0 (ATerm);
ATerm s_0 (ATerm);
ATerm t_0 (ATerm);
ATerm PatDecompose_0_0 (ATerm);
ATerm w_0 (ATerm);
ATerm e_1 (ATerm);
ATerm j_1 (ATerm);
ATerm d_162 (ATerm e_160, ATerm f_160, ATerm g_160, ATerm);
ATerm k_162 (ATerm p_160, ATerm q_160, ATerm r_160, ATerm);
ATerm m_162 (ATerm x_160, ATerm y_160, ATerm b_161, ATerm);
ATerm l_1 (ATerm);
ATerm stratego_match_1_0 (ATerm o_137 (ATerm), ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm n_27 (ATerm l_75, ATerm m_75, ATerm);
ATerm s_1 (ATerm);
ATerm u_1 (ATerm);
ATerm o_27 (ATerm p_137 (ATerm), ATerm u_75, ATerm r_75, ATerm s_75, ATerm);
ATerm w_1 (ATerm);
ATerm z_1 (ATerm);
ATerm b_2 (ATerm);
ATerm v_27 (ATerm m_137 (ATerm), ATerm z_73, ATerm a_74, ATerm g_718, ATerm);
ATerm x_27 (ATerm l_137 (ATerm), ATerm u_73, ATerm i_715, ATerm);
ATerm EvalAll_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm a_28 (ATerm v_137 (ATerm), ATerm k_77, ATerm h_77, ATerm i_77, ATerm);
ATerm s_2 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm b_28 (ATerm f_77, ATerm g_77, ATerm e_77, ATerm);
ATerm d_28 (ATerm o_55, ATerm p_55, ATerm);
ATerm h_28 (ATerm x_55, ATerm y_55, ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm j_28 (ATerm u_137 (ATerm), ATerm u_76, ATerm w_76, ATerm y_76, ATerm);
ATerm k_28 (ATerm t_137 (ATerm), ATerm q_76, ATerm r_76, ATerm s_76, ATerm);
ATerm l_28 (ATerm s_137 (ATerm), ATerm m_76, ATerm n_76, ATerm o_76, ATerm);
ATerm g_3 (ATerm);
ATerm eval_0_0 (ATerm);
ATerm h_3 (ATerm);
ATerm k_3 (ATerm);
ATerm x_28 (ATerm b_25, ATerm c_25, ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm RDtoSD_0_0 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm v_24 (ATerm q_144, ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm f_5 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm spaste_1_0 (ATerm v_136 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm w_136 (ATerm), ATerm x_136 (ATerm), ATerm y_136 (ATerm), ATerm);
ATerm o_5 (ATerm);
ATerm q_25 (ATerm k_67, ATerm j_67, ATerm);
ATerm SVar_1_0 (ATerm c_103 (ATerm), ATerm);
ATerm r_25 (ATerm i_134 (ATerm), ATerm j_134 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm f_58, ATerm e_58, ATerm d_58, ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm u_5 (ATerm);
ATerm s_25 (ATerm c_134 (ATerm), ATerm d_134 (ATerm (ATerm), ATerm), ATerm x_57, ATerm a_58, ATerm);
ATerm lookup_0_0 (ATerm);
ATerm env_alltd_1_0 (ATerm b_113 (ATerm), ATerm);
ATerm rename_4_0 (ATerm x_133 (ATerm (ATerm), ATerm), ATerm y_133 (ATerm), ATerm z_133 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm a_134 (ATerm (ATerm), ATerm), ATerm);
ATerm z_5 (ATerm);
ATerm b_6 (ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm i_6 (ATerm);
ATerm n_6 (ATerm);
ATerm tpaste_1_0 (ATerm r_136 (ATerm), ATerm);
ATerm Var_1_0 (ATerm p_97 (ATerm), ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm v_6 (ATerm);
ATerm strename_0_0 (ATerm);
ATerm Expl_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm pat_td_1_0 (ATerm x_135 (ATerm), ATerm);
ATerm Bapp_0_0 (ATerm);
ATerm map1_1_0 (ATerm j_0 (ATerm), ATerm);
ATerm j_7 (ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm p_7 (ATerm);
ATerm w_7 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm y_7 (ATerm);
ATerm a_8 (ATerm);
ATerm e_8 (ATerm);
ATerm f_8 (ATerm);
ATerm g_8 (ATerm);
ATerm i_8 (ATerm);
ATerm k_8 (ATerm);
ATerm t_28 (ATerm p_64, ATerm q_64, ATerm r_64, ATerm);
ATerm f_185 (ATerm w_184, ATerm);
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
ATerm oncetd_1_0 (ATerm p_109 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm w_28 (ATerm e_60, ATerm f_60, ATerm g_60, ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm topdown_1_0 (ATerm l_108 (ATerm), ATerm);
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
ATerm tboundin_3_0 (ATerm s_136 (ATerm), ATerm t_136 (ATerm), ATerm u_136 (ATerm), ATerm);
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
ATerm f_26 (ATerm g_118 (ATerm), ATerm e_32, ATerm d_32, ATerm);
ATerm g_26 (ATerm j_118 (ATerm), ATerm k_118 (ATerm), ATerm i_32, ATerm h_32, ATerm);
ATerm h_26 (ATerm b_118 (ATerm), ATerm c_32, ATerm b_32, ATerm);
ATerm genzip_4_0 (ATerm f_116 (ATerm), ATerm g_116 (ATerm), ATerm h_116 (ATerm), ATerm i_116 (ATerm), ATerm);
ATerm x_11 (ATerm);
ATerm y_11 (ATerm);
ATerm a_12 (ATerm);
ATerm j_26 (ATerm b_600, ATerm g_600, ATerm y_59, ATerm);
ATerm while_not_2_0 (ATerm c_108 (ATerm), ATerm d_108 (ATerm), ATerm);
ATerm for_3_0 (ATerm f_108 (ATerm), ATerm g_108 (ATerm), ATerm h_108 (ATerm), ATerm);
ATerm c_12 (ATerm);
ATerm f_12 (ATerm);
ATerm g_12 (ATerm);
ATerm l_51 (ATerm r_48, ATerm u_48, ATerm z_48, ATerm);
ATerm i_12 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm r_12 (ATerm);
ATerm t_12 (ATerm);
ATerm x_12 (ATerm);
ATerm y_12 (ATerm);
ATerm z_12 (ATerm);
ATerm a_13 (ATerm);
ATerm d_13 (ATerm);
ATerm free_vars_3_0 (ATerm n_135 (ATerm), ATerm o_135 (ATerm), ATerm p_135 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm bottomup_1_0 (ATerm m_108 (ATerm), ATerm);
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
ATerm l_26 (ATerm y_142, ATerm);
ATerm i_28 (ATerm x_42, ATerm y_42, ATerm);
ATerm foldr_3_0 (ATerm h_120 (ATerm), ATerm i_120 (ATerm), ATerm j_120 (ATerm), ATerm);
ATerm q_13 (ATerm);
ATerm r_13 (ATerm);
ATerm s_13 (ATerm);
ATerm t_13 (ATerm);
ATerm define_strategies_0_0 (ATerm);
ATerm m_26 (ATerm q_51, ATerm r_51, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm o_114 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm w_129 (ATerm), ATerm);
ATerm call_sc_0_0 (ATerm);
ATerm eval_import_0_0 (ATerm);
ATerm o_26 (ATerm p_56, ATerm o_56, ATerm);
ATerm p_26 (ATerm r_45, ATerm s_45, ATerm);
ATerm q_26 (ATerm l_25, ATerm);
ATerm r_26 (ATerm h_49, ATerm i_49, ATerm);
ATerm s_26 (ATerm z_126 (ATerm), ATerm l_444, ATerm p_49, ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm z_13 (ATerm);
ATerm t_26 (ATerm i_25, ATerm);
ATerm k_194 (ATerm n_193, ATerm o_193, ATerm p_193, ATerm);
ATerm a_14 (ATerm);
ATerm b_14 (ATerm);
ATerm eval_command_0_0 (ATerm);
ATerm repeat_1_0 (ATerm n_107 (ATerm), ATerm);
ATerm c_14 (ATerm);
ATerm evaluate_commands_0_0 (ATerm);
ATerm g_195 (ATerm a_195, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm y_28 (ATerm n_49, ATerm);
ATerm z_28 (ATerm z_45, ATerm a_46, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm r_196 (ATerm q_195, ATerm);
ATerm s_196 (ATerm u_195, ATerm v_195, ATerm w_195, ATerm);
ATerm t_196 (ATerm e_196, ATerm f_196, ATerm g_196, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm d_14 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm copyright_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm j_128 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm s_114 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm q_199 (ATerm i_199, ATerm);
ATerm conc_0_0 (ATerm);
ATerm b_29 (ATerm u_50, ATerm t_50, ATerm);
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
ATerm y_14 (ATerm);
ATerm z_14 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm a_15 (ATerm);
ATerm b_15 (ATerm);
ATerm c_15 (ATerm);
ATerm d_15 (ATerm);
ATerm f_15 (ATerm);
ATerm g_15 (ATerm);
ATerm h_15 (ATerm);
ATerm i_15 (ATerm);
ATerm j_15 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm h_29 (ATerm o_50, ATerm p_50, ATerm);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm o_15 (ATerm);
ATerm r_15 (ATerm);
ATerm s_15 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm f_29 (ATerm m_55, ATerm n_55, ATerm l_55, ATerm);
ATerm ArgOption_3_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm);
ATerm x_15 (ATerm);
ATerm f_16 (ATerm);
ATerm g_16 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm);
ATerm i_16 (ATerm);
ATerm q_16 (ATerm);
ATerm r_16 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm m_114 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm d_29 (ATerm n_40, ATerm o_40, ATerm);
ATerm debug_1_0 (ATerm x_126 (ATerm), ATerm);
ATerm map_1_0 (ATerm c_114 (ATerm), ATerm);
ATerm s_16 (ATerm);
ATerm t_16 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm e_29 (ATerm d_57, ATerm e_57, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm u_16 (ATerm);
ATerm v_16 (ATerm);
ATerm w_16 (ATerm);
ATerm x_16 (ATerm);
ATerm y_16 (ATerm);
ATerm a_17 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm v_92 (ATerm), ATerm w_92 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm c_133 (ATerm), ATerm);
ATerm c_17 (ATerm);
ATerm d_17 (ATerm);
ATerm e_17 (ATerm);
ATerm f_17 (ATerm);
ATerm parse_options_1_0 (ATerm b_133 (ATerm), ATerm);
ATerm h_17 (ATerm);
ATerm m_17 (ATerm);
ATerm n_17 (ATerm);
ATerm q_17 (ATerm);
ATerm make_option_table_0_0 (ATerm);
ATerm at_suffix_1_0 (ATerm w_114 (ATerm), ATerm);
ATerm split_fetch_1_0 (ATerm p_114 (ATerm), ATerm);
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
  t = term_z_16;
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
  ATerm p_147 = NULL,q_147 = NULL,r_147 = NULL,s_147 = NULL,x_147 = NULL,y_147 = NULL,z_147 = NULL,a_148 = NULL,b_148 = NULL,c_148 = NULL,d_148 = NULL;
  x_147 = t;
  if(match_cons(t, sym_App_2))
    {
      y_147 = ATgetArgument(t, 0);
      d_148 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_147;
  if(match_cons(t, sym_Prim_2))
    {
      z_147 = ATgetArgument(t, 0);
      a_148 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_147;
  if(match_string(t, "\"_cpl_loaded\""))
    {
      ATerm v_49 = NULL;
      t = a_148;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_148 = ATgetFirst((ATermList) t);
          c_148 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_148;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = b_148;
      t = EvalTerm_0_0(t);
      v_49 = t;
      t = _cpl_loaded(v_49);
    }
  else
    {
      if(match_string(t, "\"SSL_strlen\""))
        {
          ATerm k_50 = NULL;
          t = a_148;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              b_148 = ATgetFirst((ATermList) t);
              c_148 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = c_148;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = b_148;
          t = EvalTerm_0_0(t);
          k_50 = t;
          t = SSL_strlen(k_50);
        }
      else
        {
          if(match_string(t, "\"SSL_concat_strings\""))
            {
              ATerm f_51 = NULL;
              t = a_148;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  b_148 = ATgetFirst((ATermList) t);
                  c_148 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = c_148;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = b_148;
              t = EvalTerm_0_0(t);
              f_51 = t;
              t = SSL_concat_strings(f_51);
            }
          else
            {
              if(match_string(t, "\"SSL_strcat\""))
                {
                  ATerm x_51 = NULL,y_51 = NULL;
                  t = a_148;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      b_148 = ATgetFirst((ATermList) t);
                      c_148 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = c_148;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      p_147 = ATgetFirst((ATermList) t);
                      q_147 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = q_147;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = b_148;
                  t = EvalTerm_0_0(t);
                  y_51 = t;
                  t = p_147;
                  t = EvalTerm_0_0(t);
                  x_51 = t;
                  t = SSL_strcat(y_51, x_51);
                }
              else
                {
                  if(match_string(t, "\"SSL_explode_string\""))
                    {
                      ATerm s_52 = NULL;
                      t = a_148;
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          b_148 = ATgetFirst((ATermList) t);
                          c_148 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = c_148;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = b_148;
                      t = EvalTerm_0_0(t);
                      s_52 = t;
                      t = SSL_explode_string(s_52);
                    }
                  else
                    {
                      if(match_string(t, "\"SSL_implode_string\""))
                        {
                          ATerm b_53 = NULL;
                          t = a_148;
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              b_148 = ATgetFirst((ATermList) t);
                              c_148 = (ATerm) ATgetNext((ATermList) t);
                            }
                          else
                            _fail(t);
                          t = c_148;
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = b_148;
                          t = EvalTerm_0_0(t);
                          b_53 = t;
                          t = SSL_implode_string(b_53);
                        }
                      else
                        {
                          if(match_string(t, "\"SSL_is_string\""))
                            {
                              ATerm l_53 = NULL;
                              t = a_148;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  b_148 = ATgetFirst((ATermList) t);
                                  c_148 = (ATerm) ATgetNext((ATermList) t);
                                }
                              else
                                _fail(t);
                              t = c_148;
                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                _fail(t);
                              t = b_148;
                              t = EvalTerm_0_0(t);
                              l_53 = t;
                              t = SSL_is_string(l_53);
                            }
                          else
                            {
                              if(match_string(t, "SSL_new"))
                                {
                                  t = a_148;
                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                    _fail(t);
                                  t = SSL_new();
                                }
                              else
                                {
                                  if(match_string(t, "\"SSL_address\""))
                                    {
                                      ATerm c_54 = NULL;
                                      t = a_148;
                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                        {
                                          b_148 = ATgetFirst((ATermList) t);
                                          c_148 = (ATerm) ATgetNext((ATermList) t);
                                        }
                                      else
                                        _fail(t);
                                      t = c_148;
                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                        _fail(t);
                                      t = b_148;
                                      t = EvalTerm_0_0(t);
                                      c_54 = t;
                                      t = SSL_address(c_54);
                                    }
                                  else
                                    {
                                      if(match_string(t, "\"SSL_address_lt\""))
                                        {
                                          ATerm x_54 = NULL,y_54 = NULL;
                                          t = a_148;
                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                            {
                                              b_148 = ATgetFirst((ATermList) t);
                                              c_148 = (ATerm) ATgetNext((ATermList) t);
                                            }
                                          else
                                            _fail(t);
                                          t = c_148;
                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                            {
                                              p_147 = ATgetFirst((ATermList) t);
                                              q_147 = (ATerm) ATgetNext((ATermList) t);
                                            }
                                          else
                                            _fail(t);
                                          t = q_147;
                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                            _fail(t);
                                          t = b_148;
                                          t = EvalTerm_0_0(t);
                                          y_54 = t;
                                          t = p_147;
                                          t = EvalTerm_0_0(t);
                                          x_54 = t;
                                          t = SSL_address_lt(y_54, x_54);
                                        }
                                      else
                                        {
                                          if(match_string(t, "\"SSL_explode_term\""))
                                            {
                                              ATerm q_56 = NULL;
                                              t = a_148;
                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                {
                                                  b_148 = ATgetFirst((ATermList) t);
                                                  c_148 = (ATerm) ATgetNext((ATermList) t);
                                                }
                                              else
                                                _fail(t);
                                              t = c_148;
                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                _fail(t);
                                              t = b_148;
                                              t = EvalTerm_0_0(t);
                                              q_56 = t;
                                              t = SSL_explode_term(q_56);
                                            }
                                          else
                                            {
                                              if(match_string(t, "\"SSL_mkterm\""))
                                                {
                                                  ATerm h_57 = NULL,i_57 = NULL;
                                                  t = a_148;
                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                    {
                                                      b_148 = ATgetFirst((ATermList) t);
                                                      c_148 = (ATerm) ATgetNext((ATermList) t);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = c_148;
                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                    {
                                                      p_147 = ATgetFirst((ATermList) t);
                                                      q_147 = (ATerm) ATgetNext((ATermList) t);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = q_147;
                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                    _fail(t);
                                                  t = b_148;
                                                  t = EvalTerm_0_0(t);
                                                  i_57 = t;
                                                  t = p_147;
                                                  t = EvalTerm_0_0(t);
                                                  h_57 = t;
                                                  t = SSL_mkterm(i_57, h_57);
                                                }
                                              else
                                                {
                                                  if(match_string(t, "\"ATremoveAnnotations\""))
                                                    {
                                                      ATerm w_57 = NULL;
                                                      t = a_148;
                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                        {
                                                          b_148 = ATgetFirst((ATermList) t);
                                                          c_148 = (ATerm) ATgetNext((ATermList) t);
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = c_148;
                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                        _fail(t);
                                                      t = b_148;
                                                      t = EvalTerm_0_0(t);
                                                      w_57 = t;
                                                      t = ATremoveAnnotations(w_57);
                                                    }
                                                  else
                                                    {
                                                      if(match_string(t, "\"SSLsetAnnotations\""))
                                                        {
                                                          ATerm y_58 = NULL,z_58 = NULL;
                                                          t = a_148;
                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                            {
                                                              b_148 = ATgetFirst((ATermList) t);
                                                              c_148 = (ATerm) ATgetNext((ATermList) t);
                                                            }
                                                          else
                                                            _fail(t);
                                                          t = c_148;
                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                            {
                                                              p_147 = ATgetFirst((ATermList) t);
                                                              q_147 = (ATerm) ATgetNext((ATermList) t);
                                                            }
                                                          else
                                                            _fail(t);
                                                          t = q_147;
                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                            _fail(t);
                                                          t = b_148;
                                                          t = EvalTerm_0_0(t);
                                                          z_58 = t;
                                                          t = p_147;
                                                          t = EvalTerm_0_0(t);
                                                          y_58 = t;
                                                          t = SSLsetAnnotations(z_58, y_58);
                                                        }
                                                      else
                                                        {
                                                          if(match_string(t, "\"SSLgetAnnotations\""))
                                                            {
                                                              ATerm s_59 = NULL;
                                                              t = a_148;
                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                {
                                                                  b_148 = ATgetFirst((ATermList) t);
                                                                  c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                }
                                                              else
                                                                _fail(t);
                                                              t = c_148;
                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                _fail(t);
                                                              t = b_148;
                                                              t = EvalTerm_0_0(t);
                                                              s_59 = t;
                                                              t = SSLgetAnnotations(s_59);
                                                            }
                                                          else
                                                            {
                                                              if(match_string(t, "\"SSL_string_to_int\""))
                                                                {
                                                                  ATerm c_60 = NULL;
                                                                  t = a_148;
                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                    {
                                                                      b_148 = ATgetFirst((ATermList) t);
                                                                      c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  t = c_148;
                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                    _fail(t);
                                                                  t = b_148;
                                                                  t = EvalTerm_0_0(t);
                                                                  c_60 = t;
                                                                  t = SSL_string_to_int(c_60);
                                                                }
                                                              else
                                                                {
                                                                  if(match_string(t, "\"SSL_int_to_string\""))
                                                                    {
                                                                      ATerm x_60 = NULL;
                                                                      t = a_148;
                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                        {
                                                                          b_148 = ATgetFirst((ATermList) t);
                                                                          c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                        }
                                                                      else
                                                                        _fail(t);
                                                                      t = c_148;
                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                        _fail(t);
                                                                      t = b_148;
                                                                      t = EvalTerm_0_0(t);
                                                                      x_60 = t;
                                                                      t = SSL_int_to_string(x_60);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_string(t, "\"SSL_int\""))
                                                                        {
                                                                          ATerm g_61 = NULL;
                                                                          t = a_148;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              b_148 = ATgetFirst((ATermList) t);
                                                                              c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          t = c_148;
                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                            _fail(t);
                                                                          t = b_148;
                                                                          t = EvalTerm_0_0(t);
                                                                          g_61 = t;
                                                                          t = SSL_int(g_61);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_string(t, "\"SSL_gtr\""))
                                                                            {
                                                                              t = a_148;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  b_148 = ATgetFirst((ATermList) t);
                                                                                  c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              t = c_148;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  p_147 = ATgetFirst((ATermList) t);
                                                                                  q_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              t = q_147;
                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                _fail(t);
                                                                              {
                                                                                ATerm v_17 = t;
                                                                                int w_17 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm r_61 = NULL,s_61 = NULL;
                                                                                    t = b_148;
                                                                                    t = EvalTerm_0_0(t);
                                                                                    s_61 = t;
                                                                                    t = p_147;
                                                                                    t = EvalTerm_0_0(t);
                                                                                    r_61 = t;
                                                                                    t = SSL_gtr(s_61, r_61);
                                                                                    ;
                                                                                    LocalPopChoice(w_17);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = v_17;
                                                                                    {
                                                                                      ATerm p_62 = NULL,q_62 = NULL;
                                                                                      t = b_148;
                                                                                      t = EvalTerm_0_0(t);
                                                                                      q_62 = t;
                                                                                      t = p_147;
                                                                                      t = EvalTerm_0_0(t);
                                                                                      p_62 = t;
                                                                                      t = SSL_gtr(q_62, p_62);
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_string(t, "\"SSL_gti\""))
                                                                                {
                                                                                  t = a_148;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      b_148 = ATgetFirst((ATermList) t);
                                                                                      c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  t = c_148;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      p_147 = ATgetFirst((ATermList) t);
                                                                                      q_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  t = q_147;
                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                    _fail(t);
                                                                                  {
                                                                                    ATerm x_17 = t;
                                                                                    int b_18 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm g_63 = NULL,h_63 = NULL;
                                                                                        t = b_148;
                                                                                        t = EvalTerm_0_0(t);
                                                                                        h_63 = t;
                                                                                        t = p_147;
                                                                                        t = EvalTerm_0_0(t);
                                                                                        g_63 = t;
                                                                                        t = SSL_gti(h_63, g_63);
                                                                                        ;
                                                                                        LocalPopChoice(b_18);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = x_17;
                                                                                        {
                                                                                          ATerm w_63 = NULL,x_63 = NULL;
                                                                                          t = b_148;
                                                                                          t = EvalTerm_0_0(t);
                                                                                          x_63 = t;
                                                                                          t = p_147;
                                                                                          t = EvalTerm_0_0(t);
                                                                                          w_63 = t;
                                                                                          t = SSL_gti(x_63, w_63);
                                                                                        }
                                                                                      }
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_string(t, "\"SSL_mod\""))
                                                                                    {
                                                                                      ATerm j_64 = NULL,k_64 = NULL;
                                                                                      t = a_148;
                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                        {
                                                                                          b_148 = ATgetFirst((ATermList) t);
                                                                                          c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      t = c_148;
                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                        {
                                                                                          p_147 = ATgetFirst((ATermList) t);
                                                                                          q_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      t = q_147;
                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                        _fail(t);
                                                                                      t = b_148;
                                                                                      t = EvalTerm_0_0(t);
                                                                                      k_64 = t;
                                                                                      t = p_147;
                                                                                      t = EvalTerm_0_0(t);
                                                                                      j_64 = t;
                                                                                      t = SSL_mod(k_64, j_64);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_string(t, "\"SSL_divr\""))
                                                                                        {
                                                                                          t = a_148;
                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                            {
                                                                                              b_148 = ATgetFirst((ATermList) t);
                                                                                              c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = c_148;
                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                            {
                                                                                              p_147 = ATgetFirst((ATermList) t);
                                                                                              q_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = q_147;
                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                            _fail(t);
                                                                                          {
                                                                                            ATerm c_18 = t;
                                                                                            int f_18 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm z_64 = NULL,a_65 = NULL;
                                                                                                t = b_148;
                                                                                                t = EvalTerm_0_0(t);
                                                                                                a_65 = t;
                                                                                                t = p_147;
                                                                                                t = EvalTerm_0_0(t);
                                                                                                z_64 = t;
                                                                                                t = SSL_divr(a_65, z_64);
                                                                                                ;
                                                                                                LocalPopChoice(f_18);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = c_18;
                                                                                                {
                                                                                                  ATerm m_65 = NULL,n_65 = NULL;
                                                                                                  t = b_148;
                                                                                                  t = EvalTerm_0_0(t);
                                                                                                  n_65 = t;
                                                                                                  t = p_147;
                                                                                                  t = EvalTerm_0_0(t);
                                                                                                  m_65 = t;
                                                                                                  t = SSL_divr(n_65, m_65);
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_string(t, "\"SSL_divi\""))
                                                                                            {
                                                                                              t = a_148;
                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                {
                                                                                                  b_148 = ATgetFirst((ATermList) t);
                                                                                                  c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              t = c_148;
                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                {
                                                                                                  p_147 = ATgetFirst((ATermList) t);
                                                                                                  q_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              t = q_147;
                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                _fail(t);
                                                                                              {
                                                                                                ATerm g_18 = t;
                                                                                                int h_18 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm z_65 = NULL,a_66 = NULL;
                                                                                                    t = b_148;
                                                                                                    t = EvalTerm_0_0(t);
                                                                                                    a_66 = t;
                                                                                                    t = p_147;
                                                                                                    t = EvalTerm_0_0(t);
                                                                                                    z_65 = t;
                                                                                                    t = SSL_divi(a_66, z_65);
                                                                                                    ;
                                                                                                    LocalPopChoice(h_18);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = g_18;
                                                                                                    {
                                                                                                      ATerm q_66 = NULL,r_66 = NULL;
                                                                                                      t = b_148;
                                                                                                      t = EvalTerm_0_0(t);
                                                                                                      r_66 = t;
                                                                                                      t = p_147;
                                                                                                      t = EvalTerm_0_0(t);
                                                                                                      q_66 = t;
                                                                                                      t = SSL_divi(r_66, q_66);
                                                                                                    }
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_string(t, "\"SSL_mulr\""))
                                                                                                {
                                                                                                  t = a_148;
                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                    {
                                                                                                      b_148 = ATgetFirst((ATermList) t);
                                                                                                      c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  t = c_148;
                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                    {
                                                                                                      p_147 = ATgetFirst((ATermList) t);
                                                                                                      q_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  t = q_147;
                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                    _fail(t);
                                                                                                  {
                                                                                                    ATerm i_18 = t;
                                                                                                    int j_18 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm p_67 = NULL,q_67 = NULL;
                                                                                                        t = b_148;
                                                                                                        t = EvalTerm_0_0(t);
                                                                                                        q_67 = t;
                                                                                                        t = p_147;
                                                                                                        t = EvalTerm_0_0(t);
                                                                                                        p_67 = t;
                                                                                                        t = SSL_mulr(q_67, p_67);
                                                                                                        ;
                                                                                                        LocalPopChoice(j_18);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = i_18;
                                                                                                        {
                                                                                                          ATerm i_68 = NULL,j_68 = NULL;
                                                                                                          t = b_148;
                                                                                                          t = EvalTerm_0_0(t);
                                                                                                          j_68 = t;
                                                                                                          t = p_147;
                                                                                                          t = EvalTerm_0_0(t);
                                                                                                          i_68 = t;
                                                                                                          t = SSL_mulr(j_68, i_68);
                                                                                                        }
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(t, "\"SSL_muli\""))
                                                                                                    {
                                                                                                      t = a_148;
                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                        {
                                                                                                          b_148 = ATgetFirst((ATermList) t);
                                                                                                          c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      t = c_148;
                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                        {
                                                                                                          p_147 = ATgetFirst((ATermList) t);
                                                                                                          q_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      t = q_147;
                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                        _fail(t);
                                                                                                      {
                                                                                                        ATerm m_18 = t;
                                                                                                        int o_18 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm f_69 = NULL,g_69 = NULL;
                                                                                                            t = b_148;
                                                                                                            t = EvalTerm_0_0(t);
                                                                                                            g_69 = t;
                                                                                                            t = p_147;
                                                                                                            t = EvalTerm_0_0(t);
                                                                                                            f_69 = t;
                                                                                                            t = SSL_muli(g_69, f_69);
                                                                                                            ;
                                                                                                            LocalPopChoice(o_18);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = m_18;
                                                                                                            {
                                                                                                              ATerm v_69 = NULL,w_69 = NULL;
                                                                                                              t = b_148;
                                                                                                              t = EvalTerm_0_0(t);
                                                                                                              w_69 = t;
                                                                                                              t = p_147;
                                                                                                              t = EvalTerm_0_0(t);
                                                                                                              v_69 = t;
                                                                                                              t = SSL_muli(w_69, v_69);
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(t, "\"SSL_subtr\""))
                                                                                                        {
                                                                                                          t = a_148;
                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                            {
                                                                                                              b_148 = ATgetFirst((ATermList) t);
                                                                                                              c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          t = c_148;
                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                            {
                                                                                                              p_147 = ATgetFirst((ATermList) t);
                                                                                                              q_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          t = q_147;
                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                            _fail(t);
                                                                                                          {
                                                                                                            ATerm p_18 = t;
                                                                                                            int q_18 = stack_ptr;
                                                                                                            if((PushChoice() == 0))
                                                                                                              {
                                                                                                                ATerm q_70 = NULL,v_70 = NULL;
                                                                                                                t = b_148;
                                                                                                                t = EvalTerm_0_0(t);
                                                                                                                v_70 = t;
                                                                                                                t = p_147;
                                                                                                                t = EvalTerm_0_0(t);
                                                                                                                q_70 = t;
                                                                                                                t = SSL_subtr(v_70, q_70);
                                                                                                                ;
                                                                                                                LocalPopChoice(q_18);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                t = p_18;
                                                                                                                {
                                                                                                                  ATerm f_72 = NULL,i_72 = NULL;
                                                                                                                  t = b_148;
                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                  i_72 = t;
                                                                                                                  t = p_147;
                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                  f_72 = t;
                                                                                                                  t = SSL_subtr(i_72, f_72);
                                                                                                                }
                                                                                                              }
                                                                                                          }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(t, "\"SSL_subti\""))
                                                                                                            {
                                                                                                              t = a_148;
                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                {
                                                                                                                  b_148 = ATgetFirst((ATermList) t);
                                                                                                                  c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              t = c_148;
                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                {
                                                                                                                  p_147 = ATgetFirst((ATermList) t);
                                                                                                                  q_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              t = q_147;
                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                _fail(t);
                                                                                                              {
                                                                                                                ATerm r_18 = t;
                                                                                                                int s_18 = stack_ptr;
                                                                                                                if((PushChoice() == 0))
                                                                                                                  {
                                                                                                                    ATerm g_73 = NULL,h_73 = NULL;
                                                                                                                    t = b_148;
                                                                                                                    t = EvalTerm_0_0(t);
                                                                                                                    h_73 = t;
                                                                                                                    t = p_147;
                                                                                                                    t = EvalTerm_0_0(t);
                                                                                                                    g_73 = t;
                                                                                                                    t = SSL_subti(h_73, g_73);
                                                                                                                    ;
                                                                                                                    LocalPopChoice(s_18);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    t = r_18;
                                                                                                                    {
                                                                                                                      ATerm x_73 = NULL,y_73 = NULL;
                                                                                                                      t = b_148;
                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                      y_73 = t;
                                                                                                                      t = p_147;
                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                      x_73 = t;
                                                                                                                      t = SSL_subti(y_73, x_73);
                                                                                                                    }
                                                                                                                  }
                                                                                                              }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(t, "\"SSL_addr\""))
                                                                                                                {
                                                                                                                  t = a_148;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                    {
                                                                                                                      b_148 = ATgetFirst((ATermList) t);
                                                                                                                      c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  t = c_148;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                    {
                                                                                                                      p_147 = ATgetFirst((ATermList) t);
                                                                                                                      q_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  t = q_147;
                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                    _fail(t);
                                                                                                                  {
                                                                                                                    ATerm t_18 = t;
                                                                                                                    int u_18 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        ATerm m_74 = NULL,n_74 = NULL;
                                                                                                                        t = b_148;
                                                                                                                        t = EvalTerm_0_0(t);
                                                                                                                        n_74 = t;
                                                                                                                        t = p_147;
                                                                                                                        t = EvalTerm_0_0(t);
                                                                                                                        m_74 = t;
                                                                                                                        t = SSL_addr(n_74, m_74);
                                                                                                                        ;
                                                                                                                        LocalPopChoice(u_18);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = t_18;
                                                                                                                        {
                                                                                                                          ATerm b_75 = NULL,c_75 = NULL;
                                                                                                                          t = b_148;
                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                          c_75 = t;
                                                                                                                          t = p_147;
                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                          b_75 = t;
                                                                                                                          t = SSL_addr(c_75, b_75);
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(t, "\"SSL_addi\""))
                                                                                                                    {
                                                                                                                      t = a_148;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                        {
                                                                                                                          b_148 = ATgetFirst((ATermList) t);
                                                                                                                          c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        _fail(t);
                                                                                                                      t = c_148;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                        {
                                                                                                                          p_147 = ATgetFirst((ATermList) t);
                                                                                                                          q_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        _fail(t);
                                                                                                                      t = q_147;
                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                        _fail(t);
                                                                                                                      {
                                                                                                                        ATerm v_18 = t;
                                                                                                                        int w_18 = stack_ptr;
                                                                                                                        if((PushChoice() == 0))
                                                                                                                          {
                                                                                                                            ATerm v_75 = NULL,w_75 = NULL;
                                                                                                                            t = b_148;
                                                                                                                            t = EvalTerm_0_0(t);
                                                                                                                            w_75 = t;
                                                                                                                            t = p_147;
                                                                                                                            t = EvalTerm_0_0(t);
                                                                                                                            v_75 = t;
                                                                                                                            t = SSL_addi(w_75, v_75);
                                                                                                                            ;
                                                                                                                            LocalPopChoice(w_18);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            t = v_18;
                                                                                                                            {
                                                                                                                              ATerm i_76 = NULL,j_76 = NULL;
                                                                                                                              t = b_148;
                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                              j_76 = t;
                                                                                                                              t = p_147;
                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                              i_76 = t;
                                                                                                                              t = SSL_addi(j_76, i_76);
                                                                                                                            }
                                                                                                                          }
                                                                                                                      }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(t, "\"SSL_is_int\""))
                                                                                                                        {
                                                                                                                          ATerm c_77 = NULL;
                                                                                                                          t = a_148;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                            {
                                                                                                                              b_148 = ATgetFirst((ATermList) t);
                                                                                                                              c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            _fail(t);
                                                                                                                          t = c_148;
                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                            _fail(t);
                                                                                                                          t = b_148;
                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                          c_77 = t;
                                                                                                                          t = SSL_is_int(c_77);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(t, "\"SSL_real\""))
                                                                                                                            {
                                                                                                                              ATerm r_77 = NULL;
                                                                                                                              t = a_148;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                {
                                                                                                                                  b_148 = ATgetFirst((ATermList) t);
                                                                                                                                  c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                _fail(t);
                                                                                                                              t = c_148;
                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                _fail(t);
                                                                                                                              t = b_148;
                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                              r_77 = t;
                                                                                                                              t = SSL_real(r_77);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(t, "\"SSL_string_to_real\""))
                                                                                                                                {
                                                                                                                                  ATerm a_78 = NULL;
                                                                                                                                  t = a_148;
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                    {
                                                                                                                                      b_148 = ATgetFirst((ATermList) t);
                                                                                                                                      c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    _fail(t);
                                                                                                                                  t = c_148;
                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                    _fail(t);
                                                                                                                                  t = b_148;
                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                  a_78 = t;
                                                                                                                                  t = SSL_string_to_real(a_78);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(t, "\"SSL_real_to_string\""))
                                                                                                                                    {
                                                                                                                                      ATerm j_78 = NULL;
                                                                                                                                      t = a_148;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                        {
                                                                                                                                          b_148 = ATgetFirst((ATermList) t);
                                                                                                                                          c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        _fail(t);
                                                                                                                                      t = c_148;
                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                        _fail(t);
                                                                                                                                      t = b_148;
                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                      j_78 = t;
                                                                                                                                      t = SSL_real_to_string(j_78);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(t, "\"SSL_atan2\""))
                                                                                                                                        {
                                                                                                                                          ATerm u_78 = NULL,v_78 = NULL;
                                                                                                                                          t = a_148;
                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                            {
                                                                                                                                              b_148 = ATgetFirst((ATermList) t);
                                                                                                                                              c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            _fail(t);
                                                                                                                                          t = c_148;
                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                            {
                                                                                                                                              p_147 = ATgetFirst((ATermList) t);
                                                                                                                                              q_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            _fail(t);
                                                                                                                                          t = q_147;
                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                            _fail(t);
                                                                                                                                          t = b_148;
                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                          v_78 = t;
                                                                                                                                          t = p_147;
                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                          u_78 = t;
                                                                                                                                          t = SSL_atan2(v_78, u_78);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(t, "\"SSL_sqrt\""))
                                                                                                                                            {
                                                                                                                                              ATerm f_79 = NULL;
                                                                                                                                              t = a_148;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                {
                                                                                                                                                  b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                  c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                _fail(t);
                                                                                                                                              t = c_148;
                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                _fail(t);
                                                                                                                                              t = b_148;
                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                              f_79 = t;
                                                                                                                                              t = SSL_sqrt(f_79);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_string(t, "\"SSL_sin\""))
                                                                                                                                                {
                                                                                                                                                  ATerm o_79 = NULL;
                                                                                                                                                  t = a_148;
                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                    {
                                                                                                                                                      b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                      c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    _fail(t);
                                                                                                                                                  t = c_148;
                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                    _fail(t);
                                                                                                                                                  t = b_148;
                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                  o_79 = t;
                                                                                                                                                  t = SSL_sin(o_79);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  if(match_string(t, "\"SSL_cos\""))
                                                                                                                                                    {
                                                                                                                                                      ATerm x_79 = NULL;
                                                                                                                                                      t = a_148;
                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                        {
                                                                                                                                                          b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                          c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        _fail(t);
                                                                                                                                                      t = c_148;
                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                        _fail(t);
                                                                                                                                                      t = b_148;
                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                      x_79 = t;
                                                                                                                                                      t = SSL_cos(x_79);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      if(match_string(t, "\"SSL_is_real\""))
                                                                                                                                                        {
                                                                                                                                                          ATerm g_80 = NULL;
                                                                                                                                                          t = a_148;
                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                            {
                                                                                                                                                              b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                              c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            _fail(t);
                                                                                                                                                          t = c_148;
                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                            _fail(t);
                                                                                                                                                          t = b_148;
                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                          g_80 = t;
                                                                                                                                                          t = SSL_is_real(g_80);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          if(match_string(t, "\"SSL_open_file\""))
                                                                                                                                                            {
                                                                                                                                                              ATerm r_80 = NULL,s_80 = NULL;
                                                                                                                                                              t = a_148;
                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                {
                                                                                                                                                                  b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                  c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                _fail(t);
                                                                                                                                                              t = c_148;
                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                {
                                                                                                                                                                  p_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                  q_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                _fail(t);
                                                                                                                                                              t = q_147;
                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                _fail(t);
                                                                                                                                                              t = b_148;
                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                              s_80 = t;
                                                                                                                                                              t = p_147;
                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                              r_80 = t;
                                                                                                                                                              t = SSL_open_file(s_80, r_80);
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            {
                                                                                                                                                              if(match_string(t, "\"SSL_close_file\""))
                                                                                                                                                                {
                                                                                                                                                                  ATerm c_81 = NULL;
                                                                                                                                                                  t = a_148;
                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                    {
                                                                                                                                                                      b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                      c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                    }
                                                                                                                                                                  else
                                                                                                                                                                    _fail(t);
                                                                                                                                                                  t = c_148;
                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                    _fail(t);
                                                                                                                                                                  t = b_148;
                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                  c_81 = t;
                                                                                                                                                                  t = SSL_close_file(c_81);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                {
                                                                                                                                                                  if(match_string(t, "SSL_pipe"))
                                                                                                                                                                    {
                                                                                                                                                                      t = a_148;
                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                        _fail(t);
                                                                                                                                                                      t = SSL_pipe();
                                                                                                                                                                    }
                                                                                                                                                                  else
                                                                                                                                                                    {
                                                                                                                                                                      if(match_string(t, "\"SSL_fileno\""))
                                                                                                                                                                        {
                                                                                                                                                                          ATerm n_81 = NULL;
                                                                                                                                                                          t = a_148;
                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                            {
                                                                                                                                                                              b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                              c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                            }
                                                                                                                                                                          else
                                                                                                                                                                            _fail(t);
                                                                                                                                                                          t = c_148;
                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                            _fail(t);
                                                                                                                                                                          t = b_148;
                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                          n_81 = t;
                                                                                                                                                                          t = SSL_fileno(n_81);
                                                                                                                                                                        }
                                                                                                                                                                      else
                                                                                                                                                                        {
                                                                                                                                                                          if(match_string(t, "\"SSL_fdopen\""))
                                                                                                                                                                            {
                                                                                                                                                                              ATerm y_81 = NULL,z_81 = NULL;
                                                                                                                                                                              t = a_148;
                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                {
                                                                                                                                                                                  b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                  c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                }
                                                                                                                                                                              else
                                                                                                                                                                                _fail(t);
                                                                                                                                                                              t = c_148;
                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                {
                                                                                                                                                                                  p_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                  q_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                }
                                                                                                                                                                              else
                                                                                                                                                                                _fail(t);
                                                                                                                                                                              t = q_147;
                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                _fail(t);
                                                                                                                                                                              t = b_148;
                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                              z_81 = t;
                                                                                                                                                                              t = p_147;
                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                              y_81 = t;
                                                                                                                                                                              t = SSL_fdopen(z_81, y_81);
                                                                                                                                                                            }
                                                                                                                                                                          else
                                                                                                                                                                            {
                                                                                                                                                                              if(match_string(t, "\"SSL_access\""))
                                                                                                                                                                                {
                                                                                                                                                                                  ATerm l_82 = NULL,m_82 = NULL;
                                                                                                                                                                                  t = a_148;
                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                    {
                                                                                                                                                                                      b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                      c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                    }
                                                                                                                                                                                  else
                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                  t = c_148;
                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                    {
                                                                                                                                                                                      p_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                      q_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                    }
                                                                                                                                                                                  else
                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                  t = q_147;
                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                  t = b_148;
                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                  m_82 = t;
                                                                                                                                                                                  t = p_147;
                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                  l_82 = t;
                                                                                                                                                                                  t = SSL_access(m_82, l_82);
                                                                                                                                                                                }
                                                                                                                                                                              else
                                                                                                                                                                                {
                                                                                                                                                                                  if(match_string(t, "\"SSL_dup2\""))
                                                                                                                                                                                    {
                                                                                                                                                                                      ATerm y_82 = NULL,z_82 = NULL;
                                                                                                                                                                                      t = a_148;
                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                        {
                                                                                                                                                                                          b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                          c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                        }
                                                                                                                                                                                      else
                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                      t = c_148;
                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                        {
                                                                                                                                                                                          p_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                          q_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                        }
                                                                                                                                                                                      else
                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                      t = q_147;
                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                      t = b_148;
                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                      z_82 = t;
                                                                                                                                                                                      t = p_147;
                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                      y_82 = t;
                                                                                                                                                                                      t = SSL_dup2(z_82, y_82);
                                                                                                                                                                                    }
                                                                                                                                                                                  else
                                                                                                                                                                                    {
                                                                                                                                                                                      if(match_string(t, "\"SSL_dup\""))
                                                                                                                                                                                        {
                                                                                                                                                                                          ATerm j_83 = NULL;
                                                                                                                                                                                          t = a_148;
                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                            {
                                                                                                                                                                                              b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                              c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                            }
                                                                                                                                                                                          else
                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                          t = c_148;
                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                          t = b_148;
                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                          j_83 = t;
                                                                                                                                                                                          t = SSL_dup(j_83);
                                                                                                                                                                                        }
                                                                                                                                                                                      else
                                                                                                                                                                                        {
                                                                                                                                                                                          if(match_string(t, "\"SSL_close\""))
                                                                                                                                                                                            {
                                                                                                                                                                                              ATerm s_83 = NULL;
                                                                                                                                                                                              t = a_148;
                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                {
                                                                                                                                                                                                  b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                  c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                }
                                                                                                                                                                                              else
                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                              t = c_148;
                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                              t = b_148;
                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                              s_83 = t;
                                                                                                                                                                                              t = SSL_close(s_83);
                                                                                                                                                                                            }
                                                                                                                                                                                          else
                                                                                                                                                                                            {
                                                                                                                                                                                              if(match_string(t, "\"SSL_mkstemp\""))
                                                                                                                                                                                                {
                                                                                                                                                                                                  ATerm b_84 = NULL;
                                                                                                                                                                                                  t = a_148;
                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                    {
                                                                                                                                                                                                      b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                      c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                    }
                                                                                                                                                                                                  else
                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                  t = c_148;
                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                  t = b_148;
                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                  b_84 = t;
                                                                                                                                                                                                  t = SSL_mkstemp(b_84);
                                                                                                                                                                                                }
                                                                                                                                                                                              else
                                                                                                                                                                                                {
                                                                                                                                                                                                  if(match_string(t, "\"SSL_open\""))
                                                                                                                                                                                                    {
                                                                                                                                                                                                      ATerm k_84 = NULL;
                                                                                                                                                                                                      t = a_148;
                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                        {
                                                                                                                                                                                                          b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                          c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                        }
                                                                                                                                                                                                      else
                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                      t = c_148;
                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                      t = b_148;
                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                      k_84 = t;
                                                                                                                                                                                                      t = SSL_open(k_84);
                                                                                                                                                                                                    }
                                                                                                                                                                                                  else
                                                                                                                                                                                                    {
                                                                                                                                                                                                      if(match_string(t, "\"SSL_creat\""))
                                                                                                                                                                                                        {
                                                                                                                                                                                                          ATerm t_84 = NULL;
                                                                                                                                                                                                          t = a_148;
                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                            {
                                                                                                                                                                                                              b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                              c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                            }
                                                                                                                                                                                                          else
                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                          t = c_148;
                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                          t = b_148;
                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                          t_84 = t;
                                                                                                                                                                                                          t = SSL_creat(t_84);
                                                                                                                                                                                                        }
                                                                                                                                                                                                      else
                                                                                                                                                                                                        {
                                                                                                                                                                                                          if(match_string(t, "SSL_P_tmpdir"))
                                                                                                                                                                                                            {
                                                                                                                                                                                                              t = a_148;
                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                              t = SSL_P_tmpdir();
                                                                                                                                                                                                            }
                                                                                                                                                                                                          else
                                                                                                                                                                                                            {
                                                                                                                                                                                                              if(match_string(t, "SSL_STDERR_FILENO"))
                                                                                                                                                                                                                {
                                                                                                                                                                                                                  t = a_148;
                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                  t = SSL_STDERR_FILENO();
                                                                                                                                                                                                                }
                                                                                                                                                                                                              else
                                                                                                                                                                                                                {
                                                                                                                                                                                                                  if(match_string(t, "SSL_STDOUT_FILENO"))
                                                                                                                                                                                                                    {
                                                                                                                                                                                                                      t = a_148;
                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                      t = SSL_STDOUT_FILENO();
                                                                                                                                                                                                                    }
                                                                                                                                                                                                                  else
                                                                                                                                                                                                                    {
                                                                                                                                                                                                                      if(match_string(t, "SSL_STDIN_FILENO"))
                                                                                                                                                                                                                        {
                                                                                                                                                                                                                          t = a_148;
                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                          t = SSL_STDIN_FILENO();
                                                                                                                                                                                                                        }
                                                                                                                                                                                                                      else
                                                                                                                                                                                                                        {
                                                                                                                                                                                                                          if(match_string(t, "\"SSL_fgetc\""))
                                                                                                                                                                                                                            {
                                                                                                                                                                                                                              ATerm k_85 = NULL;
                                                                                                                                                                                                                              t = a_148;
                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                  b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                  c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                }
                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                              t = c_148;
                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                              t = b_148;
                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                              k_85 = t;
                                                                                                                                                                                                                              t = SSL_fgetc(k_85);
                                                                                                                                                                                                                            }
                                                                                                                                                                                                                          else
                                                                                                                                                                                                                            {
                                                                                                                                                                                                                              if(match_string(t, "\"SSL_fputc\""))
                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                  ATerm v_85 = NULL,w_85 = NULL;
                                                                                                                                                                                                                                  t = a_148;
                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                      b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                      c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                  t = c_148;
                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                      p_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                      q_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                  t = q_147;
                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                  t = b_148;
                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                  w_85 = t;
                                                                                                                                                                                                                                  t = p_147;
                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                  v_85 = t;
                                                                                                                                                                                                                                  t = SSL_fputc(w_85, v_85);
                                                                                                                                                                                                                                }
                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_puts\""))
                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                      ATerm g_86 = NULL;
                                                                                                                                                                                                                                      t = a_148;
                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                          b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                          c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                      t = c_148;
                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                      t = b_148;
                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                      g_86 = t;
                                                                                                                                                                                                                                      t = SSL_puts(g_86);
                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_fputs\""))
                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                          ATerm r_86 = NULL,s_86 = NULL;
                                                                                                                                                                                                                                          t = a_148;
                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                              b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                              c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                          t = c_148;
                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                              p_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                              q_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                          t = q_147;
                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                          t = b_148;
                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                          s_86 = t;
                                                                                                                                                                                                                                          t = p_147;
                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                          r_86 = t;
                                                                                                                                                                                                                                          t = SSL_fputs(s_86, r_86);
                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_fflush\""))
                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                              t = a_148;
                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                  b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                  c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                              t = c_148;
                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                                ATerm x_18 = t;
                                                                                                                                                                                                                                                int y_18 = stack_ptr;
                                                                                                                                                                                                                                                if((PushChoice() == 0))
                                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                                    ATerm c_87 = NULL;
                                                                                                                                                                                                                                                    t = b_148;
                                                                                                                                                                                                                                                    t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                    c_87 = t;
                                                                                                                                                                                                                                                    t = SSL_fflush(c_87);
                                                                                                                                                                                                                                                    ;
                                                                                                                                                                                                                                                    LocalPopChoice(y_18);
                                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                                else
                                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                                    t = x_18;
                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                      ATerm l_87 = NULL;
                                                                                                                                                                                                                                                      t = b_148;
                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                      l_87 = t;
                                                                                                                                                                                                                                                      t = SSL_fflush(l_87);
                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                              }
                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                              if(match_string(t, "\"SSL_fclose\""))
                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                  t = a_148;
                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                      b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                      c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                  t = c_148;
                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                                    ATerm z_18 = t;
                                                                                                                                                                                                                                                    int a_19 = stack_ptr;
                                                                                                                                                                                                                                                    if((PushChoice() == 0))
                                                                                                                                                                                                                                                      {
                                                                                                                                                                                                                                                        ATerm u_87 = NULL;
                                                                                                                                                                                                                                                        t = b_148;
                                                                                                                                                                                                                                                        t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                        u_87 = t;
                                                                                                                                                                                                                                                        t = SSL_fclose(u_87);
                                                                                                                                                                                                                                                        ;
                                                                                                                                                                                                                                                        LocalPopChoice(a_19);
                                                                                                                                                                                                                                                      }
                                                                                                                                                                                                                                                    else
                                                                                                                                                                                                                                                      {
                                                                                                                                                                                                                                                        t = z_18;
                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                          ATerm d_88 = NULL;
                                                                                                                                                                                                                                                          t = b_148;
                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                          d_88 = t;
                                                                                                                                                                                                                                                          t = SSL_fclose(d_88);
                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                      }
                                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_fopen\""))
                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                      ATerm o_88 = NULL,p_88 = NULL;
                                                                                                                                                                                                                                                      t = a_148;
                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                          b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                          c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                      t = c_148;
                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                          p_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                          q_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                      t = q_147;
                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                      t = b_148;
                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                      p_88 = t;
                                                                                                                                                                                                                                                      t = p_147;
                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                      o_88 = t;
                                                                                                                                                                                                                                                      t = SSL_fopen(p_88, o_88);
                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                      if(match_string(t, "SSL_stderr_stream"))
                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                          t = a_148;
                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                          t = SSL_stderr_stream();
                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                          if(match_string(t, "SSL_stdout_stream"))
                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                              t = a_148;
                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                              t = SSL_stdout_stream();
                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                              if(match_string(t, "SSL_stdin_stream"))
                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                  t = a_148;
                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                  t = SSL_stdin_stream();
                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_setenv\""))
                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                      ATerm j_89 = NULL,k_89 = NULL,l_89 = NULL;
                                                                                                                                                                                                                                                                      t = a_148;
                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                          b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                          c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                      t = c_148;
                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                          p_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                          q_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                      t = q_147;
                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                          r_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                          s_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                      t = s_147;
                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                      t = b_148;
                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                      l_89 = t;
                                                                                                                                                                                                                                                                      t = p_147;
                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                      k_89 = t;
                                                                                                                                                                                                                                                                      t = r_147;
                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                      j_89 = t;
                                                                                                                                                                                                                                                                      t = SSL_setenv(l_89, k_89, j_89);
                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_getenv\""))
                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                          ATerm w_89 = NULL;
                                                                                                                                                                                                                                                                          t = a_148;
                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                              b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                              c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                          t = c_148;
                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                          t = b_148;
                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                          w_89 = t;
                                                                                                                                                                                                                                                                          t = SSL_getenv(w_89);
                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_remove\""))
                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                              ATerm f_90 = NULL;
                                                                                                                                                                                                                                                                              t = a_148;
                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                  b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                  c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                              t = c_148;
                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                              t = b_148;
                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                              f_90 = t;
                                                                                                                                                                                                                                                                              t = SSL_remove(f_90);
                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                              if(match_string(t, "\"SSL_link\""))
                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                  ATerm q_90 = NULL,r_90 = NULL;
                                                                                                                                                                                                                                                                                  t = a_148;
                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                      b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                      c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                  t = c_148;
                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                      p_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                      q_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                  t = q_147;
                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                  t = b_148;
                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                  r_90 = t;
                                                                                                                                                                                                                                                                                  t = p_147;
                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                  q_90 = t;
                                                                                                                                                                                                                                                                                  t = SSL_link(r_90, q_90);
                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_fdcopy\""))
                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                      ATerm d_91 = NULL,e_91 = NULL;
                                                                                                                                                                                                                                                                                      t = a_148;
                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                          b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                          c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                      t = c_148;
                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                          p_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                          q_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                      t = q_147;
                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                      t = b_148;
                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                      e_91 = t;
                                                                                                                                                                                                                                                                                      t = p_147;
                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                      d_91 = t;
                                                                                                                                                                                                                                                                                      t = SSL_fdcopy(e_91, d_91);
                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_copy\""))
                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                          ATerm q_91 = NULL,r_91 = NULL;
                                                                                                                                                                                                                                                                                          t = a_148;
                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                              b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                              c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                          t = c_148;
                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                              p_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                              q_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                          t = q_147;
                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                          t = b_148;
                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                          r_91 = t;
                                                                                                                                                                                                                                                                                          t = p_147;
                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                          q_91 = t;
                                                                                                                                                                                                                                                                                          t = SSL_copy(r_91, q_91);
                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_rename\""))
                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                              ATerm d_92 = NULL,e_92 = NULL;
                                                                                                                                                                                                                                                                                              t = a_148;
                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                  b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                  c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                              t = c_148;
                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                  p_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                  q_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                              t = q_147;
                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                              t = b_148;
                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                              e_92 = t;
                                                                                                                                                                                                                                                                                              t = p_147;
                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                              d_92 = t;
                                                                                                                                                                                                                                                                                              t = SSL_rename(e_92, d_92);
                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                              if(match_string(t, "\"SSL_modification_time\""))
                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                  ATerm o_92 = NULL;
                                                                                                                                                                                                                                                                                                  t = a_148;
                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                      b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                      c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                  t = c_148;
                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                  t = b_148;
                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                  o_92 = t;
                                                                                                                                                                                                                                                                                                  t = SSL_modification_time(o_92);
                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_readdir\""))
                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                      ATerm z_92 = NULL;
                                                                                                                                                                                                                                                                                                      t = a_148;
                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                          b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                          c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                      t = c_148;
                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                      t = b_148;
                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                      z_92 = t;
                                                                                                                                                                                                                                                                                                      t = SSL_readdir(z_92);
                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_getchar\""))
                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                          ATerm i_93 = NULL;
                                                                                                                                                                                                                                                                                                          t = a_148;
                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                              b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                              c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                          t = c_148;
                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                          t = b_148;
                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                          i_93 = t;
                                                                                                                                                                                                                                                                                                          t = SSL_getchar(i_93);
                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_printascii\""))
                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                              ATerm t_93 = NULL,u_93 = NULL;
                                                                                                                                                                                                                                                                                                              t = a_148;
                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                  b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                  c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                              t = c_148;
                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                  p_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                  q_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                              t = q_147;
                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                              t = b_148;
                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                              u_93 = t;
                                                                                                                                                                                                                                                                                                              t = p_147;
                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                              t_93 = t;
                                                                                                                                                                                                                                                                                                              t = SSL_printascii(u_93, t_93);
                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                              if(match_string(t, "\"SSL_printnl\""))
                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                  ATerm g_94 = NULL,h_94 = NULL;
                                                                                                                                                                                                                                                                                                                  t = a_148;
                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                      b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                      c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                  t = c_148;
                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                      p_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                      q_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                  t = q_147;
                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                  t = b_148;
                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                  h_94 = t;
                                                                                                                                                                                                                                                                                                                  t = p_147;
                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                  g_94 = t;
                                                                                                                                                                                                                                                                                                                  t = SSL_printnl(h_94, g_94);
                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_print\""))
                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                      ATerm t_94 = NULL,u_94 = NULL;
                                                                                                                                                                                                                                                                                                                      t = a_148;
                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                          b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                          c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                      t = c_148;
                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                          p_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                          q_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                      t = q_147;
                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                      t = b_148;
                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                      u_94 = t;
                                                                                                                                                                                                                                                                                                                      t = p_147;
                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                      t_94 = t;
                                                                                                                                                                                                                                                                                                                      t = SSL_print(u_94, t_94);
                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_read_term_from_stream\""))
                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                          ATerm e_95 = NULL;
                                                                                                                                                                                                                                                                                                                          t = a_148;
                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                              b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                              c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                          t = c_148;
                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                          t = b_148;
                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                          e_95 = t;
                                                                                                                                                                                                                                                                                                                          t = SSL_read_term_from_stream(e_95);
                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_write_term_to_stream_text\""))
                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                              ATerm p_95 = NULL,q_95 = NULL;
                                                                                                                                                                                                                                                                                                                              t = a_148;
                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                  b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                  c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                              t = c_148;
                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                  p_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                  q_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                              t = q_147;
                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                              t = b_148;
                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                              q_95 = t;
                                                                                                                                                                                                                                                                                                                              t = p_147;
                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                              p_95 = t;
                                                                                                                                                                                                                                                                                                                              t = SSL_write_term_to_stream_text(q_95, p_95);
                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                              if(match_string(t, "\"SSL_write_term_to_stream_taf\""))
                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                  ATerm c_96 = NULL,d_96 = NULL;
                                                                                                                                                                                                                                                                                                                                  t = a_148;
                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                      b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                      c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                  t = c_148;
                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                      p_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                      q_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                  t = q_147;
                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                  t = b_148;
                                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                  d_96 = t;
                                                                                                                                                                                                                                                                                                                                  t = p_147;
                                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                  c_96 = t;
                                                                                                                                                                                                                                                                                                                                  t = SSL_write_term_to_stream_taf(d_96, c_96);
                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_write_term_to_stream_baf\""))
                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                      ATerm p_96 = NULL,q_96 = NULL;
                                                                                                                                                                                                                                                                                                                                      t = a_148;
                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                          b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                          c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                      t = c_148;
                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                          p_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                          q_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                      t = q_147;
                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                      t = b_148;
                                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                      q_96 = t;
                                                                                                                                                                                                                                                                                                                                      t = p_147;
                                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                      p_96 = t;
                                                                                                                                                                                                                                                                                                                                      t = SSL_write_term_to_stream_baf(q_96, p_96);
                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_pipe_term_to_child\""))
                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                          ATerm e_97 = NULL,f_97 = NULL,g_97 = NULL;
                                                                                                                                                                                                                                                                                                                                          t = a_148;
                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                              b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                              c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                          t = c_148;
                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                              p_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                              q_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                          t = q_147;
                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                              r_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                              s_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                          t = s_147;
                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                          t = b_148;
                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                          g_97 = t;
                                                                                                                                                                                                                                                                                                                                          t = p_147;
                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                          f_97 = t;
                                                                                                                                                                                                                                                                                                                                          t = r_147;
                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                          e_97 = t;
                                                                                                                                                                                                                                                                                                                                          t = SSL_pipe_term_to_child(g_97, f_97, e_97);
                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_kill\""))
                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                              ATerm u_97 = NULL,v_97 = NULL;
                                                                                                                                                                                                                                                                                                                                              t = a_148;
                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                  b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                  c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                              t = c_148;
                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                  p_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                  q_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                              t = q_147;
                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                              t = b_148;
                                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                              v_97 = t;
                                                                                                                                                                                                                                                                                                                                              t = p_147;
                                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                              u_97 = t;
                                                                                                                                                                                                                                                                                                                                              t = SSL_kill(v_97, u_97);
                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                              if(match_string(t, "\"SSL_exit\""))
                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                  ATerm f_98 = NULL;
                                                                                                                                                                                                                                                                                                                                                  t = a_148;
                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                      b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                      c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                  t = c_148;
                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                  t = b_148;
                                                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                  f_98 = t;
                                                                                                                                                                                                                                                                                                                                                  t = SSL_exit(f_98);
                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_waitpid\""))
                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                      ATerm o_98 = NULL;
                                                                                                                                                                                                                                                                                                                                                      t = a_148;
                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                          b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                          c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                      t = c_148;
                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                      t = b_148;
                                                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                      o_98 = t;
                                                                                                                                                                                                                                                                                                                                                      t = SSL_waitpid(o_98);
                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_execvp\""))
                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                          ATerm z_98 = NULL,a_99 = NULL;
                                                                                                                                                                                                                                                                                                                                                          t = a_148;
                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                              b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                              c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                          t = c_148;
                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                              p_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                              q_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                          t = q_147;
                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                          t = b_148;
                                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                          a_99 = t;
                                                                                                                                                                                                                                                                                                                                                          t = p_147;
                                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                          z_98 = t;
                                                                                                                                                                                                                                                                                                                                                          t = SSL_execvp(a_99, z_98);
                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                          if(match_string(t, "SSL_fork"))
                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                              t = a_148;
                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                              t = SSL_fork();
                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                              if(match_string(t, "SSL_get_pid"))
                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                  t = a_148;
                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                  t = SSL_get_pid();
                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_TicksToSeconds\""))
                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                      ATerm o_99 = NULL;
                                                                                                                                                                                                                                                                                                                                                                      t = a_148;
                                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                          b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                          c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                                      t = c_148;
                                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                                      t = b_148;
                                                                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                      o_99 = t;
                                                                                                                                                                                                                                                                                                                                                                      t = SSL_TicksToSeconds(o_99);
                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                      if(match_string(t, "SSL_times"))
                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                          t = a_148;
                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                          t = SSL_times();
                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                          if(match_string(t, "SSL_clock"))
                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                              t = a_148;
                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                              t = SSL_clock();
                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                              if(match_string(t, "\"SSL_ClockToSeconds\""))
                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                  ATerm b_100 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                  t = a_148;
                                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                      b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                      c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                  t = c_148;
                                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                  t = b_148;
                                                                                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                  b_100 = t;
                                                                                                                                                                                                                                                                                                                                                                                  t = SSL_ClockToSeconds(b_100);
                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                  if(match_string(t, "SSL_dtime"))
                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                      t = a_148;
                                                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                      t = SSL_dtime();
                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_epoch2UTC\""))
                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                          t = a_148;
                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                              b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                              c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                          t = c_148;
                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                          {
                                                                                                                                                                                                                                                                                                                                                                                            ATerm b_19 = t;
                                                                                                                                                                                                                                                                                                                                                                                            int c_19 = stack_ptr;
                                                                                                                                                                                                                                                                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                                                                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                                                                                                                                                                                ATerm m_100 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                t = b_148;
                                                                                                                                                                                                                                                                                                                                                                                                t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                m_100 = t;
                                                                                                                                                                                                                                                                                                                                                                                                t = SSL_epoch2UTC(m_100);
                                                                                                                                                                                                                                                                                                                                                                                                ;
                                                                                                                                                                                                                                                                                                                                                                                                LocalPopChoice(c_19);
                                                                                                                                                                                                                                                                                                                                                                                              }
                                                                                                                                                                                                                                                                                                                                                                                            else
                                                                                                                                                                                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                                                                                                                                                                                t = b_19;
                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                  ATerm v_100 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                  t = b_148;
                                                                                                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                  v_100 = t;
                                                                                                                                                                                                                                                                                                                                                                                                  t = SSL_epoch2UTC(v_100);
                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                              }
                                                                                                                                                                                                                                                                                                                                                                                          }
                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_epoch2localtime\""))
                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                              ATerm e_101 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                              t = a_148;
                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                  b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                  c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                              t = c_148;
                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                              t = b_148;
                                                                                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                              e_101 = t;
                                                                                                                                                                                                                                                                                                                                                                                              t = SSL_epoch2localtime(e_101);
                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                              if(match_string(t, "SSL_now_epoch_time"))
                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                  t = a_148;
                                                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                  t = SSL_now_epoch_time();
                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                  if(match_string(t, "SSL_time"))
                                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                                      t = a_148;
                                                                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                      t = SSL_time();
                                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_table_rename\""))
                                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                                          ATerm t_101 = NULL,u_101 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                          t = a_148;
                                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                              b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                              c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                          t = c_148;
                                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                              p_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                              q_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                          t = q_147;
                                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                          t = b_148;
                                                                                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                          u_101 = t;
                                                                                                                                                                                                                                                                                                                                                                                                          t = p_147;
                                                                                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                          t_101 = t;
                                                                                                                                                                                                                                                                                                                                                                                                          t = SSL_table_rename(u_101, t_101);
                                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_table_keys\""))
                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                              ATerm e_102 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                              t = a_148;
                                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                                  b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                  c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                              t = c_148;
                                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                              t = b_148;
                                                                                                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                              e_102 = t;
                                                                                                                                                                                                                                                                                                                                                                                                              t = SSL_table_keys(e_102);
                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                              if(match_string(t, "\"SSL_table_remove\""))
                                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                                  ATerm p_102 = NULL,q_102 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                                  t = a_148;
                                                                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                                                      b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                      c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                  t = c_148;
                                                                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                                                      p_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                      q_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                  t = q_147;
                                                                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                  t = b_148;
                                                                                                                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                  q_102 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                  t = p_147;
                                                                                                                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                  p_102 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                  t = SSL_table_remove(q_102, p_102);
                                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_table_get\""))
                                                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                                                      ATerm d_103 = NULL,e_103 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                                      t = a_148;
                                                                                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                                                          b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                          c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                      t = c_148;
                                                                                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                                                          p_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                          q_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                      t = q_147;
                                                                                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                      t = b_148;
                                                                                                                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                      e_103 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                      t = p_147;
                                                                                                                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                      d_103 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                      t = SSL_table_get(e_103, d_103);
                                                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_table_put\""))
                                                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                                                          ATerm s_103 = NULL,t_103 = NULL,u_103 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                                          t = a_148;
                                                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                                              b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                              c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                          t = c_148;
                                                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                                              p_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                              q_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                          t = q_147;
                                                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                                              r_147 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                              s_147 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                          t = s_147;
                                                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                          t = b_148;
                                                                                                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                          u_103 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                          t = p_147;
                                                                                                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                          t_103 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                          t = r_147;
                                                                                                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                          s_103 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                          t = SSL_table_put(u_103, t_103, s_103);
                                                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_table_destroy\""))
                                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                                              ATerm f_104 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                                              t = a_148;
                                                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                                                  b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                                  c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                              t = c_148;
                                                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                              t = b_148;
                                                                                                                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                              f_104 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                              t = SSL_table_destroy(f_104);
                                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                                              ATerm o_104 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                                              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("\"SSL_table_create\"", 0, ATtrue)))
                                                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                              t = a_148;
                                                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                                                  b_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                                  c_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                              t = c_148;
                                                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                              t = b_148;
                                                                                                                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                              o_104 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                              t = SSL_table_create(o_104);
                                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                }
                                                                                                                                                                                                                            }
                                                                                                                                                                                                                        }
                                                                                                                                                                                                                    }
                                                                                                                                                                                                                }
                                                                                                                                                                                                            }
                                                                                                                                                                                                        }
                                                                                                                                                                                                    }
                                                                                                                                                                                                }
                                                                                                                                                                                            }
                                                                                                                                                                                        }
                                                                                                                                                                                    }
                                                                                                                                                                                }
                                                                                                                                                                            }
                                                                                                                                                                        }
                                                                                                                                                                    }
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
ATerm c_27 (ATerm t_74, ATerm u_74, ATerm t)
{
  t = SSL_mkterm(t_74, u_74);
  return(t);
}
ATerm EvalTerm_0_0 (ATerm t)
{
  ATerm v_156 = NULL,w_156 = NULL,x_156 = NULL;
  w_156 = t;
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
          ATerm u_104 = NULL,v_104 = NULL;
          t = term_u_17;
          v_104 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_u_17, w_156);
          t = h_28(v_104, w_156, t);
          u_104 = t;
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
            t = u_104;
          }
        }
      }
    else
      {
        t = i_19;
        if(match_cons(t, sym_Op_2))
          {
            x_156 = ATgetArgument(t, 0);
            v_156 = ATgetArgument(t, 1);
            {
              ATerm a_105 = NULL,d_105 = NULL,e_105 = NULL,g_105 = NULL,h_105 = NULL,i_105 = NULL,j_105 = NULL,o_107 = NULL,e_108 = NULL,z_7 = NULL;
              t = SSLgetAnnotations(w_156);
              a_105 = t;
              t = v_156;
              t = map_1_0(EvalTerm_0_0, t);
              d_105 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, x_156, d_105);
              z_7 = t;
              t = SSLsetAnnotations(z_7, a_105);
              e_105 = t;
              if(match_cons(t, sym_Op_2))
                {
                  o_107 = ATgetArgument(t, 0);
                  e_108 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = e_108;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  g_105 = ATgetFirst((ATermList) t);
                  h_105 = (ATerm) ATgetNext((ATermList) t);
                  t = h_105;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      i_105 = ATgetFirst((ATermList) t);
                      j_105 = (ATerm) ATgetNext((ATermList) t);
                      t = j_105;
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = o_107;
                          if(match_string(t, "Cons"))
                            {
                              ATerm m_19 = t;
                              int n_19 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATinsert(CheckATermList(i_105), g_105);
                                  ;
                                  LocalPopChoice(n_19);
                                }
                              else
                                {
                                  t = m_19;
                                  t = e_105;
                                  t = c_27(o_107, e_108, t);
                                }
                            }
                          else
                            {
                              t = e_105;
                              t = c_27(o_107, e_108, t);
                            }
                        }
                      else
                        {
                          t = e_105;
                          t = c_27(o_107, e_108, t);
                        }
                    }
                  else
                    {
                      t = e_105;
                      t = c_27(o_107, e_108, t);
                    }
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = o_107;
                      if(match_string(t, "Nil"))
                        {
                          t = (ATerm) ATempty;
                        }
                      else
                        {
                          t = e_105;
                          t = c_27(o_107, e_108, t);
                        }
                    }
                  else
                    {
                      t = e_105;
                      t = c_27(o_107, e_108, t);
                    }
                }
            }
          }
        else
          {
            if(match_cons(t, sym_Real_1))
              {
                x_156 = ATgetArgument(t, 0);
                t = x_156;
              }
            else
              {
                if(match_cons(t, sym_Str_1))
                  {
                    x_156 = ATgetArgument(t, 0);
                    t = x_156;
                  }
                else
                  {
                    if(match_cons(t, sym_Int_1))
                      {
                        x_156 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = x_156;
                  }
              }
          }
      }
  }
  return(t);
}
ATerm g_27 (ATerm z_55, ATerm a_56, ATerm b_56, ATerm t)
{
  ATerm e_157 = NULL,f_157 = NULL,g_157 = NULL;
  f_157 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_55, a_56);
  t = e_29(z_55, a_56, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm o_19 = ATgetFirst((ATermList) t);
      e_157 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_157), b_56);
  g_157 = t;
  t = SSL_table_put(z_55, a_56, g_157);
  t = f_157;
  return(t);
}
ATerm a_0 (ATerm t)
{
  t = term_p_19;
  return(t);
}
ATerm h_27 (ATerm n_75, ATerm o_75, ATerm t)
{
  ATerm j_157 = NULL;
  j_157 = t;
  {
    ATerm q_19 = t;
    int s_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_19;
        t = get_config_0_0(t);
        t = j_157;
        t = debug_1_0(a_0, t);
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
          ATerm n_157 = NULL,o_157 = NULL;
          t = term_u_17;
          n_157 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_u_17, n_75);
          t = h_28(n_157, n_75, t);
          o_157 = t;
          if(match_cons(t, sym_NULL_0))
            {
              ATerm w_19 = t;
              int x_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_157;
                  if((o_75 != t))
                    {
                      _fail(t);
                    }
                  t = o_157;
                  ;
                  LocalPopChoice(x_19);
                }
              else
                {
                  t = w_19;
                  {
                    ATerm p_157 = NULL;
                    t = term_u_17;
                    p_157 = t;
                    t = (ATerm) ATmakeAppl(sym__3, term_u_17, n_75, o_75);
                    t = g_27(p_157, n_75, o_75, t);
                  }
                }
            }
          else
            {
              t = o_157;
              if((o_75 != t))
                {
                  _fail(t);
                }
              t = o_157;
            }
          ;
          LocalPopChoice(v_19);
        }
      else
        {
          t = u_19;
          {
            ATerm q_157 = NULL;
            t = term_u_17;
            q_157 = t;
            t = (ATerm) ATmakeAppl(sym__3, term_u_17, n_75, o_75);
            t = f_29(q_157, n_75, o_75, t);
          }
        }
      t = (ATerm) ATmakeAppl(sym__2, n_75, o_75);
    }
  }
  return(t);
}
ATerm l_27 (ATerm w_134 (ATerm), ATerm k_59, ATerm l_59, ATerm i_59, ATerm j_59, ATerm t)
{
  t = k_59;
  t = w_134(t);
  t = j_59;
  {
    ATerm z_19 = t;
    if((PushChoice() == 0))
      {
        ATerm p_0 (ATerm t)
        {
          ATerm k_159 = NULL;
          if(match_cons(t, sym__2))
            {
              if((k_59 != ATgetArgument(t, 0)))
                {
                  _fail(ATgetArgument(t, 0));
                }
              k_159 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, l_59, k_159);
          {
            ATerm a_20 = t;
            if((PushChoice() == 0))
              {
                ATerm l_159 = NULL;
                if(match_cons(t, sym__2))
                  {
                    l_159 = ATgetArgument(t, 0);
                    if((l_159 != ATgetArgument(t, 1)))
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
        t = fetch_1_0(p_0, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_19;
      }
    t = (ATerm) ATmakeAppl(sym__2, i_59, (ATerm) ATinsert(CheckATermList(j_59), (ATerm) ATmakeAppl(sym__2, k_59, l_59)));
  }
  return(t);
}
ATerm q_0 (ATerm t)
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
ATerm s_0 (ATerm t)
{
  ATerm x_114 = NULL,z_114 = NULL,a_115 = NULL,b_115 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_20 = ATgetArgument(t, 0);
      if(((ATgetType(d_20) == AT_LIST) && !(ATisEmpty(d_20))))
        {
          x_114 = ATgetFirst((ATermList) d_20);
          z_114 = (ATerm) ATgetNext((ATermList) d_20);
        }
      else
        _fail(t);
      {
        ATerm e_20 = ATgetArgument(t, 1);
        if(((ATgetType(e_20) == AT_LIST) && !(ATisEmpty(e_20))))
          {
            a_115 = ATgetFirst((ATermList) e_20);
            b_115 = (ATerm) ATgetNext((ATermList) e_20);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_114, a_115), (ATerm) ATmakeAppl(sym__2, z_114, b_115));
  return(t);
}
ATerm t_0 (ATerm t)
{
  ATerm c_115 = NULL,n_115 = NULL;
  if(match_cons(t, sym__2))
    {
      c_115 = ATgetArgument(t, 0);
      n_115 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_115), c_115);
  return(t);
}
ATerm PatDecompose_0_0 (ATerm t)
{
  ATerm u_158 = NULL,v_158 = NULL,w_158 = NULL,x_158 = NULL,y_158 = NULL,z_158 = NULL,a_159 = NULL;
  u_158 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_158 = ATgetFirst((ATermList) t);
      a_159 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_158;
  if(match_cons(t, sym__2))
    {
      w_158 = ATgetArgument(t, 0);
      z_158 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_158;
  if(match_cons(t, sym_Real_1))
    {
      x_158 = ATgetArgument(t, 0);
      t = z_158;
      if((x_158 != t))
        {
          _fail(t);
        }
      t = a_159;
    }
  else
    {
      if(match_cons(t, sym_Str_1))
        {
          x_158 = ATgetArgument(t, 0);
          t = z_158;
          if((x_158 != t))
            {
              _fail(t);
            }
          t = a_159;
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              x_158 = ATgetArgument(t, 0);
              t = z_158;
              if((x_158 != t))
                {
                  _fail(t);
                }
              t = a_159;
            }
          else
            {
              ATerm j_114 = NULL,q_114 = NULL;
              if(match_cons(t, sym_Op_2))
                {
                  x_158 = ATgetArgument(t, 0);
                  y_158 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_explode_term(z_158);
              if(match_cons(t, sym__2))
                {
                  if((x_158 != ATgetArgument(t, 0)))
                    {
                      _fail(ATgetArgument(t, 0));
                    }
                  j_114 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, y_158, j_114);
              t = genzip_4_0(q_0, s_0, t_0, _id, t);
              q_114 = t;
              t = (ATerm) ATmakeAppl(sym__2, q_114, a_159);
              t = conc_0_0(t);
            }
        }
    }
  return(t);
}
ATerm w_0 (ATerm t)
{
  ATerm x_159 = NULL;
  x_159 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_159, (ATerm) ATempty);
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm y_159 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_20 = ATgetArgument(t, 0);
      if(((ATgetType(f_20) != AT_LIST) || !(ATisEmpty(f_20))))
        _fail(t);
      y_159 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_159;
  return(t);
}
ATerm j_1 (ATerm t)
{
  t = term_g_20;
  return(t);
}
ATerm d_162 (ATerm e_160, ATerm f_160, ATerm g_160, ATerm t)
{
  ATerm h_160 = NULL,k_160 = NULL,l_160 = NULL,b_8 = NULL;
  t = SSLgetAnnotations(e_160);
  h_160 = t;
  t = f_160;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm h_20 = ATgetFirst((ATermList) t);
      if(match_cons(h_20, sym__2))
        {
          k_160 = ATgetArgument(h_20, 0);
          if((k_160 != ATgetArgument(h_20, 1)))
            {
              _fail(ATgetArgument(h_20, 1));
            }
        }
      else
        _fail(t);
      l_160 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_160, g_160);
  b_8 = t;
  t = SSLsetAnnotations(b_8, h_160);
  return(t);
}
ATerm k_162 (ATerm p_160, ATerm q_160, ATerm r_160, ATerm t)
{
  ATerm s_160 = NULL,v_160 = NULL,c_8 = NULL;
  t = SSLgetAnnotations(p_160);
  s_160 = t;
  t = q_160;
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
      v_160 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_160, r_160);
  c_8 = t;
  t = SSLsetAnnotations(c_8, s_160);
  return(t);
}
ATerm m_162 (ATerm x_160, ATerm y_160, ATerm b_161, ATerm t)
{
  ATerm c_161 = NULL,f_161 = NULL,d_8 = NULL;
  t = SSLgetAnnotations(x_160);
  c_161 = t;
  t = y_160;
  t = PatDecompose_0_0(t);
  f_161 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_161, b_161);
  d_8 = t;
  t = SSLsetAnnotations(d_8, c_161);
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = term_m_20;
  return(t);
}
ATerm stratego_match_1_0 (ATerm o_137 (ATerm), ATerm t)
{
  ATerm i_1 (ATerm t)
  {
    ATerm x_161 = NULL,z_159 = NULL,h_161 = NULL,i_161 = NULL,l_161 = NULL,m_161 = NULL,n_161 = NULL,o_161 = NULL,p_161 = NULL;
    z_159 = t;
    {
      ATerm n_20 = t;
      int o_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_t_19;
          t = get_config_0_0(t);
          t = z_159;
          t = debug_1_0(j_1, t);
          ;
          LocalPopChoice(o_20);
        }
      else
        {
          t = n_20;
          t = z_159;
        }
      n_161 = t;
      if(match_cons(t, sym__2))
        {
          o_161 = ATgetArgument(t, 0);
          p_161 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = o_161;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_161 = ATgetFirst((ATermList) t);
          m_161 = (ATerm) ATgetNext((ATermList) t);
          t = h_161;
          if(match_cons(t, sym__2))
            {
              i_161 = ATgetArgument(t, 0);
              l_161 = ATgetArgument(t, 1);
              {
                ATerm p_20 = t;
                int q_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = d_162(n_161, o_161, p_161, t);
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
                          t = n_161;
                          t = l_27(o_137, i_161, l_161, m_161, p_161, t);
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
                                t = k_162(n_161, o_161, p_161, t);
                                ;
                                LocalPopChoice(u_20);
                              }
                            else
                              {
                                t = t_20;
                                t = m_162(n_161, o_161, p_161, t);
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
                  t = d_162(n_161, o_161, p_161, t);
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
                        t = k_162(n_161, o_161, p_161, t);
                        ;
                        LocalPopChoice(y_20);
                      }
                    else
                      {
                        t = x_20;
                        t = m_162(n_161, o_161, p_161, t);
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
              t = d_162(n_161, o_161, p_161, t);
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
                    t = k_162(n_161, o_161, p_161, t);
                    ;
                    LocalPopChoice(c_21);
                  }
                else
                  {
                    t = b_21;
                    t = m_162(n_161, o_161, p_161, t);
                  }
              }
            }
        }
      x_161 = t;
      {
        ATerm d_21 = t;
        int e_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_t_19;
            t = get_config_0_0(t);
            t = x_161;
            t = debug_1_0(l_1, t);
            ;
            LocalPopChoice(e_21);
          }
        else
          {
            t = d_21;
            t = x_161;
          }
      }
    }
    return(t);
  }
  t = for_3_0(w_0, e_1, i_1, t);
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm r_162 = NULL,v_162 = NULL,w_162 = NULL,h_8 = NULL;
  w_162 = t;
  if(match_cons(t, sym_Var_1))
    {
      v_162 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_162);
  r_162 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, v_162);
  h_8 = t;
  t = SSLsetAnnotations(h_8, r_162);
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = term_f_21;
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm d_163 = NULL,f_163 = NULL;
  if(match_cons(t, sym__2))
    {
      d_163 = ATgetArgument(t, 0);
      f_163 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_27(d_163, f_163, t);
  return(t);
}
ATerm n_27 (ATerm l_75, ATerm m_75, ATerm t)
{
  ATerm x_162 = NULL;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, l_75, m_75));
  t = stratego_match_1_0(m_1, t);
  x_162 = t;
  {
    ATerm g_21 = t;
    int h_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_19;
        t = get_config_0_0(t);
        t = x_162;
        t = debug_1_0(n_1, t);
        ;
        LocalPopChoice(h_21);
      }
    else
      {
        t = g_21;
        t = x_162;
      }
    t = map_1_0(o_1, t);
    t = m_75;
  }
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm h_163 = NULL,i_163 = NULL,j_163 = NULL,k_163 = NULL;
  h_163 = t;
  t = term_u_17;
  i_163 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, h_163);
  j_163 = t;
  t = term_i_21;
  k_163 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_u_17, (ATerm)ATmakeAppl(sym_Var_1, h_163), term_i_21);
  t = f_29(i_163, j_163, k_163, t);
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm l_163 = NULL,m_163 = NULL,p_163 = NULL;
  l_163 = t;
  t = term_u_17;
  m_163 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, l_163);
  p_163 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_17, (ATerm) ATmakeAppl(sym_Var_1, l_163));
  t = d_28(m_163, p_163, t);
  return(t);
}
ATerm o_27 (ATerm p_137 (ATerm), ATerm u_75, ATerm r_75, ATerm s_75, ATerm t)
{
  ATerm g_163 = NULL;
  t = u_75;
  t = map_1_0(s_1, t);
  t = (ATerm) ATmakeAppl(sym_App_2, r_75, s_75);
  t = p_137(t);
  g_163 = t;
  t = u_75;
  t = map_1_0(u_1, t);
  t = g_163;
  return(t);
}
ATerm w_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_21 = ATgetArgument(t, 0);
      if(((ATgetType(o_21) != AT_LIST) || !(ATisEmpty(o_21))))
        _fail(t);
      {
        ATerm p_21 = ATgetArgument(t, 1);
        if(((ATgetType(p_21) != AT_LIST) || !(ATisEmpty(p_21))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm t_163 = NULL,u_163 = NULL,v_163 = NULL,w_163 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_21 = ATgetArgument(t, 0);
      if(((ATgetType(q_21) == AT_LIST) && !(ATisEmpty(q_21))))
        {
          t_163 = ATgetFirst((ATermList) q_21);
          u_163 = (ATerm) ATgetNext((ATermList) q_21);
        }
      else
        _fail(t);
      {
        ATerm r_21 = ATgetArgument(t, 1);
        if(((ATgetType(r_21) == AT_LIST) && !(ATisEmpty(r_21))))
          {
            v_163 = ATgetFirst((ATermList) r_21);
            w_163 = (ATerm) ATgetNext((ATermList) r_21);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_163, v_163), (ATerm) ATmakeAppl(sym__2, u_163, w_163));
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm x_163 = NULL,y_163 = NULL;
  if(match_cons(t, sym__2))
    {
      x_163 = ATgetArgument(t, 0);
      y_163 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_163), x_163);
  return(t);
}
ATerm v_27 (ATerm m_137 (ATerm), ATerm z_73, ATerm a_74, ATerm g_718, ATerm t)
{
  ATerm q_163 = NULL,r_163 = NULL;
  t = SSL_explode_term(g_718);
  if(match_cons(t, sym__2))
    {
      if((z_73 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      q_163 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_74, q_163);
  {
    ATerm h_2 (ATerm t)
    {
      ATerm z_163 = NULL,a_164 = NULL;
      if(match_cons(t, sym__2))
        {
          z_163 = ATgetArgument(t, 0);
          a_164 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_App_2, z_163, a_164);
      t = m_137(t);
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
    t = genzip_4_0(w_1, z_1, b_2, h_2, t);
    if(((r_163 != NULL) && (r_163 != t)))
      _fail(t);
    else
      r_163 = t;
    t = SSL_mkterm(z_73, r_163);
  }
  return(t);
}
ATerm x_27 (ATerm l_137 (ATerm), ATerm u_73, ATerm i_715, ATerm t)
{
  ATerm b_164 = NULL,c_164 = NULL,d_164 = NULL;
  t = SSL_explode_term(i_715);
  if(match_cons(t, sym__2))
    {
      b_164 = ATgetArgument(t, 0);
      c_164 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_164;
  {
    ATerm i_2 (ATerm t)
    {
      ATerm g_164 = NULL;
      g_164 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, u_73, g_164);
      t = l_137(t);
      {
        ATerm t_21 = t;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_Fail_0)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = t_21;
          }
      }
      return(t);
    }
    t = fetch_1_0(i_2, t);
    if(((d_164 != NULL) && (d_164 != t)))
      _fail(t);
    else
      d_164 = t;
    t = SSL_mkterm(b_164, d_164);
  }
  return(t);
}
ATerm EvalAll_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm g_165 = NULL,h_165 = NULL,o_165 = NULL,p_165 = NULL;
  g_165 = t;
  if(match_cons(t, sym_App_2))
    {
      h_165 = ATgetArgument(t, 0);
      p_165 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_165;
  if(match_cons(t, sym_All_1))
    {
      o_165 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm u_21 = t;
    int v_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_is_string(p_165);
        t = p_165;
        ;
        LocalPopChoice(v_21);
      }
    else
      {
        t = u_21;
        {
          ATerm x_116 = NULL,b_117 = NULL,g_117 = NULL;
          t = SSL_explode_term(p_165);
          if(match_cons(t, sym__2))
            {
              x_116 = ATgetArgument(t, 0);
              b_117 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_165;
          {
            ATerm w_21 = t;
            if((PushChoice() == 0))
              {
                ATerm h_118 = NULL;
                h_118 = t;
                t = SSL_is_string(h_118);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = w_21;
              }
            t = b_117;
            {
              ATerm j_2 (ATerm t)
              {
                ATerm a_119 = NULL;
                a_119 = t;
                t = (ATerm) ATmakeAppl(sym_App_2, o_165, a_119);
                t = k_0(t);
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
              t = map_1_0(j_2, t);
              if(((g_117 != NULL) && (g_117 != t)))
                _fail(t);
              else
                g_117 = t;
              t = SSL_mkterm(x_116, g_117);
            }
          }
        }
      }
  }
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm y_165 = NULL,z_165 = NULL,c_166 = NULL,d_166 = NULL,e_166 = NULL,f_166 = NULL;
  y_165 = t;
  if(match_cons(t, sym_SDef_3))
    {
      z_165 = ATgetArgument(t, 0);
      c_166 = ATgetArgument(t, 1);
      {
        ATerm y_21 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = c_166;
  t = foldr_3_0(l_2, m_2, n_2, t);
  d_166 = t;
  t = term_t_17;
  e_166 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_165, d_166);
  f_166 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_t_17, (ATerm)ATmakeAppl(sym__2, z_165, d_166), y_165);
  t = f_29(e_166, f_166, y_165, t);
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = term_z_21;
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm g_166 = NULL,h_166 = NULL;
  if(match_cons(t, sym__2))
    {
      g_166 = ATgetArgument(t, 0);
      h_166 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_28(g_166, h_166, t);
  return(t);
}
ATerm n_2 (ATerm t)
{
  t = term_a_22;
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm i_166 = NULL,j_166 = NULL,k_166 = NULL,l_166 = NULL,m_166 = NULL;
  if(match_cons(t, sym_SDef_3))
    {
      i_166 = ATgetArgument(t, 0);
      j_166 = ATgetArgument(t, 1);
      {
        ATerm b_22 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = j_166;
  t = foldr_3_0(p_2, q_2, r_2, t);
  k_166 = t;
  t = term_t_17;
  l_166 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_166, k_166);
  m_166 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_17, (ATerm) ATmakeAppl(sym__2, i_166, k_166));
  t = d_28(l_166, m_166, t);
  return(t);
}
ATerm p_2 (ATerm t)
{
  t = term_z_21;
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm n_166 = NULL,o_166 = NULL;
  if(match_cons(t, sym__2))
    {
      n_166 = ATgetArgument(t, 0);
      o_166 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_28(n_166, o_166, t);
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = term_a_22;
  return(t);
}
ATerm a_28 (ATerm v_137 (ATerm), ATerm k_77, ATerm h_77, ATerm i_77, ATerm t)
{
  ATerm w_165 = NULL;
  t = k_77;
  t = map_1_0(k_2, t);
  t = (ATerm) ATmakeAppl(sym_App_2, h_77, i_77);
  t = v_137(t);
  w_165 = t;
  t = k_77;
  t = map_1_0(o_2, t);
  t = w_165;
  return(t);
}
ATerm s_2 (ATerm t)
{
  t = term_z_21;
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm x_166 = NULL,y_166 = NULL;
  if(match_cons(t, sym__2))
    {
      x_166 = ATgetArgument(t, 0);
      y_166 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_28(x_166, y_166, t);
  return(t);
}
ATerm v_2 (ATerm t)
{
  t = term_a_22;
  return(t);
}
ATerm b_28 (ATerm f_77, ATerm g_77, ATerm e_77, ATerm t)
{
  ATerm p_166 = NULL,q_166 = NULL,t_166 = NULL,w_166 = NULL;
  t = g_77;
  t = foldr_3_0(s_2, u_2, v_2, t);
  p_166 = t;
  t = term_d_22;
  t_166 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_22), p_166), term_j_22), f_77), term_i_22);
  w_166 = t;
  t = SSL_printnl(t_166, w_166);
  t = term_a_22;
  q_166 = t;
  t = SSL_exit(q_166);
  t = term_l_22;
  return(t);
}
ATerm d_28 (ATerm o_55, ATerm p_55, ATerm t)
{
  ATerm g_167 = NULL,j_167 = NULL;
  g_167 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_55, p_55);
  {
    ATerm o_22 = t;
    int t_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_119 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm z_22 = ATgetArgument(t, 0);
            ATerm a_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_55, p_55);
        t = e_29(o_55, p_55, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm b_23 = ATgetFirst((ATermList) t);
            y_119 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = y_119;
        ;
        LocalPopChoice(t_22);
      }
    else
      {
        t = o_22;
        t = (ATerm) ATempty;
      }
    j_167 = t;
    t = SSL_table_put(o_55, p_55, j_167);
    t = g_167;
  }
  return(t);
}
ATerm h_28 (ATerm x_55, ATerm y_55, ATerm t)
{
  ATerm u_167 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_55, y_55);
  t = e_29(x_55, y_55, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_167 = ATgetFirst((ATermList) t);
      {
        ATerm c_23 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = u_167;
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = term_z_21;
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm y_168 = NULL,z_168 = NULL;
  if(match_cons(t, sym__2))
    {
      y_168 = ATgetArgument(t, 0);
      z_168 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_28(y_168, z_168, t);
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = term_a_22;
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm b_169 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      b_169 = ATgetArgument(t, 0);
      t = b_169;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_169 = ATgetArgument(t, 0);
          {
            ATerm e_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = b_169;
    }
  return(t);
}
ATerm a_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_23 = ATgetArgument(t, 0);
      if(((ATgetType(f_23) != AT_LIST) || !(ATisEmpty(f_23))))
        _fail(t);
      {
        ATerm h_23 = ATgetArgument(t, 1);
        if(((ATgetType(h_23) != AT_LIST) || !(ATisEmpty(h_23))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm f_169 = NULL,g_169 = NULL,h_169 = NULL,i_169 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_23 = ATgetArgument(t, 0);
      if(((ATgetType(i_23) == AT_LIST) && !(ATisEmpty(i_23))))
        {
          f_169 = ATgetFirst((ATermList) i_23);
          g_169 = (ATerm) ATgetNext((ATermList) i_23);
        }
      else
        _fail(t);
      {
        ATerm j_23 = ATgetArgument(t, 1);
        if(((ATgetType(j_23) == AT_LIST) && !(ATisEmpty(j_23))))
          {
            h_169 = ATgetFirst((ATermList) j_23);
            i_169 = (ATerm) ATgetNext((ATermList) j_23);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_169, h_169), (ATerm) ATmakeAppl(sym__2, g_169, i_169));
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm j_169 = NULL,k_169 = NULL;
  if(match_cons(t, sym__2))
    {
      j_169 = ATgetArgument(t, 0);
      k_169 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_169), j_169);
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm l_169 = NULL,m_169 = NULL,n_169 = NULL,o_169 = NULL,p_169 = NULL;
  if(match_cons(t, sym__2))
    {
      l_169 = ATgetArgument(t, 0);
      m_169 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_t_17;
  n_169 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_169, term_z_21);
  o_169 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, l_169, (ATerm)ATempty, m_169);
  p_169 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_t_17, (ATerm)ATmakeAppl(sym__2, l_169, term_z_21), (ATerm) ATmakeAppl(sym_SDef_3, l_169, (ATerm)ATempty, m_169));
  t = f_29(n_169, o_169, p_169, t);
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm q_169 = NULL,r_169 = NULL,s_169 = NULL;
  q_169 = t;
  t = term_t_17;
  r_169 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_169, term_z_21);
  s_169 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_17, (ATerm) ATmakeAppl(sym__2, q_169, term_z_21));
  t = d_28(r_169, s_169, t);
  return(t);
}
ATerm j_28 (ATerm u_137 (ATerm), ATerm u_76, ATerm w_76, ATerm y_76, ATerm t)
{
  ATerm l_168 = NULL,m_168 = NULL,n_168 = NULL,s_168 = NULL,t_168 = NULL,v_168 = NULL,w_168 = NULL;
  t = w_76;
  t = foldr_3_0(w_2, x_2, y_2, t);
  t_168 = t;
  t = term_t_17;
  v_168 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_76, t_168);
  w_168 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_17, (ATerm) ATmakeAppl(sym__2, u_76, t_168));
  t = h_28(v_168, w_168, t);
  if(match_cons(t, sym_SDef_3))
    {
      if((u_76 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      l_168 = ATgetArgument(t, 1);
      m_168 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = l_168;
  t = map_1_0(z_2, t);
  s_168 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_168, w_76);
  t = genzip_4_0(a_3, b_3, d_3, e_3, t);
  t = (ATerm) ATmakeAppl(sym_App_2, m_168, y_76);
  t = u_137(t);
  n_168 = t;
  t = s_168;
  t = map_1_0(f_3, t);
  t = n_168;
  return(t);
}
ATerm k_28 (ATerm t_137 (ATerm), ATerm q_76, ATerm r_76, ATerm s_76, ATerm t)
{
  ATerm k_23 = t;
  int m_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_App_2, q_76, s_76);
      t = t_137(t);
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
      t = k_23;
      {
        ATerm o_23 = t;
        int p_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_App_2, r_76, s_76);
            t = t_137(t);
            {
              ATerm q_23 = t;
              if((PushChoice() == 0))
                {
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = q_23;
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
ATerm l_28 (ATerm s_137 (ATerm), ATerm m_76, ATerm n_76, ATerm o_76, ATerm t)
{
  ATerm r_23 = t;
  int u_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_App_2, m_76, o_76);
      t = s_137(t);
      {
        ATerm v_23 = t;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_Fail_0)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = v_23;
          }
      }
      ;
      LocalPopChoice(u_23);
    }
  else
    {
      t = r_23;
      {
        ATerm z_23 = t;
        int c_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_App_2, n_76, o_76);
            t = s_137(t);
            {
              ATerm d_24 = t;
              if((PushChoice() == 0))
                {
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = d_24;
                }
            }
            ;
            LocalPopChoice(c_24);
          }
        else
          {
            t = z_23;
            t = term_l_22;
          }
      }
    }
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = term_f_24;
  return(t);
}
ATerm eval_0_0 (ATerm t)
{
  ATerm a_171 = NULL,v_170 = NULL,w_170 = NULL,x_170 = NULL;
  x_170 = t;
  if(match_cons(t, sym_App_2))
    {
      v_170 = ATgetArgument(t, 0);
      w_170 = ATgetArgument(t, 1);
      {
        ATerm g_24 = t;
        int h_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_120 = NULL,f_121 = NULL,j_8 = NULL;
            t = SSLgetAnnotations(x_170);
            q_120 = t;
            t = w_170;
            t = eval_0_0(t);
            f_121 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, v_170, f_121);
            j_8 = t;
            t = SSLsetAnnotations(j_8, q_120);
            ;
            LocalPopChoice(h_24);
          }
        else
          {
            t = g_24;
            t = x_170;
          }
      }
    }
  else
    {
      t = x_170;
    }
  a_171 = t;
  {
    ATerm i_24 = t;
    int j_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_19;
        t = get_config_0_0(t);
        t = a_171;
        t = debug_1_0(g_3, t);
        ;
        LocalPopChoice(j_24);
      }
    else
      {
        t = i_24;
        t = a_171;
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
              ATerm h_171 = NULL,i_171 = NULL,j_171 = NULL,k_171 = NULL,l_171 = NULL,m_171 = NULL;
              i_171 = t;
              if(match_cons(t, sym_App_2))
                {
                  j_171 = ATgetArgument(t, 0);
                  m_171 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = m_171;
              if(match_cons(t, sym_Fail_0))
                {
                  t = j_171;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = m_171;
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
                                int s_24 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_Not_1))
                                      {
                                        ATerm t_24 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(s_24);
                                    t = term_l_22;
                                  }
                                else
                                  {
                                    t = r_24;
                                    {
                                      ATerm w_24 = t;
                                      int y_24 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_Seq_2))
                                            {
                                              ATerm z_24 = ATgetArgument(t, 0);
                                              ATerm d_25 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(y_24);
                                          t = term_l_22;
                                        }
                                      else
                                        {
                                          t = w_24;
                                          {
                                            ATerm e_25 = t;
                                            int f_25 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_Choice_2))
                                                  {
                                                    ATerm g_25 = ATgetArgument(t, 0);
                                                    ATerm h_25 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(f_25);
                                                t = term_l_22;
                                              }
                                            else
                                              {
                                                t = e_25;
                                                {
                                                  ATerm j_25 = t;
                                                  int k_25 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      if(match_cons(t, sym_LChoice_2))
                                                        {
                                                          ATerm m_25 = ATgetArgument(t, 0);
                                                          ATerm n_25 = ATgetArgument(t, 1);
                                                        }
                                                      else
                                                        _fail(t);
                                                      LocalPopChoice(k_25);
                                                      t = term_l_22;
                                                    }
                                                  else
                                                    {
                                                      t = j_25;
                                                      {
                                                        ATerm o_25 = t;
                                                        int p_25 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            if(match_cons(t, sym_Call_2))
                                                              {
                                                                k_171 = ATgetArgument(t, 0);
                                                                {
                                                                  ATerm t_25 = ATgetArgument(t, 1);
                                                                }
                                                              }
                                                            else
                                                              _fail(t);
                                                            LocalPopChoice(p_25);
                                                            t = k_171;
                                                            {
                                                              ATerm u_25 = t;
                                                              int v_25 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  if(match_cons(t, sym_SVar_1))
                                                                    {
                                                                      ATerm x_25 = ATgetArgument(t, 0);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  LocalPopChoice(v_25);
                                                                  t = term_l_22;
                                                                }
                                                              else
                                                                {
                                                                  t = u_25;
                                                                  t = term_l_22;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = o_25;
                                                            {
                                                              ATerm y_25 = t;
                                                              int b_26 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  if(match_cons(t, sym_Let_2))
                                                                    {
                                                                      ATerm c_26 = ATgetArgument(t, 0);
                                                                      ATerm d_26 = ATgetArgument(t, 1);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  LocalPopChoice(b_26);
                                                                  t = term_l_22;
                                                                }
                                                              else
                                                                {
                                                                  t = y_25;
                                                                  {
                                                                    ATerm e_26 = t;
                                                                    int i_26 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_Rec_2))
                                                                          {
                                                                            ATerm k_26 = ATgetArgument(t, 0);
                                                                            ATerm n_26 = ATgetArgument(t, 1);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(i_26);
                                                                        t = term_l_22;
                                                                      }
                                                                    else
                                                                      {
                                                                        t = e_26;
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
                  t = j_171;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = m_171;
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
                              k_171 = ATgetArgument(t, 0);
                              t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Seq_2, k_171, (ATerm) ATmakeAppl(sym_Build_1, m_171)), m_171);
                              {
                                ATerm u_26 = t;
                                int v_26 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = eval_0_0(t);
                                    ;
                                    LocalPopChoice(v_26);
                                  }
                                else
                                  {
                                    t = u_26;
                                  }
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_Not_1))
                                {
                                  k_171 = ATgetArgument(t, 0);
                                  t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Not_1, k_171), m_171);
                                  {
                                    ATerm x_26 = t;
                                    int y_26 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = (ATerm) ATmakeAppl(sym_App_2, k_171, m_171);
                                        t = eval_0_0(t);
                                        if(!(match_cons(t, sym_Fail_0)))
                                          _fail(t);
                                        t = m_171;
                                        ;
                                        LocalPopChoice(y_26);
                                      }
                                    else
                                      {
                                        t = x_26;
                                        t = term_l_22;
                                      }
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Seq_2))
                                    {
                                      k_171 = ATgetArgument(t, 0);
                                      l_171 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_App_2, l_171, (ATerm) ATmakeAppl(sym_App_2, k_171, m_171));
                                      {
                                        ATerm z_26 = t;
                                        int d_27 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = eval_0_0(t);
                                            ;
                                            LocalPopChoice(d_27);
                                          }
                                        else
                                          {
                                            t = z_26;
                                          }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          k_171 = ATgetArgument(t, 0);
                                          l_171 = ATgetArgument(t, 1);
                                          t = i_171;
                                          t = l_28(eval_0_0, k_171, l_171, m_171, t);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              k_171 = ATgetArgument(t, 0);
                                              l_171 = ATgetArgument(t, 1);
                                              t = i_171;
                                              t = k_28(eval_0_0, k_171, l_171, m_171, t);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Call_2))
                                                {
                                                  k_171 = ATgetArgument(t, 0);
                                                  l_171 = ATgetArgument(t, 1);
                                                  t = k_171;
                                                  if(match_cons(t, sym_SVar_1))
                                                    {
                                                      h_171 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  {
                                                    ATerm f_27 = t;
                                                    int i_27 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = i_171;
                                                        t = j_28(eval_0_0, h_171, l_171, m_171, t);
                                                        ;
                                                        LocalPopChoice(i_27);
                                                      }
                                                    else
                                                      {
                                                        t = f_27;
                                                        t = i_171;
                                                        t = b_28(h_171, l_171, m_171, t);
                                                      }
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Let_2))
                                                    {
                                                      k_171 = ATgetArgument(t, 0);
                                                      l_171 = ATgetArgument(t, 1);
                                                      t = i_171;
                                                      t = a_28(eval_0_0, k_171, l_171, m_171, t);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Rec_2))
                                                        {
                                                          k_171 = ATgetArgument(t, 0);
                                                          l_171 = ATgetArgument(t, 1);
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, k_171, (ATerm)ATempty, l_171)), l_171), m_171);
                                                      {
                                                        ATerm j_27 = t;
                                                        int k_27 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = eval_0_0(t);
                                                            ;
                                                            LocalPopChoice(k_27);
                                                          }
                                                        else
                                                          {
                                                            t = j_27;
                                                          }
                                                      }
                                                    }
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
                ATerm m_27 = t;
                int p_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm q_27 = t;
                    int r_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = EvalAll_1_0(eval_0_0, t);
                        ;
                        LocalPopChoice(r_27);
                      }
                    else
                      {
                        t = q_27;
                        {
                          ATerm o_172 = NULL,p_172 = NULL,q_172 = NULL;
                          if(match_cons(t, sym_App_2))
                            {
                              o_172 = ATgetArgument(t, 0);
                              q_172 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = o_172;
                          if(match_cons(t, sym_All_1))
                            {
                              p_172 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = term_l_22;
                        }
                      }
                    ;
                    LocalPopChoice(p_27);
                  }
                else
                  {
                    t = m_27;
                    {
                      ATerm t_27 = t;
                      int u_27 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm e_173 = NULL,f_173 = NULL,g_173 = NULL,h_173 = NULL,i_173 = NULL;
                          f_173 = t;
                          if(match_cons(t, sym_App_2))
                            {
                              g_173 = ATgetArgument(t, 0);
                              i_173 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = g_173;
                          if(match_cons(t, sym_One_1))
                            {
                              h_173 = ATgetArgument(t, 0);
                              {
                                ATerm y_27 = t;
                                int z_27 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = f_173;
                                    t = x_27(eval_0_0, h_173, i_173, t);
                                    ;
                                    LocalPopChoice(z_27);
                                  }
                                else
                                  {
                                    t = y_27;
                                    t = term_l_22;
                                  }
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_Cong_2))
                                {
                                  h_173 = ATgetArgument(t, 0);
                                  e_173 = ATgetArgument(t, 1);
                                  {
                                    ATerm c_28 = t;
                                    int e_28 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = f_173;
                                        t = v_27(eval_0_0, h_173, e_173, i_173, t);
                                        ;
                                        LocalPopChoice(e_28);
                                      }
                                    else
                                      {
                                        t = c_28;
                                        t = SSL_explode_term(i_173);
                                        if(match_cons(t, sym__2))
                                          {
                                            ATerm f_28 = ATgetArgument(t, 0);
                                            ATerm p_28 = ATgetArgument(t, 1);
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
                                      h_173 = ATgetArgument(t, 0);
                                      e_173 = ATgetArgument(t, 1);
                                      t = f_173;
                                      t = o_27(eval_0_0, h_173, e_173, i_173, t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          h_173 = ATgetArgument(t, 0);
                                          {
                                            ATerm q_28 = t;
                                            int r_28 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = f_173;
                                                t = n_27(h_173, i_173, t);
                                                ;
                                                LocalPopChoice(r_28);
                                              }
                                            else
                                              {
                                                t = q_28;
                                                t = term_l_22;
                                              }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Build_1))
                                            {
                                              h_173 = ATgetArgument(t, 0);
                                              t = h_173;
                                              t = EvalTerm_0_0(t);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  h_173 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              {
                                                ATerm s_28 = t;
                                                int u_28 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = (ATerm) ATmakeAppl(sym_App_2, h_173, i_173);
                                                    t = eval_0_0(t);
                                                    {
                                                      ATerm v_28 = t;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(!(match_cons(t, sym_Fail_0)))
                                                            _fail(t);
                                                          PopChoice();
                                                          _fail(t);
                                                        }
                                                      else
                                                        {
                                                          t = v_28;
                                                        }
                                                      t = i_173;
                                                    }
                                                    ;
                                                    LocalPopChoice(u_28);
                                                  }
                                                else
                                                  {
                                                    t = s_28;
                                                    t = term_l_22;
                                                  }
                                              }
                                            }
                                        }
                                    }
                                }
                            }
                          ;
                          LocalPopChoice(u_27);
                        }
                      else
                        {
                          t = t_27;
                          {
                            ATerm a_29 = t;
                            int g_29 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = EvalPrim_0_0(t);
                                ;
                                LocalPopChoice(g_29);
                              }
                            else
                              {
                                t = a_29;
                                {
                                  ATerm c_174 = NULL,d_174 = NULL,e_174 = NULL,f_174 = NULL;
                                  if(match_cons(t, sym_App_2))
                                    {
                                      c_174 = ATgetArgument(t, 0);
                                      f_174 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = c_174;
                                  if(match_cons(t, sym_Prim_2))
                                    {
                                      d_174 = ATgetArgument(t, 0);
                                      e_174 = ATgetArgument(t, 1);
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
ATerm h_3 (ATerm t)
{
  t = term_i_29;
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = term_j_29;
  return(t);
}
ATerm x_28 (ATerm b_25, ATerm c_25, ATerm t)
{
  ATerm s_192 = NULL,b_193 = NULL,v_192 = NULL;
  t = b_25;
  t = desugar_0_0(t);
  s_192 = t;
  t = (ATerm) ATmakeAppl(sym_App_2, s_192, c_25);
  {
    ATerm k_29 = t;
    int l_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_19;
        t = get_config_0_0(t);
        t = (ATerm) ATmakeAppl(sym_App_2, s_192, c_25);
        t = debug_1_0(h_3, t);
        ;
        LocalPopChoice(l_29);
      }
    else
      {
        t = k_29;
      }
    t = eval_0_0(t);
    v_192 = t;
    {
      ATerm m_29 = t;
      int n_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_o_29;
          t = get_config_0_0(t);
          t = v_192;
          t = debug_1_0(k_3, t);
          ;
          LocalPopChoice(n_29);
        }
      else
        {
          t = m_29;
          t = v_192;
        }
      b_193 = t;
      if(match_cons(t, sym_Fail_0))
        {
          ATerm p_29 = t;
          int q_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_157 = NULL,s_157 = NULL,t_157 = NULL;
              t = term_d_22;
              s_157 = t;
              t = (ATerm) ATinsert(ATempty, term_r_29);
              t_157 = t;
              t = SSL_printnl(s_157, t_157);
              t = term_a_22;
              r_157 = t;
              t = SSL_exit(r_157);
              t = (ATerm) ATinsert(ATempty, term_r_29);
              ;
              LocalPopChoice(q_29);
            }
          else
            {
              t = p_29;
              t = b_193;
            }
        }
      else
        {
          t = b_193;
        }
    }
  }
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm v_1 = NULL;
  ATerm t_29 = t;
  int u_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_1 = ATgetArgument(t, 0);
          {
            ATerm x_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_29);
      t = v_1;
    }
  else
    {
      t = t_29;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_1 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_1;
    }
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm a_2 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_2);
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm y_29 = t;
  int z_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(z_29);
    }
  else
    {
      t = y_29;
      {
        ATerm c_2 = NULL,d_2 = NULL,e_2 = NULL,f_2 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            c_2 = ATgetArgument(t, 0);
            t = c_2;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                c_2 = ATgetArgument(t, 0);
                d_2 = ATgetArgument(t, 1);
                e_2 = ATgetArgument(t, 2);
                f_2 = ATgetArgument(t, 3);
                t = e_2;
                t = map_1_0(s_3, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    c_2 = ATgetArgument(t, 0);
                    d_2 = ATgetArgument(t, 1);
                    e_2 = ATgetArgument(t, 2);
                    f_2 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = e_2;
                t = map_1_0(t_3, t);
              }
          }
      }
    }
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm t_2 = NULL;
  ATerm a_30 = t;
  int b_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_2 = ATgetArgument(t, 0);
          {
            ATerm c_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_30);
      t = t_2;
    }
  else
    {
      t = a_30;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_2 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_2;
    }
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm c_3 = NULL;
  ATerm d_30 = t;
  int e_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_3 = ATgetArgument(t, 0);
          {
            ATerm f_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_30);
      t = c_3;
    }
  else
    {
      t = d_30;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_3;
    }
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm j_3 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_3);
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm h_30 = t;
  int i_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(i_30);
    }
  else
    {
      t = h_30;
      {
        ATerm l_3 = NULL,m_3 = NULL,n_3 = NULL,o_3 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            l_3 = ATgetArgument(t, 0);
            t = l_3;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                l_3 = ATgetArgument(t, 0);
                m_3 = ATgetArgument(t, 1);
                n_3 = ATgetArgument(t, 2);
                o_3 = ATgetArgument(t, 3);
                t = n_3;
                t = map_1_0(x_3, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    l_3 = ATgetArgument(t, 0);
                    m_3 = ATgetArgument(t, 1);
                    n_3 = ATgetArgument(t, 2);
                    o_3 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = n_3;
                t = map_1_0(y_3, t);
              }
          }
      }
    }
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm w_3 = NULL;
  ATerm j_30 = t;
  int l_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_3 = ATgetArgument(t, 0);
          {
            ATerm p_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_30);
      t = w_3;
    }
  else
    {
      t = j_30;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_3;
    }
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm f_4 = NULL;
  ATerm q_30 = t;
  int r_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_4 = ATgetArgument(t, 0);
          {
            ATerm s_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_30);
      t = f_4;
    }
  else
    {
      t = q_30;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_4;
    }
  return(t);
}
ATerm RDtoSD_0_0 (ATerm t)
{
  ATerm c_1 = NULL,f_1 = NULL,g_1 = NULL,h_1 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      f_1 = ATgetArgument(t, 0);
      g_1 = ATgetArgument(t, 1);
      h_1 = ATgetArgument(t, 2);
      c_1 = ATgetArgument(t, 3);
      {
        ATerm p_1 = NULL,q_1 = NULL,r_1 = NULL;
        t = h_1;
        t = map_1_0(p_3, t);
        p_1 = t;
        t = c_1;
        t = free_vars_3_0(q_3, r_3, tboundin_3_0, t);
        r_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_1, p_1);
        t = diff_0_0(t);
        q_1 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, f_1, g_1, h_1, (ATerm) ATmakeAppl(sym_Scope_2, q_1, (ATerm) ATmakeAppl(sym_SRule_1, c_1)));
      }
    }
  else
    {
      ATerm i_3 = NULL;
      if(match_cons(t, sym_RDef_3))
        {
          f_1 = ATgetArgument(t, 0);
          g_1 = ATgetArgument(t, 1);
          h_1 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = h_1;
      t = free_vars_3_0(u_3, v_3, tboundin_3_0, t);
      i_3 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, f_1, g_1, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, i_3, (ATerm) ATmakeAppl(sym_SRule_1, h_1)));
    }
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = term_v_30;
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = bottomup_1_0(b_4, t);
  t = RDtoSD_0_0(t);
  t = desugar_0_0(t);
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm v_4 = NULL,w_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL;
  z_4 = t;
  if(match_cons(t, sym_LRule_1))
    {
      y_4 = ATgetArgument(t, 0);
      t = y_4;
      if(match_cons(t, sym_Rule_3))
        {
          v_4 = ATgetArgument(t, 0);
          w_4 = ATgetArgument(t, 1);
          x_4 = ATgetArgument(t, 2);
          {
            ATerm w_30 = t;
            int x_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_5 = NULL;
                t = v_4;
                t = free_vars_3_0(c_4, d_4, tboundin_3_0, t);
                d_5 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, d_5, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, v_4, w_4, x_4)));
                ;
                LocalPopChoice(x_30);
              }
            else
              {
                t = w_30;
                t = z_4;
              }
          }
        }
      else
        {
          t = z_4;
        }
    }
  else
    {
      if(match_cons(t, sym_ScopeDefault_1))
        {
          y_4 = ATgetArgument(t, 0);
          {
            ATerm c_31 = t;
            int d_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_6 = NULL;
                t = y_4;
                t = free_vars_3_0(h_4, i_4, tboundin_3_0, t);
                g_6 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, g_6, y_4);
                ;
                LocalPopChoice(d_31);
              }
            else
              {
                t = c_31;
                t = z_4;
              }
          }
        }
      else
        {
          t = z_4;
        }
    }
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm e_5 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      e_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, e_5);
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm f_31 = t;
  int g_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(g_31);
    }
  else
    {
      t = f_31;
      {
        ATerm g_5 = NULL,h_5 = NULL,i_5 = NULL,j_5 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            g_5 = ATgetArgument(t, 0);
            t = g_5;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                g_5 = ATgetArgument(t, 0);
                h_5 = ATgetArgument(t, 1);
                i_5 = ATgetArgument(t, 2);
                j_5 = ATgetArgument(t, 3);
                t = i_5;
                t = map_1_0(e_4, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    g_5 = ATgetArgument(t, 0);
                    h_5 = ATgetArgument(t, 1);
                    i_5 = ATgetArgument(t, 2);
                    j_5 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = i_5;
                t = map_1_0(g_4, t);
              }
          }
      }
    }
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm r_5 = NULL;
  ATerm i_31 = t;
  int l_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_5 = ATgetArgument(t, 0);
          {
            ATerm m_31 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_31);
      t = r_5;
    }
  else
    {
      t = i_31;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_5;
    }
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm a_6 = NULL;
  ATerm n_31 = t;
  int q_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_6 = ATgetArgument(t, 0);
          {
            ATerm r_31 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_31);
      t = a_6;
    }
  else
    {
      t = n_31;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_6;
    }
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm h_6 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_6);
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm s_31 = t;
  int t_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(t_31);
    }
  else
    {
      t = s_31;
      {
        ATerm j_6 = NULL,k_6 = NULL,l_6 = NULL,m_6 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            j_6 = ATgetArgument(t, 0);
            t = j_6;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                j_6 = ATgetArgument(t, 0);
                k_6 = ATgetArgument(t, 1);
                l_6 = ATgetArgument(t, 2);
                m_6 = ATgetArgument(t, 3);
                t = l_6;
                t = map_1_0(j_4, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    j_6 = ATgetArgument(t, 0);
                    k_6 = ATgetArgument(t, 1);
                    l_6 = ATgetArgument(t, 2);
                    m_6 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = l_6;
                t = map_1_0(k_4, t);
              }
          }
      }
    }
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm u_6 = NULL;
  ATerm u_31 = t;
  int v_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_6 = ATgetArgument(t, 0);
          {
            ATerm w_31 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_31);
      t = u_6;
    }
  else
    {
      t = u_31;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_6;
    }
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm d_7 = NULL;
  ATerm x_31 = t;
  int y_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_7 = ATgetArgument(t, 0);
          {
            ATerm z_31 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_31);
      t = d_7;
    }
  else
    {
      t = x_31;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_7;
    }
  return(t);
}
ATerm l_4 (ATerm t)
{
  t = term_a_32;
  return(t);
}
ATerm v_24 (ATerm q_144, ATerm t)
{
  ATerm i_7 = NULL;
  t = q_144;
  {
    ATerm f_32 = t;
    int k_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_19;
        t = get_config_0_0(t);
        t = q_144;
        t = debug_1_0(z_3, t);
        ;
        LocalPopChoice(k_32);
      }
    else
      {
        t = f_32;
      }
    t = map_1_0(a_4, t);
    i_7 = t;
    {
      ATerm l_32 = t;
      int m_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_t_19;
          t = get_config_0_0(t);
          t = i_7;
          t = debug_1_0(l_4, t);
          ;
          LocalPopChoice(m_32);
        }
      else
        {
          t = l_32;
          t = i_7;
        }
      t = define_strategies_0_0(t);
    }
  }
  return(t);
}
ATerm m_4 (ATerm t)
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
ATerm n_4 (ATerm t)
{
  ATerm x_0 = NULL,y_0 = NULL,z_0 = NULL,a_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_32 = ATgetArgument(t, 0);
      if(((ATgetType(p_32) == AT_LIST) && !(ATisEmpty(p_32))))
        {
          x_0 = ATgetFirst((ATermList) p_32);
          y_0 = (ATerm) ATgetNext((ATermList) p_32);
        }
      else
        _fail(t);
      {
        ATerm q_32 = ATgetArgument(t, 1);
        if(((ATgetType(q_32) == AT_LIST) && !(ATisEmpty(q_32))))
          {
            z_0 = ATgetFirst((ATermList) q_32);
            a_1 = (ATerm) ATgetNext((ATermList) q_32);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_0, z_0), (ATerm) ATmakeAppl(sym__2, y_0, a_1));
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm b_1 = NULL,d_1 = NULL;
  if(match_cons(t, sym__2))
    {
      b_1 = ATgetArgument(t, 0);
      d_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_1), b_1);
  return(t);
}
ATerm p_4 (ATerm t)
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
    ATerm r_32 = t;
    int t_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm u_32 = ATgetArgument(t, 0);
            t_1 = ATgetArgument(t, 1);
            x_1 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(t_32);
        t = (ATerm) ATmakeAppl(sym_SDef_3, g_2, t_1, x_1);
      }
    else
      {
        t = r_32;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm v_32 = ATgetArgument(t, 0);
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
ATerm q_4 (ATerm t)
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
ATerm s_4 (ATerm t)
{
  ATerm q_7 = NULL,r_7 = NULL,s_7 = NULL,t_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_32 = ATgetArgument(t, 0);
      if(((ATgetType(y_32) == AT_LIST) && !(ATisEmpty(y_32))))
        {
          q_7 = ATgetFirst((ATermList) y_32);
          r_7 = (ATerm) ATgetNext((ATermList) y_32);
        }
      else
        _fail(t);
      {
        ATerm z_32 = ATgetArgument(t, 1);
        if(((ATgetType(z_32) == AT_LIST) && !(ATisEmpty(z_32))))
          {
            s_7 = ATgetFirst((ATermList) z_32);
            t_7 = (ATerm) ATgetNext((ATermList) z_32);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_7, s_7), (ATerm) ATmakeAppl(sym__2, r_7, t_7));
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm u_7 = NULL,v_7 = NULL;
  if(match_cons(t, sym__2))
    {
      u_7 = ATgetArgument(t, 0);
      v_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_7), u_7);
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm x_7 = NULL,v_12 = NULL,w_12 = NULL;
  if(match_cons(t, sym__2))
    {
      x_7 = ATgetArgument(t, 0);
      w_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_7;
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
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, w_12);
      }
    else
      {
        t = a_33;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm e_33 = ATgetArgument(t, 0);
            v_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, w_12, v_12);
      }
  }
  return(t);
}
ATerm a_5 (ATerm t)
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
ATerm b_5 (ATerm t)
{
  ATerm n_18 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_33 = ATgetArgument(t, 0);
      if(((ATgetType(h_33) == AT_LIST) && !(ATisEmpty(h_33))))
        {
          n_18 = ATgetFirst((ATermList) h_33);
          d_19 = (ATerm) ATgetNext((ATermList) h_33);
        }
      else
        _fail(t);
      {
        ATerm i_33 = ATgetArgument(t, 1);
        if(((ATgetType(i_33) == AT_LIST) && !(ATisEmpty(i_33))))
          {
            e_19 = ATgetFirst((ATermList) i_33);
            f_19 = (ATerm) ATgetNext((ATermList) i_33);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_18, e_19), (ATerm) ATmakeAppl(sym__2, d_19, f_19));
  return(t);
}
ATerm c_5 (ATerm t)
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
ATerm f_5 (ATerm t)
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
    ATerm l_33 = t;
    int m_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm o_33 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(m_33);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, j_20);
      }
    else
      {
        t = l_33;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm p_33 = ATgetArgument(t, 0);
            y_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, j_20, y_19);
      }
  }
  return(t);
}
ATerm k_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_33 = ATgetArgument(t, 0);
      if(((ATgetType(q_33) != AT_LIST) || !(ATisEmpty(q_33))))
        _fail(t);
      {
        ATerm t_33 = ATgetArgument(t, 1);
        if(((ATgetType(t_33) != AT_LIST) || !(ATisEmpty(t_33))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm p_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_33 = ATgetArgument(t, 0);
      if(((ATgetType(y_33) == AT_LIST) && !(ATisEmpty(y_33))))
        {
          p_22 = ATgetFirst((ATermList) y_33);
          q_22 = (ATerm) ATgetNext((ATermList) y_33);
        }
      else
        _fail(t);
      {
        ATerm z_33 = ATgetArgument(t, 1);
        if(((ATgetType(z_33) == AT_LIST) && !(ATisEmpty(z_33))))
          {
            r_22 = ATgetFirst((ATermList) z_33);
            s_22 = (ATerm) ATgetNext((ATermList) z_33);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_22, r_22), (ATerm) ATmakeAppl(sym__2, q_22, s_22));
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm w_22 = NULL,d_23 = NULL;
  if(match_cons(t, sym__2))
    {
      w_22 = ATgetArgument(t, 0);
      d_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_23), w_22);
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm l_23 = NULL,t_23 = NULL,y_23 = NULL;
  if(match_cons(t, sym__2))
    {
      l_23 = ATgetArgument(t, 0);
      y_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_23;
  {
    ATerm a_34 = t;
    int b_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm c_34 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(b_34);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, y_23);
      }
    else
      {
        t = a_34;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm d_34 = ATgetArgument(t, 0);
            t_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, y_23, t_23);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm v_136 (ATerm), ATerm t)
{
  ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL;
  n_12 = t;
  if(match_cons(t, sym_Let_2))
    {
      o_12 = ATgetArgument(t, 0);
      p_12 = ATgetArgument(t, 1);
      {
        ATerm r_0 = NULL,u_0 = NULL,v_0 = NULL,l_8 = NULL;
        t = SSLgetAnnotations(n_12);
        r_0 = t;
        t = o_12;
        t = v_136(t);
        v_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_12, v_0);
        t = genzip_4_0(m_4, n_4, o_4, p_4, t);
        u_0 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, u_0, p_12);
        l_8 = t;
        t = SSLsetAnnotations(l_8, r_0);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          o_12 = ATgetArgument(t, 0);
          p_12 = ATgetArgument(t, 1);
          l_12 = ATgetArgument(t, 2);
          {
            ATerm r_4 = NULL,n_7 = NULL,o_7 = NULL,m_8 = NULL;
            t = SSLgetAnnotations(n_12);
            r_4 = t;
            t = p_12;
            t = v_136(t);
            o_7 = t;
            t = (ATerm) ATmakeAppl(sym__2, p_12, o_7);
            t = genzip_4_0(q_4, s_4, t_4, u_4, t);
            n_7 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, o_12, n_7, l_12);
            m_8 = t;
            t = SSLsetAnnotations(m_8, r_4);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              o_12 = ATgetArgument(t, 0);
              p_12 = ATgetArgument(t, 1);
              l_12 = ATgetArgument(t, 2);
              m_12 = ATgetArgument(t, 3);
              {
                ATerm o_17 = NULL,k_18 = NULL,l_18 = NULL,n_8 = NULL;
                t = SSLgetAnnotations(n_12);
                o_17 = t;
                t = p_12;
                t = v_136(t);
                l_18 = t;
                t = (ATerm) ATmakeAppl(sym__2, p_12, l_18);
                t = genzip_4_0(a_5, b_5, c_5, f_5, t);
                k_18 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, o_12, k_18, l_12, m_12);
                n_8 = t;
                t = SSLsetAnnotations(n_8, o_17);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  o_12 = ATgetArgument(t, 0);
                  p_12 = ATgetArgument(t, 1);
                  l_12 = ATgetArgument(t, 2);
                  m_12 = ATgetArgument(t, 3);
                  {
                    ATerm c_22 = NULL,m_22 = NULL,n_22 = NULL,o_8 = NULL;
                    t = SSLgetAnnotations(n_12);
                    c_22 = t;
                    t = p_12;
                    t = v_136(t);
                    n_22 = t;
                    t = (ATerm) ATmakeAppl(sym__2, p_12, n_22);
                    t = genzip_4_0(k_5, l_5, m_5, n_5, t);
                    m_22 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, o_12, m_22, l_12, m_12);
                    o_8 = t;
                    t = SSLsetAnnotations(o_8, c_22);
                  }
                }
              else
                {
                  ATerm x_24 = NULL,a_25 = NULL,p_8 = NULL;
                  if(match_cons(t, sym_Rec_2))
                    {
                      o_12 = ATgetArgument(t, 0);
                      p_12 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(n_12);
                  x_24 = t;
                  t = o_12;
                  t = v_136(t);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      a_25 = ATgetFirst((ATermList) t);
                      {
                        ATerm f_34 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Rec_2, a_25, p_12);
                  p_8 = t;
                  t = SSLsetAnnotations(p_8, x_24);
                }
            }
        }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm w_136 (ATerm), ATerm x_136 (ATerm), ATerm y_136 (ATerm), ATerm t)
{
  ATerm t_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL;
  v_14 = t;
  if(match_cons(t, sym_Let_2))
    {
      w_14 = ATgetArgument(t, 0);
      x_14 = ATgetArgument(t, 1);
      {
        ATerm w_25 = NULL,z_25 = NULL,a_26 = NULL,v_8 = NULL;
        t = SSLgetAnnotations(v_14);
        w_25 = t;
        t = w_14;
        t = w_136(t);
        z_25 = t;
        t = x_14;
        t = w_136(t);
        a_26 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, z_25, a_26);
        v_8 = t;
        t = SSLsetAnnotations(v_8, w_25);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          w_14 = ATgetArgument(t, 0);
          x_14 = ATgetArgument(t, 1);
          t_14 = ATgetArgument(t, 2);
          {
            ATerm w_26 = NULL,a_27 = NULL,b_27 = NULL,e_27 = NULL,w_8 = NULL;
            t = SSLgetAnnotations(v_14);
            w_26 = t;
            t = w_14;
            t = y_136(t);
            a_27 = t;
            t = x_14;
            t = y_136(t);
            b_27 = t;
            t = t_14;
            t = w_136(t);
            e_27 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, a_27, b_27, e_27);
            w_8 = t;
            t = SSLsetAnnotations(w_8, w_26);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              w_14 = ATgetArgument(t, 0);
              x_14 = ATgetArgument(t, 1);
              t_14 = ATgetArgument(t, 2);
              u_14 = ATgetArgument(t, 3);
              {
                ATerm w_27 = NULL,g_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL,x_8 = NULL;
                t = SSLgetAnnotations(v_14);
                w_27 = t;
                t = w_14;
                t = y_136(t);
                g_28 = t;
                t = x_14;
                t = y_136(t);
                m_28 = t;
                t = t_14;
                t = y_136(t);
                n_28 = t;
                t = u_14;
                t = w_136(t);
                o_28 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, g_28, m_28, n_28, o_28);
                x_8 = t;
                t = SSLsetAnnotations(x_8, w_27);
              }
            }
          else
            {
              ATerm s_29 = NULL,v_29 = NULL,w_29 = NULL,y_8 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  w_14 = ATgetArgument(t, 0);
                  x_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(v_14);
              s_29 = t;
              t = w_14;
              t = y_136(t);
              v_29 = t;
              t = x_14;
              t = w_136(t);
              w_29 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, v_29, w_29);
              y_8 = t;
              t = SSLsetAnnotations(y_8, s_29);
            }
        }
    }
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm e_15 = NULL;
  ATerm g_34 = t;
  int j_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          e_15 = ATgetArgument(t, 0);
          {
            ATerm k_34 = ATgetArgument(t, 1);
          }
          {
            ATerm l_34 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_34);
      t = e_15;
    }
  else
    {
      t = g_34;
      if(match_cons(t, sym_SDefT_4))
        {
          e_15 = ATgetArgument(t, 0);
          {
            ATerm q_34 = ATgetArgument(t, 1);
          }
          {
            ATerm r_34 = ATgetArgument(t, 2);
          }
          {
            ATerm s_34 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = e_15;
    }
  return(t);
}
ATerm q_25 (ATerm k_67, ATerm j_67, ATerm t)
{
  t = k_67;
  t = map_1_0(o_5, t);
  return(t);
}
ATerm SVar_1_0 (ATerm c_103 (ATerm), ATerm t)
{
  ATerm k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL,d_9 = NULL;
  n_15 = t;
  if(match_cons(t, sym_SVar_1))
    {
      l_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_15);
  k_15 = t;
  t = l_15;
  t = c_103(t);
  m_15 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, m_15);
  d_9 = t;
  t = SSLsetAnnotations(d_9, k_15);
  return(t);
}
ATerm r_25 (ATerm i_134 (ATerm), ATerm j_134 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm f_58, ATerm e_58, ATerm d_58, ATerm t)
{
  ATerm p_5 (ATerm t)
  {
    ATerm p_15 = NULL;
    p_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_15, d_58);
    t = i_134(t);
    return(t);
  }
  ATerm q_5 (ATerm t)
  {
    ATerm q_15 = NULL;
    q_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_15, e_58);
    t = i_134(t);
    return(t);
  }
  t = f_58;
  t = j_134(p_5, q_5, _id, t);
  return(t);
}
ATerm s_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm t_34 = ATgetArgument(t, 0);
      if(((ATgetType(t_34) != AT_LIST) || !(ATisEmpty(t_34))))
        _fail(t);
      {
        ATerm u_34 = ATgetArgument(t, 1);
        if(((ATgetType(u_34) != AT_LIST) || !(ATisEmpty(u_34))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_34 = ATgetArgument(t, 0);
      if(((ATgetType(v_34) == AT_LIST) && !(ATisEmpty(v_34))))
        {
          z_15 = ATgetFirst((ATermList) v_34);
          a_16 = (ATerm) ATgetNext((ATermList) v_34);
        }
      else
        _fail(t);
      {
        ATerm y_34 = ATgetArgument(t, 1);
        if(((ATgetType(y_34) == AT_LIST) && !(ATisEmpty(y_34))))
          {
            b_16 = ATgetFirst((ATermList) y_34);
            c_16 = (ATerm) ATgetNext((ATermList) y_34);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_15, b_16), (ATerm) ATmakeAppl(sym__2, a_16, c_16));
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm d_16 = NULL,e_16 = NULL;
  if(match_cons(t, sym__2))
    {
      d_16 = ATgetArgument(t, 0);
      e_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_16), d_16);
  return(t);
}
ATerm s_25 (ATerm c_134 (ATerm), ATerm d_134 (ATerm (ATerm), ATerm), ATerm x_57, ATerm a_58, ATerm t)
{
  ATerm t_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL,y_15 = NULL;
  t = x_57;
  t = c_134(t);
  t_15 = t;
  t = map_1_0(new_0_0, t);
  u_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_15, u_15);
  t = genzip_4_0(s_5, t_5, u_5, _id, t);
  y_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_15, a_58);
  t = conc_0_0(t);
  v_15 = t;
  t = x_57;
  {
    ATerm v_5 (ATerm t)
    {
      t = u_15;
      return(t);
    }
    t = d_134(v_5, t);
    if(((w_15 != NULL) && (w_15 != t)))
      _fail(t);
    else
      w_15 = t;
    t = (ATerm) ATmakeAppl(sym__3, w_15, a_58, v_15);
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL,p_16 = NULL;
  l_16 = t;
  if(match_cons(t, sym__2))
    {
      m_16 = ATgetArgument(t, 0);
      n_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_16;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_16 = ATgetFirst((ATermList) t);
      p_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_16;
  if(match_cons(t, sym__2))
    {
      j_16 = ATgetArgument(t, 0);
      k_16 = ATgetArgument(t, 1);
      {
        ATerm z_34 = t;
        int a_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_16;
            if((m_16 != t))
              {
                _fail(t);
              }
            t = k_16;
            ;
            LocalPopChoice(a_35);
          }
        else
          {
            t = z_34;
            t = (ATerm) ATmakeAppl(sym__2, m_16, p_16);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, m_16, p_16);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm b_113 (ATerm), ATerm t)
{
  ATerm l_17 (ATerm t)
  {
    ATerm d_35 = t;
    int e_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_113(t);
        ;
        LocalPopChoice(e_35);
      }
    else
      {
        t = d_35;
        {
          ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL;
          ATerm w_5 (ATerm t)
          {
            ATerm g_30 = NULL;
            g_30 = t;
            t = (ATerm) ATmakeAppl(sym__2, g_30, not_null(k_17));
            t = l_17(t);
            return(t);
          }
          if(((i_17 != NULL) && (i_17 != t)))
            _fail(t);
          else
            i_17 = t;
          if(match_cons(t, sym__2))
            {
              if(((j_17 != NULL) && (j_17 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                j_17 = ATgetArgument(t, 0);
              if(((k_17 != NULL) && (k_17 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                k_17 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = j_17;
          t = SRTS_all(w_5, t);
        }
      }
    return(t);
  }
  t = l_17(t);
  return(t);
}
ATerm rename_4_0 (ATerm x_133 (ATerm (ATerm), ATerm), ATerm y_133 (ATerm), ATerm z_133 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm a_134 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm p_17 = NULL;
  ATerm e_18 (ATerm t)
  {
    ATerm x_5 (ATerm t)
    {
      ATerm y_17 = NULL,z_17 = NULL,a_18 = NULL;
      y_17 = t;
      if(match_cons(t, sym__2))
        {
          z_17 = ATgetArgument(t, 0);
          a_18 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm f_35 = t;
        int g_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_5 (ATerm t)
            {
              ATerm d_18 = NULL;
              d_18 = t;
              t = (ATerm) ATmakeAppl(sym__2, d_18, a_18);
              t = lookup_0_0(t);
              return(t);
            }
            t = z_17;
            t = x_133(y_5, t);
            ;
            LocalPopChoice(g_35);
          }
        else
          {
            t = f_35;
            {
              ATerm y_30 = NULL,z_30 = NULL,a_31 = NULL;
              t = y_17;
              t = s_25(y_133, a_134, z_17, a_18, t);
              if(match_cons(t, sym__3))
                {
                  y_30 = ATgetArgument(t, 0);
                  z_30 = ATgetArgument(t, 1);
                  a_31 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = r_25(e_18, z_133, y_30, z_30, a_31, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(x_5, t);
    return(t);
  }
  if(((p_17 != NULL) && (p_17 != t)))
    _fail(t);
  else
    p_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_17, (ATerm) ATempty);
  t = e_18(t);
  return(t);
}
ATerm z_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm h_35 = ATgetArgument(t, 0);
      if(((ATgetType(h_35) != AT_LIST) || !(ATisEmpty(h_35))))
        _fail(t);
      {
        ATerm i_35 = ATgetArgument(t, 1);
        if(((ATgetType(i_35) != AT_LIST) || !(ATisEmpty(i_35))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm e_34 = NULL,h_34 = NULL,m_34 = NULL,n_34 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_35 = ATgetArgument(t, 0);
      if(((ATgetType(j_35) == AT_LIST) && !(ATisEmpty(j_35))))
        {
          e_34 = ATgetFirst((ATermList) j_35);
          h_34 = (ATerm) ATgetNext((ATermList) j_35);
        }
      else
        _fail(t);
      {
        ATerm k_35 = ATgetArgument(t, 1);
        if(((ATgetType(k_35) == AT_LIST) && !(ATisEmpty(k_35))))
          {
            m_34 = ATgetFirst((ATermList) k_35);
            n_34 = (ATerm) ATgetNext((ATermList) k_35);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_34, m_34), (ATerm) ATmakeAppl(sym__2, h_34, n_34));
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm o_34 = NULL,p_34 = NULL;
  if(match_cons(t, sym__2))
    {
      o_34 = ATgetArgument(t, 0);
      p_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_34), o_34);
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm w_34 = NULL,b_35 = NULL,c_35 = NULL;
  if(match_cons(t, sym__2))
    {
      w_34 = ATgetArgument(t, 0);
      c_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_34;
  {
    ATerm l_35 = t;
    int m_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm n_35 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(m_35);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, c_35);
      }
    else
      {
        t = l_35;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm o_35 = ATgetArgument(t, 0);
            b_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, c_35, b_35);
      }
  }
  return(t);
}
ATerm e_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_35 = ATgetArgument(t, 0);
      if(((ATgetType(p_35) != AT_LIST) || !(ATisEmpty(p_35))))
        _fail(t);
      {
        ATerm q_35 = ATgetArgument(t, 1);
        if(((ATgetType(q_35) != AT_LIST) || !(ATisEmpty(q_35))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm b_37 = NULL,c_37 = NULL,d_37 = NULL,o_37 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_35 = ATgetArgument(t, 0);
      if(((ATgetType(r_35) == AT_LIST) && !(ATisEmpty(r_35))))
        {
          b_37 = ATgetFirst((ATermList) r_35);
          c_37 = (ATerm) ATgetNext((ATermList) r_35);
        }
      else
        _fail(t);
      {
        ATerm s_35 = ATgetArgument(t, 1);
        if(((ATgetType(s_35) == AT_LIST) && !(ATisEmpty(s_35))))
          {
            d_37 = ATgetFirst((ATermList) s_35);
            o_37 = (ATerm) ATgetNext((ATermList) s_35);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_37, d_37), (ATerm) ATmakeAppl(sym__2, c_37, o_37));
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm p_37 = NULL,r_37 = NULL;
  if(match_cons(t, sym__2))
    {
      p_37 = ATgetArgument(t, 0);
      r_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_37), p_37);
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm u_37 = NULL,w_37 = NULL,x_37 = NULL;
  if(match_cons(t, sym__2))
    {
      u_37 = ATgetArgument(t, 0);
      x_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_37;
  {
    ATerm t_35 = t;
    int u_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm v_35 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(u_35);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, x_37);
      }
    else
      {
        t = t_35;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm w_35 = ATgetArgument(t, 0);
            w_37 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, x_37, w_37);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm r_136 (ATerm), ATerm t)
{
  ATerm j_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL;
  j_21 = t;
  if(match_cons(t, sym_Scope_2))
    {
      k_21 = ATgetArgument(t, 0);
      l_21 = ATgetArgument(t, 1);
      {
        ATerm j_32 = NULL,s_32 = NULL,f_9 = NULL;
        t = SSLgetAnnotations(j_21);
        j_32 = t;
        t = k_21;
        t = r_136(t);
        s_32 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, s_32, l_21);
        f_9 = t;
        t = SSLsetAnnotations(f_9, j_32);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          k_21 = ATgetArgument(t, 0);
          l_21 = ATgetArgument(t, 1);
          m_21 = ATgetArgument(t, 2);
          n_21 = ATgetArgument(t, 3);
          {
            ATerm n_33 = NULL,u_33 = NULL,v_33 = NULL,g_9 = NULL;
            t = SSLgetAnnotations(j_21);
            n_33 = t;
            t = m_21;
            t = r_136(t);
            v_33 = t;
            t = (ATerm) ATmakeAppl(sym__2, m_21, v_33);
            t = genzip_4_0(z_5, b_6, c_6, d_6, t);
            u_33 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, k_21, l_21, u_33, n_21);
            g_9 = t;
            t = SSLsetAnnotations(g_9, n_33);
          }
        }
      else
        {
          ATerm f_36 = NULL,y_36 = NULL,z_36 = NULL,h_9 = NULL;
          if(match_cons(t, sym_RDefT_4))
            {
              k_21 = ATgetArgument(t, 0);
              l_21 = ATgetArgument(t, 1);
              m_21 = ATgetArgument(t, 2);
              n_21 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(j_21);
          f_36 = t;
          t = m_21;
          t = r_136(t);
          z_36 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_21, z_36);
          t = genzip_4_0(e_6, f_6, i_6, n_6, t);
          y_36 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, k_21, l_21, y_36, n_21);
          h_9 = t;
          t = SSLsetAnnotations(h_9, f_36);
        }
    }
  return(t);
}
ATerm Var_1_0 (ATerm p_97 (ATerm), ATerm t)
{
  ATerm e_22 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL,l_9 = NULL;
  h_22 = t;
  if(match_cons(t, sym_Var_1))
    {
      f_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_22);
  e_22 = t;
  t = f_22;
  t = p_97(t);
  g_22 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, g_22);
  l_9 = t;
  t = SSLsetAnnotations(l_9, e_22);
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm x_35 = t;
  int y_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(y_35);
    }
  else
    {
      t = x_35;
      {
        ATerm u_22 = NULL,v_22 = NULL,x_22 = NULL,y_22 = NULL;
        if(match_cons(t, sym_SDefT_4))
          {
            u_22 = ATgetArgument(t, 0);
            v_22 = ATgetArgument(t, 1);
            x_22 = ATgetArgument(t, 2);
            y_22 = ATgetArgument(t, 3);
            t = x_22;
            t = map_1_0(p_6, t);
          }
        else
          {
            if(match_cons(t, sym_RDefT_4))
              {
                u_22 = ATgetArgument(t, 0);
                v_22 = ATgetArgument(t, 1);
                x_22 = ATgetArgument(t, 2);
                y_22 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = x_22;
            t = map_1_0(q_6, t);
          }
      }
    }
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm g_23 = NULL;
  ATerm z_35 = t;
  int a_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_23 = ATgetArgument(t, 0);
          {
            ATerm b_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_36);
      t = g_23;
    }
  else
    {
      t = z_35;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_23;
    }
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm s_23 = NULL;
  ATerm c_36 = t;
  int d_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_23 = ATgetArgument(t, 0);
          {
            ATerm e_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_36);
      t = s_23;
    }
  else
    {
      t = c_36;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_23;
    }
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm w_23 = NULL,x_23 = NULL,a_24 = NULL,b_24 = NULL,e_24 = NULL;
  w_23 = t;
  if(match_cons(t, sym_Let_2))
    {
      x_23 = ATgetArgument(t, 0);
      a_24 = ATgetArgument(t, 1);
      t = w_23;
      t = q_25(x_23, a_24, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          x_23 = ATgetArgument(t, 0);
          a_24 = ATgetArgument(t, 1);
          b_24 = ATgetArgument(t, 2);
          t = a_24;
          t = map_1_0(s_6, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              x_23 = ATgetArgument(t, 0);
              a_24 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, x_23);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  x_23 = ATgetArgument(t, 0);
                  a_24 = ATgetArgument(t, 1);
                  b_24 = ATgetArgument(t, 2);
                  e_24 = ATgetArgument(t, 3);
                  t = a_24;
                  t = map_1_0(t_6, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      x_23 = ATgetArgument(t, 0);
                      a_24 = ATgetArgument(t, 1);
                      b_24 = ATgetArgument(t, 2);
                      e_24 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = a_24;
                  t = map_1_0(v_6, t);
                }
            }
        }
    }
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm u_24 = NULL;
  ATerm g_36 = t;
  int h_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_24 = ATgetArgument(t, 0);
          {
            ATerm i_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_36);
      t = u_24;
    }
  else
    {
      t = g_36;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_24;
    }
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm s_27 = NULL;
  ATerm j_36 = t;
  int k_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_27 = ATgetArgument(t, 0);
          {
            ATerm l_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_36);
      t = s_27;
    }
  else
    {
      t = j_36;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_27;
    }
  return(t);
}
ATerm v_6 (ATerm t)
{
  ATerm c_29 = NULL;
  ATerm m_36 = t;
  int n_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_29 = ATgetArgument(t, 0);
          {
            ATerm o_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_36);
      t = c_29;
    }
  else
    {
      t = m_36;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_29;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, o_6, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, r_6, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm Expl_0_0 (ATerm t)
{
  ATerm r_174 = NULL,s_174 = NULL,t_174 = NULL;
  s_174 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      t_174 = ATgetArgument(t, 0);
      r_174 = ATgetArgument(t, 1);
      {
        ATerm w_174 = NULL,x_174 = NULL,y_174 = NULL,z_174 = NULL;
        t = s_174;
        t = new_0_0(t);
        w_174 = t;
        t = new_0_0(t);
        x_174 = t;
        t = new_0_0(t);
        y_174 = t;
        t = new_0_0(t);
        z_174 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_174), y_174), x_174), w_174), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, w_174), (ATerm) ATmakeAppl(sym_Var_1, y_174))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, t_174, (ATerm)ATmakeAppl(sym_Var_1, w_174), (ATerm) ATmakeAppl(sym_Var_1, x_174)), (ATerm) ATmakeAppl(sym_BAM_3, r_174, (ATerm)ATmakeAppl(sym_Var_1, y_174), (ATerm) ATmakeAppl(sym_Var_1, z_174)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_p_36, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, z_174)), (ATerm) ATmakeAppl(sym_Var_1, x_174))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          t_174 = ATgetArgument(t, 0);
          {
            ATerm a_175 = NULL,b_175 = NULL,d_175 = NULL,e_175 = NULL;
            t = s_174;
            t = new_0_0(t);
            d_175 = t;
            t = t_174;
            {
              ATerm w_6 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((a_175 != NULL) && (a_175 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      a_175 = ATgetArgument(t, 0);
                    if(((b_175 != NULL) && (b_175 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      b_175 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, d_175);
                return(t);
              }
              t = oncetd_1_0(w_6, t);
              if(((e_175 != NULL) && (e_175 != t)))
                _fail(t);
              else
                e_175 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, d_175), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_p_36, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_175)), not_null(a_175))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, d_175)), (ATerm) ATmakeAppl(sym_Build_1, e_175))));
            }
          }
        }
      else
        {
          ATerm g_175 = NULL,h_175 = NULL,i_175 = NULL,j_175 = NULL,k_175 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              t_174 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = s_174;
          t = new_0_0(t);
          i_175 = t;
          t = new_0_0(t);
          j_175 = t;
          t = t_174;
          {
            ATerm x_6 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((g_175 != NULL) && (g_175 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    g_175 = ATgetArgument(t, 0);
                  if(((h_175 != NULL) && (h_175 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    h_175 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, i_175);
              return(t);
            }
            t = oncetd_1_0(x_6, t);
            if(((k_175 != NULL) && (k_175 != t)))
              _fail(t);
            else
              k_175 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, i_175), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, k_175), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, j_175), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, j_175)), (ATerm) ATmakeAppl(sym_PrimT_3, term_q_36, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, j_175))))), (ATerm)ATmakeAppl(sym_Var_1, i_175), (ATerm) ATmakeAppl(sym_Op_2, term_r_36, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_175)), not_null(g_175)))))));
          }
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm m_175 = NULL,n_175 = NULL;
  m_175 = t;
  if(match_cons(t, sym_Match_1))
    {
      n_175 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm s_36 = t;
    int t_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_175 = NULL,q_175 = NULL,r_175 = NULL,s_175 = NULL;
        t = m_175;
        t = new_0_0(t);
        r_175 = t;
        t = n_175;
        {
          ATerm y_6 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((p_175 != NULL) && (p_175 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  p_175 = ATgetArgument(t, 0);
                if(((q_175 != NULL) && (q_175 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  q_175 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, r_175), p_175);
            return(t);
          }
          t = pat_td_1_0(y_6, t);
          if(((s_175 != NULL) && (s_175 != t)))
            _fail(t);
          else
            s_175 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_175), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, s_175), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_u_36, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, r_175))), (ATerm) ATmakeAppl(sym_Match_1, not_null(q_175))))));
        }
        ;
        LocalPopChoice(t_36);
      }
    else
      {
        t = s_36;
        {
          ATerm v_36 = t;
          int w_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_175 = NULL,v_175 = NULL,w_175 = NULL;
              t = m_175;
              t = new_0_0(t);
              v_175 = t;
              t = n_175;
              {
                ATerm z_6 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((u_175 != NULL) && (u_175 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        u_175 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, v_175);
                  return(t);
                }
                t = pat_td_1_0(z_6, t);
                if(((w_175 != NULL) && (w_175 != t)))
                  _fail(t);
                else
                  w_175 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, v_175), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, w_175), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, v_175)), not_null(u_175))));
              }
              ;
              LocalPopChoice(w_36);
            }
          else
            {
              t = v_36;
              {
                ATerm y_175 = NULL,z_175 = NULL,a_176 = NULL,b_176 = NULL;
                t = m_175;
                t = new_0_0(t);
                a_176 = t;
                t = n_175;
                {
                  ATerm a_7 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((z_175 != NULL) && (z_175 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          z_175 = ATgetArgument(t, 0);
                        if(((y_175 != NULL) && (y_175 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          y_175 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, a_176);
                    return(t);
                  }
                  t = pat_td_1_0(a_7, t);
                  if(((b_176 != NULL) && (b_176 != t)))
                    _fail(t);
                  else
                    b_176 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, a_176), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, b_176), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, a_176)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(y_175)), not_null(z_175)))));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm x_135 (ATerm), ATerm t)
{
  ATerm x_36 = t;
  int a_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_135(t);
      ;
      LocalPopChoice(a_37);
    }
  else
    {
      t = x_36;
      {
        ATerm j_178 = NULL,k_178 = NULL,l_178 = NULL,m_178 = NULL;
        k_178 = t;
        if(match_cons(t, sym_Op_2))
          {
            l_178 = ATgetArgument(t, 0);
            m_178 = ATgetArgument(t, 1);
            {
              ATerm o_128 = NULL,z_128 = NULL,n_9 = NULL;
              t = SSLgetAnnotations(k_178);
              o_128 = t;
              t = m_178;
              {
                ATerm b_7 (ATerm t)
                {
                  t = pat_td_1_0(x_135, t);
                  return(t);
                }
                t = fetch_1_0(b_7, t);
                if(((z_128 != NULL) && (z_128 != t)))
                  _fail(t);
                else
                  z_128 = t;
                t = (ATerm) ATmakeAppl(sym_Op_2, l_178, z_128);
                if(((n_9 != NULL) && (n_9 != t)))
                  _fail(t);
                else
                  n_9 = t;
                t = SSLsetAnnotations(n_9, o_128);
              }
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                l_178 = ATgetArgument(t, 0);
                m_178 = ATgetArgument(t, 1);
                {
                  ATerm e_37 = t;
                  int f_37 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm d_130 = NULL,u_130 = NULL,o_9 = NULL;
                      t = SSLgetAnnotations(k_178);
                      d_130 = t;
                      t = m_178;
                      t = pat_td_1_0(x_135, t);
                      u_130 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, l_178, u_130);
                      o_9 = t;
                      t = SSLsetAnnotations(o_9, d_130);
                      ;
                      LocalPopChoice(f_37);
                    }
                  else
                    {
                      t = e_37;
                      {
                        ATerm n_131 = NULL,s_131 = NULL,p_9 = NULL;
                        t = SSLgetAnnotations(k_178);
                        n_131 = t;
                        t = l_178;
                        t = pat_td_1_0(x_135, t);
                        s_131 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, s_131, m_178);
                        p_9 = t;
                        t = SSLsetAnnotations(p_9, n_131);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    l_178 = ATgetArgument(t, 0);
                    m_178 = ATgetArgument(t, 1);
                    j_178 = ATgetArgument(t, 2);
                    {
                      ATerm j_133 = NULL,o_133 = NULL,q_9 = NULL;
                      t = SSLgetAnnotations(k_178);
                      j_133 = t;
                      t = j_178;
                      {
                        ATerm c_7 (ATerm t)
                        {
                          t = pat_td_1_0(x_135, t);
                          return(t);
                        }
                        t = fetch_1_0(c_7, t);
                        if(((o_133 != NULL) && (o_133 != t)))
                          _fail(t);
                        else
                          o_133 = t;
                        t = (ATerm) ATmakeAppl(sym_PrimT_3, l_178, m_178, o_133);
                        if(((q_9 != NULL) && (q_9 != t)))
                          _fail(t);
                        else
                          q_9 = t;
                        t = SSLsetAnnotations(q_9, j_133);
                      }
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        l_178 = ATgetArgument(t, 0);
                        m_178 = ATgetArgument(t, 1);
                        j_178 = ATgetArgument(t, 2);
                        {
                          ATerm n_136 = NULL,d_137 = NULL,r_9 = NULL;
                          t = SSLgetAnnotations(k_178);
                          n_136 = t;
                          t = j_178;
                          {
                            ATerm e_7 (ATerm t)
                            {
                              t = pat_td_1_0(x_135, t);
                              return(t);
                            }
                            t = fetch_1_0(e_7, t);
                            if(((d_137 != NULL) && (d_137 != t)))
                              _fail(t);
                            else
                              d_137 = t;
                            t = (ATerm) ATmakeAppl(sym_CallT_3, l_178, m_178, d_137);
                            if(((r_9 != NULL) && (r_9 != t)))
                              _fail(t);
                            else
                              r_9 = t;
                            t = SSLsetAnnotations(r_9, n_136);
                          }
                        }
                      }
                    else
                      {
                        ATerm h_138 = NULL,o_138 = NULL,s_9 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            l_178 = ATgetArgument(t, 0);
                            m_178 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(k_178);
                        h_138 = t;
                        t = m_178;
                        t = pat_td_1_0(x_135, t);
                        o_138 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, l_178, o_138);
                        s_9 = t;
                        t = SSLsetAnnotations(s_9, h_138);
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
  ATerm u_178 = NULL,v_178 = NULL;
  u_178 = t;
  if(match_cons(t, sym_Build_1))
    {
      v_178 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm g_37 = t;
    int h_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_178 = NULL,x_178 = NULL,z_178 = NULL,a_179 = NULL;
        t = u_178;
        t = new_0_0(t);
        z_178 = t;
        t = v_178;
        {
          ATerm f_7 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((w_178 != NULL) && (w_178 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  w_178 = ATgetArgument(t, 0);
                if(((x_178 != NULL) && (x_178 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  x_178 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, z_178);
            return(t);
          }
          t = pat_td_1_0(f_7, t);
          if(((a_179 != NULL) && (a_179 != t)))
            _fail(t);
          else
            a_179 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, z_178), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_i_37, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_178)), not_null(w_178))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, z_178)))), (ATerm) ATmakeAppl(sym_Build_1, a_179)));
        }
        ;
        LocalPopChoice(h_37);
      }
    else
      {
        t = g_37;
        {
          ATerm j_37 = t;
          int k_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_179 = NULL,d_179 = NULL,e_179 = NULL;
              t = u_178;
              t = new_0_0(t);
              d_179 = t;
              t = v_178;
              {
                ATerm g_7 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((b_179 != NULL) && (b_179 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        b_179 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, d_179);
                  return(t);
                }
                t = pat_td_1_0(g_7, t);
                if(((e_179 != NULL) && (e_179 != t)))
                  _fail(t);
                else
                  e_179 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, d_179), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_179), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, d_179)))), (ATerm) ATmakeAppl(sym_Build_1, e_179)));
              }
              ;
              LocalPopChoice(k_37);
            }
          else
            {
              t = j_37;
              {
                ATerm f_179 = NULL,g_179 = NULL,i_179 = NULL,j_179 = NULL;
                t = u_178;
                t = new_0_0(t);
                i_179 = t;
                t = v_178;
                {
                  ATerm h_7 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((f_179 != NULL) && (f_179 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          f_179 = ATgetArgument(t, 0);
                        if(((g_179 != NULL) && (g_179 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          g_179 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, i_179);
                    return(t);
                  }
                  t = pat_td_1_0(h_7, t);
                  if(((j_179 != NULL) && (j_179 != t)))
                    _fail(t);
                  else
                    j_179 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, i_179), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(f_179), not_null(g_179), (ATerm) ATmakeAppl(sym_Var_1, i_179))), (ATerm) ATmakeAppl(sym_Build_1, j_179)));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm map1_1_0 (ATerm j_0 (ATerm), ATerm t)
{
  ATerm l_180 = NULL,m_180 = NULL,n_180 = NULL;
  l_180 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_180 = ATgetFirst((ATermList) t);
      n_180 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm l_37 = t;
    int m_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_140 = NULL,f_140 = NULL,o_140 = NULL,p_140 = NULL,q_140 = NULL,z_140 = NULL,b_141 = NULL,a_10 = NULL,z_9 = NULL;
        t = SSLgetAnnotations(l_180);
        q_140 = t;
        t = m_180;
        t = j_0(t);
        z_140 = t;
        t = (ATerm) ATinsert(CheckATermList(n_180), z_140);
        z_9 = t;
        t = SSLsetAnnotations(z_9, q_140);
        b_141 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_140 = ATgetFirst((ATermList) t);
            o_140 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_141);
        e_140 = t;
        t = o_140;
        {
          ATerm n_37 = t;
          int q_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(j_0, t);
              ;
              LocalPopChoice(q_37);
            }
          else
            {
              t = n_37;
            }
          p_140 = t;
          t = (ATerm) ATinsert(CheckATermList(p_140), f_140);
          a_10 = t;
          t = SSLsetAnnotations(a_10, e_140);
        }
        ;
        LocalPopChoice(m_37);
      }
    else
      {
        t = l_37;
        {
          ATerm n_141 = NULL,r_141 = NULL,b_10 = NULL;
          t = SSLgetAnnotations(l_180);
          n_141 = t;
          t = n_180;
          t = map1_1_0(j_0, t);
          r_141 = t;
          t = (ATerm) ATinsert(CheckATermList(r_141), m_180);
          b_10 = t;
          t = SSLsetAnnotations(b_10, n_141);
        }
      }
  }
  return(t);
}
ATerm j_7 (ATerm t)
{
  ATerm v_181 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      v_181 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, v_181, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_v_37), term_v_37));
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm w_181 = NULL,x_181 = NULL;
  x_181 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      w_181 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, w_181, term_v_37);
    }
  else
    {
      t = x_181;
    }
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm h_182 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      h_182 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, h_182, term_v_37);
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm j_182 = NULL,k_182 = NULL;
  k_182 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      j_182 = ATgetArgument(t, 0);
      {
        ATerm y_37 = t;
        int z_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_VarDec_2, j_182, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_v_37), term_v_37));
            ;
            LocalPopChoice(z_37);
          }
        else
          {
            t = y_37;
            t = k_182;
          }
      }
    }
  else
    {
      t = k_182;
    }
  return(t);
}
ATerm p_7 (ATerm t)
{
  ATerm v_182 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      v_182 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, v_182, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_v_37), term_v_37));
  return(t);
}
ATerm w_7 (ATerm t)
{
  ATerm w_182 = NULL,x_182 = NULL;
  x_182 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      w_182 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, w_182, term_v_37);
    }
  else
    {
      t = x_182;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm a_181 = NULL,b_181 = NULL,c_181 = NULL,d_181 = NULL,f_181 = NULL,g_181 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      f_181 = ATgetArgument(t, 0);
      g_181 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, f_181, g_181);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          f_181 = ATgetArgument(t, 0);
          t = f_181;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              a_181 = ATgetFirst((ATermList) t);
              b_181 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, a_181, (ATerm) ATmakeAppl(sym_LChoices_1, b_181));
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
              f_181 = ATgetArgument(t, 0);
              t = f_181;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  a_181 = ATgetFirst((ATermList) t);
                  b_181 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, a_181, (ATerm) ATmakeAppl(sym_Choices_1, b_181));
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
                  f_181 = ATgetArgument(t, 0);
                  t = f_181;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      a_181 = ATgetFirst((ATermList) t);
                      b_181 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_181, (ATerm) ATmakeAppl(sym_Seqs_1, b_181));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_a_38;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      f_181 = ATgetArgument(t, 0);
                      g_181 = ATgetArgument(t, 1);
                      d_181 = ATgetArgument(t, 2);
                      c_181 = ATgetArgument(t, 3);
                      {
                        ATerm s_181 = NULL,u_181 = NULL;
                        t = g_181;
                        t = map1_1_0(j_7, t);
                        s_181 = t;
                        t = d_181;
                        t = map1_1_0(k_7, t);
                        u_181 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, f_181, s_181, u_181, c_181);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          f_181 = ATgetArgument(t, 0);
                          g_181 = ATgetArgument(t, 1);
                          d_181 = ATgetArgument(t, 2);
                          c_181 = ATgetArgument(t, 3);
                          {
                            ATerm b_38 = t;
                            int c_38 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm e_182 = NULL,g_182 = NULL;
                                t = d_181;
                                t = map1_1_0(l_7, t);
                                e_182 = t;
                                t = g_181;
                                t = map_1_0(m_7, t);
                                g_182 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, f_181, g_182, e_182, c_181);
                                ;
                                LocalPopChoice(c_38);
                              }
                            else
                              {
                                t = b_38;
                                {
                                  ATerm s_182 = NULL,u_182 = NULL;
                                  t = g_181;
                                  t = map1_1_0(p_7, t);
                                  s_182 = t;
                                  t = d_181;
                                  t = map_1_0(w_7, t);
                                  u_182 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, f_181, s_182, u_182, c_181);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              f_181 = ATgetArgument(t, 0);
                              g_181 = ATgetArgument(t, 1);
                              d_181 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, g_181, (ATerm) ATmakeAppl(sym_Op_2, term_r_36, (ATerm) ATinsert(ATinsert(ATempty, d_181), f_181)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  f_181 = ATgetArgument(t, 0);
                                  g_181 = ATgetArgument(t, 1);
                                  d_181 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, d_181)), f_181), (ATerm) ATmakeAppl(sym_Build_1, g_181)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      f_181 = ATgetArgument(t, 0);
                                      g_181 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_181, (ATerm) ATmakeAppl(sym_Match_1, g_181));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          f_181 = ATgetArgument(t, 0);
                                          g_181 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, f_181), g_181);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              f_181 = ATgetArgument(t, 0);
                                              g_181 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, g_181), f_181);
                                        }
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
ATerm y_7 (ATerm t)
{
  ATerm d_38 = t;
  if((PushChoice() == 0))
    {
      ATerm x_183 = NULL,y_183 = NULL,z_183 = NULL,f_10 = NULL;
      z_183 = t;
      if(match_cons(t, sym_Var_1))
        {
          y_183 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_183);
      x_183 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, y_183);
      f_10 = t;
      t = SSLsetAnnotations(f_10, x_183);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = d_38;
    }
  return(t);
}
ATerm a_8 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_e_38;
  return(t);
}
ATerm e_8 (ATerm t)
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
ATerm f_8 (ATerm t)
{
  ATerm c_184 = NULL,d_184 = NULL,e_184 = NULL,f_184 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_38 = ATgetArgument(t, 0);
      if(match_cons(h_38, sym__2))
        {
          c_184 = ATgetArgument(h_38, 0);
          d_184 = ATgetArgument(h_38, 1);
        }
      else
        _fail(t);
      {
        ATerm k_38 = ATgetArgument(t, 1);
        if(match_cons(k_38, sym__2))
          {
            e_184 = ATgetArgument(k_38, 0);
            f_184 = ATgetArgument(k_38, 1);
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
ATerm g_8 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_e_38;
  return(t);
}
ATerm i_8 (ATerm t)
{
  ATerm g_184 = NULL,h_184 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_184 = ATgetFirst((ATermList) t);
      h_184 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_184, h_184);
  return(t);
}
ATerm k_8 (ATerm t)
{
  ATerm i_184 = NULL,j_184 = NULL,k_184 = NULL,l_184 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_38 = ATgetArgument(t, 0);
      if(match_cons(l_38, sym__2))
        {
          i_184 = ATgetArgument(l_38, 0);
          j_184 = ATgetArgument(l_38, 1);
        }
      else
        _fail(t);
      {
        ATerm m_38 = ATgetArgument(t, 1);
        if(match_cons(m_38, sym__2))
          {
            k_184 = ATgetArgument(m_38, 0);
            l_184 = ATgetArgument(m_38, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_184), i_184), (ATerm) ATinsert(CheckATermList(l_184), j_184));
  return(t);
}
ATerm t_28 (ATerm p_64, ATerm q_64, ATerm r_64, ATerm t)
{
  ATerm o_183 = NULL,p_183 = NULL,q_183 = NULL,r_183 = NULL,s_183 = NULL,t_183 = NULL,u_183 = NULL,v_183 = NULL,w_183 = NULL,g_10 = NULL;
  t = r_64;
  t = fetch_1_0(y_7, t);
  t = r_64;
  t = genzip_4_0(a_8, e_8, f_8, LiftPrimArg_0_0, t);
  w_183 = t;
  if(match_cons(t, sym__2))
    {
      s_183 = ATgetArgument(t, 0);
      t_183 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_183);
  r_183 = t;
  t = s_183;
  t = concat_0_0(t);
  u_183 = t;
  t = t_183;
  t = genzip_4_0(g_8, i_8, k_8, _id, t);
  v_183 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_183, v_183);
  g_10 = t;
  t = SSLsetAnnotations(g_10, r_183);
  if(match_cons(t, sym__2))
    {
      o_183 = ATgetArgument(t, 0);
      {
        ATerm n_38 = ATgetArgument(t, 1);
        if(match_cons(n_38, sym__2))
          {
            p_183 = ATgetArgument(n_38, 0);
            q_183 = ATgetArgument(n_38, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, o_183, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, p_183), (ATerm) ATmakeAppl(sym_CallT_3, p_64, q_64, q_183)));
  return(t);
}
ATerm f_185 (ATerm w_184, ATerm t)
{
  ATerm y_184 = NULL;
  t = w_184;
  {
    ATerm o_38 = t;
    if((PushChoice() == 0))
      {
        ATerm z_184 = NULL,a_185 = NULL,b_185 = NULL,j_10 = NULL;
        b_185 = t;
        if(match_cons(t, sym_Var_1))
          {
            a_185 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_185);
        z_184 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, a_185);
        j_10 = t;
        t = SSLsetAnnotations(j_10, z_184);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_38;
      }
    t = new_0_0(t);
    y_184 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, y_184), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, w_184), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, y_184)))), (ATerm) ATmakeAppl(sym_Var_1, y_184)));
  }
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm c_185 = NULL,d_185 = NULL;
  c_185 = t;
  if(match_cons(t, sym_Var_1))
    {
      d_185 = ATgetArgument(t, 0);
      {
        ATerm p_38 = t;
        int q_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_185(c_185, t);
            ;
            LocalPopChoice(q_38);
          }
        else
          {
            t = p_38;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_a_38, (ATerm) ATmakeAppl(sym_Var_1, d_185)));
          }
      }
    }
  else
    {
      t = f_185(c_185, t);
    }
  return(t);
}
ATerm q_8 (ATerm t)
{
  ATerm s_38 = t;
  if((PushChoice() == 0))
    {
      ATerm o_143 = NULL,s_143 = NULL,v_143 = NULL,l_10 = NULL;
      v_143 = t;
      if(match_cons(t, sym_Var_1))
        {
          s_143 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_143);
      o_143 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, s_143);
      l_10 = t;
      t = SSLsetAnnotations(l_10, o_143);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = s_38;
    }
  return(t);
}
ATerm r_8 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_e_38;
  return(t);
}
ATerm s_8 (ATerm t)
{
  ATerm w_143 = NULL,d_144 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_143 = ATgetFirst((ATermList) t);
      d_144 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_143, d_144);
  return(t);
}
ATerm t_8 (ATerm t)
{
  ATerm e_144 = NULL,m_144 = NULL,n_144 = NULL,t_144 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_38 = ATgetArgument(t, 0);
      if(match_cons(t_38, sym__2))
        {
          e_144 = ATgetArgument(t_38, 0);
          m_144 = ATgetArgument(t_38, 1);
        }
      else
        _fail(t);
      {
        ATerm w_38 = ATgetArgument(t, 1);
        if(match_cons(w_38, sym__2))
          {
            n_144 = ATgetArgument(w_38, 0);
            t_144 = ATgetArgument(w_38, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_144), e_144), (ATerm) ATinsert(CheckATermList(t_144), m_144));
  return(t);
}
ATerm u_8 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_e_38;
  return(t);
}
ATerm z_8 (ATerm t)
{
  ATerm u_144 = NULL,v_144 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_144 = ATgetFirst((ATermList) t);
      v_144 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_144, v_144);
  return(t);
}
ATerm a_9 (ATerm t)
{
  ATerm p_146 = NULL,t_146 = NULL,w_146 = NULL,a_147 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_38 = ATgetArgument(t, 0);
      if(match_cons(x_38, sym__2))
        {
          p_146 = ATgetArgument(x_38, 0);
          t_146 = ATgetArgument(x_38, 1);
        }
      else
        _fail(t);
      {
        ATerm y_38 = ATgetArgument(t, 1);
        if(match_cons(y_38, sym__2))
          {
            w_146 = ATgetArgument(y_38, 0);
            a_147 = ATgetArgument(y_38, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_146), p_146), (ATerm) ATinsert(CheckATermList(a_147), t_146));
  return(t);
}
ATerm b_9 (ATerm t)
{
  ATerm z_38 = t;
  if((PushChoice() == 0))
    {
      ATerm s_150 = NULL,e_151 = NULL,f_151 = NULL,n_10 = NULL;
      f_151 = t;
      if(match_cons(t, sym_Var_1))
        {
          e_151 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_151);
      s_150 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, e_151);
      n_10 = t;
      t = SSLsetAnnotations(n_10, s_150);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = z_38;
    }
  return(t);
}
ATerm c_9 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_e_38;
  return(t);
}
ATerm e_9 (ATerm t)
{
  ATerm k_151 = NULL,l_151 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_151 = ATgetFirst((ATermList) t);
      l_151 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_151, l_151);
  return(t);
}
ATerm i_9 (ATerm t)
{
  ATerm m_151 = NULL,n_151 = NULL,y_151 = NULL,z_151 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_39 = ATgetArgument(t, 0);
      if(match_cons(b_39, sym__2))
        {
          m_151 = ATgetArgument(b_39, 0);
          n_151 = ATgetArgument(b_39, 1);
        }
      else
        _fail(t);
      {
        ATerm c_39 = ATgetArgument(t, 1);
        if(match_cons(c_39, sym__2))
          {
            y_151 = ATgetArgument(c_39, 0);
            z_151 = ATgetArgument(c_39, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_151), m_151), (ATerm) ATinsert(CheckATermList(z_151), n_151));
  return(t);
}
ATerm j_9 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_e_38;
  return(t);
}
ATerm k_9 (ATerm t)
{
  ATerm e_152 = NULL,f_152 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_152 = ATgetFirst((ATermList) t);
      f_152 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_152, f_152);
  return(t);
}
ATerm m_9 (ATerm t)
{
  ATerm g_152 = NULL,h_152 = NULL,t_152 = NULL,u_152 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_39 = ATgetArgument(t, 0);
      if(match_cons(d_39, sym__2))
        {
          g_152 = ATgetArgument(d_39, 0);
          h_152 = ATgetArgument(d_39, 1);
        }
      else
        _fail(t);
      {
        ATerm e_39 = ATgetArgument(t, 1);
        if(match_cons(e_39, sym__2))
          {
            t_152 = ATgetArgument(e_39, 0);
            u_152 = ATgetArgument(e_39, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_152), g_152), (ATerm) ATinsert(CheckATermList(u_152), h_152));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm v_187 = NULL,w_187 = NULL,x_187 = NULL,y_187 = NULL;
  w_187 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      x_187 = ATgetArgument(t, 0);
      y_187 = ATgetArgument(t, 1);
      v_187 = ATgetArgument(t, 2);
      {
        ATerm t_142 = NULL,u_142 = NULL,v_142 = NULL,h_143 = NULL,i_143 = NULL,j_143 = NULL,l_143 = NULL,m_143 = NULL,n_143 = NULL,m_10 = NULL;
        t = v_187;
        t = fetch_1_0(q_8, t);
        t = v_187;
        t = genzip_4_0(r_8, s_8, t_8, LiftPrimArg_0_0, t);
        n_143 = t;
        if(match_cons(t, sym__2))
          {
            i_143 = ATgetArgument(t, 0);
            j_143 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_143);
        h_143 = t;
        t = i_143;
        t = concat_0_0(t);
        l_143 = t;
        t = j_143;
        t = genzip_4_0(u_8, z_8, a_9, _id, t);
        m_143 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_143, m_143);
        m_10 = t;
        t = SSLsetAnnotations(m_10, h_143);
        if(match_cons(t, sym__2))
          {
            t_142 = ATgetArgument(t, 0);
            {
              ATerm g_39 = ATgetArgument(t, 1);
              if(match_cons(g_39, sym__2))
                {
                  u_142 = ATgetArgument(g_39, 0);
                  v_142 = ATgetArgument(g_39, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, t_142, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, u_142), (ATerm) ATmakeAppl(sym_PrimT_3, x_187, y_187, v_142)));
      }
    }
  else
    {
      ATerm o_148 = NULL,p_148 = NULL,q_148 = NULL,r_148 = NULL,j_150 = NULL,k_150 = NULL,p_150 = NULL,q_150 = NULL,r_150 = NULL,o_10 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          x_187 = ATgetArgument(t, 0);
          y_187 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = y_187;
      t = fetch_1_0(b_9, t);
      t = y_187;
      t = genzip_4_0(c_9, e_9, i_9, LiftPrimArg_0_0, t);
      r_150 = t;
      if(match_cons(t, sym__2))
        {
          j_150 = ATgetArgument(t, 0);
          k_150 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(r_150);
      r_148 = t;
      t = j_150;
      t = concat_0_0(t);
      p_150 = t;
      t = k_150;
      t = genzip_4_0(j_9, k_9, m_9, _id, t);
      q_150 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_150, q_150);
      o_10 = t;
      t = SSLsetAnnotations(o_10, r_148);
      if(match_cons(t, sym__2))
        {
          o_148 = ATgetArgument(t, 0);
          {
            ATerm l_39 = ATgetArgument(t, 1);
            if(match_cons(l_39, sym__2))
              {
                p_148 = ATgetArgument(l_39, 0);
                q_148 = ATgetArgument(l_39, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, o_148, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, p_148), (ATerm) ATmakeAppl(sym_PrimT_3, x_187, (ATerm)ATempty, q_148)));
    }
  return(t);
}
ATerm t_9 (ATerm t)
{
  ATerm m_188 = NULL,n_188 = NULL,o_188 = NULL,p_188 = NULL;
  p_188 = t;
  if(match_cons(t, sym_Con_3))
    {
      m_188 = ATgetArgument(t, 0);
      n_188 = ATgetArgument(t, 1);
      o_188 = ATgetArgument(t, 2);
      {
        ATerm z_153 = NULL,t_10 = NULL;
        t = SSLgetAnnotations(p_188);
        z_153 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, m_188, n_188, o_188);
        t_10 = t;
        t = SSLsetAnnotations(t_10, z_153);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = p_188;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm m_39 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(t_9, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_39;
    }
  return(t);
}
ATerm u_9 (ATerm t)
{
  ATerm k_189 = NULL,l_189 = NULL,m_189 = NULL,n_189 = NULL;
  l_189 = t;
  if(match_cons(t, sym_Con_3))
    {
      m_189 = ATgetArgument(t, 0);
      n_189 = ATgetArgument(t, 1);
      k_189 = ATgetArgument(t, 2);
      {
        ATerm m_154 = NULL,v_10 = NULL;
        t = SSLgetAnnotations(l_189);
        m_154 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, m_189, n_189, k_189);
        v_10 = t;
        t = SSLsetAnnotations(v_10, m_154);
      }
    }
  else
    {
      ATerm n_155 = NULL,w_10 = NULL;
      if(match_cons(t, sym_App_2))
        {
          m_189 = ATgetArgument(t, 0);
          n_189 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(l_189);
      n_155 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, m_189, n_189);
      w_10 = t;
      t = SSLsetAnnotations(w_10, n_155);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm n_39 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(u_9, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_39;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm t_189 = NULL,u_189 = NULL,v_189 = NULL,w_189 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      t_189 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_189;
  if(match_cons(t, sym_StratRule_3))
    {
      u_189 = ATgetArgument(t, 0);
      v_189 = ATgetArgument(t, 1);
      w_189 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, v_189), (ATerm) ATmakeAppl(sym_Where_1, w_189)), u_189));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          u_189 = ATgetArgument(t, 0);
          v_189 = ATgetArgument(t, 1);
          w_189 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = u_189;
      t = pureterm_0_0(t);
      t = v_189;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, v_189)), (ATerm) ATmakeAppl(sym_Where_1, w_189)), (ATerm) ATmakeAppl(sym_Match_1, u_189)));
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm p_109 (ATerm), ATerm t)
{
  ATerm d_190 (ATerm t)
  {
    ATerm o_39 = t;
    int p_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_109(t);
        ;
        LocalPopChoice(p_39);
      }
    else
      {
        t = o_39;
        t = SRTS_one(d_190, t);
      }
    return(t);
  }
  t = d_190(t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm w_28 (ATerm e_60, ATerm f_60, ATerm g_60, ATerm t)
{
  ATerm e_190 = NULL,f_190 = NULL,g_190 = NULL,h_190 = NULL,i_190 = NULL,j_190 = NULL,k_190 = NULL;
  t = new_0_0(t);
  i_190 = t;
  t = e_60;
  {
    ATerm v_9 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm q_39 = ATgetArgument(t, 0);
          if(match_cons(q_39, sym_Var_1))
            {
              if(((h_190 != NULL) && (h_190 != ATgetArgument(q_39, 0))))
                _fail(ATgetArgument(q_39, 0));
              else
                h_190 = ATgetArgument(q_39, 0);
            }
          else
            _fail(t);
          if(((f_190 != NULL) && (f_190 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            f_190 = ATgetArgument(t, 1);
          {
            ATerm r_39 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, h_190);
      return(t);
    }
    t = oncetd_1_0(v_9, t);
    if(((j_190 != NULL) && (j_190 != t)))
      _fail(t);
    else
      j_190 = t;
    t = f_60;
    {
      ATerm w_9 (ATerm t)
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm s_39 = ATgetArgument(t, 0);
            if(match_cons(s_39, sym_Var_1))
              {
                if(((h_190 != NULL) && (h_190 != ATgetArgument(s_39, 0))))
                  _fail(ATgetArgument(s_39, 0));
                else
                  h_190 = ATgetArgument(s_39, 0);
              }
            else
              _fail(t);
            if(((g_190 != NULL) && (g_190 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              g_190 = ATgetArgument(t, 1);
            {
              ATerm t_39 = ATgetArgument(t, 2);
              if(match_cons(t_39, sym_CallT_3))
                {
                  if(((e_190 != NULL) && (e_190 != ATgetArgument(t_39, 0))))
                    _fail(ATgetArgument(t_39, 0));
                  else
                    e_190 = ATgetArgument(t_39, 0);
                  {
                    ATerm u_39 = ATgetArgument(t_39, 1);
                    if(((ATgetType(u_39) != AT_LIST) || !(ATisEmpty(u_39))))
                      _fail(t);
                  }
                  {
                    ATerm v_39 = ATgetArgument(t_39, 2);
                    if(((ATgetType(v_39) != AT_LIST) || !(ATisEmpty(v_39))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, i_190);
        return(t);
      }
      t = oncetd_1_0(w_9, t);
      if(((k_190 != NULL) && (k_190 != t)))
        _fail(t);
      else
        k_190 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, i_190), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, j_190, k_190, (ATerm) ATmakeAppl(sym_Seq_2, g_60, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(e_190), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(f_190), not_null(g_190), term_a_38))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(h_190)), (ATerm) ATmakeAppl(sym_Var_1, i_190))))));
    }
  }
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm x_39 = t;
  int z_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_40 = t;
      int b_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_190 = NULL,y_190 = NULL,z_190 = NULL,a_191 = NULL,b_191 = NULL,c_191 = NULL;
          a_191 = t;
          if(match_cons(t, sym_SRule_1))
            {
              b_191 = ATgetArgument(t, 0);
              t = b_191;
              if(match_cons(t, sym_Rule_3))
                {
                  x_190 = ATgetArgument(t, 0);
                  y_190 = ATgetArgument(t, 1);
                  z_190 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = a_191;
              t = w_28(x_190, y_190, z_190, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm f_156 = NULL,l_156 = NULL,z_10 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  b_191 = ATgetArgument(t, 0);
                  c_191 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(a_191);
              f_156 = t;
              t = c_191;
              t = desugarRule_0_0(t);
              l_156 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, b_191, l_156);
              z_10 = t;
              t = SSLsetAnnotations(z_10, f_156);
            }
          ;
          LocalPopChoice(b_40);
        }
      else
        {
          t = a_40;
          t = RtoS_0_0(t);
        }
      ;
      LocalPopChoice(z_39);
    }
  else
    {
      t = x_39;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm l_108 (ATerm), ATerm t)
{
  ATerm x_9 (ATerm t)
  {
    t = topdown_1_0(l_108, t);
    return(t);
  }
  t = l_108(t);
  t = SRTS_all(x_9, t);
  return(t);
}
ATerm y_9 (ATerm t)
{
  ATerm c_40 = t;
  int d_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      ;
      LocalPopChoice(d_40);
    }
  else
    {
      t = c_40;
    }
  t = repeat_1_0(c_10, t);
  return(t);
}
ATerm c_10 (ATerm t)
{
  ATerm e_40 = t;
  int f_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      ;
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
            ATerm q_191 = NULL,r_191 = NULL,s_191 = NULL,t_191 = NULL;
            q_191 = t;
            if(match_cons(t, sym_CallT_3))
              {
                r_191 = ATgetArgument(t, 0);
                s_191 = ATgetArgument(t, 1);
                t_191 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = q_191;
            t = t_28(r_191, s_191, t_191, t);
            ;
            LocalPopChoice(h_40);
          }
        else
          {
            t = g_40;
            {
              ATerm i_40 = t;
              int k_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(k_40);
                }
              else
                {
                  t = i_40;
                  {
                    ATerm l_40 = t;
                    int m_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        ;
                        LocalPopChoice(m_40);
                      }
                    else
                      {
                        t = l_40;
                        {
                          ATerm p_40 = t;
                          int u_40 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm v_40 = t;
                              int w_40 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm y_191 = NULL,z_191 = NULL,a_192 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      y_191 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = y_191;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      z_191 = ATgetArgument(t, 0);
                                      {
                                        ATerm x_40 = t;
                                        int y_40 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm c_192 = NULL,d_192 = NULL;
                                            t = y_191;
                                            {
                                              ATerm d_10 (ATerm t)
                                              {
                                                if(match_cons(t, sym_RootApp_1))
                                                  {
                                                    ATerm z_40 = ATgetArgument(t, 0);
                                                    if(match_cons(z_40, sym_Match_1))
                                                      {
                                                        if(((c_192 != NULL) && (c_192 != ATgetArgument(z_40, 0))))
                                                          _fail(ATgetArgument(z_40, 0));
                                                        else
                                                          c_192 = ATgetArgument(z_40, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                  }
                                                else
                                                  _fail(t);
                                                t = c_192;
                                                return(t);
                                              }
                                              t = pat_td_1_0(d_10, t);
                                              if(((d_192 != NULL) && (d_192 != t)))
                                                _fail(t);
                                              else
                                                d_192 = t;
                                              t = (ATerm) ATmakeAppl(sym_Match_1, d_192);
                                            }
                                            ;
                                            LocalPopChoice(y_40);
                                          }
                                        else
                                          {
                                            t = x_40;
                                            t = z_191;
                                          }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          z_191 = ATgetArgument(t, 0);
                                          a_192 = ATgetArgument(t, 1);
                                          {
                                            ATerm a_41 = t;
                                            int c_41 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm g_192 = NULL,h_192 = NULL;
                                                t = y_191;
                                                {
                                                  ATerm e_10 (ATerm t)
                                                  {
                                                    if(match_cons(t, sym_RootApp_1))
                                                      {
                                                        ATerm d_41 = ATgetArgument(t, 0);
                                                        if(match_cons(d_41, sym_Match_1))
                                                          {
                                                            if(((g_192 != NULL) && (g_192 != ATgetArgument(d_41, 0))))
                                                              _fail(ATgetArgument(d_41, 0));
                                                            else
                                                              g_192 = ATgetArgument(d_41, 0);
                                                          }
                                                        else
                                                          _fail(t);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = g_192;
                                                    return(t);
                                                  }
                                                  t = pat_td_1_0(e_10, t);
                                                  if(((h_192 != NULL) && (h_192 != t)))
                                                    _fail(t);
                                                  else
                                                    h_192 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, h_192);
                                                }
                                                ;
                                                LocalPopChoice(c_41);
                                              }
                                            else
                                              {
                                                t = a_41;
                                                t = (ATerm) ATmakeAppl(sym_BA_2, z_191, a_192);
                                              }
                                          }
                                        }
                                      else
                                        {
                                          ATerm l_192 = NULL,m_192 = NULL;
                                          t = y_191;
                                          {
                                            ATerm h_10 (ATerm t)
                                            {
                                              if(match_cons(t, sym_RootApp_1))
                                                {
                                                  ATerm e_41 = ATgetArgument(t, 0);
                                                  if(match_cons(e_41, sym_Match_1))
                                                    {
                                                      if(((l_192 != NULL) && (l_192 != ATgetArgument(e_41, 0))))
                                                        _fail(ATgetArgument(e_41, 0));
                                                      else
                                                        l_192 = ATgetArgument(e_41, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                }
                                              else
                                                _fail(t);
                                              t = l_192;
                                              return(t);
                                            }
                                            t = pat_td_1_0(h_10, t);
                                            if(((m_192 != NULL) && (m_192 != t)))
                                              _fail(t);
                                            else
                                              m_192 = t;
                                            t = (ATerm) ATmakeAppl(sym_Match_1, m_192);
                                          }
                                        }
                                    }
                                  ;
                                  LocalPopChoice(w_40);
                                }
                              else
                                {
                                  t = v_40;
                                  t = Mapp2_0_0(t);
                                }
                              ;
                              LocalPopChoice(u_40);
                            }
                          else
                            {
                              t = p_40;
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
  ATerm e_31 = NULL;
  ATerm f_41 = t;
  int g_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_31 = ATgetArgument(t, 0);
          {
            ATerm i_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_41);
      t = e_31;
    }
  else
    {
      t = f_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_31;
    }
  return(t);
}
ATerm k_10 (ATerm t)
{
  ATerm h_31 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_31);
  return(t);
}
ATerm p_10 (ATerm t)
{
  ATerm j_41 = t;
  int k_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(k_41);
    }
  else
    {
      t = j_41;
      {
        ATerm j_31 = NULL,k_31 = NULL,o_31 = NULL,p_31 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            j_31 = ATgetArgument(t, 0);
            t = j_31;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                j_31 = ATgetArgument(t, 0);
                k_31 = ATgetArgument(t, 1);
                o_31 = ATgetArgument(t, 2);
                p_31 = ATgetArgument(t, 3);
                t = o_31;
                t = map_1_0(q_10, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    j_31 = ATgetArgument(t, 0);
                    k_31 = ATgetArgument(t, 1);
                    o_31 = ATgetArgument(t, 2);
                    p_31 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = o_31;
                t = map_1_0(r_10, t);
              }
          }
      }
    }
  return(t);
}
ATerm q_10 (ATerm t)
{
  ATerm g_32 = NULL;
  ATerm l_41 = t;
  int n_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_32 = ATgetArgument(t, 0);
          {
            ATerm o_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_41);
      t = g_32;
    }
  else
    {
      t = l_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_32;
    }
  return(t);
}
ATerm r_10 (ATerm t)
{
  ATerm b_33 = NULL;
  ATerm q_41 = t;
  int s_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_33 = ATgetArgument(t, 0);
          {
            ATerm t_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_41);
      t = b_33;
    }
  else
    {
      t = q_41;
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
ATerm s_10 (ATerm t)
{
  ATerm k_33 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_33);
  return(t);
}
ATerm u_10 (ATerm t)
{
  ATerm x_41 = t;
  int y_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(y_41);
    }
  else
    {
      t = x_41;
      {
        ATerm r_33 = NULL,s_33 = NULL,w_33 = NULL,x_33 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            r_33 = ATgetArgument(t, 0);
            t = r_33;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                r_33 = ATgetArgument(t, 0);
                s_33 = ATgetArgument(t, 1);
                w_33 = ATgetArgument(t, 2);
                x_33 = ATgetArgument(t, 3);
                t = w_33;
                t = map_1_0(x_10, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    r_33 = ATgetArgument(t, 0);
                    s_33 = ATgetArgument(t, 1);
                    w_33 = ATgetArgument(t, 2);
                    x_33 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = w_33;
                t = map_1_0(y_10, t);
              }
          }
      }
    }
  return(t);
}
ATerm x_10 (ATerm t)
{
  ATerm i_34 = NULL;
  ATerm a_42 = t;
  int e_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_34 = ATgetArgument(t, 0);
          {
            ATerm f_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_42);
      t = i_34;
    }
  else
    {
      t = a_42;
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
ATerm y_10 (ATerm t)
{
  ATerm x_34 = NULL;
  ATerm g_42 = t;
  int h_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_34 = ATgetArgument(t, 0);
          {
            ATerm i_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_42);
      t = x_34;
    }
  else
    {
      t = g_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_34;
    }
  return(t);
}
ATerm DeclareVariables_0_0 (ATerm t)
{
  ATerm k_30 = NULL,m_30 = NULL,n_30 = NULL,o_30 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      m_30 = ATgetArgument(t, 0);
      n_30 = ATgetArgument(t, 1);
      o_30 = ATgetArgument(t, 2);
      k_30 = ATgetArgument(t, 3);
      {
        ATerm t_30 = NULL,u_30 = NULL,b_31 = NULL;
        t = o_30;
        t = map_1_0(i_10, t);
        t_30 = t;
        t = k_30;
        t = free_vars_3_0(k_10, p_10, tboundin_3_0, t);
        b_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_31, t_30);
        t = diff_0_0(t);
        u_30 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, m_30, n_30, o_30, (ATerm) ATmakeAppl(sym_Scope_2, u_30, k_30));
      }
    }
  else
    {
      ATerm j_33 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          m_30 = ATgetArgument(t, 0);
          n_30 = ATgetArgument(t, 1);
          o_30 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = o_30;
      t = free_vars_3_0(s_10, u_10, tboundin_3_0, t);
      j_33 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, m_30, n_30, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, j_33, o_30));
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm s_136 (ATerm), ATerm t_136 (ATerm), ATerm u_136 (ATerm), ATerm t)
{
  ATerm f_38 = NULL,g_38 = NULL,i_38 = NULL,j_38 = NULL,v_38 = NULL;
  j_38 = t;
  if(match_cons(t, sym_Scope_2))
    {
      v_38 = ATgetArgument(t, 0);
      f_38 = ATgetArgument(t, 1);
      {
        ATerm r_38 = NULL,u_38 = NULL,a_39 = NULL,b_11 = NULL;
        t = SSLgetAnnotations(j_38);
        r_38 = t;
        t = v_38;
        t = u_136(t);
        u_38 = t;
        t = f_38;
        t = s_136(t);
        a_39 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, u_38, a_39);
        b_11 = t;
        t = SSLsetAnnotations(b_11, r_38);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          v_38 = ATgetArgument(t, 0);
          f_38 = ATgetArgument(t, 1);
          g_38 = ATgetArgument(t, 2);
          i_38 = ATgetArgument(t, 3);
          {
            ATerm w_39 = NULL,q_40 = NULL,r_40 = NULL,s_40 = NULL,t_40 = NULL,c_11 = NULL;
            t = SSLgetAnnotations(j_38);
            w_39 = t;
            t = v_38;
            t = u_136(t);
            q_40 = t;
            t = f_38;
            t = u_136(t);
            r_40 = t;
            t = g_38;
            t = u_136(t);
            s_40 = t;
            t = i_38;
            t = s_136(t);
            t_40 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, q_40, r_40, s_40, t_40);
            c_11 = t;
            t = SSLsetAnnotations(c_11, w_39);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              v_38 = ATgetArgument(t, 0);
              f_38 = ATgetArgument(t, 1);
              g_38 = ATgetArgument(t, 2);
              i_38 = ATgetArgument(t, 3);
              {
                ATerm h_41 = NULL,z_41 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL,d_11 = NULL;
                t = SSLgetAnnotations(j_38);
                h_41 = t;
                t = v_38;
                t = u_136(t);
                z_41 = t;
                t = f_38;
                t = u_136(t);
                b_42 = t;
                t = g_38;
                t = u_136(t);
                c_42 = t;
                t = i_38;
                t = s_136(t);
                d_42 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, z_41, b_42, c_42, d_42);
                d_11 = t;
                t = SSLsetAnnotations(d_11, h_41);
              }
            }
          else
            {
              ATerm q_42 = NULL,s_42 = NULL,e_11 = NULL;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  v_38 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(j_38);
              q_42 = t;
              t = v_38;
              t = s_136(t);
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
  ATerm f_39 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_39);
  return(t);
}
ATerm f_11 (ATerm t)
{
  ATerm j_42 = t;
  int k_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(k_42);
    }
  else
    {
      t = j_42;
      {
        ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            h_39 = ATgetArgument(t, 0);
            t = h_39;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                h_39 = ATgetArgument(t, 0);
                i_39 = ATgetArgument(t, 1);
                j_39 = ATgetArgument(t, 2);
                k_39 = ATgetArgument(t, 3);
                t = j_39;
                t = map_1_0(g_11, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    h_39 = ATgetArgument(t, 0);
                    i_39 = ATgetArgument(t, 1);
                    j_39 = ATgetArgument(t, 2);
                    k_39 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = j_39;
                t = map_1_0(h_11, t);
              }
          }
      }
    }
  return(t);
}
ATerm g_11 (ATerm t)
{
  ATerm y_39 = NULL;
  ATerm l_42 = t;
  int m_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_39 = ATgetArgument(t, 0);
          {
            ATerm n_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_42);
      t = y_39;
    }
  else
    {
      t = l_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_39;
    }
  return(t);
}
ATerm h_11 (ATerm t)
{
  ATerm j_40 = NULL;
  ATerm o_42 = t;
  int p_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_40 = ATgetArgument(t, 0);
          {
            ATerm r_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_42);
      t = j_40;
    }
  else
    {
      t = o_42;
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
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(a_11, f_11, tboundin_3_0, t);
  return(t);
}
ATerm i_11 (ATerm t)
{
  ATerm p_41 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      p_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, p_41);
  return(t);
}
ATerm k_11 (ATerm t)
{
  ATerm t_42 = t;
  int v_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(v_42);
    }
  else
    {
      t = t_42;
      {
        ATerm r_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            r_41 = ATgetArgument(t, 0);
            t = r_41;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                r_41 = ATgetArgument(t, 0);
                u_41 = ATgetArgument(t, 1);
                v_41 = ATgetArgument(t, 2);
                w_41 = ATgetArgument(t, 3);
                t = v_41;
                t = map_1_0(m_11, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    r_41 = ATgetArgument(t, 0);
                    u_41 = ATgetArgument(t, 1);
                    v_41 = ATgetArgument(t, 2);
                    w_41 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = v_41;
                t = map_1_0(o_11, t);
              }
          }
      }
    }
  return(t);
}
ATerm m_11 (ATerm t)
{
  ATerm u_42 = NULL;
  ATerm w_42 = t;
  int z_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_42 = ATgetArgument(t, 0);
          {
            ATerm a_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_42);
      t = u_42;
    }
  else
    {
      t = w_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_42;
    }
  return(t);
}
ATerm o_11 (ATerm t)
{
  ATerm h_43 = NULL;
  ATerm b_43 = t;
  int c_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_43 = ATgetArgument(t, 0);
          {
            ATerm d_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_43);
      t = h_43;
    }
  else
    {
      t = b_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_43;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm b_41 = NULL,m_41 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      m_41 = ATgetArgument(t, 0);
      t = m_41;
      if(match_cons(t, sym_Rule_3))
        {
          b_41 = ATgetArgument(t, 0);
          {
            ATerm e_43 = ATgetArgument(t, 1);
          }
          {
            ATerm f_43 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = b_41;
      t = free_vars_3_0(i_11, k_11, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          m_41 = ATgetArgument(t, 0);
          {
            ATerm g_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = m_41;
    }
  return(t);
}
ATerm f_26 (ATerm g_118 (ATerm), ATerm e_32, ATerm d_32, ATerm t)
{
  ATerm d_45 (ATerm t)
  {
    ATerm t_44 = NULL,u_44 = NULL,v_44 = NULL;
    t_44 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_32;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_44 = ATgetFirst((ATermList) t);
            v_44 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm i_43 = t;
          int j_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_44;
              {
                ATerm r_11 (ATerm t)
                {
                  t = d_32;
                  return(t);
                }
                t = g_26(g_118, r_11, u_44, v_44, t);
                t = d_45(t);
              }
              ;
              LocalPopChoice(j_43);
            }
          else
            {
              t = i_43;
              {
                ATerm o_43 = NULL,r_43 = NULL,j_11 = NULL;
                t = SSLgetAnnotations(t_44);
                o_43 = t;
                t = v_44;
                t = d_45(t);
                r_43 = t;
                t = (ATerm) ATinsert(CheckATermList(r_43), u_44);
                j_11 = t;
                t = SSLsetAnnotations(j_11, o_43);
              }
            }
        }
      }
    return(t);
  }
  t = e_32;
  t = d_45(t);
  return(t);
}
ATerm g_26 (ATerm j_118 (ATerm), ATerm k_118 (ATerm), ATerm i_32, ATerm h_32, ATerm t)
{
  t = k_118(t);
  {
    ATerm s_11 (ATerm t)
    {
      ATerm m_45 = NULL;
      m_45 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_32, m_45);
      t = j_118(t);
      return(t);
    }
    t = fetch_1_0(s_11, t);
    t = h_32;
  }
  return(t);
}
ATerm h_26 (ATerm b_118 (ATerm), ATerm c_32, ATerm b_32, ATerm t)
{
  ATerm x_46 (ATerm t)
  {
    ATerm m_46 = NULL,n_46 = NULL,o_46 = NULL;
    m_46 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = m_46;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_46 = ATgetFirst((ATermList) t);
            o_46 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm k_43 = t;
          int l_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_46;
              {
                ATerm u_11 (ATerm t)
                {
                  t = b_32;
                  return(t);
                }
                t = g_26(b_118, u_11, n_46, o_46, t);
                t = x_46(t);
              }
              ;
              LocalPopChoice(l_43);
            }
          else
            {
              t = k_43;
              {
                ATerm b_44 = NULL,e_44 = NULL,l_11 = NULL;
                t = SSLgetAnnotations(m_46);
                b_44 = t;
                t = o_46;
                t = x_46(t);
                e_44 = t;
                t = (ATerm) ATinsert(CheckATermList(e_44), n_46);
                l_11 = t;
                t = SSLsetAnnotations(l_11, b_44);
              }
            }
        }
      }
    return(t);
  }
  t = c_32;
  t = x_46(t);
  return(t);
}
ATerm genzip_4_0 (ATerm f_116 (ATerm), ATerm g_116 (ATerm), ATerm h_116 (ATerm), ATerm i_116 (ATerm), ATerm t)
{
  ATerm t_184 (ATerm t)
  {
    ATerm m_43 = t;
    int n_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_116(t);
        ;
        LocalPopChoice(n_43);
      }
    else
      {
        t = m_43;
        {
          ATerm n_184 = NULL,o_184 = NULL,p_184 = NULL,q_184 = NULL,r_184 = NULL,s_184 = NULL,n_11 = NULL;
          t = g_116(t);
          s_184 = t;
          if(match_cons(t, sym__2))
            {
              o_184 = ATgetArgument(t, 0);
              p_184 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(s_184);
          n_184 = t;
          t = o_184;
          t = i_116(t);
          q_184 = t;
          t = p_184;
          t = t_184(t);
          r_184 = t;
          t = (ATerm) ATmakeAppl(sym__2, q_184, r_184);
          n_11 = t;
          t = SSLsetAnnotations(n_11, n_184);
          t = h_116(t);
        }
      }
    return(t);
  }
  t = t_184(t);
  return(t);
}
ATerm x_11 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_43 = ATgetArgument(t, 0);
      if(((ATgetType(p_43) != AT_LIST) || !(ATisEmpty(p_43))))
        _fail(t);
      {
        ATerm q_43 = ATgetArgument(t, 1);
        if(((ATgetType(q_43) != AT_LIST) || !(ATisEmpty(q_43))))
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
  ATerm r_47 = NULL,t_47 = NULL,u_47 = NULL,v_47 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_43 = ATgetArgument(t, 0);
      if(((ATgetType(s_43) == AT_LIST) && !(ATisEmpty(s_43))))
        {
          r_47 = ATgetFirst((ATermList) s_43);
          t_47 = (ATerm) ATgetNext((ATermList) s_43);
        }
      else
        _fail(t);
      {
        ATerm t_43 = ATgetArgument(t, 1);
        if(((ATgetType(t_43) == AT_LIST) && !(ATisEmpty(t_43))))
          {
            u_47 = ATgetFirst((ATermList) t_43);
            v_47 = (ATerm) ATgetNext((ATermList) t_43);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_47, u_47), (ATerm) ATmakeAppl(sym__2, t_47, v_47));
  return(t);
}
ATerm a_12 (ATerm t)
{
  ATerm w_47 = NULL,x_47 = NULL;
  if(match_cons(t, sym__2))
    {
      w_47 = ATgetArgument(t, 0);
      x_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_47), w_47);
  return(t);
}
ATerm j_26 (ATerm b_600, ATerm g_600, ATerm y_59, ATerm t)
{
  ATerm d_47 = NULL,f_47 = NULL,j_47 = NULL,k_47 = NULL;
  t = SSL_explode_term(g_600);
  if(match_cons(t, sym__2))
    {
      d_47 = ATgetArgument(t, 0);
      j_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(b_600);
  if(match_cons(t, sym__2))
    {
      if((d_47 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      f_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_47, j_47);
  t = genzip_4_0(x_11, y_11, a_12, _id, t);
  k_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_47, y_59);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm c_108 (ATerm), ATerm d_108 (ATerm), ATerm t)
{
  ATerm m_159 (ATerm t)
  {
    ATerm u_43 = t;
    int v_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_108(t);
        ;
        LocalPopChoice(v_43);
      }
    else
      {
        t = u_43;
        t = d_108(t);
        t = m_159(t);
      }
    return(t);
  }
  t = m_159(t);
  return(t);
}
ATerm for_3_0 (ATerm f_108 (ATerm), ATerm g_108 (ATerm), ATerm h_108 (ATerm), ATerm t)
{
  t = f_108(t);
  t = while_not_2_0(g_108, h_108, t);
  return(t);
}
ATerm c_12 (ATerm t)
{
  ATerm i_48 = NULL;
  i_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, i_48);
  return(t);
}
ATerm f_12 (ATerm t)
{
  ATerm j_48 = NULL,n_48 = NULL,o_48 = NULL,q_48 = NULL,p_11 = NULL;
  q_48 = t;
  if(match_cons(t, sym__2))
    {
      n_48 = ATgetArgument(t, 0);
      o_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_48);
  j_48 = t;
  t = o_48;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_48, o_48);
  p_11 = t;
  t = SSLsetAnnotations(p_11, j_48);
  return(t);
}
ATerm g_12 (ATerm t)
{
  ATerm c_50 = NULL,d_50 = NULL,f_50 = NULL,g_50 = NULL,j_50 = NULL;
  c_50 = t;
  if(match_cons(t, sym__2))
    {
      d_50 = ATgetArgument(t, 0);
      f_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_50;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_50 = ATgetFirst((ATermList) t);
      j_50 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_43 = t;
        int x_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_51(d_50, f_50, c_50, t);
            ;
            LocalPopChoice(x_43);
          }
        else
          {
            t = w_43;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_50), g_50), j_50);
          }
      }
    }
  else
    {
      t = l_51(d_50, f_50, c_50, t);
    }
  return(t);
}
ATerm l_51 (ATerm r_48, ATerm u_48, ATerm z_48, ATerm t)
{
  ATerm a_49 = NULL,d_49 = NULL,q_11 = NULL,g_49 = NULL,j_49 = NULL,k_49 = NULL,q_49 = NULL;
  t = SSLgetAnnotations(z_48);
  a_49 = t;
  t = u_48;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_49 = ATgetFirst((ATermList) t);
      q_49 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = g_49;
  if(match_cons(t, sym__2))
    {
      j_49 = ATgetArgument(t, 0);
      k_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_43 = t;
    int z_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_49;
        if((j_49 != t))
          {
            _fail(t);
          }
        t = q_49;
        ;
        LocalPopChoice(z_43);
      }
    else
      {
        t = y_43;
        t = u_48;
        t = j_26(j_49, k_49, q_49, t);
      }
    d_49 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_48, d_49);
    q_11 = t;
    t = SSLsetAnnotations(q_11, a_49);
  }
  return(t);
}
ATerm i_12 (ATerm t)
{
  ATerm k_51 = NULL;
  if(match_cons(t, sym__2))
    {
      k_51 = ATgetArgument(t, 0);
      if((k_51 != ATgetArgument(t, 1)))
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
  ATerm a_44 = t;
  int c_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(c_12, f_12, g_12, t);
      ;
      LocalPopChoice(c_44);
    }
  else
    {
      t = a_44;
      {
        ATerm v_50 = NULL,w_50 = NULL,c_51 = NULL;
        v_50 = t;
        if(match_cons(t, sym__2))
          {
            w_50 = ATgetArgument(t, 0);
            c_51 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_50;
        t = h_26(i_12, w_50, c_51, t);
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
ATerm x_12 (ATerm t)
{
  ATerm y_44 = NULL,z_44 = NULL;
  if(match_cons(t, sym__2))
    {
      y_44 = ATgetArgument(t, 0);
      z_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_26(y_12, y_44, z_44, t);
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
  ATerm n_45 = NULL,o_45 = NULL;
  if(match_cons(t, sym__2))
    {
      n_45 = ATgetArgument(t, 0);
      o_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_26(d_13, n_45, o_45, t);
  return(t);
}
ATerm d_13 (ATerm t)
{
  ATerm u_45 = NULL;
  if(match_cons(t, sym__2))
    {
      u_45 = ATgetArgument(t, 0);
      if((u_45 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm n_135 (ATerm), ATerm o_135 (ATerm), ATerm p_135 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm p_52 (ATerm t)
  {
    ATerm d_44 = t;
    int f_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_135(t);
        ;
        LocalPopChoice(f_44);
      }
    else
      {
        t = d_44;
        {
          ATerm g_44 = t;
          int h_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_51 = NULL,t_51 = NULL,k_44 = NULL,l_44 = NULL;
              n_51 = t;
              t = o_135(t);
              t_51 = t;
              t = n_51;
              {
                ATerm k_12 (ATerm t)
                {
                  ATerm z_51 = NULL;
                  t = p_52(t);
                  z_51 = t;
                  t = (ATerm) ATmakeAppl(sym__2, z_51, t_51);
                  t = diff_0_0(t);
                  return(t);
                }
                t = p_135(k_12, p_52, r_12, t);
                if(((l_44 != NULL) && (l_44 != t)))
                  _fail(t);
                else
                  l_44 = t;
                t = SSL_explode_term(l_44);
                if(match_cons(t, sym__2))
                  {
                    ATerm i_44 = ATgetArgument(t, 0);
                    if(((k_44 != NULL) && (k_44 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      k_44 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = k_44;
                t = foldr_3_0(t_12, x_12, _id, t);
              }
              ;
              LocalPopChoice(h_44);
            }
          else
            {
              t = g_44;
              {
                ATerm g_45 = NULL,h_45 = NULL;
                h_45 = t;
                t = SSL_explode_term(h_45);
                if(match_cons(t, sym__2))
                  {
                    ATerm j_44 = ATgetArgument(t, 0);
                    g_45 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = g_45;
                t = foldr_3_0(z_12, a_13, p_52, t);
              }
            }
        }
      }
    return(t);
  }
  t = p_52(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm m_108 (ATerm), ATerm t)
{
  ATerm e_13 (ATerm t)
  {
    t = bottomup_1_0(m_108, t);
    return(t);
  }
  t = SRTS_all(e_13, t);
  t = m_108(t);
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
  ATerm k_53 = NULL,n_53 = NULL,o_53 = NULL,q_53 = NULL,u_53 = NULL;
  u_53 = t;
  if(match_cons(t, sym_LRule_1))
    {
      q_53 = ATgetArgument(t, 0);
      t = q_53;
      if(match_cons(t, sym_Rule_3))
        {
          k_53 = ATgetArgument(t, 0);
          n_53 = ATgetArgument(t, 1);
          o_53 = ATgetArgument(t, 2);
          {
            ATerm m_44 = t;
            int n_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_54 = NULL;
                t = k_53;
                t = free_vars_3_0(i_13, j_13, tboundin_3_0, t);
                e_54 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, e_54, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, k_53, n_53, o_53)));
                ;
                LocalPopChoice(n_44);
              }
            else
              {
                t = m_44;
                t = u_53;
              }
          }
        }
      else
        {
          t = u_53;
        }
    }
  else
    {
      if(match_cons(t, sym_ScopeDefault_1))
        {
          q_53 = ATgetArgument(t, 0);
          {
            ATerm o_44 = t;
            int p_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_56 = NULL;
                t = q_53;
                t = free_vars_3_0(m_13, n_13, tboundin_3_0, t);
                k_56 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, k_56, q_53);
                ;
                LocalPopChoice(p_44);
              }
            else
              {
                t = o_44;
                t = u_53;
              }
          }
        }
      else
        {
          t = u_53;
        }
    }
  return(t);
}
ATerm i_13 (ATerm t)
{
  ATerm h_54 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_54);
  return(t);
}
ATerm j_13 (ATerm t)
{
  ATerm q_44 = t;
  int r_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(r_44);
    }
  else
    {
      t = q_44;
      {
        ATerm o_54 = NULL,p_54 = NULL,q_54 = NULL,r_54 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            o_54 = ATgetArgument(t, 0);
            t = o_54;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                o_54 = ATgetArgument(t, 0);
                p_54 = ATgetArgument(t, 1);
                q_54 = ATgetArgument(t, 2);
                r_54 = ATgetArgument(t, 3);
                t = q_54;
                t = map_1_0(k_13, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    o_54 = ATgetArgument(t, 0);
                    p_54 = ATgetArgument(t, 1);
                    q_54 = ATgetArgument(t, 2);
                    r_54 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = q_54;
                t = map_1_0(l_13, t);
              }
          }
      }
    }
  return(t);
}
ATerm k_13 (ATerm t)
{
  ATerm h_55 = NULL;
  ATerm s_44 = t;
  int w_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_55 = ATgetArgument(t, 0);
          {
            ATerm x_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_44);
      t = h_55;
    }
  else
    {
      t = s_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_55;
    }
  return(t);
}
ATerm l_13 (ATerm t)
{
  ATerm e_56 = NULL;
  ATerm a_45 = t;
  int c_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_56 = ATgetArgument(t, 0);
          {
            ATerm e_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_45);
      t = e_56;
    }
  else
    {
      t = a_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_56;
    }
  return(t);
}
ATerm m_13 (ATerm t)
{
  ATerm l_56 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_56);
  return(t);
}
ATerm n_13 (ATerm t)
{
  ATerm f_45 = t;
  int i_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(i_45);
    }
  else
    {
      t = f_45;
      {
        ATerm t_56 = NULL,v_56 = NULL,b_57 = NULL,n_57 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            t_56 = ATgetArgument(t, 0);
            t = t_56;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                t_56 = ATgetArgument(t, 0);
                v_56 = ATgetArgument(t, 1);
                b_57 = ATgetArgument(t, 2);
                n_57 = ATgetArgument(t, 3);
                t = b_57;
                t = map_1_0(o_13, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    t_56 = ATgetArgument(t, 0);
                    v_56 = ATgetArgument(t, 1);
                    b_57 = ATgetArgument(t, 2);
                    n_57 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = b_57;
                t = map_1_0(p_13, t);
              }
          }
      }
    }
  return(t);
}
ATerm o_13 (ATerm t)
{
  ATerm m_58 = NULL;
  ATerm j_45 = t;
  int k_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_58 = ATgetArgument(t, 0);
          {
            ATerm l_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_45);
      t = m_58;
    }
  else
    {
      t = j_45;
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
ATerm p_13 (ATerm t)
{
  ATerm e_59 = NULL;
  ATerm p_45 = t;
  int q_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_59 = ATgetArgument(t, 0);
          {
            ATerm t_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_45);
      t = e_59;
    }
  else
    {
      t = p_45;
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
ATerm l_26 (ATerm y_142, ATerm t)
{
  t = y_142;
  t = map_1_0(g_13, t);
  t = define_strategies_0_0(t);
  return(t);
}
ATerm i_28 (ATerm x_42, ATerm y_42, ATerm t)
{
  ATerm v_45 = t;
  int w_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(x_42, y_42);
      ;
      LocalPopChoice(w_45);
    }
  else
    {
      t = v_45;
      t = SSL_addr(x_42, y_42);
    }
  return(t);
}
ATerm foldr_3_0 (ATerm h_120 (ATerm), ATerm i_120 (ATerm), ATerm j_120 (ATerm), ATerm t)
{
  ATerm z_167 = NULL,a_168 = NULL,d_168 = NULL;
  z_167 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_167;
      t = h_120(t);
    }
  else
    {
      ATerm i_168 = NULL,j_168 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_168 = ATgetFirst((ATermList) t);
          d_168 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_168;
      t = j_120(t);
      i_168 = t;
      t = d_168;
      t = foldr_3_0(h_120, i_120, j_120, t);
      j_168 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_168, j_168);
      t = i_120(t);
    }
  return(t);
}
ATerm q_13 (ATerm t)
{
  ATerm o_60 = NULL,p_60 = NULL,q_60 = NULL,r_60 = NULL,s_60 = NULL,t_60 = NULL;
  o_60 = t;
  if(match_cons(t, sym_SDef_3))
    {
      p_60 = ATgetArgument(t, 0);
      q_60 = ATgetArgument(t, 1);
      {
        ATerm x_45 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = q_60;
  t = foldr_3_0(r_13, s_13, t_13, t);
  r_60 = t;
  t = term_t_17;
  s_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_60, r_60);
  t_60 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_t_17, (ATerm)ATmakeAppl(sym__2, p_60, r_60), o_60);
  t = f_29(s_60, t_60, o_60, t);
  return(t);
}
ATerm r_13 (ATerm t)
{
  t = term_z_21;
  return(t);
}
ATerm s_13 (ATerm t)
{
  ATerm u_60 = NULL,v_60 = NULL;
  if(match_cons(t, sym__2))
    {
      u_60 = ATgetArgument(t, 0);
      v_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_28(u_60, v_60, t);
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
ATerm m_26 (ATerm q_51, ATerm r_51, ATerm t)
{
  t = SSL_execvp(q_51, r_51);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm w_62 = NULL,s_63 = NULL,t_63 = NULL,u_63 = NULL;
  w_62 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      s_63 = ATgetArgument(t, 0);
      {
        ATerm c_46 = NULL,d_46 = NULL;
        t = SSL_int_to_string(s_63);
        c_46 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_46), c_46), term_y_45);
        d_46 = t;
        t = SSL_concat_strings(d_46);
      }
    }
  else
    {
      ATerm v_46 = NULL,w_46 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          s_63 = ATgetArgument(t, 0);
          t_63 = ATgetArgument(t, 1);
          u_63 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(t_63);
      v_46 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, u_63), term_f_46), v_46), term_e_46), s_63);
      w_46 = t;
      t = SSL_concat_strings(w_46);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm o_114 (ATerm), ATerm t)
{
  ATerm n_66 = NULL;
  ATerm u_13 (ATerm t)
  {
    t = o_114(t);
    if(((n_66 != NULL) && (n_66 != t)))
      _fail(t);
    else
      n_66 = t;
    return(t);
  }
  t = fetch_1_0(u_13, t);
  t = not_null(n_66);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm o_66 = NULL;
  o_66 = t;
  {
    ATerm g_46 = t;
    int h_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_13 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm i_46 = ATgetArgument(t, 0);
              if((o_66 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm j_46 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_53), term_m_53), term_g_53), term_c_53), term_x_52), term_t_52), term_n_52), term_j_52), term_f_52), term_b_52), term_u_51), term_m_51), term_g_51), term_a_51), term_s_50), term_m_50), term_e_50), term_y_49), term_t_49), term_m_49), term_c_49), term_w_48), term_d_48), term_p_47), term_h_47), term_a_47), term_t_46), term_p_46);
        t = fetch_elem_1_0(v_13, t);
        ;
        LocalPopChoice(h_46);
      }
    else
      {
        t = g_46;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, o_66);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm u_66 = NULL,e_67 = NULL;
  u_66 = t;
  {
    ATerm v_53 = t;
    int w_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm x_53 = ATgetArgument(t, 0);
            e_67 = ATgetArgument(t, 1);
            {
              ATerm y_53 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(w_53);
        {
          ATerm z_53 = t;
          int a_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_47 = NULL,i_47 = NULL,l_47 = NULL;
              t = e_67;
              {
                ATerm b_54 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = b_54;
                  }
                t = signal_from_number_0_0(t);
                t = signal_to_descr_0_0(t);
                g_47 = t;
                t = term_d_22;
                i_47 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, g_47), term_d_54);
                l_47 = t;
                t = SSL_printnl(i_47, l_47);
                t = (ATerm) ATmakeAppl(sym__2, term_d_22, (ATerm) ATinsert(ATinsert(ATempty, g_47), term_d_54));
              }
              ;
              LocalPopChoice(a_54);
            }
          else
            {
              t = z_53;
              t = u_66;
            }
        }
      }
    else
      {
        t = v_53;
        t = u_66;
      }
    t = u_66;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm w_129 (ATerm), ATerm t)
{
  ATerm x_67 = NULL,z_67 = NULL;
  z_67 = t;
  t = fork_0_0(t);
  x_67 = t;
  {
    ATerm f_54 = t;
    int g_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = z_67;
        t = w_129(t);
        ;
        LocalPopChoice(g_54);
      }
    else
      {
        t = f_54;
        t = SSL_waitpid(x_67);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm i_54 = ATgetArgument(t, 0);
            if(((ATgetType(i_54) != AT_INT) || (ATgetInt((ATermInt) i_54) != 0)))
              _fail(t);
            {
              ATerm j_54 = ATgetArgument(t, 1);
            }
            {
              ATerm k_54 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = z_67;
      }
  }
  return(t);
}
ATerm call_sc_0_0 (ATerm t)
{
  ATerm l_68 = NULL,m_68 = NULL,n_68 = NULL;
  l_68 = t;
  {
    ATerm l_54 = t;
    int m_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_68 = NULL,t_68 = NULL,u_68 = NULL,v_68 = NULL;
        t = term_o_29;
        t = get_config_0_0(t);
        t = term_n_54;
        v_68 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_n_54, l_68);
        t = d_29(v_68, l_68, t);
        o_68 = t;
        t = term_d_22;
        t_68 = t;
        t = (ATerm) ATinsert(ATempty, o_68);
        u_68 = t;
        t = SSL_printnl(t_68, u_68);
        t = l_68;
        ;
        LocalPopChoice(m_54);
      }
    else
      {
        t = l_54;
      }
    t = term_s_54;
    t = get_config_0_0(t);
    m_68 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_t_54, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(m_68), term_v_54), l_68), term_u_54));
    {
      ATerm w_13 (ATerm t)
      {
        ATerm y_68 = NULL,p_69 = NULL,q_69 = NULL,r_69 = NULL;
        t = term_d_22;
        q_69 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_t_54, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(m_68), term_v_54), l_68), term_u_54)));
        r_69 = t;
        t = SSL_printnl(q_69, r_69);
        t = term_t_54;
        y_68 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(m_68), term_v_54), l_68), term_u_54);
        p_69 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_t_54, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(m_68), term_v_54), l_68), term_u_54));
        t = m_26(y_68, p_69, t);
        return(t);
      }
      t = fork_and_wait_1_0(w_13, t);
      t = term_w_54;
      if(((n_68 != NULL) && (n_68 != t)))
        _fail(t);
      else
        n_68 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_68, term_w_54);
      t = d_29(l_68, n_68, t);
      t = ReadFromFile_0_0(t);
    }
  }
  return(t);
}
ATerm eval_import_0_0 (ATerm t)
{
  ATerm z_69 = NULL;
  ATerm z_54 = t;
  int a_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Imports_1))
        {
          ATerm b_55 = ATgetArgument(t, 0);
          if(((ATgetType(b_55) != AT_LIST) || !(ATisEmpty(b_55))))
            _fail(t);
        }
      else
        _fail(t);
      LocalPopChoice(a_55);
    }
  else
    {
      t = z_54;
      {
        ATerm c_55 = t;
        int d_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Imports_1))
              {
                ATerm e_55 = ATgetArgument(t, 0);
                if(((ATgetType(e_55) == AT_LIST) && !(ATisEmpty(e_55))))
                  {
                    z_69 = ATgetFirst((ATermList) e_55);
                    {
                      ATerm f_55 = (ATerm) ATgetNext((ATermList) e_55);
                      if(((ATgetType(f_55) != AT_LIST) || !(ATisEmpty(f_55))))
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            LocalPopChoice(d_55);
            {
              ATerm b_70 = NULL;
              t = z_69;
              t = call_sc_0_0(t);
              if(match_cons(t, sym_Specification_1))
                {
                  ATerm g_55 = ATgetArgument(t, 0);
                  if(((ATgetType(g_55) == AT_LIST) && !(ATisEmpty(g_55))))
                    {
                      ATerm i_55 = ATgetFirst((ATermList) g_55);
                      if(match_cons(i_55, sym_Signature_1))
                        {
                          ATerm k_55 = ATgetArgument(i_55, 0);
                        }
                      else
                        _fail(t);
                      {
                        ATerm j_55 = (ATerm) ATgetNext((ATermList) g_55);
                        if(((ATgetType(j_55) == AT_LIST) && !(ATisEmpty(j_55))))
                          {
                            ATerm q_55 = ATgetFirst((ATermList) j_55);
                            if(match_cons(q_55, sym_Strategies_1))
                              {
                                b_70 = ATgetArgument(q_55, 0);
                              }
                            else
                              _fail(t);
                            {
                              ATerm r_55 = (ATerm) ATgetNext((ATermList) j_55);
                              if(((ATgetType(r_55) != AT_LIST) || !(ATisEmpty(r_55))))
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
              t = b_70;
              t = define_strategies_0_0(t);
            }
          }
        else
          {
            t = c_55;
            {
              ATerm c_70 = NULL,d_70 = NULL,e_70 = NULL;
              if(match_cons(t, sym_Imports_1))
                {
                  ATerm s_55 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = term_d_22;
              d_70 = t;
              t = (ATerm) ATinsert(ATempty, term_t_55);
              e_70 = t;
              t = SSL_printnl(d_70, e_70);
              t = term_a_22;
              c_70 = t;
              t = SSL_exit(c_70);
              t = (ATerm) ATinsert(ATempty, term_t_55);
            }
          }
      }
    }
  return(t);
}
ATerm o_26 (ATerm p_56, ATerm o_56, ATerm t)
{
  ATerm x_13 (ATerm t)
  {
    ATerm f_70 = NULL,g_70 = NULL;
    if(match_cons(t, sym__2))
      {
        f_70 = ATgetArgument(t, 0);
        g_70 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_table_put(p_56, f_70, g_70);
    t = (ATerm) ATmakeAppl(sym__3, p_56, f_70, g_70);
    return(t);
  }
  t = o_56;
  t = map_1_0(x_13, t);
  return(t);
}
ATerm p_26 (ATerm r_45, ATerm s_45, ATerm t)
{
  t = SSL_access(r_45, s_45);
  return(t);
}
ATerm q_26 (ATerm l_25, ATerm t)
{
  ATerm r_70 = NULL,s_70 = NULL,t_70 = NULL,u_70 = NULL,x_71 = NULL,f_71 = NULL;
  f_71 = t;
  {
    ATerm u_55 = t;
    int v_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_47 = NULL,s_47 = NULL,z_47 = NULL,a_48 = NULL;
        t = term_o_29;
        t = get_config_0_0(t);
        t = term_w_55;
        a_48 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_w_55, l_25);
        t = d_29(a_48, l_25, t);
        q_47 = t;
        t = term_d_22;
        s_47 = t;
        t = (ATerm) ATinsert(ATempty, q_47);
        z_47 = t;
        t = SSL_printnl(s_47, z_47);
        t = f_71;
        ;
        LocalPopChoice(v_55);
      }
    else
      {
        t = u_55;
        t = f_71;
      }
    t = l_25;
    {
      ATerm c_56 = t;
      int d_56 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_71 = NULL;
          t = (ATerm) ATinsert(ATempty, term_f_56);
          h_71 = t;
          t = (ATerm) ATmakeAppl(sym__2, l_25, (ATerm) ATinsert(ATempty, term_f_56));
          t = p_26(l_25, h_71, t);
          ;
          LocalPopChoice(d_56);
        }
      else
        {
          t = c_56;
          {
            ATerm i_71 = NULL,m_71 = NULL,n_71 = NULL;
            t = term_d_22;
            m_71 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_56), l_25), term_g_56);
            n_71 = t;
            t = SSL_printnl(m_71, n_71);
            t = term_a_22;
            i_71 = t;
            t = SSL_exit(i_71);
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_56), l_25), term_g_56);
          }
        }
      t = l_25;
      t = ReadFromFile_0_0(t);
      if(match_cons(t, sym_StrategoDump_2))
        {
          r_70 = ATgetArgument(t, 0);
          s_70 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = term_u_17;
      u_70 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_u_17, r_70);
      t = o_26(u_70, r_70, t);
      t = term_t_17;
      t_70 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_t_17, s_70);
      t = o_26(t_70, s_70, t);
      x_71 = t;
      {
        ATerm i_56 = t;
        int j_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_48 = NULL,f_48 = NULL,g_48 = NULL,h_48 = NULL;
            t = term_o_29;
            t = get_config_0_0(t);
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_56), l_25), term_m_56);
            h_48 = t;
            t = SSL_concat_strings(h_48);
            e_48 = t;
            t = term_d_22;
            f_48 = t;
            t = (ATerm) ATinsert(ATempty, e_48);
            g_48 = t;
            t = SSL_printnl(f_48, g_48);
            t = x_71;
            ;
            LocalPopChoice(j_56);
          }
        else
          {
            t = i_56;
            t = x_71;
          }
      }
    }
  }
  return(t);
}
ATerm r_26 (ATerm h_49, ATerm i_49, ATerm t)
{
  ATerm b_72 = NULL;
  t = SSL_write_term_to_stream_baf(h_49, i_49);
  b_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_72);
  return(t);
}
ATerm s_26 (ATerm z_126 (ATerm), ATerm l_444, ATerm p_49, ATerm t)
{
  ATerm c_72 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_444, term_r_56);
  t = open_stream_0_0(t);
  c_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_72, p_49);
  t = z_126(t);
  t = fclose_0_0(t);
  t = p_49;
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm g_72 = NULL;
  ATerm y_13 (ATerm t)
  {
    ATerm h_72 = NULL,j_72 = NULL;
    h_72 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_72), h_72);
    t = e_29(not_null(g_72), h_72, t);
    j_72 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_72, j_72);
    return(t);
  }
  if(((g_72 != NULL) && (g_72 != t)))
    _fail(t);
  else
    g_72 = t;
  t = SSL_table_keys(g_72);
  t = map_1_0(y_13, t);
  return(t);
}
ATerm z_13 (ATerm t)
{
  ATerm t_72 = NULL,u_72 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_56 = ATgetArgument(t, 0);
      if(match_cons(s_56, sym_Stream_1))
        {
          t_72 = ATgetArgument(s_56, 0);
        }
      else
        _fail(t);
      u_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_26(t_72, u_72, t);
  return(t);
}
ATerm t_26 (ATerm i_25, ATerm t)
{
  ATerm m_72 = NULL,r_72 = NULL,s_72 = NULL,o_73 = NULL;
  t = term_u_17;
  t = table_getlist_0_0(t);
  m_72 = t;
  t = term_t_17;
  t = table_getlist_0_0(t);
  r_72 = t;
  t = (ATerm) ATmakeAppl(sym_StrategoDump_2, m_72, r_72);
  s_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_25, (ATerm) ATmakeAppl(sym_StrategoDump_2, m_72, r_72));
  t = s_26(z_13, i_25, s_72, t);
  o_73 = t;
  {
    ATerm u_56 = t;
    int w_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_48 = NULL,s_48 = NULL,t_48 = NULL,v_48 = NULL;
        t = term_o_29;
        t = get_config_0_0(t);
        t = term_x_56;
        v_48 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_x_56, i_25);
        t = d_29(v_48, i_25, t);
        p_48 = t;
        t = term_d_22;
        s_48 = t;
        t = (ATerm) ATinsert(ATempty, p_48);
        t_48 = t;
        t = SSL_printnl(s_48, t_48);
        t = o_73;
        ;
        LocalPopChoice(w_56);
      }
    else
      {
        t = u_56;
        t = o_73;
      }
  }
  return(t);
}
ATerm k_194 (ATerm n_193, ATerm o_193, ATerm p_193, ATerm t)
{
  ATerm q_193 = NULL,t_193 = NULL,u_157 = NULL,v_157 = NULL,t_11 = NULL;
  t = SSLgetAnnotations(p_193);
  q_193 = t;
  t = n_193;
  {
    ATerm y_56 = t;
    int z_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_193 = NULL;
        if(match_cons(t, sym_Dump_1))
          {
            w_193 = ATgetArgument(t, 0);
            t = n_193;
            t = t_26(w_193, t);
          }
        else
          {
            if(match_cons(t, sym_Load_1))
              {
                w_193 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = n_193;
            t = q_26(w_193, t);
          }
        ;
        LocalPopChoice(z_56);
      }
    else
      {
        t = y_56;
        {
          ATerm a_57 = t;
          int c_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = eval_import_0_0(t);
              ;
              LocalPopChoice(c_57);
            }
          else
            {
              t = a_57;
              {
                ATerm a_194 = NULL;
                if(match_cons(t, sym_Strategies_1))
                  {
                    a_194 = ATgetArgument(t, 0);
                    t = n_193;
                    t = l_26(a_194, t);
                  }
                else
                  {
                    if(match_cons(t, sym_Rules_1))
                      {
                        a_194 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = n_193;
                    t = v_24(a_194, t);
                  }
              }
            }
        }
      }
    t_193 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_193, o_193);
    t_11 = t;
    t = SSLsetAnnotations(t_11, q_193);
    v_157 = t;
    t = SSL_explode_term(v_157);
    if(match_cons(t, sym__2))
      {
        ATerm f_57 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) f_57) != ATmakeSymbol("", 0, ATtrue)))
          _fail(t);
        {
          ATerm g_57 = ATgetArgument(t, 1);
          if(((ATgetType(g_57) == AT_LIST) && !(ATisEmpty(g_57))))
            {
              ATerm j_57 = ATgetFirst((ATermList) g_57);
              ATerm k_57 = (ATerm) ATgetNext((ATermList) g_57);
              if(((ATgetType(k_57) == AT_LIST) && !(ATisEmpty(k_57))))
                {
                  u_157 = ATgetFirst((ATermList) k_57);
                  {
                    ATerm l_57 = (ATerm) ATgetNext((ATermList) k_57);
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
    t = u_157;
  }
  return(t);
}
ATerm a_14 (ATerm t)
{
  t = term_m_57;
  return(t);
}
ATerm b_14 (ATerm t)
{
  t = term_o_57;
  return(t);
}
ATerm eval_command_0_0 (ATerm t)
{
  ATerm p_57 = t;
  int q_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_194 = NULL,e_194 = NULL,f_194 = NULL,g_194 = NULL;
      ATerm r_57 = t;
      int s_57 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_193 = NULL;
          l_193 = t;
          t = term_t_19;
          t = get_config_0_0(t);
          t = l_193;
          t = debug_1_0(a_14, t);
          ;
          LocalPopChoice(s_57);
        }
      else
        {
          t = r_57;
        }
      e_194 = t;
      if(match_cons(t, sym__2))
        {
          f_194 = ATgetArgument(t, 0);
          g_194 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = f_194;
      if(match_cons(t, sym_Eval_1))
        {
          d_194 = ATgetArgument(t, 0);
          {
            ATerm t_57 = t;
            int u_57 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = e_194;
                t = x_28(d_194, g_194, t);
                ;
                LocalPopChoice(u_57);
              }
            else
              {
                t = t_57;
                t = k_194(f_194, g_194, e_194, t);
              }
          }
        }
      else
        {
          t = k_194(f_194, g_194, e_194, t);
        }
      ;
      LocalPopChoice(q_57);
    }
  else
    {
      t = p_57;
      {
        ATerm j_194 = NULL;
        t = debug_1_0(b_14, t);
        t = term_a_22;
        j_194 = t;
        t = SSL_exit(j_194);
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm n_107 (ATerm), ATerm t)
{
  ATerm o_194 (ATerm t)
  {
    ATerm v_57 = t;
    int y_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_107(t);
        t = o_194(t);
        ;
        LocalPopChoice(y_57);
      }
    else
      {
        t = v_57;
      }
    return(t);
  }
  t = o_194(t);
  return(t);
}
ATerm c_14 (ATerm t)
{
  ATerm p_194 = NULL,q_194 = NULL,r_194 = NULL,s_194 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_57 = ATgetArgument(t, 0);
      if(((ATgetType(z_57) == AT_LIST) && !(ATisEmpty(z_57))))
        {
          p_194 = ATgetFirst((ATermList) z_57);
          q_194 = (ATerm) ATgetNext((ATermList) z_57);
        }
      else
        _fail(t);
      r_194 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_194, r_194);
  t = eval_command_0_0(t);
  s_194 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_194, s_194);
  return(t);
}
ATerm evaluate_commands_0_0 (ATerm t)
{
  t = repeat_1_0(c_14, t);
  return(t);
}
ATerm g_195 (ATerm a_195, ATerm t)
{
  t = SSL_fclose(a_195);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm d_195 = NULL,e_195 = NULL;
  e_195 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_195 = ATgetArgument(t, 0);
      {
        ATerm b_58 = t;
        int c_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(d_195);
            ;
            LocalPopChoice(c_58);
          }
        else
          {
            t = b_58;
            t = g_195(e_195, t);
          }
      }
    }
  else
    {
      t = g_195(e_195, t);
    }
  return(t);
}
ATerm y_28 (ATerm n_49, ATerm t)
{
  t = SSL_read_term_from_stream(n_49);
  return(t);
}
ATerm z_28 (ATerm z_45, ATerm a_46, ATerm t)
{
  ATerm h_195 = NULL;
  t = SSL_fopen(z_45, a_46);
  h_195 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_195);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm i_195 = NULL;
  t = SSL_stdin_stream();
  i_195 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_195);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm j_195 = NULL;
  t = SSL_stdout_stream();
  j_195 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_195);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm k_195 = NULL;
  t = SSL_stderr_stream();
  k_195 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_195);
  return(t);
}
ATerm r_196 (ATerm q_195, ATerm t)
{
  ATerm r_195 = NULL;
  t = SSL_explode_term(q_195);
  if(match_cons(t, sym__2))
    {
      ATerm g_58 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_58) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_58 = ATgetArgument(t, 1);
        if(((ATgetType(h_58) == AT_LIST) && !(ATisEmpty(h_58))))
          {
            r_195 = ATgetFirst((ATermList) h_58);
            {
              ATerm i_58 = (ATerm) ATgetNext((ATermList) h_58);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = r_195;
  if(match_cons(t, sym_stderr_0))
    {
      t = r_195;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = r_195;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = r_195;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm s_196 (ATerm u_195, ATerm v_195, ATerm w_195, ATerm t)
{
  ATerm x_195 = NULL,y_195 = NULL,z_195 = NULL,c_196 = NULL,v_11 = NULL;
  t = SSLgetAnnotations(w_195);
  z_195 = t;
  t = u_195;
  if(match_cons(t, sym_Path_1))
    {
      c_196 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_196, v_195);
  v_11 = t;
  t = SSLsetAnnotations(v_11, z_195);
  if(match_cons(t, sym__2))
    {
      x_195 = ATgetArgument(t, 0);
      y_195 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_28(x_195, y_195, t);
  return(t);
}
ATerm t_196 (ATerm e_196, ATerm f_196, ATerm g_196, ATerm t)
{
  ATerm h_196 = NULL,i_196 = NULL,j_196 = NULL,m_196 = NULL,w_11 = NULL;
  t = SSLgetAnnotations(g_196);
  j_196 = t;
  t = SSL_is_string(e_196);
  m_196 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_196, f_196);
  w_11 = t;
  t = SSLsetAnnotations(w_11, j_196);
  if(match_cons(t, sym__2))
    {
      h_196 = ATgetArgument(t, 0);
      i_196 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_28(h_196, i_196, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm o_196 = NULL,p_196 = NULL,q_196 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_58 = ATgetArgument(t, 0);
      ATerm k_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  o_196 = t;
  if(match_cons(t, sym__2))
    {
      p_196 = ATgetArgument(t, 0);
      q_196 = ATgetArgument(t, 1);
      {
        ATerm l_58 = t;
        int n_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_196(o_196, t);
            ;
            LocalPopChoice(n_58);
          }
        else
          {
            t = l_58;
            {
              ATerm o_58 = t;
              int p_58 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = s_196(p_196, q_196, o_196, t);
                  ;
                  LocalPopChoice(p_58);
                }
              else
                {
                  t = o_58;
                  t = t_196(p_196, q_196, o_196, t);
                }
            }
          }
      }
    }
  else
    {
      t = r_196(o_196, t);
    }
  return(t);
}
ATerm d_14 (ATerm t)
{
  t = term_q_58;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm u_196 = NULL,v_196 = NULL,w_196 = NULL;
  ATerm r_58 = t;
  int s_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_196 = NULL;
      x_196 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_196, term_t_58);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(s_58);
    }
  else
    {
      t = r_58;
      t = debug_1_0(d_14, t);
      _fail(t);
    }
  v_196 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_196 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_28(w_196, t);
  u_196 = t;
  t = v_196;
  t = fclose_0_0(t);
  t = u_196;
  return(t);
}
ATerm copyright_0_0 (ATerm t)
{
  ATerm z_196 = NULL,a_197 = NULL,b_197 = NULL,c_197 = NULL,d_197 = NULL,e_197 = NULL,f_197 = NULL,g_197 = NULL,h_197 = NULL,i_197 = NULL,j_197 = NULL,k_197 = NULL,l_197 = NULL,m_197 = NULL,n_197 = NULL,o_197 = NULL,p_197 = NULL;
  n_197 = t;
  t = term_d_22;
  o_197 = t;
  t = (ATerm) ATinsert(ATempty, term_u_58);
  p_197 = t;
  t = SSL_printnl(o_197, p_197);
  t = term_d_22;
  l_197 = t;
  t = (ATerm) ATinsert(ATempty, term_v_58);
  m_197 = t;
  t = SSL_printnl(l_197, m_197);
  t = term_d_22;
  j_197 = t;
  t = (ATerm) ATinsert(ATempty, term_w_58);
  k_197 = t;
  t = SSL_printnl(j_197, k_197);
  t = term_d_22;
  h_197 = t;
  t = (ATerm) ATinsert(ATempty, term_x_58);
  i_197 = t;
  t = SSL_printnl(h_197, i_197);
  t = term_d_22;
  f_197 = t;
  t = (ATerm) ATinsert(ATempty, term_a_59);
  g_197 = t;
  t = SSL_printnl(f_197, g_197);
  t = term_d_22;
  d_197 = t;
  t = (ATerm) ATinsert(ATempty, term_b_59);
  e_197 = t;
  t = SSL_printnl(d_197, e_197);
  t = term_d_22;
  b_197 = t;
  t = (ATerm) ATinsert(ATempty, term_c_59);
  c_197 = t;
  t = SSL_printnl(b_197, c_197);
  t = term_d_22;
  z_196 = t;
  t = (ATerm) ATinsert(ATempty, term_u_58);
  a_197 = t;
  t = SSL_printnl(z_196, a_197);
  t = n_197;
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm y_197 = NULL,z_197 = NULL,a_198 = NULL;
  y_197 = t;
  if(match_cons(t, sym__2))
    {
      z_197 = ATgetArgument(t, 0);
      a_198 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_59 = t;
    int f_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_198;
        if((z_197 != t))
          {
            _fail(t);
          }
        t = y_197;
        ;
        LocalPopChoice(f_59);
      }
    else
      {
        t = d_59;
        t = (ATerm) ATmakeAppl(sym__2, z_197, a_198);
        {
          ATerm g_59 = t;
          int h_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(z_197, a_198);
              ;
              LocalPopChoice(h_59);
            }
          else
            {
              t = g_59;
              t = SSL_gtr(z_197, a_198);
            }
          t = (ATerm) ATmakeAppl(sym__2, z_197, a_198);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm j_128 (ATerm), ATerm t)
{
  ATerm e_198 = NULL;
  e_198 = t;
  {
    ATerm m_59 = t;
    int n_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_198 = NULL;
        t = term_o_59;
        t = get_config_0_0(t);
        g_198 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_198, term_a_22);
        t = geq_0_0(t);
        t = e_198;
        t = j_128(t);
        ;
        LocalPopChoice(n_59);
      }
    else
      {
        t = m_59;
        t = e_198;
      }
  }
  return(t);
}
ATerm at_end_1_0 (ATerm s_114 (ATerm), ATerm t)
{
  ATerm e_199 (ATerm t)
  {
    ATerm b_199 = NULL,c_199 = NULL,d_199 = NULL;
    d_199 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_199 = ATgetFirst((ATermList) t);
        c_199 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm b_160 = NULL,o_160 = NULL,z_11 = NULL;
          t = SSLgetAnnotations(d_199);
          b_160 = t;
          t = c_199;
          t = e_199(t);
          o_160 = t;
          t = (ATerm) ATinsert(CheckATermList(o_160), b_199);
          z_11 = t;
          t = SSLsetAnnotations(z_11, b_160);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = d_199;
        t = s_114(t);
      }
    return(t);
  }
  t = e_199(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm l_198 = NULL,m_198 = NULL,n_198 = NULL;
  l_198 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_198;
    }
  else
    {
      ATerm e_14 (ATerm t)
      {
        t = not_null(n_198);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((m_198 != NULL) && (m_198 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            m_198 = ATgetFirst((ATermList) t);
          if(((n_198 != NULL) && (n_198 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            n_198 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_198;
      t = at_end_1_0(e_14, t);
    }
  return(t);
}
ATerm q_199 (ATerm i_199, ATerm t)
{
  ATerm j_199 = NULL;
  t = SSL_explode_term(i_199);
  if(match_cons(t, sym__2))
    {
      ATerm p_59 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_59) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      j_199 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_199;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm l_199 = NULL,m_199 = NULL,n_199 = NULL;
  n_199 = t;
  if(match_cons(t, sym__2))
    {
      l_199 = ATgetArgument(t, 0);
      m_199 = ATgetArgument(t, 1);
      {
        ATerm q_59 = t;
        int r_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_14 (ATerm t)
            {
              t = m_199;
              return(t);
            }
            t = l_199;
            t = at_end_1_0(f_14, t);
            ;
            LocalPopChoice(r_59);
          }
        else
          {
            t = q_59;
            t = q_199(n_199, t);
          }
      }
    }
  else
    {
      t = q_199(n_199, t);
    }
  return(t);
}
ATerm b_29 (ATerm u_50, ATerm t_50, ATerm t)
{
  ATerm r_199 = NULL,s_199 = NULL,t_199 = NULL;
  t = u_50;
  {
    ATerm t_59 = t;
    int u_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(u_59);
      }
    else
      {
        t = t_59;
        t = (ATerm) ATempty;
      }
    s_199 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_50, s_199);
    t = conc_0_0(t);
    r_199 = t;
    t = term_v_59;
    t_199 = t;
    t = SSL_table_put(t_199, u_50, r_199);
    t = (ATerm) ATmakeAppl(sym__3, term_v_59, u_50, r_199);
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
  ATerm u_199 = NULL,v_199 = NULL,w_199 = NULL;
  u_199 = t;
  t = term_s_54;
  v_199 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_199), term_s_54);
  w_199 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_54, (ATerm) ATinsert(ATinsert(ATempty, u_199), term_s_54));
  t = b_29(v_199, w_199, t);
  return(t);
}
ATerm i_14 (ATerm t)
{
  t = term_w_59;
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
  ATerm x_199 = NULL,y_199 = NULL;
  x_199 = t;
  t = term_x_59;
  y_199 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_59, x_199);
  t = h_29(y_199, x_199, t);
  return(t);
}
ATerm l_14 (ATerm t)
{
  t = term_z_59;
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
  ATerm z_199 = NULL,a_200 = NULL,b_200 = NULL,c_200 = NULL;
  t = term_t_19;
  b_200 = t;
  t = term_a_22;
  c_200 = t;
  t = term_a_60;
  t = h_29(b_200, c_200, t);
  t = term_o_59;
  z_199 = t;
  t = term_r_46;
  a_200 = t;
  t = term_b_60;
  t = h_29(z_199, a_200, t);
  return(t);
}
ATerm o_14 (ATerm t)
{
  t = term_d_60;
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
  ATerm d_200 = NULL,e_200 = NULL;
  t = term_o_29;
  d_200 = t;
  t = term_a_22;
  e_200 = t;
  t = term_h_60;
  t = h_29(d_200, e_200, t);
  return(t);
}
ATerm r_14 (ATerm t)
{
  t = term_i_60;
  return(t);
}
ATerm si_options_0_0 (ATerm t)
{
  ATerm j_60 = t;
  int k_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(g_14, h_14, i_14, t);
      ;
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
            t = ArgOption_3_0(j_14, k_14, l_14, t);
            ;
            LocalPopChoice(m_60);
          }
        else
          {
            t = l_60;
            {
              ATerm n_60 = t;
              int w_60 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(m_14, n_14, o_14, t);
                  ;
                  LocalPopChoice(w_60);
                }
              else
                {
                  t = n_60;
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
  ATerm g_200 = NULL;
  g_200 = t;
  if(match_string(t, "-k"))
    {
      t = g_200;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = g_200;
    }
  return(t);
}
ATerm y_14 (ATerm t)
{
  ATerm h_200 = NULL,i_200 = NULL,j_200 = NULL;
  h_200 = t;
  t = SSL_string_to_int(h_200);
  i_200 = t;
  t = term_y_60;
  j_200 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_60, i_200);
  t = h_29(j_200, i_200, t);
  t = h_200;
  return(t);
}
ATerm z_14 (ATerm t)
{
  t = term_z_60;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_14, y_14, z_14, t);
  return(t);
}
ATerm a_15 (ATerm t)
{
  ATerm l_200 = NULL;
  l_200 = t;
  if(match_string(t, "-S"))
    {
      t = l_200;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = l_200;
    }
  return(t);
}
ATerm b_15 (ATerm t)
{
  ATerm m_200 = NULL,n_200 = NULL;
  t = term_o_59;
  m_200 = t;
  t = term_z_21;
  n_200 = t;
  t = term_a_61;
  t = h_29(m_200, n_200, t);
  t = term_b_61;
  return(t);
}
ATerm c_15 (ATerm t)
{
  t = term_c_61;
  return(t);
}
ATerm d_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_15 (ATerm t)
{
  ATerm o_200 = NULL,p_200 = NULL,q_200 = NULL;
  o_200 = t;
  t = SSL_string_to_int(o_200);
  p_200 = t;
  t = term_o_59;
  q_200 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_59, p_200);
  t = h_29(q_200, p_200, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, o_200);
  return(t);
}
ATerm g_15 (ATerm t)
{
  t = term_d_61;
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
  ATerm r_200 = NULL,s_200 = NULL;
  t = term_e_61;
  r_200 = t;
  t = term_f_61;
  s_200 = t;
  t = term_h_61;
  t = h_29(r_200, s_200, t);
  t = term_i_61;
  return(t);
}
ATerm j_15 (ATerm t)
{
  t = term_j_61;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm k_61 = t;
  int l_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_15, b_15, c_15, t);
      ;
      LocalPopChoice(l_61);
    }
  else
    {
      t = k_61;
      {
        ATerm m_61 = t;
        int n_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(d_15, f_15, g_15, t);
            ;
            LocalPopChoice(n_61);
          }
        else
          {
            t = m_61;
            t = Option_3_0(h_15, i_15, j_15, t);
          }
      }
    }
  return(t);
}
ATerm h_29 (ATerm o_50, ATerm p_50, ATerm t)
{
  ATerm t_200 = NULL;
  t = term_v_59;
  t_200 = t;
  t = SSL_table_put(t_200, o_50, p_50);
  t = (ATerm) ATmakeAppl(sym__3, term_v_59, o_50, p_50);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm w_200 = NULL,x_200 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_200 = NULL,z_200 = NULL,a_201 = NULL;
      t = term_f_61;
      t = d_0(t);
      y_200 = t;
      t = term_o_61;
      z_200 = t;
      t = term_p_61;
      a_201 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_61, term_p_61, y_200);
      t = f_29(z_200, a_201, y_200, t);
      _fail(t);
    }
  else
    {
      ATerm d_201 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_200 = ATgetFirst((ATermList) t);
          x_200 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_200;
      t = b_0(t);
      t = term_f_61;
      t = c_0(t);
      d_201 = t;
      t = (ATerm) ATinsert(CheckATermList(x_200), d_201);
    }
  return(t);
}
ATerm o_15 (ATerm t)
{
  ATerm f_201 = NULL;
  f_201 = t;
  if(match_string(t, "-o"))
    {
      t = f_201;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = f_201;
    }
  return(t);
}
ATerm r_15 (ATerm t)
{
  ATerm g_201 = NULL,h_201 = NULL;
  g_201 = t;
  t = term_q_61;
  h_201 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_61, g_201);
  t = h_29(h_201, g_201, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, g_201);
  return(t);
}
ATerm s_15 (ATerm t)
{
  t = term_t_61;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_15, r_15, s_15, t);
  return(t);
}
ATerm f_29 (ATerm m_55, ATerm n_55, ATerm l_55, ATerm t)
{
  ATerm j_201 = NULL,k_201 = NULL,l_201 = NULL;
  j_201 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_55, n_55);
  {
    ATerm u_61 = t;
    int v_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_61 = ATgetArgument(t, 0);
            ATerm x_61 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_55, n_55);
        t = e_29(m_55, n_55, t);
        ;
        LocalPopChoice(v_61);
      }
    else
      {
        t = u_61;
        t = (ATerm) ATempty;
      }
    k_201 = t;
    t = (ATerm) ATinsert(CheckATermList(k_201), l_55);
    l_201 = t;
    t = SSL_table_put(m_55, n_55, l_201);
    t = j_201;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm s_201 = NULL,t_201 = NULL,u_201 = NULL,v_201 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_201 = NULL,x_201 = NULL,y_201 = NULL;
      t = term_f_61;
      t = i_0(t);
      w_201 = t;
      t = term_o_61;
      x_201 = t;
      t = term_p_61;
      y_201 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_61, term_p_61, w_201);
      t = f_29(x_201, y_201, w_201, t);
      _fail(t);
    }
  else
    {
      ATerm c_202 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_201 = ATgetFirst((ATermList) t);
          t_201 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_201;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_201 = ATgetFirst((ATermList) t);
          v_201 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_201;
      t = g_0(t);
      t = u_201;
      t = h_0(t);
      c_202 = t;
      t = (ATerm) ATinsert(CheckATermList(v_201), c_202);
    }
  return(t);
}
ATerm x_15 (ATerm t)
{
  ATerm e_202 = NULL;
  e_202 = t;
  if(match_string(t, "-i"))
    {
      t = e_202;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = e_202;
    }
  return(t);
}
ATerm f_16 (ATerm t)
{
  ATerm f_202 = NULL,g_202 = NULL;
  f_202 = t;
  t = term_u_54;
  g_202 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_54, f_202);
  t = h_29(g_202, f_202, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, f_202);
  return(t);
}
ATerm g_16 (ATerm t)
{
  t = term_y_61;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_15, f_16, g_16, t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm i_202 = NULL,j_202 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_202 = ATgetFirst((ATermList) t);
      j_202 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_202 = NULL,o_202 = NULL;
        ATerm h_16 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(n_202)), not_null(o_202));
          return(t);
        }
        t = j_202;
        t = f_0(t);
        if(((n_202 != NULL) && (n_202 != t)))
          _fail(t);
        else
          n_202 = t;
        t = i_202;
        t = e_0(t);
        if(((o_202 != NULL) && (o_202 != t)))
          _fail(t);
        else
          o_202 = t;
        t = j_202;
        t = reverse_acc_2_0(e_0, h_16, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_61;
      t = f_0(t);
    }
  return(t);
}
ATerm i_16 (ATerm t)
{
  ATerm s_202 = NULL,t_202 = NULL,u_202 = NULL,b_12 = NULL;
  u_202 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_202 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_202);
  s_202 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, t_202);
  b_12 = t;
  t = SSLsetAnnotations(b_12, s_202);
  return(t);
}
ATerm q_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_16 (ATerm t)
{
  ATerm w_202 = NULL;
  w_202 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_202), term_z_61);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm q_202 = NULL,r_202 = NULL;
  ATerm a_62 = t;
  int b_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_62;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(b_62);
    }
  else
    {
      t = a_62;
      t = fetch_1_0(i_16, t);
    }
  t = term_d_62;
  t = echo_0_0(t);
  t = term_o_61;
  q_202 = t;
  t = term_p_61;
  r_202 = t;
  t = term_e_62;
  t = e_29(q_202, r_202, t);
  t = reverse_acc_2_0(_id, q_16, t);
  t = map_1_0(r_16, t);
  return(t);
}
ATerm fetch_1_0 (ATerm m_114 (ATerm), ATerm t)
{
  ATerm t_203 (ATerm t)
  {
    ATerm q_203 = NULL,r_203 = NULL,s_203 = NULL;
    q_203 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_203 = ATgetFirst((ATermList) t);
        s_203 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm f_62 = t;
      int g_62 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_162 = NULL,e_162 = NULL,d_12 = NULL;
          t = SSLgetAnnotations(q_203);
          a_162 = t;
          t = r_203;
          t = m_114(t);
          e_162 = t;
          t = (ATerm) ATinsert(CheckATermList(s_203), e_162);
          d_12 = t;
          t = SSLsetAnnotations(d_12, a_162);
          ;
          LocalPopChoice(g_62);
        }
      else
        {
          t = f_62;
          {
            ATerm o_162 = NULL,s_162 = NULL,e_12 = NULL;
            t = SSLgetAnnotations(q_203);
            o_162 = t;
            t = s_203;
            t = t_203(t);
            s_162 = t;
            t = (ATerm) ATinsert(CheckATermList(s_162), r_203);
            e_12 = t;
            t = SSLsetAnnotations(e_12, o_162);
          }
        }
    }
    return(t);
  }
  t = t_203(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm x_203 = NULL,y_203 = NULL,z_203 = NULL;
  x_203 = t;
  {
    ATerm h_62 = t;
    int i_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = x_203;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm j_62 = ATgetFirst((ATermList) t);
                ATerm k_62 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_203;
          }
        ;
        LocalPopChoice(i_62);
      }
    else
      {
        t = h_62;
        t = (ATerm) ATinsert(ATempty, x_203);
      }
    y_203 = t;
    t = term_l_62;
    z_203 = t;
    t = SSL_printnl(z_203, y_203);
    t = x_203;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_c_62;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm d_29 (ATerm n_40, ATerm o_40, ATerm t)
{
  t = SSL_strcat(n_40, o_40);
  return(t);
}
ATerm debug_1_0 (ATerm x_126 (ATerm), ATerm t)
{
  ATerm d_204 = NULL,e_204 = NULL,f_204 = NULL,g_204 = NULL;
  d_204 = t;
  t = x_126(t);
  e_204 = t;
  t = term_d_22;
  f_204 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_204), e_204);
  g_204 = t;
  t = SSL_printnl(f_204, g_204);
  t = d_204;
  return(t);
}
ATerm map_1_0 (ATerm c_114 (ATerm), ATerm t)
{
  ATerm v_204 (ATerm t)
  {
    ATerm s_204 = NULL,t_204 = NULL,u_204 = NULL;
    s_204 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_204;
      }
    else
      {
        ATerm o_163 = NULL,i_164 = NULL,j_164 = NULL,h_12 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_204 = ATgetFirst((ATermList) t);
            u_204 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_204);
        o_163 = t;
        t = t_204;
        t = c_114(t);
        i_164 = t;
        t = u_204;
        t = v_204(t);
        j_164 = t;
        t = (ATerm) ATinsert(CheckATermList(j_164), i_164);
        h_12 = t;
        t = SSLsetAnnotations(h_12, o_163);
      }
    return(t);
  }
  t = v_204(t);
  return(t);
}
ATerm s_16 (ATerm t)
{
  ATerm m_62 = t;
  int n_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(n_62);
    }
  else
    {
      t = m_62;
    }
  return(t);
}
ATerm t_16 (ATerm t)
{
  t = term_o_62;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm r_62 = t;
  int s_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_205 = NULL;
      d_205 = t;
      t = SSL_is_string(d_205);
      ;
      LocalPopChoice(s_62);
    }
  else
    {
      t = r_62;
      {
        ATerm t_62 = t;
        int u_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(s_16, t);
            ;
            LocalPopChoice(u_62);
          }
        else
          {
            t = t_62;
            {
              ATerm j_205 = NULL,k_205 = NULL,l_205 = NULL;
              j_205 = t;
              if(match_cons(t, sym_Path_1))
                {
                  k_205 = ATgetArgument(t, 0);
                  t = k_205;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      k_205 = ATgetArgument(t, 0);
                      t = k_205;
                      {
                        ATerm v_62 = t;
                        int x_62 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(x_62);
                          }
                        else
                          {
                            t = v_62;
                            t = debug_1_0(t_16, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm p_205 = NULL,q_205 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          k_205 = ATgetArgument(t, 0);
                          l_205 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = k_205;
                      t = eval_config_0_0(t);
                      p_205 = t;
                      t = l_205;
                      t = eval_config_0_0(t);
                      q_205 = t;
                      t = (ATerm) ATmakeAppl(sym__2, p_205, q_205);
                      t = d_29(p_205, q_205, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm e_29 (ATerm d_57, ATerm e_57, ATerm t)
{
  t = SSL_table_get(d_57, e_57);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm u_205 = NULL,v_205 = NULL;
  u_205 = t;
  t = term_v_59;
  v_205 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_59, u_205);
  t = e_29(v_205, u_205, t);
  {
    ATerm y_62 = t;
    int z_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_205 = NULL,x_205 = NULL;
        t = eval_config_0_0(t);
        w_205 = t;
        t = term_v_59;
        x_205 = t;
        t = SSL_table_put(x_205, u_205, w_205);
        t = w_205;
        ;
        LocalPopChoice(z_62);
      }
    else
      {
        t = y_62;
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
  ATerm a_206 = NULL,b_206 = NULL;
  t = term_a_63;
  a_206 = t;
  t = term_f_61;
  b_206 = t;
  t = term_b_63;
  t = h_29(a_206, b_206, t);
  return(t);
}
ATerm w_16 (ATerm t)
{
  t = term_c_63;
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
  ATerm c_206 = NULL,d_206 = NULL,e_206 = NULL,f_206 = NULL;
  t = term_a_63;
  e_206 = t;
  t = term_f_61;
  f_206 = t;
  t = term_b_63;
  t = h_29(e_206, f_206, t);
  t = term_d_63;
  c_206 = t;
  t = term_f_61;
  d_206 = t;
  t = term_e_63;
  t = h_29(c_206, d_206, t);
  t = term_f_63;
  return(t);
}
ATerm a_17 (ATerm t)
{
  t = term_i_63;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm j_63 = t;
  int k_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_16, v_16, w_16, t);
      ;
      LocalPopChoice(k_63);
    }
  else
    {
      t = j_63;
      t = Option_3_0(x_16, y_16, a_17, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm v_92 (ATerm), ATerm w_92 (ATerm), ATerm t)
{
  ATerm g_206 = NULL,h_206 = NULL,i_206 = NULL,j_206 = NULL,k_206 = NULL,l_206 = NULL,j_12 = NULL;
  l_206 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_206 = ATgetFirst((ATermList) t);
      i_206 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_206);
  g_206 = t;
  t = h_206;
  t = v_92(t);
  j_206 = t;
  t = i_206;
  t = w_92(t);
  k_206 = t;
  t = (ATerm) ATinsert(CheckATermList(k_206), j_206);
  j_12 = t;
  t = SSLsetAnnotations(j_12, g_206);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm c_133 (ATerm), ATerm t)
{
  ATerm q_206 = NULL,r_206 = NULL,s_206 = NULL,t_206 = NULL,v_206 = NULL,w_206 = NULL,q_12 = NULL;
  q_206 = t;
  {
    ATerm l_63 = t;
    int m_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_n_63;
        t = c_133(t);
        ;
        LocalPopChoice(m_63);
      }
    else
      {
        t = l_63;
      }
    t = q_206;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_206 = ATgetFirst((ATermList) t);
        t_206 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(q_206);
    r_206 = t;
    t = term_c_62;
    w_206 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_c_62, s_206);
    t = h_29(w_206, s_206, t);
    t = t_206;
    {
      ATerm g_207 (ATerm t)
      {
        ATerm o_63 = t;
        int p_63 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_63 = t;
            int r_63 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_206 = NULL;
                z_206 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = z_206;
                ;
                LocalPopChoice(r_63);
              }
            else
              {
                t = q_63;
                t = c_133(t);
                t = Cons_2_0(_id, g_207, t);
              }
            ;
            LocalPopChoice(p_63);
          }
        else
          {
            t = o_63;
            {
              ATerm c_207 = NULL,d_207 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  c_207 = ATgetFirst((ATermList) t);
                  d_207 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(d_207), (ATerm) ATmakeAppl(sym_Undefined_1, c_207));
            }
          }
        return(t);
      }
      t = g_207(t);
      if(((v_206 != NULL) && (v_206 != t)))
        _fail(t);
      else
        v_206 = t;
      t = (ATerm) ATinsert(CheckATermList(v_206), (ATerm) ATmakeAppl(sym_Program_1, s_206));
      if(((q_12 != NULL) && (q_12 != t)))
        _fail(t);
      else
        q_12 = t;
      t = SSLsetAnnotations(q_12, r_206);
    }
  }
  return(t);
}
ATerm c_17 (ATerm t)
{
  ATerm s_207 = NULL;
  s_207 = t;
  if(match_string(t, "--help"))
    {
      t = s_207;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = s_207;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = s_207;
        }
    }
  return(t);
}
ATerm d_17 (ATerm t)
{
  ATerm t_207 = NULL,u_207 = NULL;
  t = term_v_63;
  t_207 = t;
  t = term_f_61;
  u_207 = t;
  t = term_y_63;
  t = h_29(t_207, u_207, t);
  t = term_z_63;
  return(t);
}
ATerm e_17 (ATerm t)
{
  t = term_a_64;
  return(t);
}
ATerm f_17 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm b_133 (ATerm), ATerm t)
{
  ATerm l_207 = NULL,m_207 = NULL,n_207 = NULL,o_207 = NULL,p_207 = NULL,q_207 = NULL,r_207 = NULL;
  n_207 = t;
  t = term_o_61;
  p_207 = t;
  t = term_p_61;
  q_207 = t;
  t = (ATerm) ATempty;
  r_207 = t;
  t = SSL_table_put(p_207, q_207, r_207);
  t = n_207;
  {
    ATerm b_17 (ATerm t)
    {
      ATerm b_64 = t;
      int c_64 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_133(t);
          ;
          LocalPopChoice(c_64);
        }
      else
        {
          t = b_64;
          {
            ATerm d_64 = t;
            int e_64 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(c_17, d_17, e_17, t);
                ;
                LocalPopChoice(e_64);
              }
            else
              {
                t = d_64;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(b_17, t);
    {
      ATerm f_64 = t;
      int g_64 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_208 = NULL;
          b_208 = t;
          {
            ATerm h_64 = t;
            int i_64 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_165 = NULL;
                t = b_208;
                {
                  ATerm l_64 = t;
                  int m_64 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_v_63;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(m_64);
                    }
                  else
                    {
                      t = l_64;
                      t = fetch_1_0(f_17, t);
                    }
                  t = b_208;
                  t = default_system_usage_0_0(t);
                  t = term_z_21;
                  t_165 = t;
                  t = SSL_exit(t_165);
                }
                ;
                LocalPopChoice(i_64);
              }
            else
              {
                t = h_64;
                {
                  ATerm r_166 = NULL;
                  t = term_a_63;
                  t = get_config_0_0(t);
                  t = b_208;
                  t = default_system_about_0_0(t);
                  t = term_z_21;
                  r_166 = t;
                  t = SSL_exit(r_166);
                }
              }
          }
          ;
          LocalPopChoice(g_64);
        }
      else
        {
          t = f_64;
          {
            ATerm n_64 = t;
            int o_64 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_208 = NULL,d_208 = NULL,e_208 = NULL;
                ATerm g_17 (ATerm t)
                {
                  ATerm f_208 = NULL,g_208 = NULL,h_208 = NULL,s_12 = NULL;
                  h_208 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      g_208 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(h_208);
                  f_208 = t;
                  t = g_208;
                  if(((l_207 != NULL) && (l_207 != t)))
                    _fail(t);
                  else
                    l_207 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, g_208);
                  s_12 = t;
                  t = SSLsetAnnotations(s_12, f_208);
                  return(t);
                }
                t = fetch_1_0(g_17, t);
                t = term_d_22;
                if(((d_208 != NULL) && (d_208 != t)))
                  _fail(t);
                else
                  d_208 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_207)), term_s_64);
                if(((e_208 != NULL) && (e_208 != t)))
                  _fail(t);
                else
                  e_208 = t;
                t = SSL_printnl(d_208, e_208);
                t = (ATerm) ATmakeAppl(sym__2, term_d_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_207)), term_s_64));
                t = default_system_usage_0_0(t);
                t = term_a_22;
                if(((c_208 != NULL) && (c_208 != t)))
                  _fail(t);
                else
                  c_208 = t;
                t = SSL_exit(c_208);
                ;
                LocalPopChoice(o_64);
              }
            else
              {
                t = n_64;
              }
          }
        }
      if(((m_207 != NULL) && (m_207 != t)))
        _fail(t);
      else
        m_207 = t;
      t = term_o_61;
      if(((o_207 != NULL) && (o_207 != t)))
        _fail(t);
      else
        o_207 = t;
      t = SSL_table_destroy(o_207);
      t = m_207;
    }
  }
  return(t);
}
ATerm h_17 (ATerm t)
{
  ATerm t_64 = t;
  int u_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_64 = t;
      int w_64 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = input_option_0_0(t);
          ;
          LocalPopChoice(w_64);
        }
      else
        {
          t = v_64;
          {
            ATerm x_64 = t;
            int y_64 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = output_option_0_0(t);
                ;
                LocalPopChoice(y_64);
              }
            else
              {
                t = x_64;
                {
                  ATerm b_65 = t;
                  int c_65 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Option_3_0(m_17, n_17, q_17, t);
                      ;
                      LocalPopChoice(c_65);
                    }
                  else
                    {
                      t = b_65;
                      {
                        ATerm d_65 = t;
                        int e_65 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = verbose_option_0_0(t);
                            ;
                            LocalPopChoice(e_65);
                          }
                        else
                          {
                            t = d_65;
                            t = keep_option_0_0(t);
                          }
                      }
                    }
                }
              }
          }
        }
      ;
      LocalPopChoice(u_64);
    }
  else
    {
      t = t_64;
      t = si_options_0_0(t);
    }
  return(t);
}
ATerm m_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_17 (ATerm t)
{
  ATerm p_208 = NULL,q_208 = NULL;
  t = term_f_65;
  p_208 = t;
  t = term_f_61;
  q_208 = t;
  t = term_g_65;
  t = h_29(p_208, q_208, t);
  t = term_h_65;
  return(t);
}
ATerm q_17 (ATerm t)
{
  t = term_i_65;
  return(t);
}
ATerm make_option_table_0_0 (ATerm t)
{
  ATerm m_208 = NULL,n_208 = NULL,o_208 = NULL;
  m_208 = t;
  t = term_s_54;
  n_208 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_j_65), term_s_54);
  o_208 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_54, (ATerm) ATinsert(ATinsert(ATempty, term_j_65), term_s_54));
  t = h_29(n_208, o_208, t);
  t = m_208;
  t = parse_options_1_0(h_17, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm w_114 (ATerm), ATerm t)
{
  ATerm e_209 (ATerm t)
  {
    ATerm k_65 = t;
    int l_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_114(t);
        ;
        LocalPopChoice(l_65);
      }
    else
      {
        t = k_65;
        {
          ATerm b_209 = NULL,c_209 = NULL,d_209 = NULL,a_167 = NULL,d_167 = NULL,u_12 = NULL;
          b_209 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              c_209 = ATgetFirst((ATermList) t);
              d_209 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(b_209);
          a_167 = t;
          t = d_209;
          t = e_209(t);
          d_167 = t;
          t = (ATerm) ATinsert(CheckATermList(d_167), c_209);
          u_12 = t;
          t = SSLsetAnnotations(u_12, a_167);
        }
      }
    return(t);
  }
  t = e_209(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm p_114 (ATerm), ATerm t)
{
  ATerm g_209 = NULL,h_209 = NULL;
  ATerm r_17 (ATerm t)
  {
    ATerm i_209 = NULL,j_209 = NULL,k_209 = NULL,l_209 = NULL,m_209 = NULL,n_209 = NULL,o_209 = NULL,p_209 = NULL,q_209 = NULL,c_13 = NULL,b_13 = NULL;
    q_209 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_209 = ATgetFirst((ATermList) t);
        n_209 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(q_209);
    l_209 = t;
    t = m_209;
    t = p_114(t);
    o_209 = t;
    t = (ATerm) ATinsert(CheckATermList(n_209), o_209);
    b_13 = t;
    t = SSLsetAnnotations(b_13, l_209);
    p_209 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_209 = ATgetFirst((ATermList) t);
        k_209 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(p_209);
    i_209 = t;
    t = k_209;
    if(((g_209 != NULL) && (g_209 != t)))
      _fail(t);
    else
      g_209 = t;
    t = (ATerm) ATinsert(CheckATermList(k_209), j_209);
    c_13 = t;
    t = SSLsetAnnotations(c_13, i_209);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(r_17, t);
  if(((h_209 != NULL) && (h_209 != t)))
    _fail(t);
  else
    h_209 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_209, not_null(g_209));
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
  ATerm r_209 = NULL,s_209 = NULL,t_209 = NULL,u_209 = NULL,v_209 = NULL,k_167 = NULL,l_167 = NULL,f_13 = NULL;
  ATerm o_65 = t;
  int p_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(s_17, t);
      ;
      LocalPopChoice(p_65);
    }
  else
    {
      t = o_65;
      {
        ATerm w_209 = NULL;
        w_209 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_209, (ATerm) ATempty);
      }
    }
  v_209 = t;
  if(match_cons(t, sym__2))
    {
      s_209 = ATgetArgument(t, 0);
      t_209 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_209);
  r_209 = t;
  t = s_209;
  t = make_option_table_0_0(t);
  u_209 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_209, t_209);
  f_13 = t;
  t = SSLsetAnnotations(f_13, r_209);
  l_167 = t;
  t = SSL_explode_term(l_167);
  if(match_cons(t, sym__2))
    {
      ATerm q_65 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_65) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm r_65 = ATgetArgument(t, 1);
        if(((ATgetType(r_65) == AT_LIST) && !(ATisEmpty(r_65))))
          {
            ATerm s_65 = ATgetFirst((ATermList) r_65);
            ATerm t_65 = (ATerm) ATgetNext((ATermList) r_65);
            if(((ATgetType(t_65) == AT_LIST) && !(ATisEmpty(t_65))))
              {
                k_167 = ATgetFirst((ATermList) t_65);
                {
                  ATerm u_65 = (ATerm) ATgetNext((ATermList) t_65);
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
  t = k_167;
  return(t);
}
ATerm create_runtime_environment_0_0 (ATerm t)
{
  ATerm y_209 = NULL,z_209 = NULL,a_210 = NULL,b_210 = NULL;
  y_209 = t;
  t = term_z_16;
  b_210 = t;
  t = SSL_table_create(b_210);
  t = term_t_17;
  a_210 = t;
  t = SSL_table_create(a_210);
  t = term_u_17;
  z_209 = t;
  t = SSL_table_create(z_209);
  t = y_209;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm c_210 = NULL,d_210 = NULL,e_210 = NULL;
  t = create_runtime_environment_0_0(t);
  t = process_options_0_0(t);
  t = if_verbose1_1_0(copyright_0_0, t);
  e_210 = t;
  t = term_v_65;
  t = ReadFromFile_0_0(t);
  d_210 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_210, e_210);
  t = evaluate_commands_0_0(t);
  t = destroy_runtime_environment_0_0(t);
  t = term_z_21;
  c_210 = t;
  t = SSL_exit(c_210);
  return(t);
}
