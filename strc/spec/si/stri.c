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
ATerm term_p_64;
ATerm term_a_64;
ATerm term_x_63;
ATerm term_w_63;
ATerm term_u_63;
ATerm term_p_63;
ATerm term_k_63;
ATerm term_j_63;
ATerm term_i_63;
ATerm term_h_63;
ATerm term_g_63;
ATerm term_f_63;
ATerm term_c_63;
ATerm term_t_62;
ATerm term_q_62;
ATerm term_h_62;
ATerm term_g_62;
ATerm term_b_62;
ATerm term_y_61;
ATerm term_x_61;
ATerm term_q_61;
ATerm term_p_61;
ATerm term_o_61;
ATerm term_n_61;
ATerm term_i_61;
ATerm term_g_61;
ATerm term_f_61;
ATerm term_c_61;
ATerm term_b_61;
ATerm term_a_61;
ATerm term_z_60;
ATerm term_y_60;
ATerm term_x_60;
ATerm term_u_60;
ATerm term_t_60;
ATerm term_k_60;
ATerm term_j_60;
ATerm term_i_60;
ATerm term_h_60;
ATerm term_d_60;
ATerm term_c_60;
ATerm term_b_60;
ATerm term_a_60;
ATerm term_x_59;
ATerm term_r_59;
ATerm term_f_59;
ATerm term_e_59;
ATerm term_d_59;
ATerm term_b_59;
ATerm term_a_59;
ATerm term_z_58;
ATerm term_y_58;
ATerm term_x_58;
ATerm term_s_58;
ATerm term_l_57;
ATerm term_k_57;
ATerm term_w_56;
ATerm term_s_56;
ATerm term_r_56;
ATerm term_q_56;
ATerm term_j_56;
ATerm term_i_56;
ATerm term_h_56;
ATerm term_e_56;
ATerm term_v_55;
ATerm term_w_54;
ATerm term_t_54;
ATerm term_r_54;
ATerm term_q_54;
ATerm term_p_54;
ATerm term_m_54;
ATerm term_b_54;
ATerm term_s_53;
ATerm term_r_53;
ATerm term_q_53;
ATerm term_o_53;
ATerm term_n_53;
ATerm term_m_53;
ATerm term_l_53;
ATerm term_k_53;
ATerm term_j_53;
ATerm term_i_53;
ATerm term_h_53;
ATerm term_e_53;
ATerm term_d_53;
ATerm term_c_53;
ATerm term_b_53;
ATerm term_a_53;
ATerm term_z_52;
ATerm term_y_52;
ATerm term_x_52;
ATerm term_w_52;
ATerm term_v_52;
ATerm term_u_52;
ATerm term_t_52;
ATerm term_s_52;
ATerm term_r_52;
ATerm term_p_52;
ATerm term_o_52;
ATerm term_m_52;
ATerm term_j_52;
ATerm term_h_52;
ATerm term_g_52;
ATerm term_f_52;
ATerm term_e_52;
ATerm term_c_52;
ATerm term_b_52;
ATerm term_a_52;
ATerm term_z_51;
ATerm term_y_51;
ATerm term_v_51;
ATerm term_u_51;
ATerm term_s_51;
ATerm term_p_51;
ATerm term_o_51;
ATerm term_l_51;
ATerm term_k_51;
ATerm term_j_51;
ATerm term_i_51;
ATerm term_h_51;
ATerm term_g_51;
ATerm term_f_51;
ATerm term_e_51;
ATerm term_b_51;
ATerm term_z_50;
ATerm term_y_50;
ATerm term_x_50;
ATerm term_r_50;
ATerm term_q_50;
ATerm term_n_50;
ATerm term_m_50;
ATerm term_l_50;
ATerm term_k_50;
ATerm term_j_50;
ATerm term_i_50;
ATerm term_h_50;
ATerm term_f_50;
ATerm term_d_50;
ATerm term_a_50;
ATerm term_z_49;
ATerm term_y_49;
ATerm term_x_49;
ATerm term_w_49;
ATerm term_u_49;
ATerm term_t_49;
ATerm term_s_49;
ATerm term_q_49;
ATerm term_o_49;
ATerm term_m_49;
ATerm term_k_49;
ATerm term_y_48;
ATerm term_x_48;
ATerm term_w_48;
ATerm term_v_48;
ATerm term_u_48;
ATerm term_p_48;
ATerm term_o_48;
ATerm term_n_48;
ATerm term_i_48;
ATerm term_f_48;
ATerm term_d_48;
ATerm term_c_48;
ATerm term_y_47;
ATerm term_s_47;
ATerm term_n_47;
ATerm term_m_47;
ATerm term_l_47;
ATerm term_k_47;
ATerm term_j_47;
ATerm term_f_47;
ATerm term_b_47;
ATerm term_a_47;
ATerm term_z_46;
ATerm term_y_46;
ATerm term_x_46;
ATerm term_w_46;
ATerm term_v_46;
ATerm term_u_46;
ATerm term_s_46;
ATerm term_q_46;
ATerm term_p_46;
ATerm term_o_46;
ATerm term_n_46;
ATerm term_i_46;
ATerm term_h_46;
ATerm term_g_46;
ATerm term_f_46;
ATerm term_h_38;
ATerm term_d_38;
ATerm term_a_38;
ATerm term_z_37;
ATerm term_y_37;
ATerm term_o_37;
ATerm term_e_37;
ATerm term_w_36;
ATerm term_v_36;
ATerm term_u_36;
ATerm term_g_32;
ATerm term_u_30;
ATerm term_t_29;
ATerm term_p_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_g_24;
ATerm term_o_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_c_22;
ATerm term_a_22;
ATerm term_n_21;
ATerm term_g_21;
ATerm term_n_20;
ATerm term_h_20;
ATerm term_u_19;
ATerm term_r_19;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_z_16;
void init_constant_terms (void)
{
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("senv", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("tenv", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("BindVar: ", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-d", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("match1: ", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("match2: ", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("bindings: ", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_NULL_0);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("operator ", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" not defined", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("eval: ", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Evaluate strategy: ", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("> ", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("eval-rules: ", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("rules normalized: ", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(sym_Sort_2, term_y_37, (ATerm) ATempty);
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(sym_ConstType_1, term_z_37);
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_46));
  term_i_46 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_o_46));
  term_o_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_p_46));
  term_p_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_46, term_c_22, term_o_46);
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_s_46));
  term_s_46 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_u_46));
  term_u_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_v_46));
  term_v_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_46, term_s_46, term_u_46);
  ATprotect(&(term_w_46));
  term_w_46 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_x_46));
  term_x_46 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_y_46));
  term_y_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_z_46));
  term_z_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_46, term_x_46, term_y_46);
  ATprotect(&(term_a_47));
  term_a_47 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_f_47));
  term_f_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_47, term_b_47, term_f_47);
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_l_47));
  term_l_47 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_m_47));
  term_m_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_47, term_l_47, term_m_47);
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_47, term_y_47, term_c_48);
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_i_48));
  term_i_48 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_n_48));
  term_n_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_o_48));
  term_o_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_48, term_i_48, term_n_48);
  ATprotect(&(term_p_48));
  term_p_48 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_u_48));
  term_u_48 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_v_48));
  term_v_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_w_48));
  term_w_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_48, term_u_48, term_v_48);
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_k_49));
  term_k_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_m_49));
  term_m_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_48, term_y_48, term_k_49);
  ATprotect(&(term_o_49));
  term_o_49 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_q_49));
  term_q_49 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_s_49));
  term_s_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_t_49));
  term_t_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_49, term_q_49, term_s_49);
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
  ATprotect(&(term_d_50));
  term_d_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_f_50));
  term_f_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_49, term_a_50, term_d_50);
  ATprotect(&(term_h_50));
  term_h_50 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_i_50));
  term_i_50 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_j_50));
  term_j_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_k_50));
  term_k_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_50, term_i_50, term_j_50);
  ATprotect(&(term_l_50));
  term_l_50 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_m_50));
  term_m_50 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_n_50));
  term_n_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_q_50));
  term_q_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_50, term_m_50, term_n_50);
  ATprotect(&(term_r_50));
  term_r_50 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_x_50));
  term_x_50 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_y_50));
  term_y_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_z_50));
  term_z_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_50, term_x_50, term_y_50);
  ATprotect(&(term_b_51));
  term_b_51 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_e_51));
  term_e_51 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_f_51));
  term_f_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_g_51));
  term_g_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_51, term_e_51, term_f_51);
  ATprotect(&(term_h_51));
  term_h_51 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_i_51));
  term_i_51 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_j_51));
  term_j_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_k_51));
  term_k_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_51, term_i_51, term_j_51);
  ATprotect(&(term_l_51));
  term_l_51 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_o_51));
  term_o_51 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_p_51));
  term_p_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_s_51));
  term_s_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_51, term_o_51, term_p_51);
  ATprotect(&(term_u_51));
  term_u_51 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_v_51));
  term_v_51 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_y_51));
  term_y_51 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_z_51));
  term_z_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_51, term_v_51, term_y_51);
  ATprotect(&(term_a_52));
  term_a_52 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_b_52));
  term_b_52 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_c_52));
  term_c_52 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_e_52));
  term_e_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_52, term_b_52, term_c_52);
  ATprotect(&(term_f_52));
  term_f_52 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_g_52));
  term_g_52 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_h_52));
  term_h_52 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_j_52));
  term_j_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_52, term_g_52, term_h_52);
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_o_52));
  term_o_52 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_p_52));
  term_p_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_r_52));
  term_r_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_52, term_o_52, term_p_52);
  ATprotect(&(term_s_52));
  term_s_52 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_t_52));
  term_t_52 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_u_52));
  term_u_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_v_52));
  term_v_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_52, term_t_52, term_u_52);
  ATprotect(&(term_w_52));
  term_w_52 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_x_52));
  term_x_52 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_y_52));
  term_y_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_z_52));
  term_z_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_52, term_x_52, term_y_52);
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_b_53));
  term_b_53 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_c_53));
  term_c_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_d_53));
  term_d_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_53, term_b_53, term_c_53);
  ATprotect(&(term_e_53));
  term_e_53 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_h_53));
  term_h_53 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_i_53));
  term_i_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_j_53));
  term_j_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_53, term_h_53, term_i_53);
  ATprotect(&(term_k_53));
  term_k_53 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_l_53));
  term_l_53 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_n_53));
  term_n_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_53, term_l_53, term_m_53);
  ATprotect(&(term_o_53));
  term_o_53 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_q_53));
  term_q_53 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_r_53));
  term_r_53 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_s_53));
  term_s_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_53, term_q_53, term_r_53);
  ATprotect(&(term_b_54));
  term_b_54 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_m_54));
  term_m_54 = (ATerm) ATmakeAppl(ATmakeSymbol("importing module: ", 0, ATtrue));
  ATprotect(&(term_p_54));
  term_p_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_q_54));
  term_q_54 = (ATerm) ATmakeAppl(ATmakeSymbol("sc", 0, ATtrue));
  ATprotect(&(term_r_54));
  term_r_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_54));
  term_t_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_w_54));
  term_w_54 = (ATerm) ATmakeAppl(ATmakeSymbol(".sdefs", 0, ATtrue));
  ATprotect(&(term_v_55));
  term_v_55 = (ATerm) ATmakeAppl(ATmakeSymbol("error: import of multiple modules not supported yet", 0, ATtrue));
  ATprotect(&(term_e_56));
  term_e_56 = (ATerm) ATmakeAppl(ATmakeSymbol("loading image from file: ", 0, ATtrue));
  ATprotect(&(term_h_56));
  term_h_56 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_i_56));
  term_i_56 = (ATerm) ATmakeAppl(ATmakeSymbol("image: ", 0, ATtrue));
  ATprotect(&(term_j_56));
  term_j_56 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_q_56));
  term_q_56 = (ATerm) ATmakeAppl(ATmakeSymbol("image ", 0, ATtrue));
  ATprotect(&(term_r_56));
  term_r_56 = (ATerm) ATmakeAppl(ATmakeSymbol(" loaded", 0, ATtrue));
  ATprotect(&(term_s_56));
  term_s_56 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_w_56));
  term_w_56 = (ATerm) ATmakeAppl(ATmakeSymbol("image written to file: ", 0, ATtrue));
  ATprotect(&(term_k_57));
  term_k_57 = (ATerm) ATmakeAppl(ATmakeSymbol("Evaluating command: ", 0, ATtrue));
  ATprotect(&(term_l_57));
  term_l_57 = (ATerm) ATmakeAppl(ATmakeSymbol("unknown command: ", 0, ATtrue));
  ATprotect(&(term_s_58));
  term_s_58 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_x_58));
  term_x_58 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_y_58));
  term_y_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--------------------------------------------------------------------", 0, ATtrue));
  ATprotect(&(term_z_58));
  term_z_58 = (ATerm) ATmakeAppl(ATmakeSymbol("This is SI, the Stratego Interpreter ", 0, ATtrue));
  ATprotect(&(term_a_59));
  term_a_59 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (c) 2001, Eelco Visser <visser@acm.org>", 0, ATtrue));
  ATprotect(&(term_b_59));
  term_b_59 = (ATerm) ATmakeAppl(ATmakeSymbol("This program is free software; you can redistribute it and/or modify", 0, ATtrue));
  ATprotect(&(term_d_59));
  term_d_59 = (ATerm) ATmakeAppl(ATmakeSymbol("it under the terms of the GNU General Public License as published by", 0, ATtrue));
  ATprotect(&(term_e_59));
  term_e_59 = (ATerm) ATmakeAppl(ATmakeSymbol("the Free Software Foundation; either version 2, or (at your option)", 0, ATtrue));
  ATprotect(&(term_f_59));
  term_f_59 = (ATerm) ATmakeAppl(ATmakeSymbol("any later version.", 0, ATtrue));
  ATprotect(&(term_r_59));
  term_r_59 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_59));
  term_x_59 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_60));
  term_a_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-I dir           include modules from directory dir", 0, ATtrue));
  ATprotect(&(term_b_60));
  term_b_60 = (ATerm) ATmakeAppl(ATmakeSymbol("@version", 0, ATtrue));
  ATprotect(&(term_c_60));
  term_c_60 = (ATerm) ATmakeAppl(ATmakeSymbol("@version v       declare version", 0, ATtrue));
  ATprotect(&(term_d_60));
  term_d_60 = (ATerm) ATmakeAppl(sym__2, term_u_19, term_c_22);
  ATprotect(&(term_h_60));
  term_h_60 = (ATerm) ATmakeAppl(sym__2, term_r_59, term_s_46);
  ATprotect(&(term_i_60));
  term_i_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-d               debug mode", 0, ATtrue));
  ATprotect(&(term_j_60));
  term_j_60 = (ATerm) ATmakeAppl(sym__2, term_p_29, term_c_22);
  ATprotect(&(term_k_60));
  term_k_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-t               trace mode", 0, ATtrue));
  ATprotect(&(term_t_60));
  term_t_60 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_u_60));
  term_u_60 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_60));
  term_x_60 = (ATerm) ATmakeAppl(sym__2, term_r_59, term_a_22);
  ATprotect(&(term_y_60));
  term_y_60 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_22);
  ATprotect(&(term_z_60));
  term_z_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_61));
  term_a_61 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_61));
  term_b_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_c_61));
  term_c_61 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_61));
  term_f_61 = (ATerm) ATmakeAppl(sym__2, term_b_61, term_c_61);
  ATprotect(&(term_g_61));
  term_g_61 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_61));
  term_i_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_n_61));
  term_n_61 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_61));
  term_o_61 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_61));
  term_p_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_61));
  term_q_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_61));
  term_x_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_61));
  term_y_61 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_62));
  term_b_62 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_62));
  term_g_62 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_62));
  term_h_62 = (ATerm) ATmakeAppl(sym__2, term_n_61, term_o_61);
  ATprotect(&(term_q_62));
  term_q_62 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_62));
  term_t_62 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_c_63));
  term_c_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_f_63));
  term_f_63 = (ATerm) ATmakeAppl(sym__2, term_c_63, term_c_61);
  ATprotect(&(term_g_63));
  term_g_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_h_63));
  term_h_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_i_63));
  term_i_63 = (ATerm) ATmakeAppl(sym__2, term_h_63, term_c_61);
  ATprotect(&(term_j_63));
  term_j_63 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_k_63));
  term_k_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_p_63));
  term_p_63 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_63));
  term_u_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_63));
  term_w_63 = (ATerm) ATmakeAppl(sym__2, term_u_63, term_c_61);
  ATprotect(&(term_x_63));
  term_x_63 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_64));
  term_a_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_64));
  term_p_64 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_f_65));
  term_f_65 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_g_65));
  term_g_65 = (ATerm) ATmakeAppl(sym__2, term_f_65, term_c_61);
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
ATerm w_26 (ATerm z_74, ATerm a_75, ATerm);
ATerm EvalTerm_0_0 (ATerm);
ATerm f_27 (ATerm z_55, ATerm a_56, ATerm b_56, ATerm);
ATerm a_0 (ATerm);
ATerm g_27 (ATerm t_75, ATerm u_75, ATerm);
ATerm k_27 (ATerm c_135 (ATerm), ATerm k_59, ATerm l_59, ATerm i_59, ATerm j_59, ATerm);
ATerm q_0 (ATerm);
ATerm s_0 (ATerm);
ATerm t_0 (ATerm);
ATerm PatDecompose_0_0 (ATerm);
ATerm w_0 (ATerm);
ATerm e_1 (ATerm);
ATerm k_1 (ATerm);
ATerm z_162 (ATerm n_160, ATerm o_160, ATerm r_160, ATerm);
ATerm b_163 (ATerm y_160, ATerm z_160, ATerm a_161, ATerm);
ATerm c_163 (ATerm i_161, ATerm j_161, ATerm k_161, ATerm);
ATerm l_1 (ATerm);
ATerm stratego_match_1_0 (ATerm u_137 (ATerm), ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm m_27 (ATerm r_75, ATerm s_75, ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm n_27 (ATerm v_137 (ATerm), ATerm a_76, ATerm x_75, ATerm y_75, ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm b_2 (ATerm);
ATerm p_27 (ATerm s_137 (ATerm), ATerm f_74, ATerm g_74, ATerm x_719, ATerm);
ATerm w_27 (ATerm r_137 (ATerm), ATerm a_74, ATerm z_716, ATerm);
ATerm EvalAll_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm z_27 (ATerm b_138 (ATerm), ATerm q_77, ATerm n_77, ATerm o_77, ATerm);
ATerm s_2 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm a_28 (ATerm l_77, ATerm m_77, ATerm k_77, ATerm);
ATerm c_28 (ATerm o_55, ATerm p_55, ATerm);
ATerm g_28 (ATerm x_55, ATerm y_55, ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm i_28 (ATerm a_138 (ATerm), ATerm a_77, ATerm c_77, ATerm e_77, ATerm);
ATerm j_28 (ATerm z_137 (ATerm), ATerm w_76, ATerm x_76, ATerm y_76, ATerm);
ATerm k_28 (ATerm y_137 (ATerm), ATerm s_76, ATerm t_76, ATerm u_76, ATerm);
ATerm g_3 (ATerm);
ATerm eval_0_0 (ATerm);
ATerm h_3 (ATerm);
ATerm k_3 (ATerm);
ATerm w_28 (ATerm b_25, ATerm c_25, ATerm);
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
ATerm u_24 (ATerm w_144, ATerm);
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
ATerm spaste_1_0 (ATerm b_137 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm c_137 (ATerm), ATerm d_137 (ATerm), ATerm e_137 (ATerm), ATerm);
ATerm o_5 (ATerm);
ATerm p_25 (ATerm p_67, ATerm o_67, ATerm);
ATerm SVar_1_0 (ATerm i_103 (ATerm), ATerm);
ATerm q_25 (ATerm o_134 (ATerm), ATerm p_134 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm f_58, ATerm e_58, ATerm d_58, ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm u_5 (ATerm);
ATerm r_25 (ATerm i_134 (ATerm), ATerm j_134 (ATerm (ATerm), ATerm), ATerm x_57, ATerm a_58, ATerm);
ATerm lookup_0_0 (ATerm);
ATerm env_alltd_1_0 (ATerm h_113 (ATerm), ATerm);
ATerm rename_4_0 (ATerm d_134 (ATerm (ATerm), ATerm), ATerm e_134 (ATerm), ATerm f_134 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm g_134 (ATerm (ATerm), ATerm), ATerm);
ATerm z_5 (ATerm);
ATerm b_6 (ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm i_6 (ATerm);
ATerm n_6 (ATerm);
ATerm tpaste_1_0 (ATerm x_136 (ATerm), ATerm);
ATerm Var_1_0 (ATerm v_97 (ATerm), ATerm);
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
ATerm pat_td_1_0 (ATerm d_136 (ATerm), ATerm);
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
ATerm s_28 (ATerm u_64, ATerm v_64, ATerm w_64, ATerm);
ATerm o_185 (ATerm f_185, ATerm);
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
ATerm oncetd_1_0 (ATerm v_109 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm v_28 (ATerm e_60, ATerm f_60, ATerm g_60, ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm topdown_1_0 (ATerm r_108 (ATerm), ATerm);
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
ATerm a_11 (ATerm);
ATerm DeclareVariables_0_0 (ATerm);
ATerm tboundin_3_0 (ATerm y_136 (ATerm), ATerm z_136 (ATerm), ATerm a_137 (ATerm), ATerm);
ATerm f_11 (ATerm);
ATerm g_11 (ATerm);
ATerm h_11 (ATerm);
ATerm i_11 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm k_11 (ATerm);
ATerm m_11 (ATerm);
ATerm o_11 (ATerm);
ATerm r_11 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm b_26 (ATerm m_118 (ATerm), ATerm e_32, ATerm d_32, ATerm);
ATerm f_26 (ATerm p_118 (ATerm), ATerm q_118 (ATerm), ATerm i_32, ATerm h_32, ATerm);
ATerm g_26 (ATerm h_118 (ATerm), ATerm c_32, ATerm b_32, ATerm);
ATerm genzip_4_0 (ATerm l_116 (ATerm), ATerm m_116 (ATerm), ATerm n_116 (ATerm), ATerm o_116 (ATerm), ATerm);
ATerm y_11 (ATerm);
ATerm a_12 (ATerm);
ATerm c_12 (ATerm);
ATerm i_26 (ATerm h_600, ATerm m_600, ATerm y_59, ATerm);
ATerm while_not_2_0 (ATerm i_108 (ATerm), ATerm j_108 (ATerm), ATerm);
ATerm for_3_0 (ATerm l_108 (ATerm), ATerm m_108 (ATerm), ATerm n_108 (ATerm), ATerm);
ATerm f_12 (ATerm);
ATerm g_12 (ATerm);
ATerm i_12 (ATerm);
ATerm i_52 (ATerm e_49, ATerm f_49, ATerm g_49, ATerm);
ATerm k_12 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm t_12 (ATerm);
ATerm x_12 (ATerm);
ATerm y_12 (ATerm);
ATerm z_12 (ATerm);
ATerm a_13 (ATerm);
ATerm d_13 (ATerm);
ATerm e_13 (ATerm);
ATerm free_vars_3_0 (ATerm t_135 (ATerm), ATerm u_135 (ATerm), ATerm v_135 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm bottomup_1_0 (ATerm s_108 (ATerm), ATerm);
ATerm h_13 (ATerm);
ATerm i_13 (ATerm);
ATerm j_13 (ATerm);
ATerm k_13 (ATerm);
ATerm l_13 (ATerm);
ATerm m_13 (ATerm);
ATerm n_13 (ATerm);
ATerm o_13 (ATerm);
ATerm p_13 (ATerm);
ATerm q_13 (ATerm);
ATerm k_26 (ATerm e_143, ATerm);
ATerm h_28 (ATerm x_42, ATerm y_42, ATerm);
ATerm foldr_3_0 (ATerm n_120 (ATerm), ATerm o_120 (ATerm), ATerm p_120 (ATerm), ATerm);
ATerm r_13 (ATerm);
ATerm s_13 (ATerm);
ATerm t_13 (ATerm);
ATerm u_13 (ATerm);
ATerm define_strategies_0_0 (ATerm);
ATerm l_26 (ATerm q_51, ATerm r_51, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm u_114 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm c_130 (ATerm), ATerm);
ATerm call_sc_0_0 (ATerm);
ATerm eval_import_0_0 (ATerm);
ATerm n_26 (ATerm p_56, ATerm o_56, ATerm);
ATerm o_26 (ATerm r_45, ATerm s_45, ATerm);
ATerm p_26 (ATerm l_25, ATerm);
ATerm q_26 (ATerm h_49, ATerm i_49, ATerm);
ATerm r_26 (ATerm f_127 (ATerm), ATerm r_444, ATerm p_49, ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm a_14 (ATerm);
ATerm s_26 (ATerm i_25, ATerm);
ATerm t_194 (ATerm w_193, ATerm x_193, ATerm y_193, ATerm);
ATerm b_14 (ATerm);
ATerm c_14 (ATerm);
ATerm eval_command_0_0 (ATerm);
ATerm repeat_1_0 (ATerm t_107 (ATerm), ATerm);
ATerm d_14 (ATerm);
ATerm evaluate_commands_0_0 (ATerm);
ATerm p_195 (ATerm j_195, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm x_28 (ATerm n_49, ATerm);
ATerm y_28 (ATerm z_45, ATerm a_46, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm a_197 (ATerm z_195, ATerm);
ATerm b_197 (ATerm d_196, ATerm e_196, ATerm f_196, ATerm);
ATerm c_197 (ATerm n_196, ATerm o_196, ATerm p_196, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm e_14 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm copyright_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm p_128 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm y_114 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm z_199 (ATerm r_199, ATerm);
ATerm conc_0_0 (ATerm);
ATerm a_29 (ATerm u_50, ATerm t_50, ATerm);
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
ATerm s_14 (ATerm);
ATerm si_options_0_0 (ATerm);
ATerm y_14 (ATerm);
ATerm z_14 (ATerm);
ATerm a_15 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm b_15 (ATerm);
ATerm c_15 (ATerm);
ATerm d_15 (ATerm);
ATerm f_15 (ATerm);
ATerm g_15 (ATerm);
ATerm h_15 (ATerm);
ATerm i_15 (ATerm);
ATerm j_15 (ATerm);
ATerm o_15 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm g_29 (ATerm o_50, ATerm p_50, ATerm);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm r_15 (ATerm);
ATerm s_15 (ATerm);
ATerm x_15 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm e_29 (ATerm m_55, ATerm n_55, ATerm l_55, ATerm);
ATerm ArgOption_3_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm);
ATerm f_16 (ATerm);
ATerm g_16 (ATerm);
ATerm h_16 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm);
ATerm q_16 (ATerm);
ATerm r_16 (ATerm);
ATerm s_16 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm s_114 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm c_29 (ATerm n_40, ATerm o_40, ATerm);
ATerm debug_1_0 (ATerm d_127 (ATerm), ATerm);
ATerm map_1_0 (ATerm i_114 (ATerm), ATerm);
ATerm t_16 (ATerm);
ATerm u_16 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm d_29 (ATerm d_57, ATerm e_57, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm v_16 (ATerm);
ATerm w_16 (ATerm);
ATerm x_16 (ATerm);
ATerm y_16 (ATerm);
ATerm a_17 (ATerm);
ATerm b_17 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm b_93 (ATerm), ATerm c_93 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm i_133 (ATerm), ATerm);
ATerm d_17 (ATerm);
ATerm e_17 (ATerm);
ATerm f_17 (ATerm);
ATerm g_17 (ATerm);
ATerm parse_options_1_0 (ATerm h_133 (ATerm), ATerm);
ATerm m_17 (ATerm);
ATerm n_17 (ATerm);
ATerm q_17 (ATerm);
ATerm r_17 (ATerm);
ATerm make_option_table_0_0 (ATerm);
ATerm at_suffix_1_0 (ATerm c_115 (ATerm), ATerm);
ATerm split_fetch_1_0 (ATerm v_114 (ATerm), ATerm);
ATerm t_17 (ATerm);
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
  t = term_u_17;
  n_0 = t;
  t = SSL_table_destroy(n_0);
  t = term_v_17;
  m_0 = t;
  t = SSL_table_destroy(m_0);
  t = l_0;
  return(t);
}
ATerm EvalPrim_0_0 (ATerm t)
{
  ATerm c_148 = NULL,d_148 = NULL,e_148 = NULL,f_148 = NULL,g_148 = NULL,h_148 = NULL,i_148 = NULL,j_148 = NULL,m_148 = NULL,n_148 = NULL,o_148 = NULL;
  g_148 = t;
  if(match_cons(t, sym_App_2))
    {
      h_148 = ATgetArgument(t, 0);
      o_148 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_148;
  if(match_cons(t, sym_Prim_2))
    {
      i_148 = ATgetArgument(t, 0);
      j_148 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_148;
  if(match_string(t, "\"_cpl_loaded\""))
    {
      ATerm l_49 = NULL;
      t = j_148;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_148 = ATgetFirst((ATermList) t);
          n_148 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_148;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = m_148;
      t = EvalTerm_0_0(t);
      l_49 = t;
      t = _cpl_loaded(l_49);
    }
  else
    {
      if(match_string(t, "\"SSL_strlen\""))
        {
          ATerm g_50 = NULL;
          t = j_148;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              m_148 = ATgetFirst((ATermList) t);
              n_148 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = n_148;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = m_148;
          t = EvalTerm_0_0(t);
          g_50 = t;
          t = SSL_strlen(g_50);
        }
      else
        {
          if(match_string(t, "\"SSL_concat_strings\""))
            {
              ATerm a_51 = NULL;
              t = j_148;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  m_148 = ATgetFirst((ATermList) t);
                  n_148 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = n_148;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = m_148;
              t = EvalTerm_0_0(t);
              a_51 = t;
              t = SSL_concat_strings(a_51);
            }
          else
            {
              if(match_string(t, "\"SSL_strcat\""))
                {
                  ATerm w_51 = NULL,x_51 = NULL;
                  t = j_148;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      m_148 = ATgetFirst((ATermList) t);
                      n_148 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = n_148;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      c_148 = ATgetFirst((ATermList) t);
                      d_148 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = d_148;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = m_148;
                  t = EvalTerm_0_0(t);
                  x_51 = t;
                  t = c_148;
                  t = EvalTerm_0_0(t);
                  w_51 = t;
                  t = SSL_strcat(x_51, w_51);
                }
              else
                {
                  if(match_string(t, "\"SSL_explode_string\""))
                    {
                      ATerm q_52 = NULL;
                      t = j_148;
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          m_148 = ATgetFirst((ATermList) t);
                          n_148 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = n_148;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = m_148;
                      t = EvalTerm_0_0(t);
                      q_52 = t;
                      t = SSL_explode_string(q_52);
                    }
                  else
                    {
                      if(match_string(t, "\"SSL_implode_string\""))
                        {
                          ATerm f_53 = NULL;
                          t = j_148;
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              m_148 = ATgetFirst((ATermList) t);
                              n_148 = (ATerm) ATgetNext((ATermList) t);
                            }
                          else
                            _fail(t);
                          t = n_148;
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = m_148;
                          t = EvalTerm_0_0(t);
                          f_53 = t;
                          t = SSL_implode_string(f_53);
                        }
                      else
                        {
                          if(match_string(t, "\"SSL_is_string\""))
                            {
                              ATerm p_53 = NULL;
                              t = j_148;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  m_148 = ATgetFirst((ATermList) t);
                                  n_148 = (ATerm) ATgetNext((ATermList) t);
                                }
                              else
                                _fail(t);
                              t = n_148;
                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                _fail(t);
                              t = m_148;
                              t = EvalTerm_0_0(t);
                              p_53 = t;
                              t = SSL_is_string(p_53);
                            }
                          else
                            {
                              if(match_string(t, "SSL_new"))
                                {
                                  t = j_148;
                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                    _fail(t);
                                  t = SSL_new();
                                }
                              else
                                {
                                  if(match_string(t, "\"SSL_address\""))
                                    {
                                      ATerm a_54 = NULL;
                                      t = j_148;
                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                        {
                                          m_148 = ATgetFirst((ATermList) t);
                                          n_148 = (ATerm) ATgetNext((ATermList) t);
                                        }
                                      else
                                        _fail(t);
                                      t = n_148;
                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                        _fail(t);
                                      t = m_148;
                                      t = EvalTerm_0_0(t);
                                      a_54 = t;
                                      t = SSL_address(a_54);
                                    }
                                  else
                                    {
                                      if(match_string(t, "\"SSL_address_lt\""))
                                        {
                                          ATerm u_54 = NULL,v_54 = NULL;
                                          t = j_148;
                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                            {
                                              m_148 = ATgetFirst((ATermList) t);
                                              n_148 = (ATerm) ATgetNext((ATermList) t);
                                            }
                                          else
                                            _fail(t);
                                          t = n_148;
                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                            {
                                              c_148 = ATgetFirst((ATermList) t);
                                              d_148 = (ATerm) ATgetNext((ATermList) t);
                                            }
                                          else
                                            _fail(t);
                                          t = d_148;
                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                            _fail(t);
                                          t = m_148;
                                          t = EvalTerm_0_0(t);
                                          v_54 = t;
                                          t = c_148;
                                          t = EvalTerm_0_0(t);
                                          u_54 = t;
                                          t = SSL_address_lt(v_54, u_54);
                                        }
                                      else
                                        {
                                          if(match_string(t, "\"SSL_explode_term\""))
                                            {
                                              ATerm m_56 = NULL;
                                              t = j_148;
                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                {
                                                  m_148 = ATgetFirst((ATermList) t);
                                                  n_148 = (ATerm) ATgetNext((ATermList) t);
                                                }
                                              else
                                                _fail(t);
                                              t = n_148;
                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                _fail(t);
                                              t = m_148;
                                              t = EvalTerm_0_0(t);
                                              m_56 = t;
                                              t = SSL_explode_term(m_56);
                                            }
                                          else
                                            {
                                              if(match_string(t, "\"SSL_mkterm\""))
                                                {
                                                  ATerm c_57 = NULL,f_57 = NULL;
                                                  t = j_148;
                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                    {
                                                      m_148 = ATgetFirst((ATermList) t);
                                                      n_148 = (ATerm) ATgetNext((ATermList) t);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = n_148;
                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                    {
                                                      c_148 = ATgetFirst((ATermList) t);
                                                      d_148 = (ATerm) ATgetNext((ATermList) t);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = d_148;
                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                    _fail(t);
                                                  t = m_148;
                                                  t = EvalTerm_0_0(t);
                                                  f_57 = t;
                                                  t = c_148;
                                                  t = EvalTerm_0_0(t);
                                                  c_57 = t;
                                                  t = SSL_mkterm(f_57, c_57);
                                                }
                                              else
                                                {
                                                  if(match_string(t, "\"ATremoveAnnotations\""))
                                                    {
                                                      ATerm s_57 = NULL;
                                                      t = j_148;
                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                        {
                                                          m_148 = ATgetFirst((ATermList) t);
                                                          n_148 = (ATerm) ATgetNext((ATermList) t);
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = n_148;
                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                        _fail(t);
                                                      t = m_148;
                                                      t = EvalTerm_0_0(t);
                                                      s_57 = t;
                                                      t = ATremoveAnnotations(s_57);
                                                    }
                                                  else
                                                    {
                                                      if(match_string(t, "\"SSLsetAnnotations\""))
                                                        {
                                                          ATerm u_58 = NULL,w_58 = NULL;
                                                          t = j_148;
                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                            {
                                                              m_148 = ATgetFirst((ATermList) t);
                                                              n_148 = (ATerm) ATgetNext((ATermList) t);
                                                            }
                                                          else
                                                            _fail(t);
                                                          t = n_148;
                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                            {
                                                              c_148 = ATgetFirst((ATermList) t);
                                                              d_148 = (ATerm) ATgetNext((ATermList) t);
                                                            }
                                                          else
                                                            _fail(t);
                                                          t = d_148;
                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                            _fail(t);
                                                          t = m_148;
                                                          t = EvalTerm_0_0(t);
                                                          w_58 = t;
                                                          t = c_148;
                                                          t = EvalTerm_0_0(t);
                                                          u_58 = t;
                                                          t = SSLsetAnnotations(w_58, u_58);
                                                        }
                                                      else
                                                        {
                                                          if(match_string(t, "\"SSLgetAnnotations\""))
                                                            {
                                                              ATerm p_59 = NULL;
                                                              t = j_148;
                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                {
                                                                  m_148 = ATgetFirst((ATermList) t);
                                                                  n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                }
                                                              else
                                                                _fail(t);
                                                              t = n_148;
                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                _fail(t);
                                                              t = m_148;
                                                              t = EvalTerm_0_0(t);
                                                              p_59 = t;
                                                              t = SSLgetAnnotations(p_59);
                                                            }
                                                          else
                                                            {
                                                              if(match_string(t, "\"SSL_string_to_int\""))
                                                                {
                                                                  ATerm z_59 = NULL;
                                                                  t = j_148;
                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                    {
                                                                      m_148 = ATgetFirst((ATermList) t);
                                                                      n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  t = n_148;
                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                    _fail(t);
                                                                  t = m_148;
                                                                  t = EvalTerm_0_0(t);
                                                                  z_59 = t;
                                                                  t = SSL_string_to_int(z_59);
                                                                }
                                                              else
                                                                {
                                                                  if(match_string(t, "\"SSL_int_to_string\""))
                                                                    {
                                                                      ATerm n_60 = NULL;
                                                                      t = j_148;
                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                        {
                                                                          m_148 = ATgetFirst((ATermList) t);
                                                                          n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                        }
                                                                      else
                                                                        _fail(t);
                                                                      t = n_148;
                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                        _fail(t);
                                                                      t = m_148;
                                                                      t = EvalTerm_0_0(t);
                                                                      n_60 = t;
                                                                      t = SSL_int_to_string(n_60);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_string(t, "\"SSL_int\""))
                                                                        {
                                                                          ATerm h_61 = NULL;
                                                                          t = j_148;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              m_148 = ATgetFirst((ATermList) t);
                                                                              n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          t = n_148;
                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                            _fail(t);
                                                                          t = m_148;
                                                                          t = EvalTerm_0_0(t);
                                                                          h_61 = t;
                                                                          t = SSL_int(h_61);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_string(t, "\"SSL_gtr\""))
                                                                            {
                                                                              t = j_148;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  m_148 = ATgetFirst((ATermList) t);
                                                                                  n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              t = n_148;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  c_148 = ATgetFirst((ATermList) t);
                                                                                  d_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              t = d_148;
                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                _fail(t);
                                                                              {
                                                                                ATerm w_17 = t;
                                                                                int x_17 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm s_61 = NULL,t_61 = NULL;
                                                                                    t = m_148;
                                                                                    t = EvalTerm_0_0(t);
                                                                                    t_61 = t;
                                                                                    t = c_148;
                                                                                    t = EvalTerm_0_0(t);
                                                                                    s_61 = t;
                                                                                    t = SSL_gtr(t_61, s_61);
                                                                                    ;
                                                                                    LocalPopChoice(x_17);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = w_17;
                                                                                    {
                                                                                      ATerm k_62 = NULL,l_62 = NULL;
                                                                                      t = m_148;
                                                                                      t = EvalTerm_0_0(t);
                                                                                      l_62 = t;
                                                                                      t = c_148;
                                                                                      t = EvalTerm_0_0(t);
                                                                                      k_62 = t;
                                                                                      t = SSL_gtr(l_62, k_62);
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_string(t, "\"SSL_gti\""))
                                                                                {
                                                                                  t = j_148;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      m_148 = ATgetFirst((ATermList) t);
                                                                                      n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  t = n_148;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      c_148 = ATgetFirst((ATermList) t);
                                                                                      d_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  t = d_148;
                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                    _fail(t);
                                                                                  {
                                                                                    ATerm b_18 = t;
                                                                                    int c_18 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm d_63 = NULL,e_63 = NULL;
                                                                                        t = m_148;
                                                                                        t = EvalTerm_0_0(t);
                                                                                        e_63 = t;
                                                                                        t = c_148;
                                                                                        t = EvalTerm_0_0(t);
                                                                                        d_63 = t;
                                                                                        t = SSL_gti(e_63, d_63);
                                                                                        ;
                                                                                        LocalPopChoice(c_18);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = b_18;
                                                                                        {
                                                                                          ATerm v_63 = NULL,z_63 = NULL;
                                                                                          t = m_148;
                                                                                          t = EvalTerm_0_0(t);
                                                                                          z_63 = t;
                                                                                          t = c_148;
                                                                                          t = EvalTerm_0_0(t);
                                                                                          v_63 = t;
                                                                                          t = SSL_gti(z_63, v_63);
                                                                                        }
                                                                                      }
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_string(t, "\"SSL_mod\""))
                                                                                    {
                                                                                      ATerm l_64 = NULL,m_64 = NULL;
                                                                                      t = j_148;
                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                        {
                                                                                          m_148 = ATgetFirst((ATermList) t);
                                                                                          n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      t = n_148;
                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                        {
                                                                                          c_148 = ATgetFirst((ATermList) t);
                                                                                          d_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      t = d_148;
                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                        _fail(t);
                                                                                      t = m_148;
                                                                                      t = EvalTerm_0_0(t);
                                                                                      m_64 = t;
                                                                                      t = c_148;
                                                                                      t = EvalTerm_0_0(t);
                                                                                      l_64 = t;
                                                                                      t = SSL_mod(m_64, l_64);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_string(t, "\"SSL_divr\""))
                                                                                        {
                                                                                          t = j_148;
                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                            {
                                                                                              m_148 = ATgetFirst((ATermList) t);
                                                                                              n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = n_148;
                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                            {
                                                                                              c_148 = ATgetFirst((ATermList) t);
                                                                                              d_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = d_148;
                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                            _fail(t);
                                                                                          {
                                                                                            ATerm f_18 = t;
                                                                                            int g_18 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm b_65 = NULL,c_65 = NULL;
                                                                                                t = m_148;
                                                                                                t = EvalTerm_0_0(t);
                                                                                                c_65 = t;
                                                                                                t = c_148;
                                                                                                t = EvalTerm_0_0(t);
                                                                                                b_65 = t;
                                                                                                t = SSL_divr(c_65, b_65);
                                                                                                ;
                                                                                                LocalPopChoice(g_18);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = f_18;
                                                                                                {
                                                                                                  ATerm o_65 = NULL,p_65 = NULL;
                                                                                                  t = m_148;
                                                                                                  t = EvalTerm_0_0(t);
                                                                                                  p_65 = t;
                                                                                                  t = c_148;
                                                                                                  t = EvalTerm_0_0(t);
                                                                                                  o_65 = t;
                                                                                                  t = SSL_divr(p_65, o_65);
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_string(t, "\"SSL_divi\""))
                                                                                            {
                                                                                              t = j_148;
                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                {
                                                                                                  m_148 = ATgetFirst((ATermList) t);
                                                                                                  n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              t = n_148;
                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                {
                                                                                                  c_148 = ATgetFirst((ATermList) t);
                                                                                                  d_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              t = d_148;
                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                _fail(t);
                                                                                              {
                                                                                                ATerm h_18 = t;
                                                                                                int i_18 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm b_66 = NULL,c_66 = NULL;
                                                                                                    t = m_148;
                                                                                                    t = EvalTerm_0_0(t);
                                                                                                    c_66 = t;
                                                                                                    t = c_148;
                                                                                                    t = EvalTerm_0_0(t);
                                                                                                    b_66 = t;
                                                                                                    t = SSL_divi(c_66, b_66);
                                                                                                    ;
                                                                                                    LocalPopChoice(i_18);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = h_18;
                                                                                                    {
                                                                                                      ATerm p_66 = NULL,q_66 = NULL;
                                                                                                      t = m_148;
                                                                                                      t = EvalTerm_0_0(t);
                                                                                                      q_66 = t;
                                                                                                      t = c_148;
                                                                                                      t = EvalTerm_0_0(t);
                                                                                                      p_66 = t;
                                                                                                      t = SSL_divi(q_66, p_66);
                                                                                                    }
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_string(t, "\"SSL_mulr\""))
                                                                                                {
                                                                                                  t = j_148;
                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                    {
                                                                                                      m_148 = ATgetFirst((ATermList) t);
                                                                                                      n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  t = n_148;
                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                    {
                                                                                                      c_148 = ATgetFirst((ATermList) t);
                                                                                                      d_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  t = d_148;
                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                    _fail(t);
                                                                                                  {
                                                                                                    ATerm j_18 = t;
                                                                                                    int m_18 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm n_67 = NULL,q_67 = NULL;
                                                                                                        t = m_148;
                                                                                                        t = EvalTerm_0_0(t);
                                                                                                        q_67 = t;
                                                                                                        t = c_148;
                                                                                                        t = EvalTerm_0_0(t);
                                                                                                        n_67 = t;
                                                                                                        t = SSL_mulr(q_67, n_67);
                                                                                                        ;
                                                                                                        LocalPopChoice(m_18);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = j_18;
                                                                                                        {
                                                                                                          ATerm i_68 = NULL,j_68 = NULL;
                                                                                                          t = m_148;
                                                                                                          t = EvalTerm_0_0(t);
                                                                                                          j_68 = t;
                                                                                                          t = c_148;
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
                                                                                                      t = j_148;
                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                        {
                                                                                                          m_148 = ATgetFirst((ATermList) t);
                                                                                                          n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      t = n_148;
                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                        {
                                                                                                          c_148 = ATgetFirst((ATermList) t);
                                                                                                          d_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      t = d_148;
                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                        _fail(t);
                                                                                                      {
                                                                                                        ATerm o_18 = t;
                                                                                                        int p_18 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm g_69 = NULL,h_69 = NULL;
                                                                                                            t = m_148;
                                                                                                            t = EvalTerm_0_0(t);
                                                                                                            h_69 = t;
                                                                                                            t = c_148;
                                                                                                            t = EvalTerm_0_0(t);
                                                                                                            g_69 = t;
                                                                                                            t = SSL_muli(h_69, g_69);
                                                                                                            ;
                                                                                                            LocalPopChoice(p_18);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = o_18;
                                                                                                            {
                                                                                                              ATerm t_69 = NULL,u_69 = NULL;
                                                                                                              t = m_148;
                                                                                                              t = EvalTerm_0_0(t);
                                                                                                              u_69 = t;
                                                                                                              t = c_148;
                                                                                                              t = EvalTerm_0_0(t);
                                                                                                              t_69 = t;
                                                                                                              t = SSL_muli(u_69, t_69);
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(t, "\"SSL_subtr\""))
                                                                                                        {
                                                                                                          t = j_148;
                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                            {
                                                                                                              m_148 = ATgetFirst((ATermList) t);
                                                                                                              n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          t = n_148;
                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                            {
                                                                                                              c_148 = ATgetFirst((ATermList) t);
                                                                                                              d_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          t = d_148;
                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                            _fail(t);
                                                                                                          {
                                                                                                            ATerm q_18 = t;
                                                                                                            int r_18 = stack_ptr;
                                                                                                            if((PushChoice() == 0))
                                                                                                              {
                                                                                                                ATerm v_70 = NULL,w_70 = NULL;
                                                                                                                t = m_148;
                                                                                                                t = EvalTerm_0_0(t);
                                                                                                                w_70 = t;
                                                                                                                t = c_148;
                                                                                                                t = EvalTerm_0_0(t);
                                                                                                                v_70 = t;
                                                                                                                t = SSL_subtr(w_70, v_70);
                                                                                                                ;
                                                                                                                LocalPopChoice(r_18);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                t = q_18;
                                                                                                                {
                                                                                                                  ATerm o_71 = NULL,d_72 = NULL;
                                                                                                                  t = m_148;
                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                  d_72 = t;
                                                                                                                  t = c_148;
                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                  o_71 = t;
                                                                                                                  t = SSL_subtr(d_72, o_71);
                                                                                                                }
                                                                                                              }
                                                                                                          }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(t, "\"SSL_subti\""))
                                                                                                            {
                                                                                                              t = j_148;
                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                {
                                                                                                                  m_148 = ATgetFirst((ATermList) t);
                                                                                                                  n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              t = n_148;
                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                {
                                                                                                                  c_148 = ATgetFirst((ATermList) t);
                                                                                                                  d_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              t = d_148;
                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                _fail(t);
                                                                                                              {
                                                                                                                ATerm s_18 = t;
                                                                                                                int t_18 = stack_ptr;
                                                                                                                if((PushChoice() == 0))
                                                                                                                  {
                                                                                                                    ATerm e_73 = NULL,f_73 = NULL;
                                                                                                                    t = m_148;
                                                                                                                    t = EvalTerm_0_0(t);
                                                                                                                    f_73 = t;
                                                                                                                    t = c_148;
                                                                                                                    t = EvalTerm_0_0(t);
                                                                                                                    e_73 = t;
                                                                                                                    t = SSL_subti(f_73, e_73);
                                                                                                                    ;
                                                                                                                    LocalPopChoice(t_18);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    t = s_18;
                                                                                                                    {
                                                                                                                      ATerm v_73 = NULL,y_73 = NULL;
                                                                                                                      t = m_148;
                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                      y_73 = t;
                                                                                                                      t = c_148;
                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                      v_73 = t;
                                                                                                                      t = SSL_subti(y_73, v_73);
                                                                                                                    }
                                                                                                                  }
                                                                                                              }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(t, "\"SSL_addr\""))
                                                                                                                {
                                                                                                                  t = j_148;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                    {
                                                                                                                      m_148 = ATgetFirst((ATermList) t);
                                                                                                                      n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  t = n_148;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                    {
                                                                                                                      c_148 = ATgetFirst((ATermList) t);
                                                                                                                      d_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  t = d_148;
                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                    _fail(t);
                                                                                                                  {
                                                                                                                    ATerm u_18 = t;
                                                                                                                    int v_18 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        ATerm r_74 = NULL,s_74 = NULL;
                                                                                                                        t = m_148;
                                                                                                                        t = EvalTerm_0_0(t);
                                                                                                                        s_74 = t;
                                                                                                                        t = c_148;
                                                                                                                        t = EvalTerm_0_0(t);
                                                                                                                        r_74 = t;
                                                                                                                        t = SSL_addr(s_74, r_74);
                                                                                                                        ;
                                                                                                                        LocalPopChoice(v_18);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = u_18;
                                                                                                                        {
                                                                                                                          ATerm g_75 = NULL,h_75 = NULL;
                                                                                                                          t = m_148;
                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                          h_75 = t;
                                                                                                                          t = c_148;
                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                          g_75 = t;
                                                                                                                          t = SSL_addr(h_75, g_75);
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(t, "\"SSL_addi\""))
                                                                                                                    {
                                                                                                                      t = j_148;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                        {
                                                                                                                          m_148 = ATgetFirst((ATermList) t);
                                                                                                                          n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        _fail(t);
                                                                                                                      t = n_148;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                        {
                                                                                                                          c_148 = ATgetFirst((ATermList) t);
                                                                                                                          d_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        _fail(t);
                                                                                                                      t = d_148;
                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                        _fail(t);
                                                                                                                      {
                                                                                                                        ATerm w_18 = t;
                                                                                                                        int x_18 = stack_ptr;
                                                                                                                        if((PushChoice() == 0))
                                                                                                                          {
                                                                                                                            ATerm z_75 = NULL,b_76 = NULL;
                                                                                                                            t = m_148;
                                                                                                                            t = EvalTerm_0_0(t);
                                                                                                                            b_76 = t;
                                                                                                                            t = c_148;
                                                                                                                            t = EvalTerm_0_0(t);
                                                                                                                            z_75 = t;
                                                                                                                            t = SSL_addi(b_76, z_75);
                                                                                                                            ;
                                                                                                                            LocalPopChoice(x_18);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            t = w_18;
                                                                                                                            {
                                                                                                                              ATerm n_76 = NULL,o_76 = NULL;
                                                                                                                              t = m_148;
                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                              o_76 = t;
                                                                                                                              t = c_148;
                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                              n_76 = t;
                                                                                                                              t = SSL_addi(o_76, n_76);
                                                                                                                            }
                                                                                                                          }
                                                                                                                      }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(t, "\"SSL_is_int\""))
                                                                                                                        {
                                                                                                                          ATerm h_77 = NULL;
                                                                                                                          t = j_148;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                            {
                                                                                                                              m_148 = ATgetFirst((ATermList) t);
                                                                                                                              n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            _fail(t);
                                                                                                                          t = n_148;
                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                            _fail(t);
                                                                                                                          t = m_148;
                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                          h_77 = t;
                                                                                                                          t = SSL_is_int(h_77);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(t, "\"SSL_real\""))
                                                                                                                            {
                                                                                                                              ATerm w_77 = NULL;
                                                                                                                              t = j_148;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                {
                                                                                                                                  m_148 = ATgetFirst((ATermList) t);
                                                                                                                                  n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                _fail(t);
                                                                                                                              t = n_148;
                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                _fail(t);
                                                                                                                              t = m_148;
                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                              w_77 = t;
                                                                                                                              t = SSL_real(w_77);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(t, "\"SSL_string_to_real\""))
                                                                                                                                {
                                                                                                                                  ATerm f_78 = NULL;
                                                                                                                                  t = j_148;
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                    {
                                                                                                                                      m_148 = ATgetFirst((ATermList) t);
                                                                                                                                      n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    _fail(t);
                                                                                                                                  t = n_148;
                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                    _fail(t);
                                                                                                                                  t = m_148;
                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                  f_78 = t;
                                                                                                                                  t = SSL_string_to_real(f_78);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(t, "\"SSL_real_to_string\""))
                                                                                                                                    {
                                                                                                                                      ATerm o_78 = NULL;
                                                                                                                                      t = j_148;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                        {
                                                                                                                                          m_148 = ATgetFirst((ATermList) t);
                                                                                                                                          n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        _fail(t);
                                                                                                                                      t = n_148;
                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                        _fail(t);
                                                                                                                                      t = m_148;
                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                      o_78 = t;
                                                                                                                                      t = SSL_real_to_string(o_78);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(t, "\"SSL_atan2\""))
                                                                                                                                        {
                                                                                                                                          ATerm z_78 = NULL,a_79 = NULL;
                                                                                                                                          t = j_148;
                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                            {
                                                                                                                                              m_148 = ATgetFirst((ATermList) t);
                                                                                                                                              n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            _fail(t);
                                                                                                                                          t = n_148;
                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                            {
                                                                                                                                              c_148 = ATgetFirst((ATermList) t);
                                                                                                                                              d_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            _fail(t);
                                                                                                                                          t = d_148;
                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                            _fail(t);
                                                                                                                                          t = m_148;
                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                          a_79 = t;
                                                                                                                                          t = c_148;
                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                          z_78 = t;
                                                                                                                                          t = SSL_atan2(a_79, z_78);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(t, "\"SSL_sqrt\""))
                                                                                                                                            {
                                                                                                                                              ATerm k_79 = NULL;
                                                                                                                                              t = j_148;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                {
                                                                                                                                                  m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                  n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                _fail(t);
                                                                                                                                              t = n_148;
                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                _fail(t);
                                                                                                                                              t = m_148;
                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                              k_79 = t;
                                                                                                                                              t = SSL_sqrt(k_79);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_string(t, "\"SSL_sin\""))
                                                                                                                                                {
                                                                                                                                                  ATerm t_79 = NULL;
                                                                                                                                                  t = j_148;
                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                    {
                                                                                                                                                      m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                      n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    _fail(t);
                                                                                                                                                  t = n_148;
                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                    _fail(t);
                                                                                                                                                  t = m_148;
                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                  t_79 = t;
                                                                                                                                                  t = SSL_sin(t_79);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  if(match_string(t, "\"SSL_cos\""))
                                                                                                                                                    {
                                                                                                                                                      ATerm c_80 = NULL;
                                                                                                                                                      t = j_148;
                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                        {
                                                                                                                                                          m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                          n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        _fail(t);
                                                                                                                                                      t = n_148;
                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                        _fail(t);
                                                                                                                                                      t = m_148;
                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                      c_80 = t;
                                                                                                                                                      t = SSL_cos(c_80);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      if(match_string(t, "\"SSL_is_real\""))
                                                                                                                                                        {
                                                                                                                                                          ATerm l_80 = NULL;
                                                                                                                                                          t = j_148;
                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                            {
                                                                                                                                                              m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                              n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            _fail(t);
                                                                                                                                                          t = n_148;
                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                            _fail(t);
                                                                                                                                                          t = m_148;
                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                          l_80 = t;
                                                                                                                                                          t = SSL_is_real(l_80);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          if(match_string(t, "\"SSL_open_file\""))
                                                                                                                                                            {
                                                                                                                                                              ATerm w_80 = NULL,x_80 = NULL;
                                                                                                                                                              t = j_148;
                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                {
                                                                                                                                                                  m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                  n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                _fail(t);
                                                                                                                                                              t = n_148;
                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                {
                                                                                                                                                                  c_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                  d_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                _fail(t);
                                                                                                                                                              t = d_148;
                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                _fail(t);
                                                                                                                                                              t = m_148;
                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                              x_80 = t;
                                                                                                                                                              t = c_148;
                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                              w_80 = t;
                                                                                                                                                              t = SSL_open_file(x_80, w_80);
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            {
                                                                                                                                                              if(match_string(t, "\"SSL_close_file\""))
                                                                                                                                                                {
                                                                                                                                                                  ATerm h_81 = NULL;
                                                                                                                                                                  t = j_148;
                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                    {
                                                                                                                                                                      m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                      n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                    }
                                                                                                                                                                  else
                                                                                                                                                                    _fail(t);
                                                                                                                                                                  t = n_148;
                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                    _fail(t);
                                                                                                                                                                  t = m_148;
                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                  h_81 = t;
                                                                                                                                                                  t = SSL_close_file(h_81);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                {
                                                                                                                                                                  if(match_string(t, "SSL_pipe"))
                                                                                                                                                                    {
                                                                                                                                                                      t = j_148;
                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                        _fail(t);
                                                                                                                                                                      t = SSL_pipe();
                                                                                                                                                                    }
                                                                                                                                                                  else
                                                                                                                                                                    {
                                                                                                                                                                      if(match_string(t, "\"SSL_fileno\""))
                                                                                                                                                                        {
                                                                                                                                                                          ATerm s_81 = NULL;
                                                                                                                                                                          t = j_148;
                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                            {
                                                                                                                                                                              m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                              n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                            }
                                                                                                                                                                          else
                                                                                                                                                                            _fail(t);
                                                                                                                                                                          t = n_148;
                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                            _fail(t);
                                                                                                                                                                          t = m_148;
                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                          s_81 = t;
                                                                                                                                                                          t = SSL_fileno(s_81);
                                                                                                                                                                        }
                                                                                                                                                                      else
                                                                                                                                                                        {
                                                                                                                                                                          if(match_string(t, "\"SSL_fdopen\""))
                                                                                                                                                                            {
                                                                                                                                                                              ATerm d_82 = NULL,e_82 = NULL;
                                                                                                                                                                              t = j_148;
                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                {
                                                                                                                                                                                  m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                  n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                }
                                                                                                                                                                              else
                                                                                                                                                                                _fail(t);
                                                                                                                                                                              t = n_148;
                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                {
                                                                                                                                                                                  c_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                  d_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                }
                                                                                                                                                                              else
                                                                                                                                                                                _fail(t);
                                                                                                                                                                              t = d_148;
                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                _fail(t);
                                                                                                                                                                              t = m_148;
                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                              e_82 = t;
                                                                                                                                                                              t = c_148;
                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                              d_82 = t;
                                                                                                                                                                              t = SSL_fdopen(e_82, d_82);
                                                                                                                                                                            }
                                                                                                                                                                          else
                                                                                                                                                                            {
                                                                                                                                                                              if(match_string(t, "\"SSL_access\""))
                                                                                                                                                                                {
                                                                                                                                                                                  ATerm q_82 = NULL,r_82 = NULL;
                                                                                                                                                                                  t = j_148;
                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                    {
                                                                                                                                                                                      m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                      n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                    }
                                                                                                                                                                                  else
                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                  t = n_148;
                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                    {
                                                                                                                                                                                      c_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                      d_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                    }
                                                                                                                                                                                  else
                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                  t = d_148;
                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                  t = m_148;
                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                  r_82 = t;
                                                                                                                                                                                  t = c_148;
                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                  q_82 = t;
                                                                                                                                                                                  t = SSL_access(r_82, q_82);
                                                                                                                                                                                }
                                                                                                                                                                              else
                                                                                                                                                                                {
                                                                                                                                                                                  if(match_string(t, "\"SSL_dup2\""))
                                                                                                                                                                                    {
                                                                                                                                                                                      ATerm d_83 = NULL,e_83 = NULL;
                                                                                                                                                                                      t = j_148;
                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                        {
                                                                                                                                                                                          m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                          n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                        }
                                                                                                                                                                                      else
                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                      t = n_148;
                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                        {
                                                                                                                                                                                          c_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                          d_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                        }
                                                                                                                                                                                      else
                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                      t = d_148;
                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                      t = m_148;
                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                      e_83 = t;
                                                                                                                                                                                      t = c_148;
                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                      d_83 = t;
                                                                                                                                                                                      t = SSL_dup2(e_83, d_83);
                                                                                                                                                                                    }
                                                                                                                                                                                  else
                                                                                                                                                                                    {
                                                                                                                                                                                      if(match_string(t, "\"SSL_dup\""))
                                                                                                                                                                                        {
                                                                                                                                                                                          ATerm o_83 = NULL;
                                                                                                                                                                                          t = j_148;
                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                            {
                                                                                                                                                                                              m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                              n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                            }
                                                                                                                                                                                          else
                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                          t = n_148;
                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                          t = m_148;
                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                          o_83 = t;
                                                                                                                                                                                          t = SSL_dup(o_83);
                                                                                                                                                                                        }
                                                                                                                                                                                      else
                                                                                                                                                                                        {
                                                                                                                                                                                          if(match_string(t, "\"SSL_close\""))
                                                                                                                                                                                            {
                                                                                                                                                                                              ATerm x_83 = NULL;
                                                                                                                                                                                              t = j_148;
                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                {
                                                                                                                                                                                                  m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                  n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                }
                                                                                                                                                                                              else
                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                              t = n_148;
                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                              t = m_148;
                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                              x_83 = t;
                                                                                                                                                                                              t = SSL_close(x_83);
                                                                                                                                                                                            }
                                                                                                                                                                                          else
                                                                                                                                                                                            {
                                                                                                                                                                                              if(match_string(t, "\"SSL_mkstemp\""))
                                                                                                                                                                                                {
                                                                                                                                                                                                  ATerm g_84 = NULL;
                                                                                                                                                                                                  t = j_148;
                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                    {
                                                                                                                                                                                                      m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                      n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                    }
                                                                                                                                                                                                  else
                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                  t = n_148;
                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                  t = m_148;
                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                  g_84 = t;
                                                                                                                                                                                                  t = SSL_mkstemp(g_84);
                                                                                                                                                                                                }
                                                                                                                                                                                              else
                                                                                                                                                                                                {
                                                                                                                                                                                                  if(match_string(t, "\"SSL_open\""))
                                                                                                                                                                                                    {
                                                                                                                                                                                                      ATerm p_84 = NULL;
                                                                                                                                                                                                      t = j_148;
                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                        {
                                                                                                                                                                                                          m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                          n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                        }
                                                                                                                                                                                                      else
                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                      t = n_148;
                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                      t = m_148;
                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                      p_84 = t;
                                                                                                                                                                                                      t = SSL_open(p_84);
                                                                                                                                                                                                    }
                                                                                                                                                                                                  else
                                                                                                                                                                                                    {
                                                                                                                                                                                                      if(match_string(t, "\"SSL_creat\""))
                                                                                                                                                                                                        {
                                                                                                                                                                                                          ATerm y_84 = NULL;
                                                                                                                                                                                                          t = j_148;
                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                            {
                                                                                                                                                                                                              m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                              n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                            }
                                                                                                                                                                                                          else
                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                          t = n_148;
                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                          t = m_148;
                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                          y_84 = t;
                                                                                                                                                                                                          t = SSL_creat(y_84);
                                                                                                                                                                                                        }
                                                                                                                                                                                                      else
                                                                                                                                                                                                        {
                                                                                                                                                                                                          if(match_string(t, "SSL_P_tmpdir"))
                                                                                                                                                                                                            {
                                                                                                                                                                                                              t = j_148;
                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                              t = SSL_P_tmpdir();
                                                                                                                                                                                                            }
                                                                                                                                                                                                          else
                                                                                                                                                                                                            {
                                                                                                                                                                                                              if(match_string(t, "SSL_STDERR_FILENO"))
                                                                                                                                                                                                                {
                                                                                                                                                                                                                  t = j_148;
                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                  t = SSL_STDERR_FILENO();
                                                                                                                                                                                                                }
                                                                                                                                                                                                              else
                                                                                                                                                                                                                {
                                                                                                                                                                                                                  if(match_string(t, "SSL_STDOUT_FILENO"))
                                                                                                                                                                                                                    {
                                                                                                                                                                                                                      t = j_148;
                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                      t = SSL_STDOUT_FILENO();
                                                                                                                                                                                                                    }
                                                                                                                                                                                                                  else
                                                                                                                                                                                                                    {
                                                                                                                                                                                                                      if(match_string(t, "SSL_STDIN_FILENO"))
                                                                                                                                                                                                                        {
                                                                                                                                                                                                                          t = j_148;
                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                          t = SSL_STDIN_FILENO();
                                                                                                                                                                                                                        }
                                                                                                                                                                                                                      else
                                                                                                                                                                                                                        {
                                                                                                                                                                                                                          if(match_string(t, "\"SSL_fgetc\""))
                                                                                                                                                                                                                            {
                                                                                                                                                                                                                              ATerm p_85 = NULL;
                                                                                                                                                                                                                              t = j_148;
                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                  m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                  n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                }
                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                              t = n_148;
                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                              t = m_148;
                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                              p_85 = t;
                                                                                                                                                                                                                              t = SSL_fgetc(p_85);
                                                                                                                                                                                                                            }
                                                                                                                                                                                                                          else
                                                                                                                                                                                                                            {
                                                                                                                                                                                                                              if(match_string(t, "\"SSL_fputc\""))
                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                  ATerm a_86 = NULL,b_86 = NULL;
                                                                                                                                                                                                                                  t = j_148;
                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                      m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                      n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                  t = n_148;
                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                      c_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                      d_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                  t = d_148;
                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                  t = m_148;
                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                  b_86 = t;
                                                                                                                                                                                                                                  t = c_148;
                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                  a_86 = t;
                                                                                                                                                                                                                                  t = SSL_fputc(b_86, a_86);
                                                                                                                                                                                                                                }
                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_puts\""))
                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                      ATerm l_86 = NULL;
                                                                                                                                                                                                                                      t = j_148;
                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                          m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                          n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                      t = n_148;
                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                      t = m_148;
                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                      l_86 = t;
                                                                                                                                                                                                                                      t = SSL_puts(l_86);
                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_fputs\""))
                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                          ATerm w_86 = NULL,x_86 = NULL;
                                                                                                                                                                                                                                          t = j_148;
                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                              m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                              n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                          t = n_148;
                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                              c_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                              d_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                          t = d_148;
                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                          t = m_148;
                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                          x_86 = t;
                                                                                                                                                                                                                                          t = c_148;
                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                          w_86 = t;
                                                                                                                                                                                                                                          t = SSL_fputs(x_86, w_86);
                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_fflush\""))
                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                              t = j_148;
                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                  m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                  n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                              t = n_148;
                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                                ATerm y_18 = t;
                                                                                                                                                                                                                                                int z_18 = stack_ptr;
                                                                                                                                                                                                                                                if((PushChoice() == 0))
                                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                                    ATerm h_87 = NULL;
                                                                                                                                                                                                                                                    t = m_148;
                                                                                                                                                                                                                                                    t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                    h_87 = t;
                                                                                                                                                                                                                                                    t = SSL_fflush(h_87);
                                                                                                                                                                                                                                                    ;
                                                                                                                                                                                                                                                    LocalPopChoice(z_18);
                                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                                else
                                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                                    t = y_18;
                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                      ATerm q_87 = NULL;
                                                                                                                                                                                                                                                      t = m_148;
                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                      q_87 = t;
                                                                                                                                                                                                                                                      t = SSL_fflush(q_87);
                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                              }
                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                              if(match_string(t, "\"SSL_fclose\""))
                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                  t = j_148;
                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                      m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                      n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                  t = n_148;
                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                                    ATerm a_19 = t;
                                                                                                                                                                                                                                                    int b_19 = stack_ptr;
                                                                                                                                                                                                                                                    if((PushChoice() == 0))
                                                                                                                                                                                                                                                      {
                                                                                                                                                                                                                                                        ATerm z_87 = NULL;
                                                                                                                                                                                                                                                        t = m_148;
                                                                                                                                                                                                                                                        t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                        z_87 = t;
                                                                                                                                                                                                                                                        t = SSL_fclose(z_87);
                                                                                                                                                                                                                                                        ;
                                                                                                                                                                                                                                                        LocalPopChoice(b_19);
                                                                                                                                                                                                                                                      }
                                                                                                                                                                                                                                                    else
                                                                                                                                                                                                                                                      {
                                                                                                                                                                                                                                                        t = a_19;
                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                          ATerm i_88 = NULL;
                                                                                                                                                                                                                                                          t = m_148;
                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                          i_88 = t;
                                                                                                                                                                                                                                                          t = SSL_fclose(i_88);
                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                      }
                                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_fopen\""))
                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                      ATerm t_88 = NULL,u_88 = NULL;
                                                                                                                                                                                                                                                      t = j_148;
                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                          m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                          n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                      t = n_148;
                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                          c_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                          d_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                      t = d_148;
                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                      t = m_148;
                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                      u_88 = t;
                                                                                                                                                                                                                                                      t = c_148;
                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                      t_88 = t;
                                                                                                                                                                                                                                                      t = SSL_fopen(u_88, t_88);
                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                      if(match_string(t, "SSL_stderr_stream"))
                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                          t = j_148;
                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                          t = SSL_stderr_stream();
                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                          if(match_string(t, "SSL_stdout_stream"))
                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                              t = j_148;
                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                              t = SSL_stdout_stream();
                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                              if(match_string(t, "SSL_stdin_stream"))
                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                  t = j_148;
                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                  t = SSL_stdin_stream();
                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_setenv\""))
                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                      ATerm o_89 = NULL,p_89 = NULL,q_89 = NULL;
                                                                                                                                                                                                                                                                      t = j_148;
                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                          m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                          n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                      t = n_148;
                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                          c_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                          d_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                      t = d_148;
                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                          e_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                          f_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                      t = f_148;
                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                      t = m_148;
                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                      q_89 = t;
                                                                                                                                                                                                                                                                      t = c_148;
                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                      p_89 = t;
                                                                                                                                                                                                                                                                      t = e_148;
                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                      o_89 = t;
                                                                                                                                                                                                                                                                      t = SSL_setenv(q_89, p_89, o_89);
                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_getenv\""))
                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                          ATerm b_90 = NULL;
                                                                                                                                                                                                                                                                          t = j_148;
                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                              m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                              n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                          t = n_148;
                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                          t = m_148;
                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                          b_90 = t;
                                                                                                                                                                                                                                                                          t = SSL_getenv(b_90);
                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_remove\""))
                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                              ATerm k_90 = NULL;
                                                                                                                                                                                                                                                                              t = j_148;
                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                  m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                  n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                              t = n_148;
                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                              t = m_148;
                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                              k_90 = t;
                                                                                                                                                                                                                                                                              t = SSL_remove(k_90);
                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                              if(match_string(t, "\"SSL_link\""))
                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                  ATerm v_90 = NULL,w_90 = NULL;
                                                                                                                                                                                                                                                                                  t = j_148;
                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                      m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                      n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                  t = n_148;
                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                      c_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                      d_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                  t = d_148;
                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                  t = m_148;
                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                  w_90 = t;
                                                                                                                                                                                                                                                                                  t = c_148;
                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                  v_90 = t;
                                                                                                                                                                                                                                                                                  t = SSL_link(w_90, v_90);
                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_fdcopy\""))
                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                      ATerm i_91 = NULL,j_91 = NULL;
                                                                                                                                                                                                                                                                                      t = j_148;
                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                          m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                          n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                      t = n_148;
                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                          c_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                          d_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                      t = d_148;
                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                      t = m_148;
                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                      j_91 = t;
                                                                                                                                                                                                                                                                                      t = c_148;
                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                      i_91 = t;
                                                                                                                                                                                                                                                                                      t = SSL_fdcopy(j_91, i_91);
                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_copy\""))
                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                          ATerm v_91 = NULL,w_91 = NULL;
                                                                                                                                                                                                                                                                                          t = j_148;
                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                              m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                              n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                          t = n_148;
                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                              c_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                              d_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                          t = d_148;
                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                          t = m_148;
                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                          w_91 = t;
                                                                                                                                                                                                                                                                                          t = c_148;
                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                          v_91 = t;
                                                                                                                                                                                                                                                                                          t = SSL_copy(w_91, v_91);
                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_rename\""))
                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                              ATerm i_92 = NULL,j_92 = NULL;
                                                                                                                                                                                                                                                                                              t = j_148;
                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                  m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                  n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                              t = n_148;
                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                  c_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                  d_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                              t = d_148;
                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                              t = m_148;
                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                              j_92 = t;
                                                                                                                                                                                                                                                                                              t = c_148;
                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                              i_92 = t;
                                                                                                                                                                                                                                                                                              t = SSL_rename(j_92, i_92);
                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                              if(match_string(t, "\"SSL_modification_time\""))
                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                  ATerm t_92 = NULL;
                                                                                                                                                                                                                                                                                                  t = j_148;
                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                      m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                      n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                  t = n_148;
                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                  t = m_148;
                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                  t_92 = t;
                                                                                                                                                                                                                                                                                                  t = SSL_modification_time(t_92);
                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_readdir\""))
                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                      ATerm e_93 = NULL;
                                                                                                                                                                                                                                                                                                      t = j_148;
                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                          m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                          n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                      t = n_148;
                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                      t = m_148;
                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                      e_93 = t;
                                                                                                                                                                                                                                                                                                      t = SSL_readdir(e_93);
                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_getchar\""))
                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                          ATerm n_93 = NULL;
                                                                                                                                                                                                                                                                                                          t = j_148;
                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                              m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                              n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                          t = n_148;
                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                          t = m_148;
                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                          n_93 = t;
                                                                                                                                                                                                                                                                                                          t = SSL_getchar(n_93);
                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_printascii\""))
                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                              ATerm y_93 = NULL,z_93 = NULL;
                                                                                                                                                                                                                                                                                                              t = j_148;
                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                  m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                  n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                              t = n_148;
                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                  c_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                  d_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                              t = d_148;
                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                              t = m_148;
                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                              z_93 = t;
                                                                                                                                                                                                                                                                                                              t = c_148;
                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                              y_93 = t;
                                                                                                                                                                                                                                                                                                              t = SSL_printascii(z_93, y_93);
                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                              if(match_string(t, "\"SSL_printnl\""))
                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                  ATerm l_94 = NULL,m_94 = NULL;
                                                                                                                                                                                                                                                                                                                  t = j_148;
                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                      m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                      n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                  t = n_148;
                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                      c_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                      d_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                  t = d_148;
                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                  t = m_148;
                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                  m_94 = t;
                                                                                                                                                                                                                                                                                                                  t = c_148;
                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                  l_94 = t;
                                                                                                                                                                                                                                                                                                                  t = SSL_printnl(m_94, l_94);
                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_print\""))
                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                      ATerm y_94 = NULL,z_94 = NULL;
                                                                                                                                                                                                                                                                                                                      t = j_148;
                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                          m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                          n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                      t = n_148;
                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                          c_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                          d_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                      t = d_148;
                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                      t = m_148;
                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                      z_94 = t;
                                                                                                                                                                                                                                                                                                                      t = c_148;
                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                      y_94 = t;
                                                                                                                                                                                                                                                                                                                      t = SSL_print(z_94, y_94);
                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_read_term_from_stream\""))
                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                          ATerm j_95 = NULL;
                                                                                                                                                                                                                                                                                                                          t = j_148;
                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                              m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                              n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                          t = n_148;
                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                          t = m_148;
                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                          j_95 = t;
                                                                                                                                                                                                                                                                                                                          t = SSL_read_term_from_stream(j_95);
                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_write_term_to_stream_text\""))
                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                              ATerm u_95 = NULL,v_95 = NULL;
                                                                                                                                                                                                                                                                                                                              t = j_148;
                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                  m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                  n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                              t = n_148;
                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                  c_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                  d_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                              t = d_148;
                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                              t = m_148;
                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                              v_95 = t;
                                                                                                                                                                                                                                                                                                                              t = c_148;
                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                              u_95 = t;
                                                                                                                                                                                                                                                                                                                              t = SSL_write_term_to_stream_text(v_95, u_95);
                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                              if(match_string(t, "\"SSL_write_term_to_stream_taf\""))
                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                  ATerm h_96 = NULL,i_96 = NULL;
                                                                                                                                                                                                                                                                                                                                  t = j_148;
                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                      m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                      n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                  t = n_148;
                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                      c_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                      d_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                  t = d_148;
                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                  t = m_148;
                                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                  i_96 = t;
                                                                                                                                                                                                                                                                                                                                  t = c_148;
                                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                  h_96 = t;
                                                                                                                                                                                                                                                                                                                                  t = SSL_write_term_to_stream_taf(i_96, h_96);
                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_write_term_to_stream_baf\""))
                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                      ATerm u_96 = NULL,v_96 = NULL;
                                                                                                                                                                                                                                                                                                                                      t = j_148;
                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                          m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                          n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                      t = n_148;
                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                          c_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                          d_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                      t = d_148;
                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                      t = m_148;
                                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                      v_96 = t;
                                                                                                                                                                                                                                                                                                                                      t = c_148;
                                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                      u_96 = t;
                                                                                                                                                                                                                                                                                                                                      t = SSL_write_term_to_stream_baf(v_96, u_96);
                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_pipe_term_to_child\""))
                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                          ATerm j_97 = NULL,k_97 = NULL,l_97 = NULL;
                                                                                                                                                                                                                                                                                                                                          t = j_148;
                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                              m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                              n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                          t = n_148;
                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                              c_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                              d_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                          t = d_148;
                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                              e_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                              f_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                          t = f_148;
                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                          t = m_148;
                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                          l_97 = t;
                                                                                                                                                                                                                                                                                                                                          t = c_148;
                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                          k_97 = t;
                                                                                                                                                                                                                                                                                                                                          t = e_148;
                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                          j_97 = t;
                                                                                                                                                                                                                                                                                                                                          t = SSL_pipe_term_to_child(l_97, k_97, j_97);
                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_kill\""))
                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                              ATerm z_97 = NULL,a_98 = NULL;
                                                                                                                                                                                                                                                                                                                                              t = j_148;
                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                  m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                  n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                              t = n_148;
                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                  c_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                  d_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                              t = d_148;
                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                              t = m_148;
                                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                              a_98 = t;
                                                                                                                                                                                                                                                                                                                                              t = c_148;
                                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                              z_97 = t;
                                                                                                                                                                                                                                                                                                                                              t = SSL_kill(a_98, z_97);
                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                              if(match_string(t, "\"SSL_exit\""))
                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                  ATerm k_98 = NULL;
                                                                                                                                                                                                                                                                                                                                                  t = j_148;
                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                      m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                      n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                  t = n_148;
                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                  t = m_148;
                                                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                  k_98 = t;
                                                                                                                                                                                                                                                                                                                                                  t = SSL_exit(k_98);
                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_waitpid\""))
                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                      ATerm t_98 = NULL;
                                                                                                                                                                                                                                                                                                                                                      t = j_148;
                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                          m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                          n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                      t = n_148;
                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                      t = m_148;
                                                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                      t_98 = t;
                                                                                                                                                                                                                                                                                                                                                      t = SSL_waitpid(t_98);
                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_execvp\""))
                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                          ATerm e_99 = NULL,f_99 = NULL;
                                                                                                                                                                                                                                                                                                                                                          t = j_148;
                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                              m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                              n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                          t = n_148;
                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                              c_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                              d_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                          t = d_148;
                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                          t = m_148;
                                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                          f_99 = t;
                                                                                                                                                                                                                                                                                                                                                          t = c_148;
                                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                          e_99 = t;
                                                                                                                                                                                                                                                                                                                                                          t = SSL_execvp(f_99, e_99);
                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                          if(match_string(t, "SSL_fork"))
                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                              t = j_148;
                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                              t = SSL_fork();
                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                              if(match_string(t, "SSL_get_pid"))
                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                  t = j_148;
                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                  t = SSL_get_pid();
                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_TicksToSeconds\""))
                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                      ATerm t_99 = NULL;
                                                                                                                                                                                                                                                                                                                                                                      t = j_148;
                                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                          m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                          n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                                      t = n_148;
                                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                                      t = m_148;
                                                                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                      t_99 = t;
                                                                                                                                                                                                                                                                                                                                                                      t = SSL_TicksToSeconds(t_99);
                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                      if(match_string(t, "SSL_times"))
                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                          t = j_148;
                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                          t = SSL_times();
                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                          if(match_string(t, "SSL_clock"))
                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                              t = j_148;
                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                              t = SSL_clock();
                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                              if(match_string(t, "\"SSL_ClockToSeconds\""))
                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                  ATerm g_100 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                  t = j_148;
                                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                      m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                      n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                  t = n_148;
                                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                  t = m_148;
                                                                                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                  g_100 = t;
                                                                                                                                                                                                                                                                                                                                                                                  t = SSL_ClockToSeconds(g_100);
                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                  if(match_string(t, "SSL_dtime"))
                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                      t = j_148;
                                                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                      t = SSL_dtime();
                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_epoch2UTC\""))
                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                          t = j_148;
                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                              m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                              n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                          t = n_148;
                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                          {
                                                                                                                                                                                                                                                                                                                                                                                            ATerm h_19 = t;
                                                                                                                                                                                                                                                                                                                                                                                            int i_19 = stack_ptr;
                                                                                                                                                                                                                                                                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                                                                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                                                                                                                                                                                ATerm r_100 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                t = m_148;
                                                                                                                                                                                                                                                                                                                                                                                                t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                r_100 = t;
                                                                                                                                                                                                                                                                                                                                                                                                t = SSL_epoch2UTC(r_100);
                                                                                                                                                                                                                                                                                                                                                                                                ;
                                                                                                                                                                                                                                                                                                                                                                                                LocalPopChoice(i_19);
                                                                                                                                                                                                                                                                                                                                                                                              }
                                                                                                                                                                                                                                                                                                                                                                                            else
                                                                                                                                                                                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                                                                                                                                                                                t = h_19;
                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                  ATerm a_101 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                  t = m_148;
                                                                                                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                  a_101 = t;
                                                                                                                                                                                                                                                                                                                                                                                                  t = SSL_epoch2UTC(a_101);
                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                              }
                                                                                                                                                                                                                                                                                                                                                                                          }
                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_epoch2localtime\""))
                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                              ATerm j_101 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                              t = j_148;
                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                  m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                  n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                              t = n_148;
                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                              t = m_148;
                                                                                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                              j_101 = t;
                                                                                                                                                                                                                                                                                                                                                                                              t = SSL_epoch2localtime(j_101);
                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                              if(match_string(t, "SSL_now_epoch_time"))
                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                  t = j_148;
                                                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                  t = SSL_now_epoch_time();
                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                  if(match_string(t, "SSL_time"))
                                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                                      t = j_148;
                                                                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                      t = SSL_time();
                                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_table_rename\""))
                                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                                          ATerm y_101 = NULL,z_101 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                          t = j_148;
                                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                              m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                              n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                          t = n_148;
                                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                              c_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                              d_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                          t = d_148;
                                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                          t = m_148;
                                                                                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                          z_101 = t;
                                                                                                                                                                                                                                                                                                                                                                                                          t = c_148;
                                                                                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                          y_101 = t;
                                                                                                                                                                                                                                                                                                                                                                                                          t = SSL_table_rename(z_101, y_101);
                                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_table_keys\""))
                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                              ATerm j_102 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                              t = j_148;
                                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                                  m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                  n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                              t = n_148;
                                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                              t = m_148;
                                                                                                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                              j_102 = t;
                                                                                                                                                                                                                                                                                                                                                                                                              t = SSL_table_keys(j_102);
                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                              if(match_string(t, "\"SSL_table_remove\""))
                                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                                  ATerm u_102 = NULL,v_102 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                                  t = j_148;
                                                                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                                                      m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                      n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                  t = n_148;
                                                                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                                                      c_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                      d_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                  t = d_148;
                                                                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                  t = m_148;
                                                                                                                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                  v_102 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                  t = c_148;
                                                                                                                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                  u_102 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                  t = SSL_table_remove(v_102, u_102);
                                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_table_get\""))
                                                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                                                      ATerm h_103 = NULL,j_103 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                                      t = j_148;
                                                                                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                                                          m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                          n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                      t = n_148;
                                                                                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                                                          c_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                          d_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                      t = d_148;
                                                                                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                      t = m_148;
                                                                                                                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                      j_103 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                      t = c_148;
                                                                                                                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                      h_103 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                      t = SSL_table_get(j_103, h_103);
                                                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_table_put\""))
                                                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                                                          ATerm x_103 = NULL,y_103 = NULL,z_103 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                                          t = j_148;
                                                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                                              m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                              n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                          t = n_148;
                                                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                                              c_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                              d_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                          t = d_148;
                                                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                                              e_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                              f_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                          t = f_148;
                                                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                          t = m_148;
                                                                                                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                          z_103 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                          t = c_148;
                                                                                                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                          y_103 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                          t = e_148;
                                                                                                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                          x_103 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                          t = SSL_table_put(z_103, y_103, x_103);
                                                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_table_destroy\""))
                                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                                              ATerm k_104 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                                              t = j_148;
                                                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                                                  m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                                  n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                              t = n_148;
                                                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                              t = m_148;
                                                                                                                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                              k_104 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                              t = SSL_table_destroy(k_104);
                                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                                              ATerm t_104 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                                              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("\"SSL_table_create\"", 0, ATtrue)))
                                                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                              t = j_148;
                                                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                                                  m_148 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                                  n_148 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                              t = n_148;
                                                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                              t = m_148;
                                                                                                                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                              t_104 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                              t = SSL_table_create(t_104);
                                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                }
                                                                                                                                                                                                                            }
                                                                                                                                                                                                                        }
                                                                                                                                                                                                                    }
                                                                                                                                                                                                                }
                                                                                                                                                                                                            }
                                                                                                                                                                                                        }
                                                                                                                                                                                                    }
                                                                                                                                                                                                }
                                                                                                                                                                                            }
                                                                                                                                                                                        }
                                                                                                                                                                                    }
                                                                                                                                                                                }
                                                                                                                                                                            }
                                                                                                                                                                        }
                                                                                                                                                                    }
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
ATerm w_26 (ATerm z_74, ATerm a_75, ATerm t)
{
  t = SSL_mkterm(z_74, a_75);
  return(t);
}
ATerm EvalTerm_0_0 (ATerm t)
{
  ATerm e_157 = NULL,f_157 = NULL,g_157 = NULL;
  f_157 = t;
  {
    ATerm j_19 = t;
    int k_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm l_19 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(k_19);
        {
          ATerm z_104 = NULL,a_105 = NULL;
          t = term_v_17;
          a_105 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_v_17, f_157);
          t = g_28(a_105, f_157, t);
          z_104 = t;
          {
            ATerm m_19 = t;
            if((PushChoice() == 0))
              {
                if(!(match_cons(t, sym_NULL_0)))
                  _fail(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = m_19;
              }
            t = z_104;
          }
        }
      }
    else
      {
        t = j_19;
        if(match_cons(t, sym_Op_2))
          {
            g_157 = ATgetArgument(t, 0);
            e_157 = ATgetArgument(t, 1);
            {
              ATerm f_105 = NULL,i_105 = NULL,j_105 = NULL,l_105 = NULL,m_105 = NULL,n_105 = NULL,o_105 = NULL,q_105 = NULL,r_105 = NULL,z_7 = NULL;
              t = SSLgetAnnotations(f_157);
              f_105 = t;
              t = e_157;
              t = map_1_0(EvalTerm_0_0, t);
              i_105 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, g_157, i_105);
              z_7 = t;
              t = SSLsetAnnotations(z_7, f_105);
              j_105 = t;
              if(match_cons(t, sym_Op_2))
                {
                  q_105 = ATgetArgument(t, 0);
                  r_105 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = r_105;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  l_105 = ATgetFirst((ATermList) t);
                  m_105 = (ATerm) ATgetNext((ATermList) t);
                  t = m_105;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      n_105 = ATgetFirst((ATermList) t);
                      o_105 = (ATerm) ATgetNext((ATermList) t);
                      t = o_105;
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = q_105;
                          if(match_string(t, "Cons"))
                            {
                              ATerm n_19 = t;
                              int o_19 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATinsert(CheckATermList(n_105), l_105);
                                  ;
                                  LocalPopChoice(o_19);
                                }
                              else
                                {
                                  t = n_19;
                                  t = j_105;
                                  t = w_26(q_105, r_105, t);
                                }
                            }
                          else
                            {
                              t = j_105;
                              t = w_26(q_105, r_105, t);
                            }
                        }
                      else
                        {
                          t = j_105;
                          t = w_26(q_105, r_105, t);
                        }
                    }
                  else
                    {
                      t = j_105;
                      t = w_26(q_105, r_105, t);
                    }
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = q_105;
                      if(match_string(t, "Nil"))
                        {
                          t = (ATerm) ATempty;
                        }
                      else
                        {
                          t = j_105;
                          t = w_26(q_105, r_105, t);
                        }
                    }
                  else
                    {
                      t = j_105;
                      t = w_26(q_105, r_105, t);
                    }
                }
            }
          }
        else
          {
            if(match_cons(t, sym_Real_1))
              {
                g_157 = ATgetArgument(t, 0);
                t = g_157;
              }
            else
              {
                if(match_cons(t, sym_Str_1))
                  {
                    g_157 = ATgetArgument(t, 0);
                    t = g_157;
                  }
                else
                  {
                    if(match_cons(t, sym_Int_1))
                      {
                        g_157 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = g_157;
                  }
              }
          }
      }
  }
  return(t);
}
ATerm f_27 (ATerm z_55, ATerm a_56, ATerm b_56, ATerm t)
{
  ATerm o_157 = NULL,p_157 = NULL,q_157 = NULL;
  p_157 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_55, a_56);
  t = d_29(z_55, a_56, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm p_19 = ATgetFirst((ATermList) t);
      o_157 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_157), b_56);
  q_157 = t;
  t = SSL_table_put(z_55, a_56, q_157);
  t = p_157;
  return(t);
}
ATerm a_0 (ATerm t)
{
  t = term_r_19;
  return(t);
}
ATerm g_27 (ATerm t_75, ATerm u_75, ATerm t)
{
  ATerm v_157 = NULL;
  v_157 = t;
  {
    ATerm s_19 = t;
    int t_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_19;
        t = get_config_0_0(t);
        t = v_157;
        t = debug_1_0(a_0, t);
        ;
        LocalPopChoice(t_19);
      }
    else
      {
        t = s_19;
      }
    {
      ATerm v_19 = t;
      int w_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_157 = NULL,z_157 = NULL;
          t = term_v_17;
          y_157 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_v_17, t_75);
          t = g_28(y_157, t_75, t);
          z_157 = t;
          if(match_cons(t, sym_NULL_0))
            {
              ATerm y_19 = t;
              int z_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_157;
                  if((u_75 != t))
                    {
                      _fail(t);
                    }
                  t = z_157;
                  ;
                  LocalPopChoice(z_19);
                }
              else
                {
                  t = y_19;
                  {
                    ATerm a_158 = NULL;
                    t = term_v_17;
                    a_158 = t;
                    t = (ATerm) ATmakeAppl(sym__3, term_v_17, t_75, u_75);
                    t = f_27(a_158, t_75, u_75, t);
                  }
                }
            }
          else
            {
              t = z_157;
              if((u_75 != t))
                {
                  _fail(t);
                }
              t = z_157;
            }
          ;
          LocalPopChoice(w_19);
        }
      else
        {
          t = v_19;
          {
            ATerm b_158 = NULL;
            t = term_v_17;
            b_158 = t;
            t = (ATerm) ATmakeAppl(sym__3, term_v_17, t_75, u_75);
            t = e_29(b_158, t_75, u_75, t);
          }
        }
      t = (ATerm) ATmakeAppl(sym__2, t_75, u_75);
    }
  }
  return(t);
}
ATerm k_27 (ATerm c_135 (ATerm), ATerm k_59, ATerm l_59, ATerm i_59, ATerm j_59, ATerm t)
{
  t = k_59;
  t = c_135(t);
  t = j_59;
  {
    ATerm a_20 = t;
    if((PushChoice() == 0))
      {
        ATerm p_0 (ATerm t)
        {
          ATerm v_159 = NULL;
          if(match_cons(t, sym__2))
            {
              if((k_59 != ATgetArgument(t, 0)))
                {
                  _fail(ATgetArgument(t, 0));
                }
              v_159 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, l_59, v_159);
          {
            ATerm b_20 = t;
            if((PushChoice() == 0))
              {
                ATerm w_159 = NULL;
                if(match_cons(t, sym__2))
                  {
                    w_159 = ATgetArgument(t, 0);
                    if((w_159 != ATgetArgument(t, 1)))
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
                t = b_20;
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
        t = a_20;
      }
    t = (ATerm) ATmakeAppl(sym__2, i_59, (ATerm) ATinsert(CheckATermList(j_59), (ATerm) ATmakeAppl(sym__2, k_59, l_59)));
  }
  return(t);
}
ATerm q_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_20 = ATgetArgument(t, 0);
      if(((ATgetType(c_20) != AT_LIST) || !(ATisEmpty(c_20))))
        _fail(t);
      {
        ATerm d_20 = ATgetArgument(t, 1);
        if(((ATgetType(d_20) != AT_LIST) || !(ATisEmpty(d_20))))
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
  ATerm l_114 = NULL,o_114 = NULL,t_114 = NULL,x_114 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_20 = ATgetArgument(t, 0);
      if(((ATgetType(e_20) == AT_LIST) && !(ATisEmpty(e_20))))
        {
          l_114 = ATgetFirst((ATermList) e_20);
          o_114 = (ATerm) ATgetNext((ATermList) e_20);
        }
      else
        _fail(t);
      {
        ATerm f_20 = ATgetArgument(t, 1);
        if(((ATgetType(f_20) == AT_LIST) && !(ATisEmpty(f_20))))
          {
            t_114 = ATgetFirst((ATermList) f_20);
            x_114 = (ATerm) ATgetNext((ATermList) f_20);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_114, t_114), (ATerm) ATmakeAppl(sym__2, o_114, x_114));
  return(t);
}
ATerm t_0 (ATerm t)
{
  ATerm z_114 = NULL,a_115 = NULL;
  if(match_cons(t, sym__2))
    {
      z_114 = ATgetArgument(t, 0);
      a_115 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_115), z_114);
  return(t);
}
ATerm PatDecompose_0_0 (ATerm t)
{
  ATerm f_159 = NULL,g_159 = NULL,h_159 = NULL,i_159 = NULL,j_159 = NULL,k_159 = NULL,l_159 = NULL;
  f_159 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_159 = ATgetFirst((ATermList) t);
      l_159 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = g_159;
  if(match_cons(t, sym__2))
    {
      h_159 = ATgetArgument(t, 0);
      k_159 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_159;
  if(match_cons(t, sym_Real_1))
    {
      i_159 = ATgetArgument(t, 0);
      t = k_159;
      if((i_159 != t))
        {
          _fail(t);
        }
      t = l_159;
    }
  else
    {
      if(match_cons(t, sym_Str_1))
        {
          i_159 = ATgetArgument(t, 0);
          t = k_159;
          if((i_159 != t))
            {
              _fail(t);
            }
          t = l_159;
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              i_159 = ATgetArgument(t, 0);
              t = k_159;
              if((i_159 != t))
                {
                  _fail(t);
                }
              t = l_159;
            }
          else
            {
              ATerm d_114 = NULL,g_114 = NULL;
              if(match_cons(t, sym_Op_2))
                {
                  i_159 = ATgetArgument(t, 0);
                  j_159 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_explode_term(k_159);
              if(match_cons(t, sym__2))
                {
                  if((i_159 != ATgetArgument(t, 0)))
                    {
                      _fail(ATgetArgument(t, 0));
                    }
                  d_114 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, j_159, d_114);
              t = genzip_4_0(q_0, s_0, t_0, _id, t);
              g_114 = t;
              t = (ATerm) ATmakeAppl(sym__2, g_114, l_159);
              t = conc_0_0(t);
            }
        }
    }
  return(t);
}
ATerm w_0 (ATerm t)
{
  ATerm i_160 = NULL;
  i_160 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_160, (ATerm) ATempty);
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm j_160 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_20 = ATgetArgument(t, 0);
      if(((ATgetType(g_20) != AT_LIST) || !(ATisEmpty(g_20))))
        _fail(t);
      j_160 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_160;
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = term_h_20;
  return(t);
}
ATerm z_162 (ATerm n_160, ATerm o_160, ATerm r_160, ATerm t)
{
  ATerm s_160 = NULL,v_160 = NULL,w_160 = NULL,b_8 = NULL;
  t = SSLgetAnnotations(n_160);
  s_160 = t;
  t = o_160;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm j_20 = ATgetFirst((ATermList) t);
      if(match_cons(j_20, sym__2))
        {
          v_160 = ATgetArgument(j_20, 0);
          if((v_160 != ATgetArgument(j_20, 1)))
            {
              _fail(ATgetArgument(j_20, 1));
            }
        }
      else
        _fail(t);
      w_160 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_160, r_160);
  b_8 = t;
  t = SSLsetAnnotations(b_8, s_160);
  return(t);
}
ATerm b_163 (ATerm y_160, ATerm z_160, ATerm a_161, ATerm t)
{
  ATerm d_161 = NULL,g_161 = NULL,c_8 = NULL;
  t = SSLgetAnnotations(y_160);
  d_161 = t;
  t = z_160;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm k_20 = ATgetFirst((ATermList) t);
      if(match_cons(k_20, sym__2))
        {
          ATerm l_20 = ATgetArgument(k_20, 0);
          if(!(match_cons(l_20, sym_Wld_0)))
            _fail(t);
          {
            ATerm m_20 = ATgetArgument(k_20, 1);
          }
        }
      else
        _fail(t);
      g_161 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_161, a_161);
  c_8 = t;
  t = SSLsetAnnotations(c_8, d_161);
  return(t);
}
ATerm c_163 (ATerm i_161, ATerm j_161, ATerm k_161, ATerm t)
{
  ATerm n_161 = NULL,q_161 = NULL,d_8 = NULL;
  t = SSLgetAnnotations(i_161);
  n_161 = t;
  t = j_161;
  t = PatDecompose_0_0(t);
  q_161 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_161, k_161);
  d_8 = t;
  t = SSLsetAnnotations(d_8, n_161);
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = term_n_20;
  return(t);
}
ATerm stratego_match_1_0 (ATerm u_137 (ATerm), ATerm t)
{
  ATerm i_1 (ATerm t)
  {
    ATerm t_162 = NULL,k_160 = NULL,s_161 = NULL,v_161 = NULL,w_161 = NULL,x_161 = NULL,z_161 = NULL,a_162 = NULL,b_162 = NULL;
    k_160 = t;
    {
      ATerm o_20 = t;
      int p_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_u_19;
          t = get_config_0_0(t);
          t = k_160;
          t = debug_1_0(k_1, t);
          ;
          LocalPopChoice(p_20);
        }
      else
        {
          t = o_20;
          t = k_160;
        }
      z_161 = t;
      if(match_cons(t, sym__2))
        {
          a_162 = ATgetArgument(t, 0);
          b_162 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = a_162;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_161 = ATgetFirst((ATermList) t);
          x_161 = (ATerm) ATgetNext((ATermList) t);
          t = s_161;
          if(match_cons(t, sym__2))
            {
              v_161 = ATgetArgument(t, 0);
              w_161 = ATgetArgument(t, 1);
              {
                ATerm q_20 = t;
                int r_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = z_162(z_161, a_162, b_162, t);
                    ;
                    LocalPopChoice(r_20);
                  }
                else
                  {
                    t = q_20;
                    {
                      ATerm s_20 = t;
                      int t_20 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = z_161;
                          t = k_27(u_137, v_161, w_161, x_161, b_162, t);
                          ;
                          LocalPopChoice(t_20);
                        }
                      else
                        {
                          t = s_20;
                          {
                            ATerm u_20 = t;
                            int v_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = b_163(z_161, a_162, b_162, t);
                                ;
                                LocalPopChoice(v_20);
                              }
                            else
                              {
                                t = u_20;
                                t = c_163(z_161, a_162, b_162, t);
                              }
                          }
                        }
                    }
                  }
              }
            }
          else
            {
              ATerm w_20 = t;
              int x_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_162(z_161, a_162, b_162, t);
                  ;
                  LocalPopChoice(x_20);
                }
              else
                {
                  t = w_20;
                  {
                    ATerm y_20 = t;
                    int z_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = b_163(z_161, a_162, b_162, t);
                        ;
                        LocalPopChoice(z_20);
                      }
                    else
                      {
                        t = y_20;
                        t = c_163(z_161, a_162, b_162, t);
                      }
                  }
                }
            }
        }
      else
        {
          ATerm a_21 = t;
          int b_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_162(z_161, a_162, b_162, t);
              ;
              LocalPopChoice(b_21);
            }
          else
            {
              t = a_21;
              {
                ATerm c_21 = t;
                int d_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = b_163(z_161, a_162, b_162, t);
                    ;
                    LocalPopChoice(d_21);
                  }
                else
                  {
                    t = c_21;
                    t = c_163(z_161, a_162, b_162, t);
                  }
              }
            }
        }
      t_162 = t;
      {
        ATerm e_21 = t;
        int f_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_u_19;
            t = get_config_0_0(t);
            t = t_162;
            t = debug_1_0(l_1, t);
            ;
            LocalPopChoice(f_21);
          }
        else
          {
            t = e_21;
            t = t_162;
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
  ATerm h_163 = NULL,i_163 = NULL,j_163 = NULL,h_8 = NULL;
  j_163 = t;
  if(match_cons(t, sym_Var_1))
    {
      i_163 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_163);
  h_163 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, i_163);
  h_8 = t;
  t = SSLsetAnnotations(h_8, h_163);
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = term_g_21;
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm n_163 = NULL,o_163 = NULL;
  if(match_cons(t, sym__2))
    {
      n_163 = ATgetArgument(t, 0);
      o_163 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_27(n_163, o_163, t);
  return(t);
}
ATerm m_27 (ATerm r_75, ATerm s_75, ATerm t)
{
  ATerm k_163 = NULL;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, r_75, s_75));
  t = stratego_match_1_0(m_1, t);
  k_163 = t;
  {
    ATerm h_21 = t;
    int i_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_19;
        t = get_config_0_0(t);
        t = k_163;
        t = debug_1_0(n_1, t);
        ;
        LocalPopChoice(i_21);
      }
    else
      {
        t = h_21;
        t = k_163;
      }
    t = map_1_0(o_1, t);
    t = s_75;
  }
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm s_163 = NULL,t_163 = NULL,u_163 = NULL,v_163 = NULL;
  s_163 = t;
  t = term_v_17;
  t_163 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, s_163);
  u_163 = t;
  t = term_n_21;
  v_163 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_v_17, (ATerm)ATmakeAppl(sym_Var_1, s_163), term_n_21);
  t = e_29(t_163, u_163, v_163, t);
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm w_163 = NULL,x_163 = NULL,y_163 = NULL;
  w_163 = t;
  t = term_v_17;
  x_163 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, w_163);
  y_163 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_17, (ATerm) ATmakeAppl(sym_Var_1, w_163));
  t = c_28(x_163, y_163, t);
  return(t);
}
ATerm n_27 (ATerm v_137 (ATerm), ATerm a_76, ATerm x_75, ATerm y_75, ATerm t)
{
  ATerm r_163 = NULL;
  t = a_76;
  t = map_1_0(t_1, t);
  t = (ATerm) ATmakeAppl(sym_App_2, x_75, y_75);
  t = v_137(t);
  r_163 = t;
  t = a_76;
  t = map_1_0(u_1, t);
  t = r_163;
  return(t);
}
ATerm y_1 (ATerm t)
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
  ATerm c_164 = NULL,d_164 = NULL,e_164 = NULL,f_164 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_21 = ATgetArgument(t, 0);
      if(((ATgetType(q_21) == AT_LIST) && !(ATisEmpty(q_21))))
        {
          c_164 = ATgetFirst((ATermList) q_21);
          d_164 = (ATerm) ATgetNext((ATermList) q_21);
        }
      else
        _fail(t);
      {
        ATerm r_21 = ATgetArgument(t, 1);
        if(((ATgetType(r_21) == AT_LIST) && !(ATisEmpty(r_21))))
          {
            e_164 = ATgetFirst((ATermList) r_21);
            f_164 = (ATerm) ATgetNext((ATermList) r_21);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_164, e_164), (ATerm) ATmakeAppl(sym__2, d_164, f_164));
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm h_164 = NULL,i_164 = NULL;
  if(match_cons(t, sym__2))
    {
      h_164 = ATgetArgument(t, 0);
      i_164 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_164), h_164);
  return(t);
}
ATerm p_27 (ATerm s_137 (ATerm), ATerm f_74, ATerm g_74, ATerm x_719, ATerm t)
{
  ATerm z_163 = NULL,a_164 = NULL;
  t = SSL_explode_term(x_719);
  if(match_cons(t, sym__2))
    {
      if((f_74 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      z_163 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_74, z_163);
  {
    ATerm h_2 (ATerm t)
    {
      ATerm j_164 = NULL,k_164 = NULL;
      if(match_cons(t, sym__2))
        {
          j_164 = ATgetArgument(t, 0);
          k_164 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_App_2, j_164, k_164);
      t = s_137(t);
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
    t = genzip_4_0(y_1, z_1, b_2, h_2, t);
    a_164 = t;
    t = SSL_mkterm(f_74, a_164);
  }
  return(t);
}
ATerm w_27 (ATerm r_137 (ATerm), ATerm a_74, ATerm z_716, ATerm t)
{
  ATerm l_164 = NULL,m_164 = NULL,n_164 = NULL;
  t = SSL_explode_term(z_716);
  if(match_cons(t, sym__2))
    {
      l_164 = ATgetArgument(t, 0);
      m_164 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_164;
  {
    ATerm i_2 (ATerm t)
    {
      ATerm r_164 = NULL;
      r_164 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, a_74, r_164);
      t = r_137(t);
      {
        ATerm u_21 = t;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_Fail_0)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = u_21;
          }
      }
      return(t);
    }
    t = fetch_1_0(i_2, t);
    n_164 = t;
    t = SSL_mkterm(l_164, n_164);
  }
  return(t);
}
ATerm EvalAll_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm w_165 = NULL,x_165 = NULL,y_165 = NULL,a_166 = NULL;
  w_165 = t;
  if(match_cons(t, sym_App_2))
    {
      x_165 = ATgetArgument(t, 0);
      a_166 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_165;
  if(match_cons(t, sym_All_1))
    {
      y_165 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm v_21 = t;
    int w_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_is_string(a_166);
        t = a_166;
        ;
        LocalPopChoice(w_21);
      }
    else
      {
        t = v_21;
        {
          ATerm k_116 = NULL,t_116 = NULL,z_116 = NULL;
          t = SSL_explode_term(a_166);
          if(match_cons(t, sym__2))
            {
              k_116 = ATgetArgument(t, 0);
              t_116 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = a_166;
          {
            ATerm x_21 = t;
            if((PushChoice() == 0))
              {
                ATerm e_117 = NULL;
                e_117 = t;
                t = SSL_is_string(e_117);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = x_21;
              }
            t = t_116;
            {
              ATerm j_2 (ATerm t)
              {
                ATerm i_117 = NULL;
                i_117 = t;
                t = (ATerm) ATmakeAppl(sym_App_2, y_165, i_117);
                t = k_0(t);
                {
                  ATerm y_21 = t;
                  if((PushChoice() == 0))
                    {
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = y_21;
                    }
                }
                return(t);
              }
              t = map_1_0(j_2, t);
              z_116 = t;
              t = SSL_mkterm(k_116, z_116);
            }
          }
        }
      }
  }
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm j_166 = NULL,k_166 = NULL,l_166 = NULL,m_166 = NULL,n_166 = NULL,o_166 = NULL;
  j_166 = t;
  if(match_cons(t, sym_SDef_3))
    {
      k_166 = ATgetArgument(t, 0);
      l_166 = ATgetArgument(t, 1);
      {
        ATerm z_21 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = l_166;
  t = foldr_3_0(l_2, m_2, n_2, t);
  m_166 = t;
  t = term_u_17;
  n_166 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_166, m_166);
  o_166 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_u_17, (ATerm)ATmakeAppl(sym__2, k_166, m_166), j_166);
  t = e_29(n_166, o_166, j_166, t);
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = term_a_22;
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm p_166 = NULL,q_166 = NULL;
  if(match_cons(t, sym__2))
    {
      p_166 = ATgetArgument(t, 0);
      q_166 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_28(p_166, q_166, t);
  return(t);
}
ATerm n_2 (ATerm t)
{
  t = term_c_22;
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm r_166 = NULL,s_166 = NULL,v_166 = NULL,y_166 = NULL,z_166 = NULL;
  if(match_cons(t, sym_SDef_3))
    {
      r_166 = ATgetArgument(t, 0);
      s_166 = ATgetArgument(t, 1);
      {
        ATerm d_22 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = s_166;
  t = foldr_3_0(p_2, q_2, r_2, t);
  v_166 = t;
  t = term_u_17;
  y_166 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_166, v_166);
  z_166 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_17, (ATerm) ATmakeAppl(sym__2, r_166, v_166));
  t = c_28(y_166, z_166, t);
  return(t);
}
ATerm p_2 (ATerm t)
{
  t = term_a_22;
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm a_167 = NULL,b_167 = NULL;
  if(match_cons(t, sym__2))
    {
      a_167 = ATgetArgument(t, 0);
      b_167 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_28(a_167, b_167, t);
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = term_c_22;
  return(t);
}
ATerm z_27 (ATerm b_138 (ATerm), ATerm q_77, ATerm n_77, ATerm o_77, ATerm t)
{
  ATerm i_166 = NULL;
  t = q_77;
  t = map_1_0(k_2, t);
  t = (ATerm) ATmakeAppl(sym_App_2, n_77, o_77);
  t = b_138(t);
  i_166 = t;
  t = q_77;
  t = map_1_0(o_2, t);
  t = i_166;
  return(t);
}
ATerm s_2 (ATerm t)
{
  t = term_a_22;
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm p_167 = NULL,q_167 = NULL;
  if(match_cons(t, sym__2))
    {
      p_167 = ATgetArgument(t, 0);
      q_167 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_28(p_167, q_167, t);
  return(t);
}
ATerm v_2 (ATerm t)
{
  t = term_c_22;
  return(t);
}
ATerm a_28 (ATerm l_77, ATerm m_77, ATerm k_77, ATerm t)
{
  ATerm f_167 = NULL,i_167 = NULL,l_167 = NULL,o_167 = NULL;
  t = m_77;
  t = foldr_3_0(s_2, u_2, v_2, t);
  f_167 = t;
  t = term_i_22;
  l_167 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_22), f_167), term_k_22), l_77), term_j_22);
  o_167 = t;
  t = SSL_printnl(l_167, o_167);
  t = term_c_22;
  i_167 = t;
  t = SSL_exit(i_167);
  t = term_o_22;
  return(t);
}
ATerm c_28 (ATerm o_55, ATerm p_55, ATerm t)
{
  ATerm v_167 = NULL,w_167 = NULL;
  v_167 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_55, p_55);
  {
    ATerm t_22 = t;
    int z_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_119 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm a_23 = ATgetArgument(t, 0);
            ATerm b_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_55, p_55);
        t = d_29(o_55, p_55, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm d_23 = ATgetFirst((ATermList) t);
            e_119 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = e_119;
        ;
        LocalPopChoice(z_22);
      }
    else
      {
        t = t_22;
        t = (ATerm) ATempty;
      }
    w_167 = t;
    t = SSL_table_put(o_55, p_55, w_167);
    t = v_167;
  }
  return(t);
}
ATerm g_28 (ATerm x_55, ATerm y_55, ATerm t)
{
  ATerm k_168 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_55, y_55);
  t = d_29(x_55, y_55, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_168 = ATgetFirst((ATermList) t);
      {
        ATerm e_23 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = k_168;
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = term_a_22;
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm h_169 = NULL,i_169 = NULL;
  if(match_cons(t, sym__2))
    {
      h_169 = ATgetArgument(t, 0);
      i_169 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_28(h_169, i_169, t);
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = term_c_22;
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm k_169 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      k_169 = ATgetArgument(t, 0);
      t = k_169;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_169 = ATgetArgument(t, 0);
          {
            ATerm f_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = k_169;
    }
  return(t);
}
ATerm a_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm h_23 = ATgetArgument(t, 0);
      if(((ATgetType(h_23) != AT_LIST) || !(ATisEmpty(h_23))))
        _fail(t);
      {
        ATerm i_23 = ATgetArgument(t, 1);
        if(((ATgetType(i_23) != AT_LIST) || !(ATisEmpty(i_23))))
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
  ATerm o_169 = NULL,p_169 = NULL,q_169 = NULL,r_169 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_23 = ATgetArgument(t, 0);
      if(((ATgetType(j_23) == AT_LIST) && !(ATisEmpty(j_23))))
        {
          o_169 = ATgetFirst((ATermList) j_23);
          p_169 = (ATerm) ATgetNext((ATermList) j_23);
        }
      else
        _fail(t);
      {
        ATerm l_23 = ATgetArgument(t, 1);
        if(((ATgetType(l_23) == AT_LIST) && !(ATisEmpty(l_23))))
          {
            q_169 = ATgetFirst((ATermList) l_23);
            r_169 = (ATerm) ATgetNext((ATermList) l_23);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_169, q_169), (ATerm) ATmakeAppl(sym__2, p_169, r_169));
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm s_169 = NULL,t_169 = NULL;
  if(match_cons(t, sym__2))
    {
      s_169 = ATgetArgument(t, 0);
      t_169 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(t_169), s_169);
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm u_169 = NULL,v_169 = NULL,w_169 = NULL,x_169 = NULL,y_169 = NULL;
  if(match_cons(t, sym__2))
    {
      u_169 = ATgetArgument(t, 0);
      v_169 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_u_17;
  w_169 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_169, term_a_22);
  x_169 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, u_169, (ATerm)ATempty, v_169);
  y_169 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_u_17, (ATerm)ATmakeAppl(sym__2, u_169, term_a_22), (ATerm) ATmakeAppl(sym_SDef_3, u_169, (ATerm)ATempty, v_169));
  t = e_29(w_169, x_169, y_169, t);
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm z_169 = NULL,a_170 = NULL,b_170 = NULL;
  z_169 = t;
  t = term_u_17;
  a_170 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_169, term_a_22);
  b_170 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_17, (ATerm) ATmakeAppl(sym__2, z_169, term_a_22));
  t = c_28(a_170, b_170, t);
  return(t);
}
ATerm i_28 (ATerm a_138 (ATerm), ATerm a_77, ATerm c_77, ATerm e_77, ATerm t)
{
  ATerm a_169 = NULL,b_169 = NULL,c_169 = NULL,d_169 = NULL,e_169 = NULL,f_169 = NULL,g_169 = NULL;
  t = c_77;
  t = foldr_3_0(w_2, x_2, y_2, t);
  e_169 = t;
  t = term_u_17;
  f_169 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_77, e_169);
  g_169 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_17, (ATerm) ATmakeAppl(sym__2, a_77, e_169));
  t = g_28(f_169, g_169, t);
  if(match_cons(t, sym_SDef_3))
    {
      if((a_77 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      a_169 = ATgetArgument(t, 1);
      b_169 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = a_169;
  t = map_1_0(z_2, t);
  d_169 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_169, c_77);
  t = genzip_4_0(a_3, b_3, d_3, e_3, t);
  t = (ATerm) ATmakeAppl(sym_App_2, b_169, e_77);
  t = a_138(t);
  c_169 = t;
  t = d_169;
  t = map_1_0(f_3, t);
  t = c_169;
  return(t);
}
ATerm j_28 (ATerm z_137 (ATerm), ATerm w_76, ATerm x_76, ATerm y_76, ATerm t)
{
  ATerm m_23 = t;
  int n_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_App_2, w_76, y_76);
      t = z_137(t);
      {
        ATerm o_23 = t;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_Fail_0)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = o_23;
          }
      }
      ;
      LocalPopChoice(n_23);
    }
  else
    {
      t = m_23;
      {
        ATerm p_23 = t;
        int q_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_App_2, x_76, y_76);
            t = z_137(t);
            {
              ATerm s_23 = t;
              if((PushChoice() == 0))
                {
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = s_23;
                }
            }
            ;
            LocalPopChoice(q_23);
          }
        else
          {
            t = p_23;
            t = term_o_22;
          }
      }
    }
  return(t);
}
ATerm k_28 (ATerm y_137 (ATerm), ATerm s_76, ATerm t_76, ATerm u_76, ATerm t)
{
  ATerm u_23 = t;
  int v_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_App_2, s_76, u_76);
      t = y_137(t);
      {
        ATerm y_23 = t;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_Fail_0)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = y_23;
          }
      }
      ;
      LocalPopChoice(v_23);
    }
  else
    {
      t = u_23;
      {
        ATerm b_24 = t;
        int c_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_App_2, t_76, u_76);
            t = y_137(t);
            {
              ATerm f_24 = t;
              if((PushChoice() == 0))
                {
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = f_24;
                }
            }
            ;
            LocalPopChoice(c_24);
          }
        else
          {
            t = b_24;
            t = term_o_22;
          }
      }
    }
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = term_g_24;
  return(t);
}
ATerm eval_0_0 (ATerm t)
{
  ATerm j_171 = NULL,e_171 = NULL,f_171 = NULL,g_171 = NULL;
  g_171 = t;
  if(match_cons(t, sym_App_2))
    {
      e_171 = ATgetArgument(t, 0);
      f_171 = ATgetArgument(t, 1);
      {
        ATerm h_24 = t;
        int i_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_120 = NULL,i_120 = NULL,j_8 = NULL;
            t = SSLgetAnnotations(g_171);
            b_120 = t;
            t = f_171;
            t = eval_0_0(t);
            i_120 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, e_171, i_120);
            j_8 = t;
            t = SSLsetAnnotations(j_8, b_120);
            ;
            LocalPopChoice(i_24);
          }
        else
          {
            t = h_24;
            t = g_171;
          }
      }
    }
  else
    {
      t = g_171;
    }
  j_171 = t;
  {
    ATerm j_24 = t;
    int k_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_19;
        t = get_config_0_0(t);
        t = j_171;
        t = debug_1_0(g_3, t);
        ;
        LocalPopChoice(k_24);
      }
    else
      {
        t = j_24;
        t = j_171;
      }
    {
      ATerm l_24 = t;
      int m_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_24 = t;
          int o_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_171 = NULL,r_171 = NULL,s_171 = NULL,t_171 = NULL,u_171 = NULL,w_171 = NULL;
              r_171 = t;
              if(match_cons(t, sym_App_2))
                {
                  s_171 = ATgetArgument(t, 0);
                  w_171 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = w_171;
              if(match_cons(t, sym_Fail_0))
                {
                  t = s_171;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = w_171;
                    }
                  else
                    {
                      if(match_cons(t, sym_Fail_0))
                        {
                          t = term_o_22;
                        }
                      else
                        {
                          ATerm p_24 = t;
                          int q_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Test_1))
                                {
                                  ATerm r_24 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(q_24);
                              t = term_o_22;
                            }
                          else
                            {
                              t = p_24;
                              {
                                ATerm s_24 = t;
                                int t_24 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_Not_1))
                                      {
                                        ATerm w_24 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(t_24);
                                    t = term_o_22;
                                  }
                                else
                                  {
                                    t = s_24;
                                    {
                                      ATerm y_24 = t;
                                      int z_24 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_Seq_2))
                                            {
                                              ATerm d_25 = ATgetArgument(t, 0);
                                              ATerm e_25 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(z_24);
                                          t = term_o_22;
                                        }
                                      else
                                        {
                                          t = y_24;
                                          {
                                            ATerm f_25 = t;
                                            int g_25 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_Choice_2))
                                                  {
                                                    ATerm h_25 = ATgetArgument(t, 0);
                                                    ATerm j_25 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(g_25);
                                                t = term_o_22;
                                              }
                                            else
                                              {
                                                t = f_25;
                                                {
                                                  ATerm k_25 = t;
                                                  int m_25 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      if(match_cons(t, sym_LChoice_2))
                                                        {
                                                          ATerm n_25 = ATgetArgument(t, 0);
                                                          ATerm o_25 = ATgetArgument(t, 1);
                                                        }
                                                      else
                                                        _fail(t);
                                                      LocalPopChoice(m_25);
                                                      t = term_o_22;
                                                    }
                                                  else
                                                    {
                                                      t = k_25;
                                                      {
                                                        ATerm s_25 = t;
                                                        int t_25 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            if(match_cons(t, sym_Call_2))
                                                              {
                                                                t_171 = ATgetArgument(t, 0);
                                                                {
                                                                  ATerm u_25 = ATgetArgument(t, 1);
                                                                }
                                                              }
                                                            else
                                                              _fail(t);
                                                            LocalPopChoice(t_25);
                                                            t = t_171;
                                                            {
                                                              ATerm w_25 = t;
                                                              int x_25 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  if(match_cons(t, sym_SVar_1))
                                                                    {
                                                                      ATerm a_26 = ATgetArgument(t, 0);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  LocalPopChoice(x_25);
                                                                  t = term_o_22;
                                                                }
                                                              else
                                                                {
                                                                  t = w_25;
                                                                  t = term_o_22;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = s_25;
                                                            {
                                                              ATerm c_26 = t;
                                                              int d_26 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  if(match_cons(t, sym_Let_2))
                                                                    {
                                                                      ATerm e_26 = ATgetArgument(t, 0);
                                                                      ATerm h_26 = ATgetArgument(t, 1);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  LocalPopChoice(d_26);
                                                                  t = term_o_22;
                                                                }
                                                              else
                                                                {
                                                                  t = c_26;
                                                                  {
                                                                    ATerm j_26 = t;
                                                                    int m_26 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_Rec_2))
                                                                          {
                                                                            ATerm t_26 = ATgetArgument(t, 0);
                                                                            ATerm u_26 = ATgetArgument(t, 1);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(m_26);
                                                                        t = term_o_22;
                                                                      }
                                                                    else
                                                                      {
                                                                        t = j_26;
                                                                        t = term_o_22;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
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
                  t = s_171;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = w_171;
                    }
                  else
                    {
                      if(match_cons(t, sym_Fail_0))
                        {
                          t = term_o_22;
                        }
                      else
                        {
                          if(match_cons(t, sym_Test_1))
                            {
                              t_171 = ATgetArgument(t, 0);
                              t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Seq_2, t_171, (ATerm) ATmakeAppl(sym_Build_1, w_171)), w_171);
                              {
                                ATerm x_26 = t;
                                int y_26 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = eval_0_0(t);
                                    ;
                                    LocalPopChoice(y_26);
                                  }
                                else
                                  {
                                    t = x_26;
                                  }
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_Not_1))
                                {
                                  t_171 = ATgetArgument(t, 0);
                                  t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Not_1, t_171), w_171);
                                  {
                                    ATerm z_26 = t;
                                    int c_27 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = (ATerm) ATmakeAppl(sym_App_2, t_171, w_171);
                                        t = eval_0_0(t);
                                        if(!(match_cons(t, sym_Fail_0)))
                                          _fail(t);
                                        t = w_171;
                                        ;
                                        LocalPopChoice(c_27);
                                      }
                                    else
                                      {
                                        t = z_26;
                                        t = term_o_22;
                                      }
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Seq_2))
                                    {
                                      t_171 = ATgetArgument(t, 0);
                                      u_171 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_App_2, u_171, (ATerm) ATmakeAppl(sym_App_2, t_171, w_171));
                                      {
                                        ATerm e_27 = t;
                                        int h_27 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = eval_0_0(t);
                                            ;
                                            LocalPopChoice(h_27);
                                          }
                                        else
                                          {
                                            t = e_27;
                                          }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          t_171 = ATgetArgument(t, 0);
                                          u_171 = ATgetArgument(t, 1);
                                          t = r_171;
                                          t = k_28(eval_0_0, t_171, u_171, w_171, t);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              t_171 = ATgetArgument(t, 0);
                                              u_171 = ATgetArgument(t, 1);
                                              t = r_171;
                                              t = j_28(eval_0_0, t_171, u_171, w_171, t);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Call_2))
                                                {
                                                  t_171 = ATgetArgument(t, 0);
                                                  u_171 = ATgetArgument(t, 1);
                                                  t = t_171;
                                                  if(match_cons(t, sym_SVar_1))
                                                    {
                                                      q_171 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  {
                                                    ATerm i_27 = t;
                                                    int j_27 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = r_171;
                                                        t = i_28(eval_0_0, q_171, u_171, w_171, t);
                                                        ;
                                                        LocalPopChoice(j_27);
                                                      }
                                                    else
                                                      {
                                                        t = i_27;
                                                        t = r_171;
                                                        t = a_28(q_171, u_171, w_171, t);
                                                      }
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Let_2))
                                                    {
                                                      t_171 = ATgetArgument(t, 0);
                                                      u_171 = ATgetArgument(t, 1);
                                                      t = r_171;
                                                      t = z_27(eval_0_0, t_171, u_171, w_171, t);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Rec_2))
                                                        {
                                                          t_171 = ATgetArgument(t, 0);
                                                          u_171 = ATgetArgument(t, 1);
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, t_171, (ATerm)ATempty, u_171)), u_171), w_171);
                                                      {
                                                        ATerm l_27 = t;
                                                        int o_27 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = eval_0_0(t);
                                                            ;
                                                            LocalPopChoice(o_27);
                                                          }
                                                        else
                                                          {
                                                            t = l_27;
                                                          }
                                                      }
                                                    }
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
              LocalPopChoice(o_24);
            }
          else
            {
              t = n_24;
              {
                ATerm q_27 = t;
                int r_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm s_27 = t;
                    int t_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = EvalAll_1_0(eval_0_0, t);
                        ;
                        LocalPopChoice(t_27);
                      }
                    else
                      {
                        t = s_27;
                        {
                          ATerm x_172 = NULL,y_172 = NULL,z_172 = NULL;
                          if(match_cons(t, sym_App_2))
                            {
                              x_172 = ATgetArgument(t, 0);
                              z_172 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = x_172;
                          if(match_cons(t, sym_All_1))
                            {
                              y_172 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = term_o_22;
                        }
                      }
                    ;
                    LocalPopChoice(r_27);
                  }
                else
                  {
                    t = q_27;
                    {
                      ATerm u_27 = t;
                      int x_27 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm n_173 = NULL,o_173 = NULL,p_173 = NULL,q_173 = NULL,r_173 = NULL;
                          o_173 = t;
                          if(match_cons(t, sym_App_2))
                            {
                              p_173 = ATgetArgument(t, 0);
                              r_173 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = p_173;
                          if(match_cons(t, sym_One_1))
                            {
                              q_173 = ATgetArgument(t, 0);
                              {
                                ATerm y_27 = t;
                                int d_28 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = o_173;
                                    t = w_27(eval_0_0, q_173, r_173, t);
                                    ;
                                    LocalPopChoice(d_28);
                                  }
                                else
                                  {
                                    t = y_27;
                                    t = term_o_22;
                                  }
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_Cong_2))
                                {
                                  q_173 = ATgetArgument(t, 0);
                                  n_173 = ATgetArgument(t, 1);
                                  {
                                    ATerm e_28 = t;
                                    int o_28 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = o_173;
                                        t = p_27(eval_0_0, q_173, n_173, r_173, t);
                                        ;
                                        LocalPopChoice(o_28);
                                      }
                                    else
                                      {
                                        t = e_28;
                                        t = SSL_explode_term(r_173);
                                        if(match_cons(t, sym__2))
                                          {
                                            ATerm p_28 = ATgetArgument(t, 0);
                                            ATerm q_28 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = term_o_22;
                                      }
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Scope_2))
                                    {
                                      q_173 = ATgetArgument(t, 0);
                                      n_173 = ATgetArgument(t, 1);
                                      t = o_173;
                                      t = n_27(eval_0_0, q_173, n_173, r_173, t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          q_173 = ATgetArgument(t, 0);
                                          {
                                            ATerm r_28 = t;
                                            int t_28 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = o_173;
                                                t = m_27(q_173, r_173, t);
                                                ;
                                                LocalPopChoice(t_28);
                                              }
                                            else
                                              {
                                                t = r_28;
                                                t = term_o_22;
                                              }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Build_1))
                                            {
                                              q_173 = ATgetArgument(t, 0);
                                              t = q_173;
                                              t = EvalTerm_0_0(t);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  q_173 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              {
                                                ATerm u_28 = t;
                                                int z_28 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = (ATerm) ATmakeAppl(sym_App_2, q_173, r_173);
                                                    t = eval_0_0(t);
                                                    {
                                                      ATerm b_29 = t;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(!(match_cons(t, sym_Fail_0)))
                                                            _fail(t);
                                                          PopChoice();
                                                          _fail(t);
                                                        }
                                                      else
                                                        {
                                                          t = b_29;
                                                        }
                                                      t = r_173;
                                                    }
                                                    ;
                                                    LocalPopChoice(z_28);
                                                  }
                                                else
                                                  {
                                                    t = u_28;
                                                    t = term_o_22;
                                                  }
                                              }
                                            }
                                        }
                                    }
                                }
                            }
                          ;
                          LocalPopChoice(x_27);
                        }
                      else
                        {
                          t = u_27;
                          {
                            ATerm h_29 = t;
                            int i_29 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = EvalPrim_0_0(t);
                                ;
                                LocalPopChoice(i_29);
                              }
                            else
                              {
                                t = h_29;
                                {
                                  ATerm l_174 = NULL,m_174 = NULL,n_174 = NULL,o_174 = NULL;
                                  if(match_cons(t, sym_App_2))
                                    {
                                      l_174 = ATgetArgument(t, 0);
                                      o_174 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = l_174;
                                  if(match_cons(t, sym_Prim_2))
                                    {
                                      m_174 = ATgetArgument(t, 0);
                                      n_174 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = term_o_22;
                                }
                              }
                          }
                        }
                    }
                  }
              }
            }
          ;
          LocalPopChoice(m_24);
        }
      else
        {
          t = l_24;
        }
    }
  }
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = term_j_29;
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = term_k_29;
  return(t);
}
ATerm w_28 (ATerm b_25, ATerm c_25, ATerm t)
{
  ATerm b_193 = NULL,k_193 = NULL,e_193 = NULL;
  t = b_25;
  t = desugar_0_0(t);
  b_193 = t;
  t = (ATerm) ATmakeAppl(sym_App_2, b_193, c_25);
  {
    ATerm l_29 = t;
    int m_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_19;
        t = get_config_0_0(t);
        t = (ATerm) ATmakeAppl(sym_App_2, b_193, c_25);
        t = debug_1_0(h_3, t);
        ;
        LocalPopChoice(m_29);
      }
    else
      {
        t = l_29;
      }
    t = eval_0_0(t);
    e_193 = t;
    {
      ATerm n_29 = t;
      int o_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_p_29;
          t = get_config_0_0(t);
          t = e_193;
          t = debug_1_0(k_3, t);
          ;
          LocalPopChoice(o_29);
        }
      else
        {
          t = n_29;
          t = e_193;
        }
      k_193 = t;
      if(match_cons(t, sym_Fail_0))
        {
          ATerm q_29 = t;
          int r_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_156 = NULL,m_157 = NULL,r_157 = NULL;
              t = term_i_22;
              m_157 = t;
              t = (ATerm) ATinsert(ATempty, term_t_29);
              r_157 = t;
              t = SSL_printnl(m_157, r_157);
              t = term_c_22;
              o_156 = t;
              t = SSL_exit(o_156);
              t = (ATerm) ATinsert(ATempty, term_t_29);
              ;
              LocalPopChoice(r_29);
            }
          else
            {
              t = q_29;
              t = k_193;
            }
        }
      else
        {
          t = k_193;
        }
    }
  }
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm v_1 = NULL;
  ATerm u_29 = t;
  int x_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_1 = ATgetArgument(t, 0);
          {
            ATerm y_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_29);
      t = v_1;
    }
  else
    {
      t = u_29;
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
  ATerm z_29 = t;
  int a_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(a_30);
    }
  else
    {
      t = z_29;
      {
        ATerm c_2 = NULL,d_2 = NULL,e_2 = NULL,g_2 = NULL;
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
                g_2 = ATgetArgument(t, 3);
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
                    g_2 = ATgetArgument(t, 3);
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
  ATerm b_30 = t;
  int c_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_2 = ATgetArgument(t, 0);
          {
            ATerm d_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_30);
      t = t_2;
    }
  else
    {
      t = b_30;
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
  ATerm e_30 = t;
  int f_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_3 = ATgetArgument(t, 0);
          {
            ATerm h_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_30);
      t = c_3;
    }
  else
    {
      t = e_30;
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
  ATerm i_30 = t;
  int j_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(j_30);
    }
  else
    {
      t = i_30;
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
  ATerm k_30 = t;
  int l_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_3 = ATgetArgument(t, 0);
          {
            ATerm n_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_30);
      t = w_3;
    }
  else
    {
      t = k_30;
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
  ATerm r_30 = t;
  int s_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_4 = ATgetArgument(t, 0);
          {
            ATerm t_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_30);
      t = f_4;
    }
  else
    {
      t = r_30;
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
  t = term_u_30;
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
            ATerm y_30 = t;
            int z_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_5 = NULL;
                t = v_4;
                t = free_vars_3_0(c_4, d_4, tboundin_3_0, t);
                d_5 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, d_5, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, v_4, w_4, x_4)));
                ;
                LocalPopChoice(z_30);
              }
            else
              {
                t = y_30;
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
            ATerm b_31 = t;
            int e_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_6 = NULL;
                t = y_4;
                t = free_vars_3_0(h_4, i_4, tboundin_3_0, t);
                g_6 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, g_6, y_4);
                ;
                LocalPopChoice(e_31);
              }
            else
              {
                t = b_31;
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
  int h_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(h_31);
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
  int k_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_5 = ATgetArgument(t, 0);
          {
            ATerm l_31 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_31);
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
  ATerm m_31 = t;
  int n_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_6 = ATgetArgument(t, 0);
          {
            ATerm p_31 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_31);
      t = a_6;
    }
  else
    {
      t = m_31;
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
  ATerm t_31 = t;
  int u_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(u_31);
    }
  else
    {
      t = t_31;
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
  ATerm v_31 = t;
  int x_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_6 = ATgetArgument(t, 0);
          {
            ATerm y_31 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_31);
      t = u_6;
    }
  else
    {
      t = v_31;
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
  ATerm z_31 = t;
  int a_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_7 = ATgetArgument(t, 0);
          {
            ATerm f_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_32);
      t = d_7;
    }
  else
    {
      t = z_31;
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
  t = term_g_32;
  return(t);
}
ATerm u_24 (ATerm w_144, ATerm t)
{
  ATerm i_7 = NULL;
  t = w_144;
  {
    ATerm j_32 = t;
    int k_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_19;
        t = get_config_0_0(t);
        t = w_144;
        t = debug_1_0(z_3, t);
        ;
        LocalPopChoice(k_32);
      }
    else
      {
        t = j_32;
      }
    t = map_1_0(a_4, t);
    i_7 = t;
    {
      ATerm m_32 = t;
      int n_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_u_19;
          t = get_config_0_0(t);
          t = i_7;
          t = debug_1_0(l_4, t);
          ;
          LocalPopChoice(n_32);
        }
      else
        {
          t = m_32;
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
      ATerm o_32 = ATgetArgument(t, 0);
      if(((ATgetType(o_32) != AT_LIST) || !(ATisEmpty(o_32))))
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
ATerm n_4 (ATerm t)
{
  ATerm x_0 = NULL,y_0 = NULL,z_0 = NULL,a_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_32 = ATgetArgument(t, 0);
      if(((ATgetType(r_32) == AT_LIST) && !(ATisEmpty(r_32))))
        {
          x_0 = ATgetFirst((ATermList) r_32);
          y_0 = (ATerm) ATgetNext((ATermList) r_32);
        }
      else
        _fail(t);
      {
        ATerm s_32 = ATgetArgument(t, 1);
        if(((ATgetType(s_32) == AT_LIST) && !(ATisEmpty(s_32))))
          {
            z_0 = ATgetFirst((ATermList) s_32);
            a_1 = (ATerm) ATgetNext((ATermList) s_32);
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
  ATerm j_1 = NULL,s_1 = NULL,w_1 = NULL,x_1 = NULL,f_2 = NULL;
  if(match_cons(t, sym__2))
    {
      j_1 = ATgetArgument(t, 0);
      f_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_1;
  {
    ATerm t_32 = t;
    int u_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm v_32 = ATgetArgument(t, 0);
            s_1 = ATgetArgument(t, 1);
            w_1 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(u_32);
        t = (ATerm) ATmakeAppl(sym_SDef_3, f_2, s_1, w_1);
      }
    else
      {
        t = t_32;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm w_32 = ATgetArgument(t, 0);
            s_1 = ATgetArgument(t, 1);
            w_1 = ATgetArgument(t, 2);
            x_1 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, f_2, s_1, w_1, x_1);
      }
  }
  return(t);
}
ATerm q_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_32 = ATgetArgument(t, 0);
      if(((ATgetType(x_32) != AT_LIST) || !(ATisEmpty(x_32))))
        _fail(t);
      {
        ATerm y_32 = ATgetArgument(t, 1);
        if(((ATgetType(y_32) != AT_LIST) || !(ATisEmpty(y_32))))
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
      ATerm z_32 = ATgetArgument(t, 0);
      if(((ATgetType(z_32) == AT_LIST) && !(ATisEmpty(z_32))))
        {
          q_7 = ATgetFirst((ATermList) z_32);
          r_7 = (ATerm) ATgetNext((ATermList) z_32);
        }
      else
        _fail(t);
      {
        ATerm a_33 = ATgetArgument(t, 1);
        if(((ATgetType(a_33) == AT_LIST) && !(ATisEmpty(a_33))))
          {
            s_7 = ATgetFirst((ATermList) a_33);
            t_7 = (ATerm) ATgetNext((ATermList) a_33);
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
    ATerm b_33 = t;
    int c_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm e_33 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(c_33);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, w_12);
      }
    else
      {
        t = b_33;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm f_33 = ATgetArgument(t, 0);
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
      ATerm g_33 = ATgetArgument(t, 0);
      if(((ATgetType(g_33) != AT_LIST) || !(ATisEmpty(g_33))))
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
ATerm b_5 (ATerm t)
{
  ATerm n_18 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_33 = ATgetArgument(t, 0);
      if(((ATgetType(l_33) == AT_LIST) && !(ATisEmpty(l_33))))
        {
          n_18 = ATgetFirst((ATermList) l_33);
          c_19 = (ATerm) ATgetNext((ATermList) l_33);
        }
      else
        _fail(t);
      {
        ATerm m_33 = ATgetArgument(t, 1);
        if(((ATgetType(m_33) == AT_LIST) && !(ATisEmpty(m_33))))
          {
            d_19 = ATgetFirst((ATermList) m_33);
            e_19 = (ATerm) ATgetNext((ATermList) m_33);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_18, d_19), (ATerm) ATmakeAppl(sym__2, c_19, e_19));
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm f_19 = NULL,g_19 = NULL;
  if(match_cons(t, sym__2))
    {
      f_19 = ATgetArgument(t, 0);
      g_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_19), f_19);
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm q_19 = NULL,x_19 = NULL,i_20 = NULL;
  if(match_cons(t, sym__2))
    {
      q_19 = ATgetArgument(t, 0);
      i_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_19;
  {
    ATerm n_33 = t;
    int o_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm q_33 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(o_33);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, i_20);
      }
    else
      {
        t = n_33;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm r_33 = ATgetArgument(t, 0);
            x_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, i_20, x_19);
      }
  }
  return(t);
}
ATerm k_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm t_33 = ATgetArgument(t, 0);
      if(((ATgetType(t_33) != AT_LIST) || !(ATisEmpty(t_33))))
        _fail(t);
      {
        ATerm v_33 = ATgetArgument(t, 1);
        if(((ATgetType(v_33) != AT_LIST) || !(ATisEmpty(v_33))))
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
      ATerm w_33 = ATgetArgument(t, 0);
      if(((ATgetType(w_33) == AT_LIST) && !(ATisEmpty(w_33))))
        {
          p_22 = ATgetFirst((ATermList) w_33);
          q_22 = (ATerm) ATgetNext((ATermList) w_33);
        }
      else
        _fail(t);
      {
        ATerm x_33 = ATgetArgument(t, 1);
        if(((ATgetType(x_33) == AT_LIST) && !(ATisEmpty(x_33))))
          {
            r_22 = ATgetFirst((ATermList) x_33);
            s_22 = (ATerm) ATgetNext((ATermList) x_33);
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
  ATerm v_22 = NULL,c_23 = NULL;
  if(match_cons(t, sym__2))
    {
      v_22 = ATgetArgument(t, 0);
      c_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_23), v_22);
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm k_23 = NULL,r_23 = NULL,x_23 = NULL;
  if(match_cons(t, sym__2))
    {
      k_23 = ATgetArgument(t, 0);
      x_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_23;
  {
    ATerm b_34 = t;
    int i_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm j_34 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(i_34);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, x_23);
      }
    else
      {
        t = b_34;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm k_34 = ATgetArgument(t, 0);
            r_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, x_23, r_23);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm b_137 (ATerm), ATerm t)
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
        t = b_137(t);
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
            t = b_137(t);
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
                t = b_137(t);
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
                    ATerm b_22 = NULL,m_22 = NULL,n_22 = NULL,o_8 = NULL;
                    t = SSLgetAnnotations(n_12);
                    b_22 = t;
                    t = p_12;
                    t = b_137(t);
                    n_22 = t;
                    t = (ATerm) ATmakeAppl(sym__2, p_12, n_22);
                    t = genzip_4_0(k_5, l_5, m_5, n_5, t);
                    m_22 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, o_12, m_22, l_12, m_12);
                    o_8 = t;
                    t = SSLsetAnnotations(o_8, b_22);
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
                  t = b_137(t);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      a_25 = ATgetFirst((ATermList) t);
                      {
                        ATerm n_34 = (ATerm) ATgetNext((ATermList) t);
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
ATerm sboundin_3_0 (ATerm c_137 (ATerm), ATerm d_137 (ATerm), ATerm e_137 (ATerm), ATerm t)
{
  ATerm t_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL;
  v_14 = t;
  if(match_cons(t, sym_Let_2))
    {
      w_14 = ATgetArgument(t, 0);
      x_14 = ATgetArgument(t, 1);
      {
        ATerm v_25 = NULL,y_25 = NULL,z_25 = NULL,v_8 = NULL;
        t = SSLgetAnnotations(v_14);
        v_25 = t;
        t = w_14;
        t = c_137(t);
        y_25 = t;
        t = x_14;
        t = c_137(t);
        z_25 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, y_25, z_25);
        v_8 = t;
        t = SSLsetAnnotations(v_8, v_25);
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
            ATerm v_26 = NULL,a_27 = NULL,b_27 = NULL,d_27 = NULL,w_8 = NULL;
            t = SSLgetAnnotations(v_14);
            v_26 = t;
            t = w_14;
            t = e_137(t);
            a_27 = t;
            t = x_14;
            t = e_137(t);
            b_27 = t;
            t = t_14;
            t = c_137(t);
            d_27 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, a_27, b_27, d_27);
            w_8 = t;
            t = SSLsetAnnotations(w_8, v_26);
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
                ATerm v_27 = NULL,f_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL,x_8 = NULL;
                t = SSLgetAnnotations(v_14);
                v_27 = t;
                t = w_14;
                t = e_137(t);
                f_28 = t;
                t = x_14;
                t = e_137(t);
                l_28 = t;
                t = t_14;
                t = e_137(t);
                m_28 = t;
                t = u_14;
                t = c_137(t);
                n_28 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, f_28, l_28, m_28, n_28);
                x_8 = t;
                t = SSLsetAnnotations(x_8, v_27);
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
              t = e_137(t);
              v_29 = t;
              t = x_14;
              t = c_137(t);
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
  ATerm p_34 = t;
  int q_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          e_15 = ATgetArgument(t, 0);
          {
            ATerm r_34 = ATgetArgument(t, 1);
          }
          {
            ATerm s_34 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_34);
      t = e_15;
    }
  else
    {
      t = p_34;
      if(match_cons(t, sym_SDefT_4))
        {
          e_15 = ATgetArgument(t, 0);
          {
            ATerm t_34 = ATgetArgument(t, 1);
          }
          {
            ATerm v_34 = ATgetArgument(t, 2);
          }
          {
            ATerm x_34 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = e_15;
    }
  return(t);
}
ATerm p_25 (ATerm p_67, ATerm o_67, ATerm t)
{
  t = p_67;
  t = map_1_0(o_5, t);
  return(t);
}
ATerm SVar_1_0 (ATerm i_103 (ATerm), ATerm t)
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
  t = i_103(t);
  m_15 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, m_15);
  d_9 = t;
  t = SSLsetAnnotations(d_9, k_15);
  return(t);
}
ATerm q_25 (ATerm o_134 (ATerm), ATerm p_134 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm f_58, ATerm e_58, ATerm d_58, ATerm t)
{
  ATerm p_5 (ATerm t)
  {
    ATerm p_15 = NULL;
    p_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_15, d_58);
    t = o_134(t);
    return(t);
  }
  ATerm q_5 (ATerm t)
  {
    ATerm q_15 = NULL;
    q_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_15, e_58);
    t = o_134(t);
    return(t);
  }
  t = f_58;
  t = p_134(p_5, q_5, _id, t);
  return(t);
}
ATerm s_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_34 = ATgetArgument(t, 0);
      if(((ATgetType(y_34) != AT_LIST) || !(ATisEmpty(y_34))))
        _fail(t);
      {
        ATerm z_34 = ATgetArgument(t, 1);
        if(((ATgetType(z_34) != AT_LIST) || !(ATisEmpty(z_34))))
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
      ATerm a_35 = ATgetArgument(t, 0);
      if(((ATgetType(a_35) == AT_LIST) && !(ATisEmpty(a_35))))
        {
          z_15 = ATgetFirst((ATermList) a_35);
          a_16 = (ATerm) ATgetNext((ATermList) a_35);
        }
      else
        _fail(t);
      {
        ATerm b_35 = ATgetArgument(t, 1);
        if(((ATgetType(b_35) == AT_LIST) && !(ATisEmpty(b_35))))
          {
            b_16 = ATgetFirst((ATermList) b_35);
            c_16 = (ATerm) ATgetNext((ATermList) b_35);
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
ATerm r_25 (ATerm i_134 (ATerm), ATerm j_134 (ATerm (ATerm), ATerm), ATerm x_57, ATerm a_58, ATerm t)
{
  ATerm t_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL,y_15 = NULL;
  t = x_57;
  t = i_134(t);
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
    t = j_134(v_5, t);
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
        ATerm c_35 = t;
        int d_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_16;
            if((m_16 != t))
              {
                _fail(t);
              }
            t = k_16;
            ;
            LocalPopChoice(d_35);
          }
        else
          {
            t = c_35;
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
ATerm env_alltd_1_0 (ATerm h_113 (ATerm), ATerm t)
{
  ATerm l_17 (ATerm t)
  {
    ATerm f_35 = t;
    int g_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_113(t);
        ;
        LocalPopChoice(g_35);
      }
    else
      {
        t = f_35;
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
          i_17 = t;
          if(match_cons(t, sym__2))
            {
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
ATerm rename_4_0 (ATerm d_134 (ATerm (ATerm), ATerm), ATerm e_134 (ATerm), ATerm f_134 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm g_134 (ATerm (ATerm), ATerm), ATerm t)
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
        ATerm h_35 = t;
        int i_35 = stack_ptr;
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
            t = d_134(y_5, t);
            ;
            LocalPopChoice(i_35);
          }
        else
          {
            t = h_35;
            {
              ATerm v_30 = NULL,w_30 = NULL,x_30 = NULL;
              t = y_17;
              t = r_25(e_134, g_134, z_17, a_18, t);
              if(match_cons(t, sym__3))
                {
                  v_30 = ATgetArgument(t, 0);
                  w_30 = ATgetArgument(t, 1);
                  x_30 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = q_25(e_18, f_134, v_30, w_30, x_30, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(x_5, t);
    return(t);
  }
  p_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_17, (ATerm) ATempty);
  t = e_18(t);
  return(t);
}
ATerm z_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_35 = ATgetArgument(t, 0);
      if(((ATgetType(j_35) != AT_LIST) || !(ATisEmpty(j_35))))
        _fail(t);
      {
        ATerm l_35 = ATgetArgument(t, 1);
        if(((ATgetType(l_35) != AT_LIST) || !(ATisEmpty(l_35))))
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
  ATerm u_33 = NULL,y_33 = NULL,d_34 = NULL,g_34 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_35 = ATgetArgument(t, 0);
      if(((ATgetType(m_35) == AT_LIST) && !(ATisEmpty(m_35))))
        {
          u_33 = ATgetFirst((ATermList) m_35);
          y_33 = (ATerm) ATgetNext((ATermList) m_35);
        }
      else
        _fail(t);
      {
        ATerm n_35 = ATgetArgument(t, 1);
        if(((ATgetType(n_35) == AT_LIST) && !(ATisEmpty(n_35))))
          {
            d_34 = ATgetFirst((ATermList) n_35);
            g_34 = (ATerm) ATgetNext((ATermList) n_35);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_33, d_34), (ATerm) ATmakeAppl(sym__2, y_33, g_34));
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm l_34 = NULL,m_34 = NULL;
  if(match_cons(t, sym__2))
    {
      l_34 = ATgetArgument(t, 0);
      m_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_34), l_34);
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm o_34 = NULL,w_34 = NULL,e_35 = NULL;
  if(match_cons(t, sym__2))
    {
      o_34 = ATgetArgument(t, 0);
      e_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_34;
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
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, e_35);
      }
    else
      {
        t = o_35;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm r_35 = ATgetArgument(t, 0);
            w_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, e_35, w_34);
      }
  }
  return(t);
}
ATerm e_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_35 = ATgetArgument(t, 0);
      if(((ATgetType(s_35) != AT_LIST) || !(ATisEmpty(s_35))))
        _fail(t);
      {
        ATerm t_35 = ATgetArgument(t, 1);
        if(((ATgetType(t_35) != AT_LIST) || !(ATisEmpty(t_35))))
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
  ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL,b_37 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_35 = ATgetArgument(t, 0);
      if(((ATgetType(u_35) == AT_LIST) && !(ATisEmpty(u_35))))
        {
          y_36 = ATgetFirst((ATermList) u_35);
          z_36 = (ATerm) ATgetNext((ATermList) u_35);
        }
      else
        _fail(t);
      {
        ATerm v_35 = ATgetArgument(t, 1);
        if(((ATgetType(v_35) == AT_LIST) && !(ATisEmpty(v_35))))
          {
            a_37 = ATgetFirst((ATermList) v_35);
            b_37 = (ATerm) ATgetNext((ATermList) v_35);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_36, a_37), (ATerm) ATmakeAppl(sym__2, z_36, b_37));
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm c_37 = NULL,n_37 = NULL;
  if(match_cons(t, sym__2))
    {
      c_37 = ATgetArgument(t, 0);
      n_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_37), c_37);
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm q_37 = NULL,t_37 = NULL,u_37 = NULL;
  if(match_cons(t, sym__2))
    {
      q_37 = ATgetArgument(t, 0);
      u_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_37;
  {
    ATerm w_35 = t;
    int x_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm z_35 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(x_35);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, u_37);
      }
    else
      {
        t = w_35;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm a_36 = ATgetArgument(t, 0);
            t_37 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, u_37, t_37);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm x_136 (ATerm), ATerm t)
{
  ATerm j_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL,s_21 = NULL;
  j_21 = t;
  if(match_cons(t, sym_Scope_2))
    {
      k_21 = ATgetArgument(t, 0);
      l_21 = ATgetArgument(t, 1);
      {
        ATerm w_31 = NULL,p_32 = NULL,f_9 = NULL;
        t = SSLgetAnnotations(j_21);
        w_31 = t;
        t = k_21;
        t = x_136(t);
        p_32 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, p_32, l_21);
        f_9 = t;
        t = SSLsetAnnotations(f_9, w_31);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          k_21 = ATgetArgument(t, 0);
          l_21 = ATgetArgument(t, 1);
          m_21 = ATgetArgument(t, 2);
          s_21 = ATgetArgument(t, 3);
          {
            ATerm h_33 = NULL,p_33 = NULL,s_33 = NULL,g_9 = NULL;
            t = SSLgetAnnotations(j_21);
            h_33 = t;
            t = m_21;
            t = x_136(t);
            s_33 = t;
            t = (ATerm) ATmakeAppl(sym__2, m_21, s_33);
            t = genzip_4_0(z_5, b_6, c_6, d_6, t);
            p_33 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, k_21, l_21, p_33, s_21);
            g_9 = t;
            t = SSLsetAnnotations(g_9, h_33);
          }
        }
      else
        {
          ATerm y_35 = NULL,l_36 = NULL,m_36 = NULL,h_9 = NULL;
          if(match_cons(t, sym_RDefT_4))
            {
              k_21 = ATgetArgument(t, 0);
              l_21 = ATgetArgument(t, 1);
              m_21 = ATgetArgument(t, 2);
              s_21 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(j_21);
          y_35 = t;
          t = m_21;
          t = x_136(t);
          m_36 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_21, m_36);
          t = genzip_4_0(e_6, f_6, i_6, n_6, t);
          l_36 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, k_21, l_21, l_36, s_21);
          h_9 = t;
          t = SSLsetAnnotations(h_9, y_35);
        }
    }
  return(t);
}
ATerm Var_1_0 (ATerm v_97 (ATerm), ATerm t)
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
  t = v_97(t);
  g_22 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, g_22);
  l_9 = t;
  t = SSLsetAnnotations(l_9, e_22);
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm b_36 = t;
  int c_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(c_36);
    }
  else
    {
      t = b_36;
      {
        ATerm u_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL;
        if(match_cons(t, sym_SDefT_4))
          {
            u_22 = ATgetArgument(t, 0);
            w_22 = ATgetArgument(t, 1);
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
                w_22 = ATgetArgument(t, 1);
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
  ATerm d_36 = t;
  int e_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_23 = ATgetArgument(t, 0);
          {
            ATerm f_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_36);
      t = g_23;
    }
  else
    {
      t = d_36;
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
  ATerm t_23 = NULL;
  ATerm g_36 = t;
  int h_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_23 = ATgetArgument(t, 0);
          {
            ATerm i_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_36);
      t = t_23;
    }
  else
    {
      t = g_36;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_23;
    }
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm w_23 = NULL,z_23 = NULL,a_24 = NULL,d_24 = NULL,e_24 = NULL;
  w_23 = t;
  if(match_cons(t, sym_Let_2))
    {
      z_23 = ATgetArgument(t, 0);
      a_24 = ATgetArgument(t, 1);
      t = w_23;
      t = p_25(z_23, a_24, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          z_23 = ATgetArgument(t, 0);
          a_24 = ATgetArgument(t, 1);
          d_24 = ATgetArgument(t, 2);
          t = a_24;
          t = map_1_0(s_6, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              z_23 = ATgetArgument(t, 0);
              a_24 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, z_23);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  z_23 = ATgetArgument(t, 0);
                  a_24 = ATgetArgument(t, 1);
                  d_24 = ATgetArgument(t, 2);
                  e_24 = ATgetArgument(t, 3);
                  t = a_24;
                  t = map_1_0(t_6, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      z_23 = ATgetArgument(t, 0);
                      a_24 = ATgetArgument(t, 1);
                      d_24 = ATgetArgument(t, 2);
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
  ATerm v_24 = NULL;
  ATerm j_36 = t;
  int k_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_24 = ATgetArgument(t, 0);
          {
            ATerm n_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_36);
      t = v_24;
    }
  else
    {
      t = j_36;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_24;
    }
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm b_28 = NULL;
  ATerm o_36 = t;
  int p_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_28 = ATgetArgument(t, 0);
          {
            ATerm q_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_36);
      t = b_28;
    }
  else
    {
      t = o_36;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_28;
    }
  return(t);
}
ATerm v_6 (ATerm t)
{
  ATerm f_29 = NULL;
  ATerm r_36 = t;
  int s_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_29 = ATgetArgument(t, 0);
          {
            ATerm t_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_36);
      t = f_29;
    }
  else
    {
      t = r_36;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_29;
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
  ATerm a_175 = NULL,b_175 = NULL,c_175 = NULL;
  b_175 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      c_175 = ATgetArgument(t, 0);
      a_175 = ATgetArgument(t, 1);
      {
        ATerm f_175 = NULL,g_175 = NULL,h_175 = NULL,i_175 = NULL;
        t = b_175;
        t = new_0_0(t);
        f_175 = t;
        t = new_0_0(t);
        g_175 = t;
        t = new_0_0(t);
        h_175 = t;
        t = new_0_0(t);
        i_175 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, i_175), h_175), g_175), f_175), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, f_175), (ATerm) ATmakeAppl(sym_Var_1, h_175))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, c_175, (ATerm)ATmakeAppl(sym_Var_1, f_175), (ATerm) ATmakeAppl(sym_Var_1, g_175)), (ATerm) ATmakeAppl(sym_BAM_3, a_175, (ATerm)ATmakeAppl(sym_Var_1, h_175), (ATerm) ATmakeAppl(sym_Var_1, i_175)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_u_36, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, i_175)), (ATerm) ATmakeAppl(sym_Var_1, g_175))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          c_175 = ATgetArgument(t, 0);
          {
            ATerm j_175 = NULL,k_175 = NULL,m_175 = NULL,n_175 = NULL;
            t = b_175;
            t = new_0_0(t);
            m_175 = t;
            t = c_175;
            {
              ATerm w_6 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((j_175 != NULL) && (j_175 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      j_175 = ATgetArgument(t, 0);
                    if(((k_175 != NULL) && (k_175 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      k_175 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, m_175);
                return(t);
              }
              t = oncetd_1_0(w_6, t);
              n_175 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, m_175), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_u_36, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_175)), not_null(j_175))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, m_175)), (ATerm) ATmakeAppl(sym_Build_1, n_175))));
            }
          }
        }
      else
        {
          ATerm p_175 = NULL,q_175 = NULL,r_175 = NULL,s_175 = NULL,t_175 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              c_175 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_175;
          t = new_0_0(t);
          r_175 = t;
          t = new_0_0(t);
          s_175 = t;
          t = c_175;
          {
            ATerm x_6 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
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
              t = (ATerm) ATmakeAppl(sym_Var_1, r_175);
              return(t);
            }
            t = oncetd_1_0(x_6, t);
            t_175 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_175), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, t_175), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, s_175), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, s_175)), (ATerm) ATmakeAppl(sym_PrimT_3, term_v_36, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, s_175))))), (ATerm)ATmakeAppl(sym_Var_1, r_175), (ATerm) ATmakeAppl(sym_Op_2, term_w_36, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_175)), not_null(p_175)))))));
          }
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm v_175 = NULL,w_175 = NULL;
  v_175 = t;
  if(match_cons(t, sym_Match_1))
    {
      w_175 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm x_36 = t;
    int d_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_175 = NULL,z_175 = NULL,a_176 = NULL,b_176 = NULL;
        t = v_175;
        t = new_0_0(t);
        a_176 = t;
        t = w_175;
        {
          ATerm y_6 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((y_175 != NULL) && (y_175 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  y_175 = ATgetArgument(t, 0);
                if(((z_175 != NULL) && (z_175 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  z_175 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, a_176), y_175);
            return(t);
          }
          t = pat_td_1_0(y_6, t);
          b_176 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, a_176), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, b_176), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_e_37, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, a_176))), (ATerm) ATmakeAppl(sym_Match_1, not_null(z_175))))));
        }
        ;
        LocalPopChoice(d_37);
      }
    else
      {
        t = x_36;
        {
          ATerm f_37 = t;
          int g_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_176 = NULL,e_176 = NULL,f_176 = NULL;
              t = v_175;
              t = new_0_0(t);
              e_176 = t;
              t = w_175;
              {
                ATerm z_6 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((d_176 != NULL) && (d_176 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        d_176 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, e_176);
                  return(t);
                }
                t = pat_td_1_0(z_6, t);
                f_176 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, e_176), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, f_176), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, e_176)), not_null(d_176))));
              }
              ;
              LocalPopChoice(g_37);
            }
          else
            {
              t = f_37;
              {
                ATerm h_176 = NULL,i_176 = NULL,j_176 = NULL,k_176 = NULL;
                t = v_175;
                t = new_0_0(t);
                j_176 = t;
                t = w_175;
                {
                  ATerm a_7 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((i_176 != NULL) && (i_176 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          i_176 = ATgetArgument(t, 0);
                        if(((h_176 != NULL) && (h_176 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          h_176 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, j_176);
                    return(t);
                  }
                  t = pat_td_1_0(a_7, t);
                  k_176 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, j_176), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, k_176), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, j_176)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(h_176)), not_null(i_176)))));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm d_136 (ATerm), ATerm t)
{
  ATerm h_37 = t;
  int i_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_136(t);
      ;
      LocalPopChoice(i_37);
    }
  else
    {
      t = h_37;
      {
        ATerm s_178 = NULL,t_178 = NULL,u_178 = NULL,v_178 = NULL;
        t_178 = t;
        if(match_cons(t, sym_Op_2))
          {
            u_178 = ATgetArgument(t, 0);
            v_178 = ATgetArgument(t, 1);
            {
              ATerm g_128 = NULL,o_128 = NULL,n_9 = NULL;
              t = SSLgetAnnotations(t_178);
              g_128 = t;
              t = v_178;
              {
                ATerm b_7 (ATerm t)
                {
                  t = pat_td_1_0(d_136, t);
                  return(t);
                }
                t = fetch_1_0(b_7, t);
                o_128 = t;
                t = (ATerm) ATmakeAppl(sym_Op_2, u_178, o_128);
                n_9 = t;
                t = SSLsetAnnotations(n_9, g_128);
              }
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                u_178 = ATgetArgument(t, 0);
                v_178 = ATgetArgument(t, 1);
                {
                  ATerm j_37 = t;
                  int k_37 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm u_129 = NULL,e_130 = NULL,o_9 = NULL;
                      t = SSLgetAnnotations(t_178);
                      u_129 = t;
                      t = v_178;
                      t = pat_td_1_0(d_136, t);
                      e_130 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, u_178, e_130);
                      o_9 = t;
                      t = SSLsetAnnotations(o_9, u_129);
                      ;
                      LocalPopChoice(k_37);
                    }
                  else
                    {
                      t = j_37;
                      {
                        ATerm a_131 = NULL,d_131 = NULL,p_9 = NULL;
                        t = SSLgetAnnotations(t_178);
                        a_131 = t;
                        t = u_178;
                        t = pat_td_1_0(d_136, t);
                        d_131 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, d_131, v_178);
                        p_9 = t;
                        t = SSLsetAnnotations(p_9, a_131);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    u_178 = ATgetArgument(t, 0);
                    v_178 = ATgetArgument(t, 1);
                    s_178 = ATgetArgument(t, 2);
                    {
                      ATerm v_132 = NULL,l_133 = NULL,q_9 = NULL;
                      t = SSLgetAnnotations(t_178);
                      v_132 = t;
                      t = s_178;
                      {
                        ATerm c_7 (ATerm t)
                        {
                          t = pat_td_1_0(d_136, t);
                          return(t);
                        }
                        t = fetch_1_0(c_7, t);
                        l_133 = t;
                        t = (ATerm) ATmakeAppl(sym_PrimT_3, u_178, v_178, l_133);
                        q_9 = t;
                        t = SSLsetAnnotations(q_9, v_132);
                      }
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        u_178 = ATgetArgument(t, 0);
                        v_178 = ATgetArgument(t, 1);
                        s_178 = ATgetArgument(t, 2);
                        {
                          ATerm l_134 = NULL,p_136 = NULL,r_9 = NULL;
                          t = SSLgetAnnotations(t_178);
                          l_134 = t;
                          t = s_178;
                          {
                            ATerm e_7 (ATerm t)
                            {
                              t = pat_td_1_0(d_136, t);
                              return(t);
                            }
                            t = fetch_1_0(e_7, t);
                            p_136 = t;
                            t = (ATerm) ATmakeAppl(sym_CallT_3, u_178, v_178, p_136);
                            r_9 = t;
                            t = SSLsetAnnotations(r_9, l_134);
                          }
                        }
                      }
                    else
                      {
                        ATerm n_137 = NULL,c_138 = NULL,s_9 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            u_178 = ATgetArgument(t, 0);
                            v_178 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(t_178);
                        n_137 = t;
                        t = v_178;
                        t = pat_td_1_0(d_136, t);
                        c_138 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, u_178, c_138);
                        s_9 = t;
                        t = SSLsetAnnotations(s_9, n_137);
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
  ATerm d_179 = NULL,e_179 = NULL;
  d_179 = t;
  if(match_cons(t, sym_Build_1))
    {
      e_179 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm l_37 = t;
    int m_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_179 = NULL,g_179 = NULL,i_179 = NULL,j_179 = NULL;
        t = d_179;
        t = new_0_0(t);
        i_179 = t;
        t = e_179;
        {
          ATerm f_7 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
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
          t = pat_td_1_0(f_7, t);
          j_179 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, i_179), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_o_37, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_179)), not_null(f_179))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, i_179)))), (ATerm) ATmakeAppl(sym_Build_1, j_179)));
        }
        ;
        LocalPopChoice(m_37);
      }
    else
      {
        t = l_37;
        {
          ATerm p_37 = t;
          int r_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_179 = NULL,m_179 = NULL,n_179 = NULL;
              t = d_179;
              t = new_0_0(t);
              m_179 = t;
              t = e_179;
              {
                ATerm g_7 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((k_179 != NULL) && (k_179 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        k_179 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, m_179);
                  return(t);
                }
                t = pat_td_1_0(g_7, t);
                n_179 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, m_179), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_179), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, m_179)))), (ATerm) ATmakeAppl(sym_Build_1, n_179)));
              }
              ;
              LocalPopChoice(r_37);
            }
          else
            {
              t = p_37;
              {
                ATerm o_179 = NULL,p_179 = NULL,r_179 = NULL,s_179 = NULL;
                t = d_179;
                t = new_0_0(t);
                r_179 = t;
                t = e_179;
                {
                  ATerm h_7 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((o_179 != NULL) && (o_179 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          o_179 = ATgetArgument(t, 0);
                        if(((p_179 != NULL) && (p_179 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          p_179 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, r_179);
                    return(t);
                  }
                  t = pat_td_1_0(h_7, t);
                  s_179 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_179), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(o_179), not_null(p_179), (ATerm) ATmakeAppl(sym_Var_1, r_179))), (ATerm) ATmakeAppl(sym_Build_1, s_179)));
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
  ATerm u_180 = NULL,v_180 = NULL,w_180 = NULL;
  u_180 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_180 = ATgetFirst((ATermList) t);
      w_180 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm s_37 = t;
    int v_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_139 = NULL,v_139 = NULL,a_140 = NULL,b_140 = NULL,g_140 = NULL,r_140 = NULL,s_140 = NULL,a_10 = NULL,z_9 = NULL;
        t = SSLgetAnnotations(u_180);
        g_140 = t;
        t = v_180;
        t = j_0(t);
        r_140 = t;
        t = (ATerm) ATinsert(CheckATermList(w_180), r_140);
        z_9 = t;
        t = SSLsetAnnotations(z_9, g_140);
        s_140 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_139 = ATgetFirst((ATermList) t);
            a_140 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_140);
        t_139 = t;
        t = a_140;
        {
          ATerm w_37 = t;
          int x_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(j_0, t);
              ;
              LocalPopChoice(x_37);
            }
          else
            {
              t = w_37;
            }
          b_140 = t;
          t = (ATerm) ATinsert(CheckATermList(b_140), v_139);
          a_10 = t;
          t = SSLsetAnnotations(a_10, t_139);
        }
        ;
        LocalPopChoice(v_37);
      }
    else
      {
        t = s_37;
        {
          ATerm l_141 = NULL,o_141 = NULL,b_10 = NULL;
          t = SSLgetAnnotations(u_180);
          l_141 = t;
          t = w_180;
          t = map1_1_0(j_0, t);
          o_141 = t;
          t = (ATerm) ATinsert(CheckATermList(o_141), v_180);
          b_10 = t;
          t = SSLsetAnnotations(b_10, l_141);
        }
      }
  }
  return(t);
}
ATerm j_7 (ATerm t)
{
  ATerm e_182 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      e_182 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, e_182, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_a_38), term_a_38));
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm f_182 = NULL,g_182 = NULL;
  g_182 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      f_182 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, f_182, term_a_38);
    }
  else
    {
      t = g_182;
    }
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm r_182 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      r_182 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, r_182, term_a_38);
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm s_182 = NULL,t_182 = NULL;
  t_182 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      s_182 = ATgetArgument(t, 0);
      {
        ATerm b_38 = t;
        int c_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_VarDec_2, s_182, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_a_38), term_a_38));
            ;
            LocalPopChoice(c_38);
          }
        else
          {
            t = b_38;
            t = t_182;
          }
      }
    }
  else
    {
      t = t_182;
    }
  return(t);
}
ATerm p_7 (ATerm t)
{
  ATerm e_183 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      e_183 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, e_183, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_a_38), term_a_38));
  return(t);
}
ATerm w_7 (ATerm t)
{
  ATerm f_183 = NULL,g_183 = NULL;
  g_183 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      f_183 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, f_183, term_a_38);
    }
  else
    {
      t = g_183;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm j_181 = NULL,k_181 = NULL,l_181 = NULL,m_181 = NULL,o_181 = NULL,p_181 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      o_181 = ATgetArgument(t, 0);
      p_181 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, o_181, p_181);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          o_181 = ATgetArgument(t, 0);
          t = o_181;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              j_181 = ATgetFirst((ATermList) t);
              k_181 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, j_181, (ATerm) ATmakeAppl(sym_LChoices_1, k_181));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_o_22;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              o_181 = ATgetArgument(t, 0);
              t = o_181;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  j_181 = ATgetFirst((ATermList) t);
                  k_181 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, j_181, (ATerm) ATmakeAppl(sym_Choices_1, k_181));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_o_22;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  o_181 = ATgetArgument(t, 0);
                  t = o_181;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      j_181 = ATgetFirst((ATermList) t);
                      k_181 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, j_181, (ATerm) ATmakeAppl(sym_Seqs_1, k_181));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_d_38;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      o_181 = ATgetArgument(t, 0);
                      p_181 = ATgetArgument(t, 1);
                      m_181 = ATgetArgument(t, 2);
                      l_181 = ATgetArgument(t, 3);
                      {
                        ATerm b_182 = NULL,d_182 = NULL;
                        t = p_181;
                        t = map1_1_0(j_7, t);
                        b_182 = t;
                        t = m_181;
                        t = map1_1_0(k_7, t);
                        d_182 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, o_181, b_182, d_182, l_181);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          o_181 = ATgetArgument(t, 0);
                          p_181 = ATgetArgument(t, 1);
                          m_181 = ATgetArgument(t, 2);
                          l_181 = ATgetArgument(t, 3);
                          {
                            ATerm e_38 = t;
                            int f_38 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm n_182 = NULL,q_182 = NULL;
                                t = m_181;
                                t = map1_1_0(l_7, t);
                                n_182 = t;
                                t = p_181;
                                t = map_1_0(m_7, t);
                                q_182 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, o_181, q_182, n_182, l_181);
                                ;
                                LocalPopChoice(f_38);
                              }
                            else
                              {
                                t = e_38;
                                {
                                  ATerm b_183 = NULL,d_183 = NULL;
                                  t = p_181;
                                  t = map1_1_0(p_7, t);
                                  b_183 = t;
                                  t = m_181;
                                  t = map_1_0(w_7, t);
                                  d_183 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, o_181, b_183, d_183, l_181);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              o_181 = ATgetArgument(t, 0);
                              p_181 = ATgetArgument(t, 1);
                              m_181 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, p_181, (ATerm) ATmakeAppl(sym_Op_2, term_w_36, (ATerm) ATinsert(ATinsert(ATempty, m_181), o_181)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  o_181 = ATgetArgument(t, 0);
                                  p_181 = ATgetArgument(t, 1);
                                  m_181 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, m_181)), o_181), (ATerm) ATmakeAppl(sym_Build_1, p_181)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      o_181 = ATgetArgument(t, 0);
                                      p_181 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, o_181, (ATerm) ATmakeAppl(sym_Match_1, p_181));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          o_181 = ATgetArgument(t, 0);
                                          p_181 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, o_181), p_181);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              o_181 = ATgetArgument(t, 0);
                                              p_181 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, p_181), o_181);
                                        }
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
  ATerm g_38 = t;
  if((PushChoice() == 0))
    {
      ATerm g_184 = NULL,h_184 = NULL,i_184 = NULL,f_10 = NULL;
      i_184 = t;
      if(match_cons(t, sym_Var_1))
        {
          h_184 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(i_184);
      g_184 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, h_184);
      f_10 = t;
      t = SSLsetAnnotations(f_10, g_184);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = g_38;
    }
  return(t);
}
ATerm a_8 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_h_38;
  return(t);
}
ATerm e_8 (ATerm t)
{
  ATerm j_184 = NULL,k_184 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_184 = ATgetFirst((ATermList) t);
      k_184 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_184, k_184);
  return(t);
}
ATerm f_8 (ATerm t)
{
  ATerm l_184 = NULL,m_184 = NULL,n_184 = NULL,o_184 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_38 = ATgetArgument(t, 0);
      if(match_cons(i_38, sym__2))
        {
          l_184 = ATgetArgument(i_38, 0);
          m_184 = ATgetArgument(i_38, 1);
        }
      else
        _fail(t);
      {
        ATerm j_38 = ATgetArgument(t, 1);
        if(match_cons(j_38, sym__2))
          {
            n_184 = ATgetArgument(j_38, 0);
            o_184 = ATgetArgument(j_38, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_184), l_184), (ATerm) ATinsert(CheckATermList(o_184), m_184));
  return(t);
}
ATerm g_8 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_h_38;
  return(t);
}
ATerm i_8 (ATerm t)
{
  ATerm p_184 = NULL,q_184 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_184 = ATgetFirst((ATermList) t);
      q_184 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_184, q_184);
  return(t);
}
ATerm k_8 (ATerm t)
{
  ATerm r_184 = NULL,s_184 = NULL,t_184 = NULL,u_184 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_38 = ATgetArgument(t, 0);
      if(match_cons(k_38, sym__2))
        {
          r_184 = ATgetArgument(k_38, 0);
          s_184 = ATgetArgument(k_38, 1);
        }
      else
        _fail(t);
      {
        ATerm l_38 = ATgetArgument(t, 1);
        if(match_cons(l_38, sym__2))
          {
            t_184 = ATgetArgument(l_38, 0);
            u_184 = ATgetArgument(l_38, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_184), r_184), (ATerm) ATinsert(CheckATermList(u_184), s_184));
  return(t);
}
ATerm s_28 (ATerm u_64, ATerm v_64, ATerm w_64, ATerm t)
{
  ATerm x_183 = NULL,y_183 = NULL,z_183 = NULL,a_184 = NULL,b_184 = NULL,c_184 = NULL,d_184 = NULL,e_184 = NULL,f_184 = NULL,g_10 = NULL;
  t = w_64;
  t = fetch_1_0(y_7, t);
  t = w_64;
  t = genzip_4_0(a_8, e_8, f_8, LiftPrimArg_0_0, t);
  f_184 = t;
  if(match_cons(t, sym__2))
    {
      b_184 = ATgetArgument(t, 0);
      c_184 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_184);
  a_184 = t;
  t = b_184;
  t = concat_0_0(t);
  d_184 = t;
  t = c_184;
  t = genzip_4_0(g_8, i_8, k_8, _id, t);
  e_184 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_184, e_184);
  g_10 = t;
  t = SSLsetAnnotations(g_10, a_184);
  if(match_cons(t, sym__2))
    {
      x_183 = ATgetArgument(t, 0);
      {
        ATerm m_38 = ATgetArgument(t, 1);
        if(match_cons(m_38, sym__2))
          {
            y_183 = ATgetArgument(m_38, 0);
            z_183 = ATgetArgument(m_38, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, x_183, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, y_183), (ATerm) ATmakeAppl(sym_CallT_3, u_64, v_64, z_183)));
  return(t);
}
ATerm o_185 (ATerm f_185, ATerm t)
{
  ATerm h_185 = NULL;
  t = f_185;
  {
    ATerm n_38 = t;
    if((PushChoice() == 0))
      {
        ATerm i_185 = NULL,j_185 = NULL,k_185 = NULL,j_10 = NULL;
        k_185 = t;
        if(match_cons(t, sym_Var_1))
          {
            j_185 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_185);
        i_185 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, j_185);
        j_10 = t;
        t = SSLsetAnnotations(j_10, i_185);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_38;
      }
    t = new_0_0(t);
    h_185 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, h_185), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, f_185), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, h_185)))), (ATerm) ATmakeAppl(sym_Var_1, h_185)));
  }
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm l_185 = NULL,m_185 = NULL;
  l_185 = t;
  if(match_cons(t, sym_Var_1))
    {
      m_185 = ATgetArgument(t, 0);
      {
        ATerm p_38 = t;
        int q_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_185(l_185, t);
            ;
            LocalPopChoice(q_38);
          }
        else
          {
            t = p_38;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_d_38, (ATerm) ATmakeAppl(sym_Var_1, m_185)));
          }
      }
    }
  else
    {
      t = o_185(l_185, t);
    }
  return(t);
}
ATerm q_8 (ATerm t)
{
  ATerm t_38 = t;
  if((PushChoice() == 0))
    {
      ATerm l_143 = NULL,n_143 = NULL,o_143 = NULL,l_10 = NULL;
      o_143 = t;
      if(match_cons(t, sym_Var_1))
        {
          n_143 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_143);
      l_143 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, n_143);
      l_10 = t;
      t = SSLsetAnnotations(l_10, l_143);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = t_38;
    }
  return(t);
}
ATerm r_8 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_h_38;
  return(t);
}
ATerm s_8 (ATerm t)
{
  ATerm p_143 = NULL,q_143 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_143 = ATgetFirst((ATermList) t);
      q_143 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_143, q_143);
  return(t);
}
ATerm t_8 (ATerm t)
{
  ATerm w_143 = NULL,x_143 = NULL,y_143 = NULL,f_144 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_38 = ATgetArgument(t, 0);
      if(match_cons(u_38, sym__2))
        {
          w_143 = ATgetArgument(u_38, 0);
          x_143 = ATgetArgument(u_38, 1);
        }
      else
        _fail(t);
      {
        ATerm v_38 = ATgetArgument(t, 1);
        if(match_cons(v_38, sym__2))
          {
            y_143 = ATgetArgument(v_38, 0);
            f_144 = ATgetArgument(v_38, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_143), w_143), (ATerm) ATinsert(CheckATermList(f_144), x_143));
  return(t);
}
ATerm u_8 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_h_38;
  return(t);
}
ATerm z_8 (ATerm t)
{
  ATerm g_144 = NULL,o_144 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_144 = ATgetFirst((ATermList) t);
      o_144 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_144, o_144);
  return(t);
}
ATerm a_9 (ATerm t)
{
  ATerm p_144 = NULL,u_144 = NULL,v_144 = NULL,x_144 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_38 = ATgetArgument(t, 0);
      if(match_cons(w_38, sym__2))
        {
          p_144 = ATgetArgument(w_38, 0);
          u_144 = ATgetArgument(w_38, 1);
        }
      else
        _fail(t);
      {
        ATerm x_38 = ATgetArgument(t, 1);
        if(match_cons(x_38, sym__2))
          {
            v_144 = ATgetArgument(x_38, 0);
            x_144 = ATgetArgument(x_38, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_144), p_144), (ATerm) ATinsert(CheckATermList(x_144), u_144));
  return(t);
}
ATerm b_9 (ATerm t)
{
  ATerm c_39 = t;
  if((PushChoice() == 0))
    {
      ATerm m_150 = NULL,r_150 = NULL,s_150 = NULL,n_10 = NULL;
      s_150 = t;
      if(match_cons(t, sym_Var_1))
        {
          r_150 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(s_150);
      m_150 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, r_150);
      n_10 = t;
      t = SSLsetAnnotations(n_10, m_150);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = c_39;
    }
  return(t);
}
ATerm c_9 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_h_38;
  return(t);
}
ATerm e_9 (ATerm t)
{
  ATerm t_150 = NULL,u_150 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_150 = ATgetFirst((ATermList) t);
      u_150 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_150, u_150);
  return(t);
}
ATerm i_9 (ATerm t)
{
  ATerm g_151 = NULL,h_151 = NULL,m_151 = NULL,n_151 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_39 = ATgetArgument(t, 0);
      if(match_cons(d_39, sym__2))
        {
          g_151 = ATgetArgument(d_39, 0);
          h_151 = ATgetArgument(d_39, 1);
        }
      else
        _fail(t);
      {
        ATerm f_39 = ATgetArgument(t, 1);
        if(match_cons(f_39, sym__2))
          {
            m_151 = ATgetArgument(f_39, 0);
            n_151 = ATgetArgument(f_39, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_151), g_151), (ATerm) ATinsert(CheckATermList(n_151), h_151));
  return(t);
}
ATerm j_9 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_h_38;
  return(t);
}
ATerm k_9 (ATerm t)
{
  ATerm o_151 = NULL,p_151 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_151 = ATgetFirst((ATermList) t);
      p_151 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_151, p_151);
  return(t);
}
ATerm m_9 (ATerm t)
{
  ATerm a_152 = NULL,b_152 = NULL,g_152 = NULL,h_152 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_39 = ATgetArgument(t, 0);
      if(match_cons(g_39, sym__2))
        {
          a_152 = ATgetArgument(g_39, 0);
          b_152 = ATgetArgument(g_39, 1);
        }
      else
        _fail(t);
      {
        ATerm h_39 = ATgetArgument(t, 1);
        if(match_cons(h_39, sym__2))
          {
            g_152 = ATgetArgument(h_39, 0);
            h_152 = ATgetArgument(h_39, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_152), a_152), (ATerm) ATinsert(CheckATermList(h_152), b_152));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm e_188 = NULL,f_188 = NULL,g_188 = NULL,h_188 = NULL;
  f_188 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      g_188 = ATgetArgument(t, 0);
      h_188 = ATgetArgument(t, 1);
      e_188 = ATgetArgument(t, 2);
      {
        ATerm m_142 = NULL,r_142 = NULL,s_142 = NULL,t_142 = NULL,v_142 = NULL,w_142 = NULL,x_142 = NULL,j_143 = NULL,k_143 = NULL,m_10 = NULL;
        t = e_188;
        t = fetch_1_0(q_8, t);
        t = e_188;
        t = genzip_4_0(r_8, s_8, t_8, LiftPrimArg_0_0, t);
        k_143 = t;
        if(match_cons(t, sym__2))
          {
            v_142 = ATgetArgument(t, 0);
            w_142 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_143);
        t_142 = t;
        t = v_142;
        t = concat_0_0(t);
        x_142 = t;
        t = w_142;
        t = genzip_4_0(u_8, z_8, a_9, _id, t);
        j_143 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_142, j_143);
        m_10 = t;
        t = SSLsetAnnotations(m_10, t_142);
        if(match_cons(t, sym__2))
          {
            m_142 = ATgetArgument(t, 0);
            {
              ATerm i_39 = ATgetArgument(t, 1);
              if(match_cons(i_39, sym__2))
                {
                  r_142 = ATgetArgument(i_39, 0);
                  s_142 = ATgetArgument(i_39, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, m_142, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, r_142), (ATerm) ATmakeAppl(sym_PrimT_3, g_188, h_188, s_142)));
      }
    }
  else
    {
      ATerm x_147 = NULL,y_147 = NULL,k_148 = NULL,l_148 = NULL,q_148 = NULL,r_148 = NULL,s_148 = NULL,t_148 = NULL,l_150 = NULL,o_10 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          g_188 = ATgetArgument(t, 0);
          h_188 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = h_188;
      t = fetch_1_0(b_9, t);
      t = h_188;
      t = genzip_4_0(c_9, e_9, i_9, LiftPrimArg_0_0, t);
      l_150 = t;
      if(match_cons(t, sym__2))
        {
          q_148 = ATgetArgument(t, 0);
          r_148 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(l_150);
      l_148 = t;
      t = q_148;
      t = concat_0_0(t);
      s_148 = t;
      t = r_148;
      t = genzip_4_0(j_9, k_9, m_9, _id, t);
      t_148 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_148, t_148);
      o_10 = t;
      t = SSLsetAnnotations(o_10, l_148);
      if(match_cons(t, sym__2))
        {
          x_147 = ATgetArgument(t, 0);
          {
            ATerm j_39 = ATgetArgument(t, 1);
            if(match_cons(j_39, sym__2))
              {
                y_147 = ATgetArgument(j_39, 0);
                k_148 = ATgetArgument(j_39, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, x_147, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, y_147), (ATerm) ATmakeAppl(sym_PrimT_3, g_188, (ATerm)ATempty, k_148)));
    }
  return(t);
}
ATerm t_9 (ATerm t)
{
  ATerm v_188 = NULL,w_188 = NULL,x_188 = NULL,y_188 = NULL;
  y_188 = t;
  if(match_cons(t, sym_Con_3))
    {
      v_188 = ATgetArgument(t, 0);
      w_188 = ATgetArgument(t, 1);
      x_188 = ATgetArgument(t, 2);
      {
        ATerm w_153 = NULL,t_10 = NULL;
        t = SSLgetAnnotations(y_188);
        w_153 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, v_188, w_188, x_188);
        t_10 = t;
        t = SSLsetAnnotations(t_10, w_153);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = y_188;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm k_39 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(t_9, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = k_39;
    }
  return(t);
}
ATerm u_9 (ATerm t)
{
  ATerm t_189 = NULL,u_189 = NULL,v_189 = NULL,w_189 = NULL;
  u_189 = t;
  if(match_cons(t, sym_Con_3))
    {
      v_189 = ATgetArgument(t, 0);
      w_189 = ATgetArgument(t, 1);
      t_189 = ATgetArgument(t, 2);
      {
        ATerm r_154 = NULL,v_10 = NULL;
        t = SSLgetAnnotations(u_189);
        r_154 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, v_189, w_189, t_189);
        v_10 = t;
        t = SSLsetAnnotations(v_10, r_154);
      }
    }
  else
    {
      ATerm d_155 = NULL,w_10 = NULL;
      if(match_cons(t, sym_App_2))
        {
          v_189 = ATgetArgument(t, 0);
          w_189 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(u_189);
      d_155 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, v_189, w_189);
      w_10 = t;
      t = SSLsetAnnotations(w_10, d_155);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm l_39 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(u_9, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_39;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm c_190 = NULL,d_190 = NULL,e_190 = NULL,f_190 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      c_190 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_190;
  if(match_cons(t, sym_StratRule_3))
    {
      d_190 = ATgetArgument(t, 0);
      e_190 = ATgetArgument(t, 1);
      f_190 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, e_190), (ATerm) ATmakeAppl(sym_Where_1, f_190)), d_190));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          d_190 = ATgetArgument(t, 0);
          e_190 = ATgetArgument(t, 1);
          f_190 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = d_190;
      t = pureterm_0_0(t);
      t = e_190;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, e_190)), (ATerm) ATmakeAppl(sym_Where_1, f_190)), (ATerm) ATmakeAppl(sym_Match_1, d_190)));
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm v_109 (ATerm), ATerm t)
{
  ATerm m_190 (ATerm t)
  {
    ATerm m_39 = t;
    int o_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_109(t);
        ;
        LocalPopChoice(o_39);
      }
    else
      {
        t = m_39;
        t = SRTS_one(m_190, t);
      }
    return(t);
  }
  t = m_190(t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm v_28 (ATerm e_60, ATerm f_60, ATerm g_60, ATerm t)
{
  ATerm n_190 = NULL,o_190 = NULL,p_190 = NULL,q_190 = NULL,r_190 = NULL,s_190 = NULL,t_190 = NULL;
  t = new_0_0(t);
  r_190 = t;
  t = e_60;
  {
    ATerm v_9 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm r_39 = ATgetArgument(t, 0);
          if(match_cons(r_39, sym_Var_1))
            {
              if(((q_190 != NULL) && (q_190 != ATgetArgument(r_39, 0))))
                _fail(ATgetArgument(r_39, 0));
              else
                q_190 = ATgetArgument(r_39, 0);
            }
          else
            _fail(t);
          if(((o_190 != NULL) && (o_190 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            o_190 = ATgetArgument(t, 1);
          {
            ATerm s_39 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, q_190);
      return(t);
    }
    t = oncetd_1_0(v_9, t);
    s_190 = t;
    t = f_60;
    {
      ATerm w_9 (ATerm t)
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm u_39 = ATgetArgument(t, 0);
            if(match_cons(u_39, sym_Var_1))
              {
                if(((q_190 != NULL) && (q_190 != ATgetArgument(u_39, 0))))
                  _fail(ATgetArgument(u_39, 0));
                else
                  q_190 = ATgetArgument(u_39, 0);
              }
            else
              _fail(t);
            if(((p_190 != NULL) && (p_190 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              p_190 = ATgetArgument(t, 1);
            {
              ATerm v_39 = ATgetArgument(t, 2);
              if(match_cons(v_39, sym_CallT_3))
                {
                  if(((n_190 != NULL) && (n_190 != ATgetArgument(v_39, 0))))
                    _fail(ATgetArgument(v_39, 0));
                  else
                    n_190 = ATgetArgument(v_39, 0);
                  {
                    ATerm y_39 = ATgetArgument(v_39, 1);
                    if(((ATgetType(y_39) != AT_LIST) || !(ATisEmpty(y_39))))
                      _fail(t);
                  }
                  {
                    ATerm z_39 = ATgetArgument(v_39, 2);
                    if(((ATgetType(z_39) != AT_LIST) || !(ATisEmpty(z_39))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, r_190);
        return(t);
      }
      t = oncetd_1_0(w_9, t);
      t_190 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_190), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, s_190, t_190, (ATerm) ATmakeAppl(sym_Seq_2, g_60, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(n_190), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(o_190), not_null(p_190), term_d_38))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(q_190)), (ATerm) ATmakeAppl(sym_Var_1, r_190))))));
    }
  }
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm a_40 = t;
  int b_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_40 = t;
      int d_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_191 = NULL,h_191 = NULL,i_191 = NULL,j_191 = NULL,k_191 = NULL,l_191 = NULL;
          j_191 = t;
          if(match_cons(t, sym_SRule_1))
            {
              k_191 = ATgetArgument(t, 0);
              t = k_191;
              if(match_cons(t, sym_Rule_3))
                {
                  g_191 = ATgetArgument(t, 0);
                  h_191 = ATgetArgument(t, 1);
                  i_191 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = j_191;
              t = v_28(g_191, h_191, i_191, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm x_155 = NULL,g_156 = NULL,z_10 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  k_191 = ATgetArgument(t, 0);
                  l_191 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(j_191);
              x_155 = t;
              t = l_191;
              t = desugarRule_0_0(t);
              g_156 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, k_191, g_156);
              z_10 = t;
              t = SSLsetAnnotations(z_10, x_155);
            }
          ;
          LocalPopChoice(d_40);
        }
      else
        {
          t = c_40;
          t = RtoS_0_0(t);
        }
      ;
      LocalPopChoice(b_40);
    }
  else
    {
      t = a_40;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm r_108 (ATerm), ATerm t)
{
  ATerm x_9 (ATerm t)
  {
    t = topdown_1_0(r_108, t);
    return(t);
  }
  t = r_108(t);
  t = SRTS_all(x_9, t);
  return(t);
}
ATerm y_9 (ATerm t)
{
  ATerm e_40 = t;
  int f_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      ;
      LocalPopChoice(f_40);
    }
  else
    {
      t = e_40;
    }
  t = repeat_1_0(c_10, t);
  return(t);
}
ATerm c_10 (ATerm t)
{
  ATerm g_40 = t;
  int i_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      ;
      LocalPopChoice(i_40);
    }
  else
    {
      t = g_40;
      {
        ATerm j_40 = t;
        int k_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_191 = NULL,a_192 = NULL,b_192 = NULL,c_192 = NULL;
            z_191 = t;
            if(match_cons(t, sym_CallT_3))
              {
                a_192 = ATgetArgument(t, 0);
                b_192 = ATgetArgument(t, 1);
                c_192 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = z_191;
            t = s_28(a_192, b_192, c_192, t);
            ;
            LocalPopChoice(k_40);
          }
        else
          {
            t = j_40;
            {
              ATerm m_40 = t;
              int s_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(s_40);
                }
              else
                {
                  t = m_40;
                  {
                    ATerm t_40 = t;
                    int u_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        ;
                        LocalPopChoice(u_40);
                      }
                    else
                      {
                        t = t_40;
                        {
                          ATerm v_40 = t;
                          int w_40 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm x_40 = t;
                              int y_40 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm h_192 = NULL,i_192 = NULL,j_192 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      h_192 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = h_192;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      i_192 = ATgetArgument(t, 0);
                                      {
                                        ATerm z_40 = t;
                                        int b_41 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm l_192 = NULL,m_192 = NULL;
                                            t = h_192;
                                            {
                                              ATerm d_10 (ATerm t)
                                              {
                                                if(match_cons(t, sym_RootApp_1))
                                                  {
                                                    ATerm c_41 = ATgetArgument(t, 0);
                                                    if(match_cons(c_41, sym_Match_1))
                                                      {
                                                        if(((l_192 != NULL) && (l_192 != ATgetArgument(c_41, 0))))
                                                          _fail(ATgetArgument(c_41, 0));
                                                        else
                                                          l_192 = ATgetArgument(c_41, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                  }
                                                else
                                                  _fail(t);
                                                t = l_192;
                                                return(t);
                                              }
                                              t = pat_td_1_0(d_10, t);
                                              m_192 = t;
                                              t = (ATerm) ATmakeAppl(sym_Match_1, m_192);
                                            }
                                            ;
                                            LocalPopChoice(b_41);
                                          }
                                        else
                                          {
                                            t = z_40;
                                            t = i_192;
                                          }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          i_192 = ATgetArgument(t, 0);
                                          j_192 = ATgetArgument(t, 1);
                                          {
                                            ATerm d_41 = t;
                                            int e_41 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm p_192 = NULL,q_192 = NULL;
                                                t = h_192;
                                                {
                                                  ATerm e_10 (ATerm t)
                                                  {
                                                    if(match_cons(t, sym_RootApp_1))
                                                      {
                                                        ATerm f_41 = ATgetArgument(t, 0);
                                                        if(match_cons(f_41, sym_Match_1))
                                                          {
                                                            if(((p_192 != NULL) && (p_192 != ATgetArgument(f_41, 0))))
                                                              _fail(ATgetArgument(f_41, 0));
                                                            else
                                                              p_192 = ATgetArgument(f_41, 0);
                                                          }
                                                        else
                                                          _fail(t);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = p_192;
                                                    return(t);
                                                  }
                                                  t = pat_td_1_0(e_10, t);
                                                  q_192 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, q_192);
                                                }
                                                ;
                                                LocalPopChoice(e_41);
                                              }
                                            else
                                              {
                                                t = d_41;
                                                t = (ATerm) ATmakeAppl(sym_BA_2, i_192, j_192);
                                              }
                                          }
                                        }
                                      else
                                        {
                                          ATerm u_192 = NULL,v_192 = NULL;
                                          t = h_192;
                                          {
                                            ATerm h_10 (ATerm t)
                                            {
                                              if(match_cons(t, sym_RootApp_1))
                                                {
                                                  ATerm g_41 = ATgetArgument(t, 0);
                                                  if(match_cons(g_41, sym_Match_1))
                                                    {
                                                      if(((u_192 != NULL) && (u_192 != ATgetArgument(g_41, 0))))
                                                        _fail(ATgetArgument(g_41, 0));
                                                      else
                                                        u_192 = ATgetArgument(g_41, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                }
                                              else
                                                _fail(t);
                                              t = u_192;
                                              return(t);
                                            }
                                            t = pat_td_1_0(h_10, t);
                                            v_192 = t;
                                            t = (ATerm) ATmakeAppl(sym_Match_1, v_192);
                                          }
                                        }
                                    }
                                  ;
                                  LocalPopChoice(y_40);
                                }
                              else
                                {
                                  t = x_40;
                                  t = Mapp2_0_0(t);
                                }
                              ;
                              LocalPopChoice(w_40);
                            }
                          else
                            {
                              t = v_40;
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
  ATerm g_31 = NULL;
  ATerm h_41 = t;
  int i_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_31 = ATgetArgument(t, 0);
          {
            ATerm j_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_41);
      t = g_31;
    }
  else
    {
      t = h_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_31;
    }
  return(t);
}
ATerm k_10 (ATerm t)
{
  ATerm j_31 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_31);
  return(t);
}
ATerm p_10 (ATerm t)
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
        ATerm o_31 = NULL,q_31 = NULL,r_31 = NULL,s_31 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            o_31 = ATgetArgument(t, 0);
            t = o_31;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                o_31 = ATgetArgument(t, 0);
                q_31 = ATgetArgument(t, 1);
                r_31 = ATgetArgument(t, 2);
                s_31 = ATgetArgument(t, 3);
                t = r_31;
                t = map_1_0(q_10, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    o_31 = ATgetArgument(t, 0);
                    q_31 = ATgetArgument(t, 1);
                    r_31 = ATgetArgument(t, 2);
                    s_31 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = r_31;
                t = map_1_0(r_10, t);
              }
          }
      }
    }
  return(t);
}
ATerm q_10 (ATerm t)
{
  ATerm l_32 = NULL;
  ATerm n_41 = t;
  int o_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_32 = ATgetArgument(t, 0);
          {
            ATerm q_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_41);
      t = l_32;
    }
  else
    {
      t = n_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_32;
    }
  return(t);
}
ATerm r_10 (ATerm t)
{
  ATerm d_33 = NULL;
  ATerm t_41 = t;
  int u_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_33 = ATgetArgument(t, 0);
          {
            ATerm w_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_41);
      t = d_33;
    }
  else
    {
      t = t_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_33;
    }
  return(t);
}
ATerm s_10 (ATerm t)
{
  ATerm i_33 = NULL,j_33 = NULL;
  j_33 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      i_33 = ATgetArgument(t, 0);
      t = i_33;
    }
  else
    {
      t = j_33;
    }
  return(t);
}
ATerm u_10 (ATerm t)
{
  ATerm a_34 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_34);
  return(t);
}
ATerm x_10 (ATerm t)
{
  ATerm x_41 = t;
  int b_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(b_42);
    }
  else
    {
      t = x_41;
      {
        ATerm c_34 = NULL,e_34 = NULL,f_34 = NULL,h_34 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            c_34 = ATgetArgument(t, 0);
            t = c_34;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                c_34 = ATgetArgument(t, 0);
                e_34 = ATgetArgument(t, 1);
                f_34 = ATgetArgument(t, 2);
                h_34 = ATgetArgument(t, 3);
                t = f_34;
                t = map_1_0(y_10, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    c_34 = ATgetArgument(t, 0);
                    e_34 = ATgetArgument(t, 1);
                    f_34 = ATgetArgument(t, 2);
                    h_34 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = f_34;
                t = map_1_0(a_11, t);
              }
          }
      }
    }
  return(t);
}
ATerm y_10 (ATerm t)
{
  ATerm u_34 = NULL;
  ATerm c_42 = t;
  int d_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_34 = ATgetArgument(t, 0);
          {
            ATerm e_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_42);
      t = u_34;
    }
  else
    {
      t = c_42;
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
ATerm a_11 (ATerm t)
{
  ATerm k_35 = NULL;
  ATerm f_42 = t;
  int h_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_35 = ATgetArgument(t, 0);
          {
            ATerm k_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_42);
      t = k_35;
    }
  else
    {
      t = f_42;
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
ATerm DeclareVariables_0_0 (ATerm t)
{
  ATerm m_30 = NULL,o_30 = NULL,p_30 = NULL,q_30 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      o_30 = ATgetArgument(t, 0);
      p_30 = ATgetArgument(t, 1);
      q_30 = ATgetArgument(t, 2);
      m_30 = ATgetArgument(t, 3);
      {
        ATerm a_31 = NULL,c_31 = NULL,d_31 = NULL;
        t = q_30;
        t = map_1_0(i_10, t);
        a_31 = t;
        t = m_30;
        t = free_vars_3_0(k_10, p_10, tboundin_3_0, t);
        t = map_1_0(s_10, t);
        c_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_31, a_31);
        t = diff_0_0(t);
        d_31 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, o_30, p_30, q_30, (ATerm) ATmakeAppl(sym_Scope_2, d_31, m_30));
      }
    }
  else
    {
      ATerm z_33 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          o_30 = ATgetArgument(t, 0);
          p_30 = ATgetArgument(t, 1);
          q_30 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = q_30;
      t = free_vars_3_0(u_10, x_10, tboundin_3_0, t);
      z_33 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, o_30, p_30, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, z_33, q_30));
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm y_136 (ATerm), ATerm z_136 (ATerm), ATerm a_137 (ATerm), ATerm t)
{
  ATerm y_38 = NULL,z_38 = NULL,a_39 = NULL,b_39 = NULL,e_39 = NULL;
  b_39 = t;
  if(match_cons(t, sym_Scope_2))
    {
      e_39 = ATgetArgument(t, 0);
      y_38 = ATgetArgument(t, 1);
      {
        ATerm o_38 = NULL,r_38 = NULL,s_38 = NULL,b_11 = NULL;
        t = SSLgetAnnotations(b_39);
        o_38 = t;
        t = e_39;
        t = a_137(t);
        r_38 = t;
        t = y_38;
        t = y_136(t);
        s_38 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, r_38, s_38);
        b_11 = t;
        t = SSLsetAnnotations(b_11, o_38);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          e_39 = ATgetArgument(t, 0);
          y_38 = ATgetArgument(t, 1);
          z_38 = ATgetArgument(t, 2);
          a_39 = ATgetArgument(t, 3);
          {
            ATerm t_39 = NULL,l_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL,c_11 = NULL;
            t = SSLgetAnnotations(b_39);
            t_39 = t;
            t = e_39;
            t = a_137(t);
            l_40 = t;
            t = y_38;
            t = a_137(t);
            p_40 = t;
            t = z_38;
            t = a_137(t);
            q_40 = t;
            t = a_39;
            t = y_136(t);
            r_40 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, l_40, p_40, q_40, r_40);
            c_11 = t;
            t = SSLsetAnnotations(c_11, t_39);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              e_39 = ATgetArgument(t, 0);
              y_38 = ATgetArgument(t, 1);
              z_38 = ATgetArgument(t, 2);
              a_39 = ATgetArgument(t, 3);
              {
                ATerm k_41 = NULL,r_41 = NULL,s_41 = NULL,y_41 = NULL,a_42 = NULL,d_11 = NULL;
                t = SSLgetAnnotations(b_39);
                k_41 = t;
                t = e_39;
                t = a_137(t);
                r_41 = t;
                t = y_38;
                t = a_137(t);
                s_41 = t;
                t = z_38;
                t = a_137(t);
                y_41 = t;
                t = a_39;
                t = y_136(t);
                a_42 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, r_41, s_41, y_41, a_42);
                d_11 = t;
                t = SSLsetAnnotations(d_11, k_41);
              }
            }
          else
            {
              ATerm n_42 = NULL,p_42 = NULL,e_11 = NULL;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  e_39 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(b_39);
              n_42 = t;
              t = e_39;
              t = y_136(t);
              p_42 = t;
              t = (ATerm) ATmakeAppl(sym_DynamicRules_1, p_42);
              e_11 = t;
              t = SSLsetAnnotations(e_11, n_42);
            }
        }
    }
  return(t);
}
ATerm f_11 (ATerm t)
{
  ATerm n_39 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_39);
  return(t);
}
ATerm g_11 (ATerm t)
{
  ATerm l_42 = t;
  int m_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(m_42);
    }
  else
    {
      t = l_42;
      {
        ATerm p_39 = NULL,q_39 = NULL,w_39 = NULL,x_39 = NULL;
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
                w_39 = ATgetArgument(t, 2);
                x_39 = ATgetArgument(t, 3);
                t = w_39;
                t = map_1_0(h_11, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    p_39 = ATgetArgument(t, 0);
                    q_39 = ATgetArgument(t, 1);
                    w_39 = ATgetArgument(t, 2);
                    x_39 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = w_39;
                t = map_1_0(i_11, t);
              }
          }
      }
    }
  return(t);
}
ATerm h_11 (ATerm t)
{
  ATerm h_40 = NULL;
  ATerm o_42 = t;
  int q_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_40 = ATgetArgument(t, 0);
          {
            ATerm r_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_42);
      t = h_40;
    }
  else
    {
      t = o_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_40;
    }
  return(t);
}
ATerm i_11 (ATerm t)
{
  ATerm a_41 = NULL;
  ATerm s_42 = t;
  int u_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_41 = ATgetArgument(t, 0);
          {
            ATerm v_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_42);
      t = a_41;
    }
  else
    {
      t = s_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_41;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(f_11, g_11, tboundin_3_0, t);
  return(t);
}
ATerm k_11 (ATerm t)
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
ATerm m_11 (ATerm t)
{
  ATerm w_42 = t;
  int z_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(z_42);
    }
  else
    {
      t = w_42;
      {
        ATerm g_42 = NULL,i_42 = NULL,j_42 = NULL,t_42 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            g_42 = ATgetArgument(t, 0);
            t = g_42;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                g_42 = ATgetArgument(t, 0);
                i_42 = ATgetArgument(t, 1);
                j_42 = ATgetArgument(t, 2);
                t_42 = ATgetArgument(t, 3);
                t = j_42;
                t = map_1_0(o_11, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    g_42 = ATgetArgument(t, 0);
                    i_42 = ATgetArgument(t, 1);
                    j_42 = ATgetArgument(t, 2);
                    t_42 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = j_42;
                t = map_1_0(r_11, t);
              }
          }
      }
    }
  return(t);
}
ATerm o_11 (ATerm t)
{
  ATerm f_43 = NULL;
  ATerm a_43 = t;
  int b_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_43 = ATgetArgument(t, 0);
          {
            ATerm c_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_43);
      t = f_43;
    }
  else
    {
      t = a_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_43;
    }
  return(t);
}
ATerm r_11 (ATerm t)
{
  ATerm i_44 = NULL;
  ATerm d_43 = t;
  int e_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_44 = ATgetArgument(t, 0);
          {
            ATerm g_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_43);
      t = i_44;
    }
  else
    {
      t = d_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_44;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm p_41 = NULL,v_41 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      v_41 = ATgetArgument(t, 0);
      t = v_41;
      if(match_cons(t, sym_Rule_3))
        {
          p_41 = ATgetArgument(t, 0);
          {
            ATerm h_43 = ATgetArgument(t, 1);
          }
          {
            ATerm i_43 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = p_41;
      t = free_vars_3_0(k_11, m_11, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          v_41 = ATgetArgument(t, 0);
          {
            ATerm j_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = v_41;
    }
  return(t);
}
ATerm b_26 (ATerm m_118 (ATerm), ATerm e_32, ATerm d_32, ATerm t)
{
  ATerm p_45 (ATerm t)
  {
    ATerm i_45 = NULL,l_45 = NULL,m_45 = NULL;
    i_45 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_32;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_45 = ATgetFirst((ATermList) t);
            m_45 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm k_43 = t;
          int l_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_45;
              {
                ATerm s_11 (ATerm t)
                {
                  t = d_32;
                  return(t);
                }
                t = f_26(m_118, s_11, l_45, m_45, t);
                t = p_45(t);
              }
              ;
              LocalPopChoice(l_43);
            }
          else
            {
              t = k_43;
              {
                ATerm m_43 = NULL,p_43 = NULL,j_11 = NULL;
                t = SSLgetAnnotations(i_45);
                m_43 = t;
                t = m_45;
                t = p_45(t);
                p_43 = t;
                t = (ATerm) ATinsert(CheckATermList(p_43), l_45);
                j_11 = t;
                t = SSLsetAnnotations(j_11, m_43);
              }
            }
        }
      }
    return(t);
  }
  t = e_32;
  t = p_45(t);
  return(t);
}
ATerm f_26 (ATerm p_118 (ATerm), ATerm q_118 (ATerm), ATerm i_32, ATerm h_32, ATerm t)
{
  t = q_118(t);
  {
    ATerm u_11 (ATerm t)
    {
      ATerm d_46 = NULL;
      d_46 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_32, d_46);
      t = p_118(t);
      return(t);
    }
    t = fetch_1_0(u_11, t);
    t = h_32;
  }
  return(t);
}
ATerm g_26 (ATerm h_118 (ATerm), ATerm c_32, ATerm b_32, ATerm t)
{
  ATerm q_47 (ATerm t)
  {
    ATerm c_47 = NULL,e_47 = NULL,i_47 = NULL;
    c_47 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_47;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_47 = ATgetFirst((ATermList) t);
            i_47 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm n_43 = t;
          int o_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_47;
              {
                ATerm x_11 (ATerm t)
                {
                  t = b_32;
                  return(t);
                }
                t = f_26(h_118, x_11, e_47, i_47, t);
                t = q_47(t);
              }
              ;
              LocalPopChoice(o_43);
            }
          else
            {
              t = n_43;
              {
                ATerm a_44 = NULL,d_44 = NULL,l_11 = NULL;
                t = SSLgetAnnotations(c_47);
                a_44 = t;
                t = i_47;
                t = q_47(t);
                d_44 = t;
                t = (ATerm) ATinsert(CheckATermList(d_44), e_47);
                l_11 = t;
                t = SSLsetAnnotations(l_11, a_44);
              }
            }
        }
      }
    return(t);
  }
  t = c_32;
  t = q_47(t);
  return(t);
}
ATerm genzip_4_0 (ATerm l_116 (ATerm), ATerm m_116 (ATerm), ATerm n_116 (ATerm), ATerm o_116 (ATerm), ATerm t)
{
  ATerm c_185 (ATerm t)
  {
    ATerm q_43 = t;
    int r_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_116(t);
        ;
        LocalPopChoice(r_43);
      }
    else
      {
        t = q_43;
        {
          ATerm w_184 = NULL,x_184 = NULL,y_184 = NULL,z_184 = NULL,a_185 = NULL,b_185 = NULL,n_11 = NULL;
          t = m_116(t);
          b_185 = t;
          if(match_cons(t, sym__2))
            {
              x_184 = ATgetArgument(t, 0);
              y_184 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(b_185);
          w_184 = t;
          t = x_184;
          t = o_116(t);
          z_184 = t;
          t = y_184;
          t = c_185(t);
          a_185 = t;
          t = (ATerm) ATmakeAppl(sym__2, z_184, a_185);
          n_11 = t;
          t = SSLsetAnnotations(n_11, w_184);
          t = n_116(t);
        }
      }
    return(t);
  }
  t = c_185(t);
  return(t);
}
ATerm y_11 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_43 = ATgetArgument(t, 0);
      if(((ATgetType(s_43) != AT_LIST) || !(ATisEmpty(s_43))))
        _fail(t);
      {
        ATerm t_43 = ATgetArgument(t, 1);
        if(((ATgetType(t_43) != AT_LIST) || !(ATisEmpty(t_43))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm a_12 (ATerm t)
{
  ATerm z_47 = NULL,a_48 = NULL,b_48 = NULL,e_48 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_43 = ATgetArgument(t, 0);
      if(((ATgetType(u_43) == AT_LIST) && !(ATisEmpty(u_43))))
        {
          z_47 = ATgetFirst((ATermList) u_43);
          a_48 = (ATerm) ATgetNext((ATermList) u_43);
        }
      else
        _fail(t);
      {
        ATerm v_43 = ATgetArgument(t, 1);
        if(((ATgetType(v_43) == AT_LIST) && !(ATisEmpty(v_43))))
          {
            b_48 = ATgetFirst((ATermList) v_43);
            e_48 = (ATerm) ATgetNext((ATermList) v_43);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_47, b_48), (ATerm) ATmakeAppl(sym__2, a_48, e_48));
  return(t);
}
ATerm c_12 (ATerm t)
{
  ATerm g_48 = NULL,h_48 = NULL;
  if(match_cons(t, sym__2))
    {
      g_48 = ATgetArgument(t, 0);
      h_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_48), g_48);
  return(t);
}
ATerm i_26 (ATerm h_600, ATerm m_600, ATerm y_59, ATerm t)
{
  ATerm u_47 = NULL,v_47 = NULL,w_47 = NULL,x_47 = NULL;
  t = SSL_explode_term(m_600);
  if(match_cons(t, sym__2))
    {
      u_47 = ATgetArgument(t, 0);
      w_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(h_600);
  if(match_cons(t, sym__2))
    {
      if((u_47 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      v_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_47, w_47);
  t = genzip_4_0(y_11, a_12, c_12, _id, t);
  x_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_47, y_59);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm i_108 (ATerm), ATerm j_108 (ATerm), ATerm t)
{
  ATerm x_159 (ATerm t)
  {
    ATerm w_43 = t;
    int x_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_108(t);
        ;
        LocalPopChoice(x_43);
      }
    else
      {
        t = w_43;
        t = j_108(t);
        t = x_159(t);
      }
    return(t);
  }
  t = x_159(t);
  return(t);
}
ATerm for_3_0 (ATerm l_108 (ATerm), ATerm m_108 (ATerm), ATerm n_108 (ATerm), ATerm t)
{
  t = l_108(t);
  t = while_not_2_0(m_108, n_108, t);
  return(t);
}
ATerm f_12 (ATerm t)
{
  ATerm z_48 = NULL;
  z_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, z_48);
  return(t);
}
ATerm g_12 (ATerm t)
{
  ATerm a_49 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL,p_11 = NULL;
  d_49 = t;
  if(match_cons(t, sym__2))
    {
      b_49 = ATgetArgument(t, 0);
      c_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_49);
  a_49 = t;
  t = c_49;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_49, c_49);
  p_11 = t;
  t = SSLsetAnnotations(p_11, a_49);
  return(t);
}
ATerm i_12 (ATerm t)
{
  ATerm s_50 = NULL,v_50 = NULL,w_50 = NULL,c_51 = NULL,d_51 = NULL;
  s_50 = t;
  if(match_cons(t, sym__2))
    {
      v_50 = ATgetArgument(t, 0);
      w_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_50;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_51 = ATgetFirst((ATermList) t);
      d_51 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_43 = t;
        int z_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_52(v_50, w_50, s_50, t);
            ;
            LocalPopChoice(z_43);
          }
        else
          {
            t = y_43;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_50), c_51), d_51);
          }
      }
    }
  else
    {
      t = i_52(v_50, w_50, s_50, t);
    }
  return(t);
}
ATerm i_52 (ATerm e_49, ATerm f_49, ATerm g_49, ATerm t)
{
  ATerm j_49 = NULL,r_49 = NULL,q_11 = NULL,v_49 = NULL,b_50 = NULL,c_50 = NULL,e_50 = NULL;
  t = SSLgetAnnotations(g_49);
  j_49 = t;
  t = f_49;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_49 = ATgetFirst((ATermList) t);
      e_50 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_49;
  if(match_cons(t, sym__2))
    {
      b_50 = ATgetArgument(t, 0);
      c_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_44 = t;
    int c_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_50;
        if((b_50 != t))
          {
            _fail(t);
          }
        t = e_50;
        ;
        LocalPopChoice(c_44);
      }
    else
      {
        t = b_44;
        t = f_49;
        t = i_26(b_50, c_50, e_50, t);
      }
    r_49 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_49, r_49);
    q_11 = t;
    t = SSLsetAnnotations(q_11, j_49);
  }
  return(t);
}
ATerm k_12 (ATerm t)
{
  ATerm d_52 = NULL;
  if(match_cons(t, sym__2))
    {
      d_52 = ATgetArgument(t, 0);
      if((d_52 != ATgetArgument(t, 1)))
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
  ATerm e_44 = t;
  int f_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(f_12, g_12, i_12, t);
      ;
      LocalPopChoice(f_44);
    }
  else
    {
      t = e_44;
      {
        ATerm m_51 = NULL,n_51 = NULL,t_51 = NULL;
        m_51 = t;
        if(match_cons(t, sym__2))
          {
            n_51 = ATgetArgument(t, 0);
            t_51 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_51;
        t = g_26(k_12, n_51, t_51, t);
      }
    }
  return(t);
}
ATerm t_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_12 (ATerm t)
{
  ATerm r_44 = NULL,w_44 = NULL;
  if(match_cons(t, sym__2))
    {
      r_44 = ATgetArgument(t, 0);
      w_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_26(z_12, r_44, w_44, t);
  return(t);
}
ATerm z_12 (ATerm t)
{
  ATerm x_44 = NULL;
  if(match_cons(t, sym__2))
    {
      x_44 = ATgetArgument(t, 0);
      if((x_44 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm a_13 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm d_13 (ATerm t)
{
  ATerm j_45 = NULL,k_45 = NULL;
  if(match_cons(t, sym__2))
    {
      j_45 = ATgetArgument(t, 0);
      k_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_26(e_13, j_45, k_45, t);
  return(t);
}
ATerm e_13 (ATerm t)
{
  ATerm t_45 = NULL;
  if(match_cons(t, sym__2))
    {
      t_45 = ATgetArgument(t, 0);
      if((t_45 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm t_135 (ATerm), ATerm u_135 (ATerm), ATerm v_135 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm g_53 (ATerm t)
  {
    ATerm g_44 = t;
    int h_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_135(t);
        ;
        LocalPopChoice(h_44);
      }
    else
      {
        t = g_44;
        {
          ATerm l_44 = t;
          int m_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_52 = NULL,l_52 = NULL,j_44 = NULL,k_44 = NULL;
              k_52 = t;
              t = u_135(t);
              l_52 = t;
              t = k_52;
              {
                ATerm r_12 (ATerm t)
                {
                  ATerm n_52 = NULL;
                  t = g_53(t);
                  n_52 = t;
                  t = (ATerm) ATmakeAppl(sym__2, n_52, l_52);
                  t = diff_0_0(t);
                  return(t);
                }
                t = v_135(r_12, g_53, t_12, t);
                k_44 = t;
                t = SSL_explode_term(k_44);
                if(match_cons(t, sym__2))
                  {
                    ATerm n_44 = ATgetArgument(t, 0);
                    j_44 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = j_44;
                t = foldr_3_0(x_12, y_12, _id, t);
              }
              ;
              LocalPopChoice(m_44);
            }
          else
            {
              t = l_44;
              {
                ATerm a_45 = NULL,b_45 = NULL;
                b_45 = t;
                t = SSL_explode_term(b_45);
                if(match_cons(t, sym__2))
                  {
                    ATerm o_44 = ATgetArgument(t, 0);
                    a_45 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = a_45;
                t = foldr_3_0(a_13, d_13, g_53, t);
              }
            }
        }
      }
    return(t);
  }
  t = g_53(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm s_108 (ATerm), ATerm t)
{
  ATerm g_13 (ATerm t)
  {
    t = bottomup_1_0(s_108, t);
    return(t);
  }
  t = SRTS_all(g_13, t);
  t = s_108(t);
  return(t);
}
ATerm h_13 (ATerm t)
{
  t = bottomup_1_0(i_13, t);
  t = DeclareVariables_0_0(t);
  t = desugar_0_0(t);
  t = strename_0_0(t);
  return(t);
}
ATerm i_13 (ATerm t)
{
  ATerm d_54 = NULL,g_54 = NULL,k_54 = NULL,n_54 = NULL,o_54 = NULL;
  o_54 = t;
  if(match_cons(t, sym_LRule_1))
    {
      n_54 = ATgetArgument(t, 0);
      t = n_54;
      if(match_cons(t, sym_Rule_3))
        {
          d_54 = ATgetArgument(t, 0);
          g_54 = ATgetArgument(t, 1);
          k_54 = ATgetArgument(t, 2);
          {
            ATerm p_44 = t;
            int q_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_54 = NULL;
                t = d_54;
                t = free_vars_3_0(j_13, k_13, tboundin_3_0, t);
                s_54 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, s_54, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, d_54, g_54, k_54)));
                ;
                LocalPopChoice(q_44);
              }
            else
              {
                t = p_44;
                t = o_54;
              }
          }
        }
      else
        {
          t = o_54;
        }
    }
  else
    {
      if(match_cons(t, sym_ScopeDefault_1))
        {
          n_54 = ATgetArgument(t, 0);
          {
            ATerm s_44 = t;
            int t_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_57 = NULL;
                t = n_54;
                t = free_vars_3_0(n_13, o_13, tboundin_3_0, t);
                p_57 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, p_57, n_54);
                ;
                LocalPopChoice(t_44);
              }
            else
              {
                t = s_44;
                t = o_54;
              }
          }
        }
      else
        {
          t = o_54;
        }
    }
  return(t);
}
ATerm j_13 (ATerm t)
{
  ATerm a_55 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_55);
  return(t);
}
ATerm k_13 (ATerm t)
{
  ATerm u_44 = t;
  int v_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(v_44);
    }
  else
    {
      t = u_44;
      {
        ATerm c_55 = NULL,d_55 = NULL,e_55 = NULL,g_55 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            c_55 = ATgetArgument(t, 0);
            t = c_55;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                c_55 = ATgetArgument(t, 0);
                d_55 = ATgetArgument(t, 1);
                e_55 = ATgetArgument(t, 2);
                g_55 = ATgetArgument(t, 3);
                t = e_55;
                t = map_1_0(l_13, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    c_55 = ATgetArgument(t, 0);
                    d_55 = ATgetArgument(t, 1);
                    e_55 = ATgetArgument(t, 2);
                    g_55 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = e_55;
                t = map_1_0(m_13, t);
              }
          }
      }
    }
  return(t);
}
ATerm l_13 (ATerm t)
{
  ATerm w_55 = NULL;
  ATerm y_44 = t;
  int z_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_55 = ATgetArgument(t, 0);
          {
            ATerm c_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_44);
      t = w_55;
    }
  else
    {
      t = y_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_55;
    }
  return(t);
}
ATerm m_13 (ATerm t)
{
  ATerm l_56 = NULL;
  ATerm d_45 = t;
  int e_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_56 = ATgetArgument(t, 0);
          {
            ATerm f_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_45);
      t = l_56;
    }
  else
    {
      t = d_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_56;
    }
  return(t);
}
ATerm n_13 (ATerm t)
{
  ATerm t_57 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      t_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, t_57);
  return(t);
}
ATerm o_13 (ATerm t)
{
  ATerm g_45 = t;
  int h_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(h_45);
    }
  else
    {
      t = g_45;
      {
        ATerm i_58 = NULL,j_58 = NULL,k_58 = NULL,l_58 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            i_58 = ATgetArgument(t, 0);
            t = i_58;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                i_58 = ATgetArgument(t, 0);
                j_58 = ATgetArgument(t, 1);
                k_58 = ATgetArgument(t, 2);
                l_58 = ATgetArgument(t, 3);
                t = k_58;
                t = map_1_0(p_13, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    i_58 = ATgetArgument(t, 0);
                    j_58 = ATgetArgument(t, 1);
                    k_58 = ATgetArgument(t, 2);
                    l_58 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = k_58;
                t = map_1_0(q_13, t);
              }
          }
      }
    }
  return(t);
}
ATerm p_13 (ATerm t)
{
  ATerm c_59 = NULL;
  ATerm n_45 = t;
  int o_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_59 = ATgetArgument(t, 0);
          {
            ATerm q_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_45);
      t = c_59;
    }
  else
    {
      t = n_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_59;
    }
  return(t);
}
ATerm q_13 (ATerm t)
{
  ATerm q_60 = NULL;
  ATerm u_45 = t;
  int v_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_60 = ATgetArgument(t, 0);
          {
            ATerm w_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_45);
      t = q_60;
    }
  else
    {
      t = u_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_60;
    }
  return(t);
}
ATerm k_26 (ATerm e_143, ATerm t)
{
  t = e_143;
  t = map_1_0(h_13, t);
  t = define_strategies_0_0(t);
  return(t);
}
ATerm h_28 (ATerm x_42, ATerm y_42, ATerm t)
{
  ATerm x_45 = t;
  int y_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(x_42, y_42);
      ;
      LocalPopChoice(y_45);
    }
  else
    {
      t = x_45;
      t = SSL_addr(x_42, y_42);
    }
  return(t);
}
ATerm foldr_3_0 (ATerm n_120 (ATerm), ATerm o_120 (ATerm), ATerm p_120 (ATerm), ATerm t)
{
  ATerm m_168 = NULL,n_168 = NULL,o_168 = NULL;
  m_168 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_168;
      t = n_120(t);
    }
  else
    {
      ATerm v_168 = NULL,x_168 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_168 = ATgetFirst((ATermList) t);
          o_168 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_168;
      t = p_120(t);
      v_168 = t;
      t = o_168;
      t = foldr_3_0(n_120, o_120, p_120, t);
      x_168 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_168, x_168);
      t = o_120(t);
    }
  return(t);
}
ATerm r_13 (ATerm t)
{
  ATerm v_60 = NULL,w_60 = NULL,d_61 = NULL,e_61 = NULL,c_62 = NULL,d_62 = NULL;
  v_60 = t;
  if(match_cons(t, sym_SDef_3))
    {
      w_60 = ATgetArgument(t, 0);
      d_61 = ATgetArgument(t, 1);
      {
        ATerm e_46 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = d_61;
  t = foldr_3_0(s_13, t_13, u_13, t);
  e_61 = t;
  t = term_u_17;
  c_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_60, e_61);
  d_62 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_u_17, (ATerm)ATmakeAppl(sym__2, w_60, e_61), v_60);
  t = e_29(c_62, d_62, v_60, t);
  return(t);
}
ATerm s_13 (ATerm t)
{
  t = term_a_22;
  return(t);
}
ATerm t_13 (ATerm t)
{
  ATerm e_62 = NULL,f_62 = NULL;
  if(match_cons(t, sym__2))
    {
      e_62 = ATgetArgument(t, 0);
      f_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_28(e_62, f_62, t);
  return(t);
}
ATerm u_13 (ATerm t)
{
  t = term_c_22;
  return(t);
}
ATerm define_strategies_0_0 (ATerm t)
{
  t = map_1_0(r_13, t);
  return(t);
}
ATerm l_26 (ATerm q_51, ATerm r_51, ATerm t)
{
  t = SSL_execvp(q_51, r_51);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm y_63 = NULL,i_66 = NULL,u_66 = NULL,v_66 = NULL;
  y_63 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      i_66 = ATgetArgument(t, 0);
      {
        ATerm b_46 = NULL,c_46 = NULL;
        t = SSL_int_to_string(i_66);
        b_46 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_46), b_46), term_f_46);
        c_46 = t;
        t = SSL_concat_strings(c_46);
      }
    }
  else
    {
      ATerm r_46 = NULL,t_46 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          i_66 = ATgetArgument(t, 0);
          u_66 = ATgetArgument(t, 1);
          v_66 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(u_66);
      r_46 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_66), term_i_46), r_46), term_h_46), i_66);
      t_46 = t;
      t = SSL_concat_strings(t_46);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm u_114 (ATerm), ATerm t)
{
  ATerm z_66 = NULL;
  ATerm v_13 (ATerm t)
  {
    t = u_114(t);
    if(((z_66 != NULL) && (z_66 != t)))
      _fail(t);
    else
      z_66 = t;
    return(t);
  }
  t = fetch_1_0(v_13, t);
  t = not_null(z_66);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm a_67 = NULL;
  a_67 = t;
  {
    ATerm j_46 = t;
    int k_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_13 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm l_46 = ATgetArgument(t, 0);
              if((a_67 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm m_46 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_53), term_n_53), term_j_53), term_d_53), term_z_52), term_v_52), term_r_52), term_j_52), term_e_52), term_z_51), term_s_51), term_k_51), term_g_51), term_z_50), term_q_50), term_k_50), term_f_50), term_y_49), term_t_49), term_m_49), term_w_48), term_o_48), term_d_48), term_n_47), term_j_47), term_z_46), term_v_46), term_p_46);
        t = fetch_elem_1_0(w_13, t);
        ;
        LocalPopChoice(k_46);
      }
    else
      {
        t = j_46;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, a_67);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm g_67 = NULL,y_67 = NULL;
  g_67 = t;
  {
    ATerm t_53 = t;
    int u_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm v_53 = ATgetArgument(t, 0);
            y_67 = ATgetArgument(t, 1);
            {
              ATerm w_53 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(u_53);
        {
          ATerm x_53 = t;
          int y_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_47 = NULL,g_47 = NULL,h_47 = NULL;
              t = y_67;
              {
                ATerm z_53 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = z_53;
                  }
                t = signal_from_number_0_0(t);
                t = signal_to_descr_0_0(t);
                d_47 = t;
                t = term_i_22;
                g_47 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, d_47), term_b_54);
                h_47 = t;
                t = SSL_printnl(g_47, h_47);
                t = (ATerm) ATmakeAppl(sym__2, term_i_22, (ATerm) ATinsert(ATinsert(ATempty, d_47), term_b_54));
              }
              ;
              LocalPopChoice(y_53);
            }
          else
            {
              t = x_53;
              t = g_67;
            }
        }
      }
    else
      {
        t = t_53;
        t = g_67;
      }
    t = g_67;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm c_130 (ATerm), ATerm t)
{
  ATerm s_68 = NULL,t_68 = NULL;
  t_68 = t;
  t = fork_0_0(t);
  s_68 = t;
  {
    ATerm c_54 = t;
    int e_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = t_68;
        t = c_130(t);
        ;
        LocalPopChoice(e_54);
      }
    else
      {
        t = c_54;
        t = SSL_waitpid(s_68);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm f_54 = ATgetArgument(t, 0);
            if(((ATgetType(f_54) != AT_INT) || (ATgetInt((ATermInt) f_54) != 0)))
              _fail(t);
            {
              ATerm h_54 = ATgetArgument(t, 1);
            }
            {
              ATerm i_54 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = t_68;
      }
  }
  return(t);
}
ATerm call_sc_0_0 (ATerm t)
{
  ATerm w_68 = NULL,x_68 = NULL,y_68 = NULL;
  w_68 = t;
  {
    ATerm j_54 = t;
    int l_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_68 = NULL,a_69 = NULL,b_69 = NULL,z_69 = NULL;
        t = term_p_29;
        t = get_config_0_0(t);
        t = term_m_54;
        z_69 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_m_54, w_68);
        t = c_29(z_69, w_68, t);
        z_68 = t;
        t = term_i_22;
        a_69 = t;
        t = (ATerm) ATinsert(ATempty, z_68);
        b_69 = t;
        t = SSL_printnl(a_69, b_69);
        t = w_68;
        ;
        LocalPopChoice(l_54);
      }
    else
      {
        t = j_54;
      }
    t = term_p_54;
    t = get_config_0_0(t);
    x_68 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_q_54, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(x_68), term_t_54), w_68), term_r_54));
    {
      ATerm x_13 (ATerm t)
      {
        ATerm c_70 = NULL,d_70 = NULL,e_70 = NULL,f_70 = NULL;
        t = term_i_22;
        e_70 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_q_54, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(x_68), term_t_54), w_68), term_r_54)));
        f_70 = t;
        t = SSL_printnl(e_70, f_70);
        t = term_q_54;
        c_70 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(x_68), term_t_54), w_68), term_r_54);
        d_70 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_q_54, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(x_68), term_t_54), w_68), term_r_54));
        t = l_26(c_70, d_70, t);
        return(t);
      }
      t = fork_and_wait_1_0(x_13, t);
      t = term_w_54;
      y_68 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_68, term_w_54);
      t = c_29(w_68, y_68, t);
      t = ReadFromFile_0_0(t);
    }
  }
  return(t);
}
ATerm eval_import_0_0 (ATerm t)
{
  ATerm h_70 = NULL;
  ATerm x_54 = t;
  int y_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Imports_1))
        {
          ATerm z_54 = ATgetArgument(t, 0);
          if(((ATgetType(z_54) != AT_LIST) || !(ATisEmpty(z_54))))
            _fail(t);
        }
      else
        _fail(t);
      LocalPopChoice(y_54);
    }
  else
    {
      t = x_54;
      {
        ATerm b_55 = t;
        int f_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Imports_1))
              {
                ATerm h_55 = ATgetArgument(t, 0);
                if(((ATgetType(h_55) == AT_LIST) && !(ATisEmpty(h_55))))
                  {
                    h_70 = ATgetFirst((ATermList) h_55);
                    {
                      ATerm i_55 = (ATerm) ATgetNext((ATermList) h_55);
                      if(((ATgetType(i_55) != AT_LIST) || !(ATisEmpty(i_55))))
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            LocalPopChoice(f_55);
            {
              ATerm o_70 = NULL;
              t = h_70;
              t = call_sc_0_0(t);
              if(match_cons(t, sym_Specification_1))
                {
                  ATerm j_55 = ATgetArgument(t, 0);
                  if(((ATgetType(j_55) == AT_LIST) && !(ATisEmpty(j_55))))
                    {
                      ATerm k_55 = ATgetFirst((ATermList) j_55);
                      if(match_cons(k_55, sym_Signature_1))
                        {
                          ATerm r_55 = ATgetArgument(k_55, 0);
                        }
                      else
                        _fail(t);
                      {
                        ATerm q_55 = (ATerm) ATgetNext((ATermList) j_55);
                        if(((ATgetType(q_55) == AT_LIST) && !(ATisEmpty(q_55))))
                          {
                            ATerm s_55 = ATgetFirst((ATermList) q_55);
                            if(match_cons(s_55, sym_Strategies_1))
                              {
                                o_70 = ATgetArgument(s_55, 0);
                              }
                            else
                              _fail(t);
                            {
                              ATerm t_55 = (ATerm) ATgetNext((ATermList) q_55);
                              if(((ATgetType(t_55) != AT_LIST) || !(ATisEmpty(t_55))))
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
              t = o_70;
              t = define_strategies_0_0(t);
            }
          }
        else
          {
            t = b_55;
            {
              ATerm p_70 = NULL,r_70 = NULL,s_70 = NULL;
              if(match_cons(t, sym_Imports_1))
                {
                  ATerm u_55 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = term_i_22;
              r_70 = t;
              t = (ATerm) ATinsert(ATempty, term_v_55);
              s_70 = t;
              t = SSL_printnl(r_70, s_70);
              t = term_c_22;
              p_70 = t;
              t = SSL_exit(p_70);
              t = (ATerm) ATinsert(ATempty, term_v_55);
            }
          }
      }
    }
  return(t);
}
ATerm n_26 (ATerm p_56, ATerm o_56, ATerm t)
{
  ATerm y_13 (ATerm t)
  {
    ATerm t_70 = NULL,u_70 = NULL;
    if(match_cons(t, sym__2))
      {
        t_70 = ATgetArgument(t, 0);
        u_70 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_table_put(p_56, t_70, u_70);
    t = (ATerm) ATmakeAppl(sym__3, p_56, t_70, u_70);
    return(t);
  }
  t = o_56;
  t = map_1_0(y_13, t);
  return(t);
}
ATerm o_26 (ATerm r_45, ATerm s_45, ATerm t)
{
  t = SSL_access(r_45, s_45);
  return(t);
}
ATerm p_26 (ATerm l_25, ATerm t)
{
  ATerm d_71 = NULL,e_71 = NULL,f_71 = NULL,g_71 = NULL,j_72 = NULL,t_71 = NULL;
  t_71 = t;
  {
    ATerm c_56 = t;
    int d_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_47 = NULL,p_47 = NULL,r_47 = NULL,t_47 = NULL;
        t = term_p_29;
        t = get_config_0_0(t);
        t = term_e_56;
        t_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_e_56, l_25);
        t = c_29(t_47, l_25, t);
        o_47 = t;
        t = term_i_22;
        p_47 = t;
        t = (ATerm) ATinsert(ATempty, o_47);
        r_47 = t;
        t = SSL_printnl(p_47, r_47);
        t = t_71;
        ;
        LocalPopChoice(d_56);
      }
    else
      {
        t = c_56;
        t = t_71;
      }
    t = l_25;
    {
      ATerm f_56 = t;
      int g_56 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_71 = NULL;
          t = (ATerm) ATinsert(ATempty, term_h_56);
          v_71 = t;
          t = (ATerm) ATmakeAppl(sym__2, l_25, (ATerm) ATinsert(ATempty, term_h_56));
          t = o_26(l_25, v_71, t);
          ;
          LocalPopChoice(g_56);
        }
      else
        {
          t = f_56;
          {
            ATerm w_71 = NULL,x_71 = NULL,y_71 = NULL;
            t = term_i_22;
            x_71 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_56), l_25), term_i_56);
            y_71 = t;
            t = SSL_printnl(x_71, y_71);
            t = term_c_22;
            w_71 = t;
            t = SSL_exit(w_71);
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_56), l_25), term_i_56);
          }
        }
      t = l_25;
      t = ReadFromFile_0_0(t);
      if(match_cons(t, sym_StrategoDump_2))
        {
          d_71 = ATgetArgument(t, 0);
          e_71 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = term_v_17;
      g_71 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_v_17, d_71);
      t = n_26(g_71, d_71, t);
      t = term_u_17;
      f_71 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_u_17, e_71);
      t = n_26(f_71, e_71, t);
      j_72 = t;
      {
        ATerm k_56 = t;
        int n_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_48 = NULL,k_48 = NULL,l_48 = NULL,m_48 = NULL;
            t = term_p_29;
            t = get_config_0_0(t);
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_56), l_25), term_q_56);
            m_48 = t;
            t = SSL_concat_strings(m_48);
            j_48 = t;
            t = term_i_22;
            k_48 = t;
            t = (ATerm) ATinsert(ATempty, j_48);
            l_48 = t;
            t = SSL_printnl(k_48, l_48);
            t = j_72;
            ;
            LocalPopChoice(n_56);
          }
        else
          {
            t = k_56;
            t = j_72;
          }
      }
    }
  }
  return(t);
}
ATerm q_26 (ATerm h_49, ATerm i_49, ATerm t)
{
  ATerm o_72 = NULL;
  t = SSL_write_term_to_stream_baf(h_49, i_49);
  o_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_72);
  return(t);
}
ATerm r_26 (ATerm f_127 (ATerm), ATerm r_444, ATerm p_49, ATerm t)
{
  ATerm t_72 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, r_444, term_s_56);
  t = open_stream_0_0(t);
  t_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_72, p_49);
  t = f_127(t);
  t = fclose_0_0(t);
  t = p_49;
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm u_72 = NULL;
  ATerm z_13 (ATerm t)
  {
    ATerm v_72 = NULL,w_72 = NULL;
    v_72 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_72), v_72);
    t = d_29(not_null(u_72), v_72, t);
    w_72 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_72, w_72);
    return(t);
  }
  if(((u_72 != NULL) && (u_72 != t)))
    _fail(t);
  else
    u_72 = t;
  t = SSL_table_keys(u_72);
  t = map_1_0(z_13, t);
  return(t);
}
ATerm a_14 (ATerm t)
{
  ATerm c_73 = NULL,j_73 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_56 = ATgetArgument(t, 0);
      if(match_cons(t_56, sym_Stream_1))
        {
          c_73 = ATgetArgument(t_56, 0);
        }
      else
        _fail(t);
      j_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_26(c_73, j_73, t);
  return(t);
}
ATerm s_26 (ATerm i_25, ATerm t)
{
  ATerm z_72 = NULL,a_73 = NULL,b_73 = NULL,e_74 = NULL;
  t = term_v_17;
  t = table_getlist_0_0(t);
  z_72 = t;
  t = term_u_17;
  t = table_getlist_0_0(t);
  a_73 = t;
  t = (ATerm) ATmakeAppl(sym_StrategoDump_2, z_72, a_73);
  b_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_25, (ATerm) ATmakeAppl(sym_StrategoDump_2, z_72, a_73));
  t = r_26(a_14, i_25, b_73, t);
  e_74 = t;
  {
    ATerm u_56 = t;
    int v_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_48 = NULL,r_48 = NULL,s_48 = NULL,t_48 = NULL;
        t = term_p_29;
        t = get_config_0_0(t);
        t = term_w_56;
        t_48 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_w_56, i_25);
        t = c_29(t_48, i_25, t);
        q_48 = t;
        t = term_i_22;
        r_48 = t;
        t = (ATerm) ATinsert(ATempty, q_48);
        s_48 = t;
        t = SSL_printnl(r_48, s_48);
        t = e_74;
        ;
        LocalPopChoice(v_56);
      }
    else
      {
        t = u_56;
        t = e_74;
      }
  }
  return(t);
}
ATerm t_194 (ATerm w_193, ATerm x_193, ATerm y_193, ATerm t)
{
  ATerm z_193 = NULL,c_194 = NULL,s_157 = NULL,t_157 = NULL,t_11 = NULL;
  t = SSLgetAnnotations(y_193);
  z_193 = t;
  t = w_193;
  {
    ATerm x_56 = t;
    int y_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_194 = NULL;
        if(match_cons(t, sym_Dump_1))
          {
            f_194 = ATgetArgument(t, 0);
            t = w_193;
            t = s_26(f_194, t);
          }
        else
          {
            if(match_cons(t, sym_Load_1))
              {
                f_194 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = w_193;
            t = p_26(f_194, t);
          }
        ;
        LocalPopChoice(y_56);
      }
    else
      {
        t = x_56;
        {
          ATerm z_56 = t;
          int a_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = eval_import_0_0(t);
              ;
              LocalPopChoice(a_57);
            }
          else
            {
              t = z_56;
              {
                ATerm j_194 = NULL;
                if(match_cons(t, sym_Strategies_1))
                  {
                    j_194 = ATgetArgument(t, 0);
                    t = w_193;
                    t = k_26(j_194, t);
                  }
                else
                  {
                    if(match_cons(t, sym_Rules_1))
                      {
                        j_194 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = w_193;
                    t = u_24(j_194, t);
                  }
              }
            }
        }
      }
    c_194 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_194, x_193);
    t_11 = t;
    t = SSLsetAnnotations(t_11, z_193);
    t_157 = t;
    t = SSL_explode_term(t_157);
    if(match_cons(t, sym__2))
      {
        ATerm b_57 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) b_57) != ATmakeSymbol("", 0, ATtrue)))
          _fail(t);
        {
          ATerm g_57 = ATgetArgument(t, 1);
          if(((ATgetType(g_57) == AT_LIST) && !(ATisEmpty(g_57))))
            {
              ATerm h_57 = ATgetFirst((ATermList) g_57);
              ATerm i_57 = (ATerm) ATgetNext((ATermList) g_57);
              if(((ATgetType(i_57) == AT_LIST) && !(ATisEmpty(i_57))))
                {
                  s_157 = ATgetFirst((ATermList) i_57);
                  {
                    ATerm j_57 = (ATerm) ATgetNext((ATermList) i_57);
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
    t = s_157;
  }
  return(t);
}
ATerm b_14 (ATerm t)
{
  t = term_k_57;
  return(t);
}
ATerm c_14 (ATerm t)
{
  t = term_l_57;
  return(t);
}
ATerm eval_command_0_0 (ATerm t)
{
  ATerm m_57 = t;
  int n_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_194 = NULL,n_194 = NULL,o_194 = NULL,p_194 = NULL;
      ATerm o_57 = t;
      int q_57 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_193 = NULL;
          u_193 = t;
          t = term_u_19;
          t = get_config_0_0(t);
          t = u_193;
          t = debug_1_0(b_14, t);
          ;
          LocalPopChoice(q_57);
        }
      else
        {
          t = o_57;
        }
      n_194 = t;
      if(match_cons(t, sym__2))
        {
          o_194 = ATgetArgument(t, 0);
          p_194 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = o_194;
      if(match_cons(t, sym_Eval_1))
        {
          m_194 = ATgetArgument(t, 0);
          {
            ATerm r_57 = t;
            int u_57 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = n_194;
                t = w_28(m_194, p_194, t);
                ;
                LocalPopChoice(u_57);
              }
            else
              {
                t = r_57;
                t = t_194(o_194, p_194, n_194, t);
              }
          }
        }
      else
        {
          t = t_194(o_194, p_194, n_194, t);
        }
      ;
      LocalPopChoice(n_57);
    }
  else
    {
      t = m_57;
      {
        ATerm s_194 = NULL;
        t = debug_1_0(c_14, t);
        t = term_c_22;
        s_194 = t;
        t = SSL_exit(s_194);
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm t_107 (ATerm), ATerm t)
{
  ATerm x_194 (ATerm t)
  {
    ATerm v_57 = t;
    int w_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_107(t);
        t = x_194(t);
        ;
        LocalPopChoice(w_57);
      }
    else
      {
        t = v_57;
      }
    return(t);
  }
  t = x_194(t);
  return(t);
}
ATerm d_14 (ATerm t)
{
  ATerm y_194 = NULL,z_194 = NULL,a_195 = NULL,b_195 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_57 = ATgetArgument(t, 0);
      if(((ATgetType(y_57) == AT_LIST) && !(ATisEmpty(y_57))))
        {
          y_194 = ATgetFirst((ATermList) y_57);
          z_194 = (ATerm) ATgetNext((ATermList) y_57);
        }
      else
        _fail(t);
      a_195 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_194, a_195);
  t = eval_command_0_0(t);
  b_195 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_194, b_195);
  return(t);
}
ATerm evaluate_commands_0_0 (ATerm t)
{
  t = repeat_1_0(d_14, t);
  return(t);
}
ATerm p_195 (ATerm j_195, ATerm t)
{
  t = SSL_fclose(j_195);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_195 = NULL,n_195 = NULL;
  n_195 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_195 = ATgetArgument(t, 0);
      {
        ATerm z_57 = t;
        int b_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(m_195);
            ;
            LocalPopChoice(b_58);
          }
        else
          {
            t = z_57;
            t = p_195(n_195, t);
          }
      }
    }
  else
    {
      t = p_195(n_195, t);
    }
  return(t);
}
ATerm x_28 (ATerm n_49, ATerm t)
{
  t = SSL_read_term_from_stream(n_49);
  return(t);
}
ATerm y_28 (ATerm z_45, ATerm a_46, ATerm t)
{
  ATerm q_195 = NULL;
  t = SSL_fopen(z_45, a_46);
  q_195 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_195);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm r_195 = NULL;
  t = SSL_stdin_stream();
  r_195 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_195);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm s_195 = NULL;
  t = SSL_stdout_stream();
  s_195 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_195);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm t_195 = NULL;
  t = SSL_stderr_stream();
  t_195 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_195);
  return(t);
}
ATerm a_197 (ATerm z_195, ATerm t)
{
  ATerm a_196 = NULL;
  t = SSL_explode_term(z_195);
  if(match_cons(t, sym__2))
    {
      ATerm c_58 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_58) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_58 = ATgetArgument(t, 1);
        if(((ATgetType(g_58) == AT_LIST) && !(ATisEmpty(g_58))))
          {
            a_196 = ATgetFirst((ATermList) g_58);
            {
              ATerm h_58 = (ATerm) ATgetNext((ATermList) g_58);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = a_196;
  if(match_cons(t, sym_stderr_0))
    {
      t = a_196;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = a_196;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = a_196;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm b_197 (ATerm d_196, ATerm e_196, ATerm f_196, ATerm t)
{
  ATerm g_196 = NULL,h_196 = NULL,i_196 = NULL,l_196 = NULL,v_11 = NULL;
  t = SSLgetAnnotations(f_196);
  i_196 = t;
  t = d_196;
  if(match_cons(t, sym_Path_1))
    {
      l_196 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_196, e_196);
  v_11 = t;
  t = SSLsetAnnotations(v_11, i_196);
  if(match_cons(t, sym__2))
    {
      g_196 = ATgetArgument(t, 0);
      h_196 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_28(g_196, h_196, t);
  return(t);
}
ATerm c_197 (ATerm n_196, ATerm o_196, ATerm p_196, ATerm t)
{
  ATerm q_196 = NULL,r_196 = NULL,s_196 = NULL,v_196 = NULL,w_11 = NULL;
  t = SSLgetAnnotations(p_196);
  s_196 = t;
  t = SSL_is_string(n_196);
  v_196 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_196, o_196);
  w_11 = t;
  t = SSLsetAnnotations(w_11, s_196);
  if(match_cons(t, sym__2))
    {
      q_196 = ATgetArgument(t, 0);
      r_196 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_28(q_196, r_196, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm x_196 = NULL,y_196 = NULL,z_196 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_58 = ATgetArgument(t, 0);
      ATerm n_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  x_196 = t;
  if(match_cons(t, sym__2))
    {
      y_196 = ATgetArgument(t, 0);
      z_196 = ATgetArgument(t, 1);
      {
        ATerm o_58 = t;
        int p_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_197(x_196, t);
            ;
            LocalPopChoice(p_58);
          }
        else
          {
            t = o_58;
            {
              ATerm q_58 = t;
              int r_58 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_197(y_196, z_196, x_196, t);
                  ;
                  LocalPopChoice(r_58);
                }
              else
                {
                  t = q_58;
                  t = c_197(y_196, z_196, x_196, t);
                }
            }
          }
      }
    }
  else
    {
      t = a_197(x_196, t);
    }
  return(t);
}
ATerm e_14 (ATerm t)
{
  t = term_s_58;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm d_197 = NULL,e_197 = NULL,f_197 = NULL;
  ATerm t_58 = t;
  int v_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_197 = NULL;
      g_197 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_197, term_x_58);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(v_58);
    }
  else
    {
      t = t_58;
      t = debug_1_0(e_14, t);
      _fail(t);
    }
  e_197 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_197 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_28(f_197, t);
  d_197 = t;
  t = e_197;
  t = fclose_0_0(t);
  t = d_197;
  return(t);
}
ATerm copyright_0_0 (ATerm t)
{
  ATerm i_197 = NULL,j_197 = NULL,k_197 = NULL,l_197 = NULL,m_197 = NULL,n_197 = NULL,o_197 = NULL,p_197 = NULL,q_197 = NULL,r_197 = NULL,s_197 = NULL,t_197 = NULL,u_197 = NULL,v_197 = NULL,w_197 = NULL,x_197 = NULL,y_197 = NULL;
  w_197 = t;
  t = term_i_22;
  x_197 = t;
  t = (ATerm) ATinsert(ATempty, term_y_58);
  y_197 = t;
  t = SSL_printnl(x_197, y_197);
  t = term_i_22;
  u_197 = t;
  t = (ATerm) ATinsert(ATempty, term_z_58);
  v_197 = t;
  t = SSL_printnl(u_197, v_197);
  t = term_i_22;
  s_197 = t;
  t = (ATerm) ATinsert(ATempty, term_a_59);
  t_197 = t;
  t = SSL_printnl(s_197, t_197);
  t = term_i_22;
  q_197 = t;
  t = (ATerm) ATinsert(ATempty, term_b_59);
  r_197 = t;
  t = SSL_printnl(q_197, r_197);
  t = term_i_22;
  o_197 = t;
  t = (ATerm) ATinsert(ATempty, term_d_59);
  p_197 = t;
  t = SSL_printnl(o_197, p_197);
  t = term_i_22;
  m_197 = t;
  t = (ATerm) ATinsert(ATempty, term_e_59);
  n_197 = t;
  t = SSL_printnl(m_197, n_197);
  t = term_i_22;
  k_197 = t;
  t = (ATerm) ATinsert(ATempty, term_f_59);
  l_197 = t;
  t = SSL_printnl(k_197, l_197);
  t = term_i_22;
  i_197 = t;
  t = (ATerm) ATinsert(ATempty, term_y_58);
  j_197 = t;
  t = SSL_printnl(i_197, j_197);
  t = w_197;
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm h_198 = NULL,i_198 = NULL,j_198 = NULL;
  h_198 = t;
  if(match_cons(t, sym__2))
    {
      i_198 = ATgetArgument(t, 0);
      j_198 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_59 = t;
    int h_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_198;
        if((i_198 != t))
          {
            _fail(t);
          }
        t = h_198;
        ;
        LocalPopChoice(h_59);
      }
    else
      {
        t = g_59;
        t = (ATerm) ATmakeAppl(sym__2, i_198, j_198);
        {
          ATerm m_59 = t;
          int n_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(i_198, j_198);
              ;
              LocalPopChoice(n_59);
            }
          else
            {
              t = m_59;
              t = SSL_gtr(i_198, j_198);
            }
          t = (ATerm) ATmakeAppl(sym__2, i_198, j_198);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm p_128 (ATerm), ATerm t)
{
  ATerm n_198 = NULL;
  n_198 = t;
  {
    ATerm o_59 = t;
    int q_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_198 = NULL;
        t = term_r_59;
        t = get_config_0_0(t);
        p_198 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_198, term_c_22);
        t = geq_0_0(t);
        t = n_198;
        t = p_128(t);
        ;
        LocalPopChoice(q_59);
      }
    else
      {
        t = o_59;
        t = n_198;
      }
  }
  return(t);
}
ATerm at_end_1_0 (ATerm y_114 (ATerm), ATerm t)
{
  ATerm n_199 (ATerm t)
  {
    ATerm k_199 = NULL,l_199 = NULL,m_199 = NULL;
    m_199 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_199 = ATgetFirst((ATermList) t);
        l_199 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm c_160 = NULL,f_160 = NULL,z_11 = NULL;
          t = SSLgetAnnotations(m_199);
          c_160 = t;
          t = l_199;
          t = n_199(t);
          f_160 = t;
          t = (ATerm) ATinsert(CheckATermList(f_160), k_199);
          z_11 = t;
          t = SSLsetAnnotations(z_11, c_160);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = m_199;
        t = y_114(t);
      }
    return(t);
  }
  t = n_199(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm u_198 = NULL,v_198 = NULL,w_198 = NULL;
  u_198 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_198;
    }
  else
    {
      ATerm f_14 (ATerm t)
      {
        t = not_null(w_198);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_198 = ATgetFirst((ATermList) t);
          if(((w_198 != NULL) && (w_198 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            w_198 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_198;
      t = at_end_1_0(f_14, t);
    }
  return(t);
}
ATerm z_199 (ATerm r_199, ATerm t)
{
  ATerm s_199 = NULL;
  t = SSL_explode_term(r_199);
  if(match_cons(t, sym__2))
    {
      ATerm s_59 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_59) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      s_199 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_199;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm u_199 = NULL,v_199 = NULL,w_199 = NULL;
  w_199 = t;
  if(match_cons(t, sym__2))
    {
      u_199 = ATgetArgument(t, 0);
      v_199 = ATgetArgument(t, 1);
      {
        ATerm t_59 = t;
        int u_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_14 (ATerm t)
            {
              t = v_199;
              return(t);
            }
            t = u_199;
            t = at_end_1_0(g_14, t);
            ;
            LocalPopChoice(u_59);
          }
        else
          {
            t = t_59;
            t = z_199(w_199, t);
          }
      }
    }
  else
    {
      t = z_199(w_199, t);
    }
  return(t);
}
ATerm a_29 (ATerm u_50, ATerm t_50, ATerm t)
{
  ATerm a_200 = NULL,b_200 = NULL,c_200 = NULL;
  t = u_50;
  {
    ATerm v_59 = t;
    int w_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(w_59);
      }
    else
      {
        t = v_59;
        t = (ATerm) ATempty;
      }
    b_200 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_50, b_200);
    t = conc_0_0(t);
    a_200 = t;
    t = term_x_59;
    c_200 = t;
    t = SSL_table_put(c_200, u_50, a_200);
    t = (ATerm) ATmakeAppl(sym__3, term_x_59, u_50, a_200);
  }
  return(t);
}
ATerm h_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-I", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_14 (ATerm t)
{
  ATerm d_200 = NULL,e_200 = NULL,f_200 = NULL;
  d_200 = t;
  t = term_p_54;
  e_200 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_200), term_p_54);
  f_200 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_54, (ATerm) ATinsert(ATinsert(ATempty, d_200), term_p_54));
  t = a_29(e_200, f_200, t);
  return(t);
}
ATerm j_14 (ATerm t)
{
  t = term_a_60;
  return(t);
}
ATerm k_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("@version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_14 (ATerm t)
{
  ATerm g_200 = NULL,h_200 = NULL;
  g_200 = t;
  t = term_b_60;
  h_200 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_60, g_200);
  t = g_29(h_200, g_200, t);
  return(t);
}
ATerm m_14 (ATerm t)
{
  t = term_c_60;
  return(t);
}
ATerm n_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-d", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_14 (ATerm t)
{
  ATerm i_200 = NULL,j_200 = NULL,k_200 = NULL,l_200 = NULL;
  t = term_u_19;
  k_200 = t;
  t = term_c_22;
  l_200 = t;
  t = term_d_60;
  t = g_29(k_200, l_200, t);
  t = term_r_59;
  i_200 = t;
  t = term_s_46;
  j_200 = t;
  t = term_h_60;
  t = g_29(i_200, j_200, t);
  return(t);
}
ATerm p_14 (ATerm t)
{
  t = term_i_60;
  return(t);
}
ATerm q_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-t", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_14 (ATerm t)
{
  ATerm m_200 = NULL,n_200 = NULL;
  t = term_p_29;
  m_200 = t;
  t = term_c_22;
  n_200 = t;
  t = term_j_60;
  t = g_29(m_200, n_200, t);
  return(t);
}
ATerm s_14 (ATerm t)
{
  t = term_k_60;
  return(t);
}
ATerm si_options_0_0 (ATerm t)
{
  ATerm l_60 = t;
  int m_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(h_14, i_14, j_14, t);
      ;
      LocalPopChoice(m_60);
    }
  else
    {
      t = l_60;
      {
        ATerm o_60 = t;
        int p_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(k_14, l_14, m_14, t);
            ;
            LocalPopChoice(p_60);
          }
        else
          {
            t = o_60;
            {
              ATerm r_60 = t;
              int s_60 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(n_14, o_14, p_14, t);
                  ;
                  LocalPopChoice(s_60);
                }
              else
                {
                  t = r_60;
                  t = Option_3_0(q_14, r_14, s_14, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm y_14 (ATerm t)
{
  ATerm p_200 = NULL;
  p_200 = t;
  if(match_string(t, "-k"))
    {
      t = p_200;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = p_200;
    }
  return(t);
}
ATerm z_14 (ATerm t)
{
  ATerm q_200 = NULL,r_200 = NULL,s_200 = NULL;
  q_200 = t;
  t = SSL_string_to_int(q_200);
  r_200 = t;
  t = term_t_60;
  s_200 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_60, r_200);
  t = g_29(s_200, r_200, t);
  t = q_200;
  return(t);
}
ATerm a_15 (ATerm t)
{
  t = term_u_60;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_14, z_14, a_15, t);
  return(t);
}
ATerm b_15 (ATerm t)
{
  ATerm u_200 = NULL;
  u_200 = t;
  if(match_string(t, "-S"))
    {
      t = u_200;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = u_200;
    }
  return(t);
}
ATerm c_15 (ATerm t)
{
  ATerm v_200 = NULL,w_200 = NULL;
  t = term_r_59;
  v_200 = t;
  t = term_a_22;
  w_200 = t;
  t = term_x_60;
  t = g_29(v_200, w_200, t);
  t = term_y_60;
  return(t);
}
ATerm d_15 (ATerm t)
{
  t = term_z_60;
  return(t);
}
ATerm f_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_15 (ATerm t)
{
  ATerm x_200 = NULL,y_200 = NULL,z_200 = NULL;
  x_200 = t;
  t = SSL_string_to_int(x_200);
  y_200 = t;
  t = term_r_59;
  z_200 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_59, y_200);
  t = g_29(z_200, y_200, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, x_200);
  return(t);
}
ATerm h_15 (ATerm t)
{
  t = term_a_61;
  return(t);
}
ATerm i_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_15 (ATerm t)
{
  ATerm a_201 = NULL,b_201 = NULL;
  t = term_b_61;
  a_201 = t;
  t = term_c_61;
  b_201 = t;
  t = term_f_61;
  t = g_29(a_201, b_201, t);
  t = term_g_61;
  return(t);
}
ATerm o_15 (ATerm t)
{
  t = term_i_61;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm j_61 = t;
  int k_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_15, c_15, d_15, t);
      ;
      LocalPopChoice(k_61);
    }
  else
    {
      t = j_61;
      {
        ATerm l_61 = t;
        int m_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(f_15, g_15, h_15, t);
            ;
            LocalPopChoice(m_61);
          }
        else
          {
            t = l_61;
            t = Option_3_0(i_15, j_15, o_15, t);
          }
      }
    }
  return(t);
}
ATerm g_29 (ATerm o_50, ATerm p_50, ATerm t)
{
  ATerm c_201 = NULL;
  t = term_x_59;
  c_201 = t;
  t = SSL_table_put(c_201, o_50, p_50);
  t = (ATerm) ATmakeAppl(sym__3, term_x_59, o_50, p_50);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm f_201 = NULL,g_201 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_201 = NULL,i_201 = NULL,j_201 = NULL;
      t = term_c_61;
      t = d_0(t);
      h_201 = t;
      t = term_n_61;
      i_201 = t;
      t = term_o_61;
      j_201 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_61, term_o_61, h_201);
      t = e_29(i_201, j_201, h_201, t);
      _fail(t);
    }
  else
    {
      ATerm m_201 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_201 = ATgetFirst((ATermList) t);
          g_201 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_201;
      t = b_0(t);
      t = term_c_61;
      t = c_0(t);
      m_201 = t;
      t = (ATerm) ATinsert(CheckATermList(g_201), m_201);
    }
  return(t);
}
ATerm r_15 (ATerm t)
{
  ATerm o_201 = NULL;
  o_201 = t;
  if(match_string(t, "-o"))
    {
      t = o_201;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = o_201;
    }
  return(t);
}
ATerm s_15 (ATerm t)
{
  ATerm p_201 = NULL,q_201 = NULL;
  p_201 = t;
  t = term_p_61;
  q_201 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_61, p_201);
  t = g_29(q_201, p_201, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, p_201);
  return(t);
}
ATerm x_15 (ATerm t)
{
  t = term_q_61;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_15, s_15, x_15, t);
  return(t);
}
ATerm e_29 (ATerm m_55, ATerm n_55, ATerm l_55, ATerm t)
{
  ATerm s_201 = NULL,t_201 = NULL,u_201 = NULL;
  s_201 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_55, n_55);
  {
    ATerm r_61 = t;
    int u_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_61 = ATgetArgument(t, 0);
            ATerm w_61 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_55, n_55);
        t = d_29(m_55, n_55, t);
        ;
        LocalPopChoice(u_61);
      }
    else
      {
        t = r_61;
        t = (ATerm) ATempty;
      }
    t_201 = t;
    t = (ATerm) ATinsert(CheckATermList(t_201), l_55);
    u_201 = t;
    t = SSL_table_put(m_55, n_55, u_201);
    t = s_201;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm b_202 = NULL,c_202 = NULL,d_202 = NULL,e_202 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_202 = NULL,g_202 = NULL,h_202 = NULL;
      t = term_c_61;
      t = i_0(t);
      f_202 = t;
      t = term_n_61;
      g_202 = t;
      t = term_o_61;
      h_202 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_61, term_o_61, f_202);
      t = e_29(g_202, h_202, f_202, t);
      _fail(t);
    }
  else
    {
      ATerm l_202 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_202 = ATgetFirst((ATermList) t);
          c_202 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_202;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_202 = ATgetFirst((ATermList) t);
          e_202 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_202;
      t = g_0(t);
      t = d_202;
      t = h_0(t);
      l_202 = t;
      t = (ATerm) ATinsert(CheckATermList(e_202), l_202);
    }
  return(t);
}
ATerm f_16 (ATerm t)
{
  ATerm n_202 = NULL;
  n_202 = t;
  if(match_string(t, "-i"))
    {
      t = n_202;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = n_202;
    }
  return(t);
}
ATerm g_16 (ATerm t)
{
  ATerm o_202 = NULL,p_202 = NULL;
  o_202 = t;
  t = term_r_54;
  p_202 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_54, o_202);
  t = g_29(p_202, o_202, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, o_202);
  return(t);
}
ATerm h_16 (ATerm t)
{
  t = term_x_61;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_16, g_16, h_16, t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm r_202 = NULL,s_202 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_202 = ATgetFirst((ATermList) t);
      s_202 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_202 = NULL,x_202 = NULL;
        ATerm i_16 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(w_202)), not_null(x_202));
          return(t);
        }
        t = s_202;
        t = f_0(t);
        if(((w_202 != NULL) && (w_202 != t)))
          _fail(t);
        else
          w_202 = t;
        t = r_202;
        t = e_0(t);
        if(((x_202 != NULL) && (x_202 != t)))
          _fail(t);
        else
          x_202 = t;
        t = s_202;
        t = reverse_acc_2_0(e_0, i_16, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_c_61;
      t = f_0(t);
    }
  return(t);
}
ATerm q_16 (ATerm t)
{
  ATerm b_203 = NULL,c_203 = NULL,d_203 = NULL,b_12 = NULL;
  d_203 = t;
  if(match_cons(t, sym_Program_1))
    {
      c_203 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_203);
  b_203 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, c_203);
  b_12 = t;
  t = SSLsetAnnotations(b_12, b_203);
  return(t);
}
ATerm r_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm s_16 (ATerm t)
{
  ATerm f_203 = NULL;
  f_203 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_203), term_y_61);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm z_202 = NULL,a_203 = NULL;
  ATerm z_61 = t;
  int a_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_62;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(a_62);
    }
  else
    {
      t = z_61;
      t = fetch_1_0(q_16, t);
    }
  t = term_g_62;
  t = echo_0_0(t);
  t = term_n_61;
  z_202 = t;
  t = term_o_61;
  a_203 = t;
  t = term_h_62;
  t = d_29(z_202, a_203, t);
  t = reverse_acc_2_0(_id, r_16, t);
  t = map_1_0(s_16, t);
  return(t);
}
ATerm fetch_1_0 (ATerm s_114 (ATerm), ATerm t)
{
  ATerm c_204 (ATerm t)
  {
    ATerm z_203 = NULL,a_204 = NULL,b_204 = NULL;
    z_203 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_204 = ATgetFirst((ATermList) t);
        b_204 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm i_62 = t;
      int j_62 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_161 = NULL,y_161 = NULL,d_12 = NULL;
          t = SSLgetAnnotations(z_203);
          m_161 = t;
          t = a_204;
          t = s_114(t);
          y_161 = t;
          t = (ATerm) ATinsert(CheckATermList(b_204), y_161);
          d_12 = t;
          t = SSLsetAnnotations(d_12, m_161);
          ;
          LocalPopChoice(j_62);
        }
      else
        {
          t = i_62;
          {
            ATerm k_162 = NULL,p_162 = NULL,e_12 = NULL;
            t = SSLgetAnnotations(z_203);
            k_162 = t;
            t = b_204;
            t = c_204(t);
            p_162 = t;
            t = (ATerm) ATinsert(CheckATermList(p_162), a_204);
            e_12 = t;
            t = SSLsetAnnotations(e_12, k_162);
          }
        }
    }
    return(t);
  }
  t = c_204(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm g_204 = NULL,h_204 = NULL,i_204 = NULL;
  g_204 = t;
  {
    ATerm m_62 = t;
    int n_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = g_204;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm o_62 = ATgetFirst((ATermList) t);
                ATerm p_62 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = g_204;
          }
        ;
        LocalPopChoice(n_62);
      }
    else
      {
        t = m_62;
        t = (ATerm) ATinsert(ATempty, g_204);
      }
    h_204 = t;
    t = term_q_62;
    i_204 = t;
    t = SSL_printnl(i_204, h_204);
    t = g_204;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_b_62;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm c_29 (ATerm n_40, ATerm o_40, ATerm t)
{
  t = SSL_strcat(n_40, o_40);
  return(t);
}
ATerm debug_1_0 (ATerm d_127 (ATerm), ATerm t)
{
  ATerm m_204 = NULL,n_204 = NULL,o_204 = NULL,p_204 = NULL;
  m_204 = t;
  t = d_127(t);
  n_204 = t;
  t = term_i_22;
  o_204 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_204), n_204);
  p_204 = t;
  t = SSL_printnl(o_204, p_204);
  t = m_204;
  return(t);
}
ATerm map_1_0 (ATerm i_114 (ATerm), ATerm t)
{
  ATerm e_205 (ATerm t)
  {
    ATerm b_205 = NULL,c_205 = NULL,d_205 = NULL;
    b_205 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_205;
      }
    else
      {
        ATerm e_163 = NULL,p_163 = NULL,q_163 = NULL,h_12 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_205 = ATgetFirst((ATermList) t);
            d_205 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_205);
        e_163 = t;
        t = c_205;
        t = i_114(t);
        p_163 = t;
        t = d_205;
        t = e_205(t);
        q_163 = t;
        t = (ATerm) ATinsert(CheckATermList(q_163), p_163);
        h_12 = t;
        t = SSLsetAnnotations(h_12, e_163);
      }
    return(t);
  }
  t = e_205(t);
  return(t);
}
ATerm t_16 (ATerm t)
{
  ATerm r_62 = t;
  int s_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(s_62);
    }
  else
    {
      t = r_62;
    }
  return(t);
}
ATerm u_16 (ATerm t)
{
  t = term_t_62;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm u_62 = t;
  int v_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_205 = NULL;
      m_205 = t;
      t = SSL_is_string(m_205);
      ;
      LocalPopChoice(v_62);
    }
  else
    {
      t = u_62;
      {
        ATerm w_62 = t;
        int x_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(t_16, t);
            ;
            LocalPopChoice(x_62);
          }
        else
          {
            t = w_62;
            {
              ATerm s_205 = NULL,t_205 = NULL,u_205 = NULL;
              s_205 = t;
              if(match_cons(t, sym_Path_1))
                {
                  t_205 = ATgetArgument(t, 0);
                  t = t_205;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      t_205 = ATgetArgument(t, 0);
                      t = t_205;
                      {
                        ATerm y_62 = t;
                        int z_62 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(z_62);
                          }
                        else
                          {
                            t = y_62;
                            t = debug_1_0(u_16, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm y_205 = NULL,z_205 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          t_205 = ATgetArgument(t, 0);
                          u_205 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = t_205;
                      t = eval_config_0_0(t);
                      y_205 = t;
                      t = u_205;
                      t = eval_config_0_0(t);
                      z_205 = t;
                      t = (ATerm) ATmakeAppl(sym__2, y_205, z_205);
                      t = c_29(y_205, z_205, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm d_29 (ATerm d_57, ATerm e_57, ATerm t)
{
  t = SSL_table_get(d_57, e_57);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm d_206 = NULL,e_206 = NULL;
  d_206 = t;
  t = term_x_59;
  e_206 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_59, d_206);
  t = d_29(e_206, d_206, t);
  {
    ATerm a_63 = t;
    int b_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_206 = NULL,g_206 = NULL;
        t = eval_config_0_0(t);
        f_206 = t;
        t = term_x_59;
        g_206 = t;
        t = SSL_table_put(g_206, d_206, f_206);
        t = f_206;
        ;
        LocalPopChoice(b_63);
      }
    else
      {
        t = a_63;
      }
  }
  return(t);
}
ATerm v_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_16 (ATerm t)
{
  ATerm j_206 = NULL,k_206 = NULL;
  t = term_c_63;
  j_206 = t;
  t = term_c_61;
  k_206 = t;
  t = term_f_63;
  t = g_29(j_206, k_206, t);
  return(t);
}
ATerm x_16 (ATerm t)
{
  t = term_g_63;
  return(t);
}
ATerm y_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_17 (ATerm t)
{
  ATerm l_206 = NULL,m_206 = NULL,n_206 = NULL,o_206 = NULL;
  t = term_c_63;
  n_206 = t;
  t = term_c_61;
  o_206 = t;
  t = term_f_63;
  t = g_29(n_206, o_206, t);
  t = term_h_63;
  l_206 = t;
  t = term_c_61;
  m_206 = t;
  t = term_i_63;
  t = g_29(l_206, m_206, t);
  t = term_j_63;
  return(t);
}
ATerm b_17 (ATerm t)
{
  t = term_k_63;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm l_63 = t;
  int m_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_16, w_16, x_16, t);
      ;
      LocalPopChoice(m_63);
    }
  else
    {
      t = l_63;
      t = Option_3_0(y_16, a_17, b_17, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm b_93 (ATerm), ATerm c_93 (ATerm), ATerm t)
{
  ATerm p_206 = NULL,q_206 = NULL,r_206 = NULL,s_206 = NULL,t_206 = NULL,u_206 = NULL,j_12 = NULL;
  u_206 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_206 = ATgetFirst((ATermList) t);
      r_206 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_206);
  p_206 = t;
  t = q_206;
  t = b_93(t);
  s_206 = t;
  t = r_206;
  t = c_93(t);
  t_206 = t;
  t = (ATerm) ATinsert(CheckATermList(t_206), s_206);
  j_12 = t;
  t = SSLsetAnnotations(j_12, p_206);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm i_133 (ATerm), ATerm t)
{
  ATerm z_206 = NULL,a_207 = NULL,b_207 = NULL,c_207 = NULL,e_207 = NULL,f_207 = NULL,q_12 = NULL;
  z_206 = t;
  {
    ATerm n_63 = t;
    int o_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_p_63;
        t = i_133(t);
        ;
        LocalPopChoice(o_63);
      }
    else
      {
        t = n_63;
      }
    t = z_206;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_207 = ATgetFirst((ATermList) t);
        c_207 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(z_206);
    a_207 = t;
    t = term_b_62;
    f_207 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_b_62, b_207);
    t = g_29(f_207, b_207, t);
    t = c_207;
    {
      ATerm p_207 (ATerm t)
      {
        ATerm q_63 = t;
        int r_63 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_63 = t;
            int t_63 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_207 = NULL;
                i_207 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = i_207;
                ;
                LocalPopChoice(t_63);
              }
            else
              {
                t = s_63;
                t = i_133(t);
                t = Cons_2_0(_id, p_207, t);
              }
            ;
            LocalPopChoice(r_63);
          }
        else
          {
            t = q_63;
            {
              ATerm l_207 = NULL,m_207 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  l_207 = ATgetFirst((ATermList) t);
                  m_207 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(m_207), (ATerm) ATmakeAppl(sym_Undefined_1, l_207));
            }
          }
        return(t);
      }
      t = p_207(t);
      e_207 = t;
      t = (ATerm) ATinsert(CheckATermList(e_207), (ATerm) ATmakeAppl(sym_Program_1, b_207));
      q_12 = t;
      t = SSLsetAnnotations(q_12, a_207);
    }
  }
  return(t);
}
ATerm d_17 (ATerm t)
{
  ATerm b_208 = NULL;
  b_208 = t;
  if(match_string(t, "--help"))
    {
      t = b_208;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = b_208;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = b_208;
        }
    }
  return(t);
}
ATerm e_17 (ATerm t)
{
  ATerm c_208 = NULL,d_208 = NULL;
  t = term_u_63;
  c_208 = t;
  t = term_c_61;
  d_208 = t;
  t = term_w_63;
  t = g_29(c_208, d_208, t);
  t = term_x_63;
  return(t);
}
ATerm f_17 (ATerm t)
{
  t = term_a_64;
  return(t);
}
ATerm g_17 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm h_133 (ATerm), ATerm t)
{
  ATerm u_207 = NULL,v_207 = NULL,w_207 = NULL,x_207 = NULL,y_207 = NULL,z_207 = NULL,a_208 = NULL;
  w_207 = t;
  t = term_n_61;
  y_207 = t;
  t = term_o_61;
  z_207 = t;
  t = (ATerm) ATempty;
  a_208 = t;
  t = SSL_table_put(y_207, z_207, a_208);
  t = w_207;
  {
    ATerm c_17 (ATerm t)
    {
      ATerm b_64 = t;
      int c_64 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_133(t);
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
                t = Option_3_0(d_17, e_17, f_17, t);
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
    t = parse_options_p__1_0(c_17, t);
    {
      ATerm f_64 = t;
      int g_64 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_208 = NULL;
          k_208 = t;
          {
            ATerm h_64 = t;
            int i_64 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_165 = NULL;
                t = k_208;
                {
                  ATerm j_64 = t;
                  int k_64 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_u_63;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(k_64);
                    }
                  else
                    {
                      t = j_64;
                      t = fetch_1_0(g_17, t);
                    }
                  t = k_208;
                  t = default_system_usage_0_0(t);
                  t = term_a_22;
                  n_165 = t;
                  t = SSL_exit(n_165);
                }
                ;
                LocalPopChoice(i_64);
              }
            else
              {
                t = h_64;
                {
                  ATerm z_165 = NULL;
                  t = term_c_63;
                  t = get_config_0_0(t);
                  t = k_208;
                  t = default_system_about_0_0(t);
                  t = term_a_22;
                  z_165 = t;
                  t = SSL_exit(z_165);
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
                ATerm l_208 = NULL,m_208 = NULL,n_208 = NULL;
                ATerm h_17 (ATerm t)
                {
                  ATerm o_208 = NULL,p_208 = NULL,q_208 = NULL,s_12 = NULL;
                  q_208 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      p_208 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(q_208);
                  o_208 = t;
                  t = p_208;
                  if(((u_207 != NULL) && (u_207 != t)))
                    _fail(t);
                  else
                    u_207 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, p_208);
                  s_12 = t;
                  t = SSLsetAnnotations(s_12, o_208);
                  return(t);
                }
                t = fetch_1_0(h_17, t);
                t = term_i_22;
                m_208 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_207)), term_p_64);
                n_208 = t;
                t = SSL_printnl(m_208, n_208);
                t = (ATerm) ATmakeAppl(sym__2, term_i_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_207)), term_p_64));
                t = default_system_usage_0_0(t);
                t = term_c_22;
                l_208 = t;
                t = SSL_exit(l_208);
                ;
                LocalPopChoice(o_64);
              }
            else
              {
                t = n_64;
              }
          }
        }
      v_207 = t;
      t = term_n_61;
      x_207 = t;
      t = SSL_table_destroy(x_207);
      t = v_207;
    }
  }
  return(t);
}
ATerm m_17 (ATerm t)
{
  ATerm q_64 = t;
  int r_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_64 = t;
      int t_64 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = input_option_0_0(t);
          ;
          LocalPopChoice(t_64);
        }
      else
        {
          t = s_64;
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
                  ATerm z_64 = t;
                  int a_65 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Option_3_0(n_17, q_17, r_17, t);
                      ;
                      LocalPopChoice(a_65);
                    }
                  else
                    {
                      t = z_64;
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
      LocalPopChoice(r_64);
    }
  else
    {
      t = q_64;
      t = si_options_0_0(t);
    }
  return(t);
}
ATerm n_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_17 (ATerm t)
{
  ATerm y_208 = NULL,z_208 = NULL;
  t = term_f_65;
  y_208 = t;
  t = term_c_61;
  z_208 = t;
  t = term_g_65;
  t = g_29(y_208, z_208, t);
  t = term_h_65;
  return(t);
}
ATerm r_17 (ATerm t)
{
  t = term_i_65;
  return(t);
}
ATerm make_option_table_0_0 (ATerm t)
{
  ATerm v_208 = NULL,w_208 = NULL,x_208 = NULL;
  v_208 = t;
  t = term_p_54;
  w_208 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_j_65), term_p_54);
  x_208 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_54, (ATerm) ATinsert(ATinsert(ATempty, term_j_65), term_p_54));
  t = g_29(w_208, x_208, t);
  t = v_208;
  t = parse_options_1_0(m_17, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm c_115 (ATerm), ATerm t)
{
  ATerm n_209 (ATerm t)
  {
    ATerm k_65 = t;
    int l_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_115(t);
        ;
        LocalPopChoice(l_65);
      }
    else
      {
        t = k_65;
        {
          ATerm k_209 = NULL,l_209 = NULL,m_209 = NULL,u_166 = NULL,c_167 = NULL,u_12 = NULL;
          k_209 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              l_209 = ATgetFirst((ATermList) t);
              m_209 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(k_209);
          u_166 = t;
          t = m_209;
          t = n_209(t);
          c_167 = t;
          t = (ATerm) ATinsert(CheckATermList(c_167), l_209);
          u_12 = t;
          t = SSLsetAnnotations(u_12, u_166);
        }
      }
    return(t);
  }
  t = n_209(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm v_114 (ATerm), ATerm t)
{
  ATerm p_209 = NULL,q_209 = NULL;
  ATerm s_17 (ATerm t)
  {
    ATerm r_209 = NULL,s_209 = NULL,t_209 = NULL,u_209 = NULL,v_209 = NULL,w_209 = NULL,x_209 = NULL,y_209 = NULL,z_209 = NULL,c_13 = NULL,b_13 = NULL;
    z_209 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_209 = ATgetFirst((ATermList) t);
        w_209 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(z_209);
    u_209 = t;
    t = v_209;
    t = v_114(t);
    x_209 = t;
    t = (ATerm) ATinsert(CheckATermList(w_209), x_209);
    b_13 = t;
    t = SSLsetAnnotations(b_13, u_209);
    y_209 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_209 = ATgetFirst((ATermList) t);
        t_209 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(y_209);
    r_209 = t;
    t = t_209;
    if(((p_209 != NULL) && (p_209 != t)))
      _fail(t);
    else
      p_209 = t;
    t = (ATerm) ATinsert(CheckATermList(t_209), s_209);
    c_13 = t;
    t = SSLsetAnnotations(c_13, r_209);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(s_17, t);
  q_209 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_209, not_null(p_209));
  return(t);
}
ATerm t_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--args", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm process_options_0_0 (ATerm t)
{
  ATerm a_210 = NULL,b_210 = NULL,c_210 = NULL,d_210 = NULL,e_210 = NULL,j_167 = NULL,k_167 = NULL,f_13 = NULL;
  ATerm m_65 = t;
  int n_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(t_17, t);
      ;
      LocalPopChoice(n_65);
    }
  else
    {
      t = m_65;
      {
        ATerm f_210 = NULL;
        f_210 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_210, (ATerm) ATempty);
      }
    }
  e_210 = t;
  if(match_cons(t, sym__2))
    {
      b_210 = ATgetArgument(t, 0);
      c_210 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_210);
  a_210 = t;
  t = b_210;
  t = make_option_table_0_0(t);
  d_210 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_210, c_210);
  f_13 = t;
  t = SSLsetAnnotations(f_13, a_210);
  k_167 = t;
  t = SSL_explode_term(k_167);
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
                j_167 = ATgetFirst((ATermList) t_65);
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
  t = j_167;
  return(t);
}
ATerm create_runtime_environment_0_0 (ATerm t)
{
  ATerm h_210 = NULL,i_210 = NULL,j_210 = NULL,k_210 = NULL;
  h_210 = t;
  t = term_z_16;
  k_210 = t;
  t = SSL_table_create(k_210);
  t = term_u_17;
  j_210 = t;
  t = SSL_table_create(j_210);
  t = term_v_17;
  i_210 = t;
  t = SSL_table_create(i_210);
  t = h_210;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm l_210 = NULL,m_210 = NULL,n_210 = NULL;
  t = create_runtime_environment_0_0(t);
  t = process_options_0_0(t);
  t = if_verbose1_1_0(copyright_0_0, t);
  n_210 = t;
  t = term_v_65;
  t = ReadFromFile_0_0(t);
  m_210 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_210, n_210);
  t = evaluate_commands_0_0(t);
  t = destroy_runtime_environment_0_0(t);
  t = term_a_22;
  l_210 = t;
  t = SSL_exit(l_210);
  return(t);
}
